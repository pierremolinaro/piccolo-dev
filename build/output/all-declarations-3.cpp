#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FD_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FD_base_code") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FD_5F_base_5F_code) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                           const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inAttribute_mInstruction_5F_FD_5F_base_5F_code,
                                                                                                                           const GALGAS_midrange_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                           const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FD_5F_base_5F_code.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FD_5F_base_5F_code, inAttribute_mRegisterDescription, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::setter_setMInstruction_5F_FD_5F_base_5F_code (GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code inValue
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction_5F_FD_5F_base_5F_code = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                                                        const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (in_mInstruction_5F_FD_5F_base_5F_code),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_FD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_FD generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ("midrange_intermediate_instruction_FD",
                                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ((cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_FD-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak ("midrange_intermediate_instruction_FD-weak",
                                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FD-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFinstruction.printNonNullClassInstanceProperties ("mFinstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFinstruction.objectCompare (p->mProperty_mFinstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                         const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mFinstruction,
                                                                                                                         const GALGAS_midrange_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFinstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mFinstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::setter_setMFinstruction (GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
    p->mProperty_mFinstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::readProperty_mFinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mFinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_F::cPtr_midrange_5F_intermediate_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                                                      const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                                                                                                      const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFinstruction (in_mFinstruction),
mProperty_mRegisterDescription (in_mRegisterDescription) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFinstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFinstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_F generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ("midrange_intermediate_instruction_F",
                                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_F result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ((cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_F-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak ("midrange_intermediate_instruction_F-weak",
                                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_F-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                           const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                                                           const GALGAS_midrange_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                           const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::setter_setMBitOrientedOp (GALGAS_midrange_5F_bit_5F_oriented_5F_op inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::setter_setMBitNumber (GALGAS_uint inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                                        const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_uint & in_mBitNumber
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBitOrientedOp (in_mBitOrientedOp),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_FB:") ;
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_FB generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ("midrange_intermediate_instruction_FB",
                                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ((cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_FB-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak ("midrange_intermediate_instruction_FB-weak",
                                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FB-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                             const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                                             const GALGAS_midrange_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                             const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (inAttribute_mInstructionLocation, inAttribute_mSkipIfSet, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::setter_setMBitNumber (GALGAS_uint inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                          const GALGAS_bool & in_mSkipIfSet,
                                                                                                                          const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                          const GALGAS_uint & in_mBitNumber
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_BitTestSkip:") ;
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_BitTestSkip generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ("midrange_intermediate_instruction_BitTestSkip",
                                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_BitTestSkip-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak ("midrange_intermediate_instruction_BitTestSkip-weak",
                                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_BitTestSkip-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit::GALGAS_midrange_5F_call_5F_goto_5F_bit (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_set (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  result.mEnum = kEnum_set ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  result.mEnum = kEnum_clear ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  result.mEnum = kEnum_noChange ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_call_5F_goto_5F_bit::optional_set () const {
  const bool ok = mEnum == kEnum_set ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_call_5F_goto_5F_bit::optional_clear () const {
  const bool ok = mEnum == kEnum_clear ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_call_5F_goto_5F_bit::optional_noChange () const {
  const bool ok = mEnum == kEnum_noChange ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_midrange_5F_call_5F_goto_5F_bit [4] = {
  "(not built)",
  "set",
  "clear",
  "noChange"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_call_5F_goto_5F_bit::getter_isSet (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_set == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_call_5F_goto_5F_bit::getter_isClear (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_clear == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_call_5F_goto_5F_bit::getter_isNoChange (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noChange == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_call_5F_goto_5F_bit::description (String & ioString,
                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_call_goto_bit: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_call_5F_goto_5F_bit [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_call_5F_goto_5F_bit::objectCompare (const GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand) const {
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
//     @midrange_call_goto_bit generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ("midrange_call_goto_bit",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_call_5F_goto_5F_bit::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_call_5F_goto_5F_bit::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_call_5F_goto_5F_bit (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_call_5F_goto_5F_bit::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  const GALGAS_midrange_5F_call_5F_goto_5F_bit * p = (const GALGAS_midrange_5F_call_5F_goto_5F_bit *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_call_5F_goto_5F_bit *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_call_goto_bit", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak & GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (const GALGAS_midrange_5F_intermediate_5F_JUMP & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::bang_midrange_5F_intermediate_5F_JUMP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
      result = GALGAS_midrange_5F_intermediate_5F_JUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_JUMP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak ("midrange_intermediate_JUMP-weak",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak & GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (const GALGAS_midrange_5F_intermediate_5F_GOTO & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::bang_midrange_5F_intermediate_5F_GOTO_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_GOTO) ;
      result = GALGAS_midrange_5F_intermediate_5F_GOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_GOTO-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak ("midrange_intermediate_GOTO-weak",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak & GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (const GALGAS_midrange_5F_intermediate_5F_CALL & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::bang_midrange_5F_intermediate_5F_CALL_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_CALL) ;
      result = GALGAS_midrange_5F_intermediate_5F_CALL ((cPtr_midrange_5F_intermediate_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_CALL-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak ("midrange_intermediate_CALL-weak",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak & GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (const GALGAS_midrange_5F_intermediate_5F_JSR & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::bang_midrange_5F_intermediate_5F_JSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_JSR) ;
      result = GALGAS_midrange_5F_intermediate_5F_JSR ((cPtr_midrange_5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_JSR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak ("midrange_intermediate_JSR-weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_CLRWDT reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_CLRWDT class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const GALGAS_location & in_mInstructionLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_CLRWDT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_CLRWDT generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ("midrange_intermediate_instruction_CLRWDT",
                                                                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRWDT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ((cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_CLRWDT-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak ("midrange_intermediate_instruction_CLRWDT-weak",
                                                                                                                 & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRWDT-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_CLRW reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_CLRW class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (const GALGAS_location & in_mInstructionLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_CLRW:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_CLRW generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ("midrange_intermediate_instruction_CLRW",
                                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRW", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ((cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_CLRW-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak ("midrange_intermediate_instruction_CLRW-weak",
                                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRW-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_NOP reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_NOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (const GALGAS_location & in_mInstructionLocation
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_NOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_NOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ("midrange_intermediate_instruction_NOP",
                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_NOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ((cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_NOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak ("midrange_intermediate_instruction_NOP-weak",
                                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_NOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_RETURN reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_RETURN class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (const GALGAS_location & in_mInstructionLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_RETURN:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_RETURN generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ("midrange_intermediate_instruction_RETURN",
                                                                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETURN", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ((cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_RETURN-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak ("midrange_intermediate_instruction_RETURN-weak",
                                                                                                                 & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETURN-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_RETFIE reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_RETFIE class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const GALGAS_location & in_mInstructionLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_RETFIE:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_RETFIE generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ("midrange_intermediate_instruction_RETFIE",
                                                                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETFIE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ((cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_RETFIE-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak ("midrange_intermediate_instruction_RETFIE-weak",
                                                                                                                 & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETFIE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_SLEEP reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_SLEEP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const GALGAS_location & in_mInstructionLocation
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_SLEEP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_SLEEP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ("midrange_intermediate_instruction_SLEEP",
                                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_SLEEP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ((cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_SLEEP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak ("midrange_intermediate_instruction_SLEEP-weak",
                                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_SLEEP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLiteralInstruction.objectCompare (p->mProperty_mLiteralInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLiteralValue.objectCompare (p->mProperty_mLiteralValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                       const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inAttribute_mLiteralInstruction,
                                                                                                                                                       const GALGAS_uint & inAttribute_mLiteralValue
                                                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralInstruction.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mLiteralInstruction, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::setter_setMLiteralInstruction (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode inValue
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::setter_setMLiteralValue (GALGAS_uint inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                    const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                                    const GALGAS_uint & in_mLiteralValue
                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralInstruction (in_mLiteralInstruction),
mProperty_mLiteralValue (in_mLiteralValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_literalOperation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ("midrange_intermediate_instruction_literalOperation",
                                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_literalOperation-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak ("midrange_intermediate_instruction_literalOperation-weak",
                                                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_literalOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOccurrenceFactor.objectCompare (p->mProperty_mOccurrenceFactor) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                               const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::setter_setMOccurrenceFactor (GALGAS_luint inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                                                            const GALGAS_luint & in_mOccurrenceFactor
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_MNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ("midrange_intermediate_instruction_MNOP",
                                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::bang_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ((cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction_MNOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak ("midrange_intermediate_instruction_MNOP-weak",
                                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_MNOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::objectCompare (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                           const GALGAS_midrange_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                           const GALGAS_string & inAttribute_mTargetLabel,
                                                                                                                                           const GALGAS_bool & inAttribute_mIncrement,
                                                                                                                                           const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                                                           const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (inAttribute_mInstructionLocation, inAttribute_mRegisterDescription, inAttribute_mTargetLabel, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::setter_setMRegisterDescription (GALGAS_midrange_5F_intermediate_5F_registerExpression inValue
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::setter_setMTargetLabel (GALGAS_string inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::setter_setMIncrement (GALGAS_bool inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                                                                        const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                        const GALGAS_string & in_mTargetLabel,
                                                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;
}

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_incDecRegisterInCondition:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mTargetLabel, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_incDecRegisterInCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ("midrange_intermediate_incDecRegisterInCondition",
                                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition result ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak & GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::bang_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
      result = GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_incDecRegisterInCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak ("midrange_intermediate_incDecRegisterInCondition-weak",
                                                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_incDecRegisterInCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (cPtr_midrange_5F_instruction * inObject,
                                          GALGAS_stringset & io_ioUsedRoutines,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction) ;
    inObject->method_addUsedRoutines (io_ioUsedRoutines, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@midrange_intermediate_instruction instructionLength'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint callExtensionGetter_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_instructionLength (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                GALGAS_string & io_ioListFileContents,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_print (io_ioListFileContents, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_setCurrentAddress (GALGAS_uint & ioArgument_ioCurrentAddress,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction temp_0 = this ;
  ioArgument_ioCurrentAddress = ioArgument_ioCurrentAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_set_current_address.galgas", 6)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_set_current_address.galgas", 6)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            GALGAS_uint & io_ioCurrentAddress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_setCurrentAddress  (io_ioCurrentAddress, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction::method_instructionUsesGOTOorCALL (GALGAS_bool & /* ioArgument_ioUsesGOTOorCALL */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionUsesGOTOorCALL (cPtr_midrange_5F_instruction * inObject,
                                                    GALGAS_bool & io_ioUsesGOTOorCALL,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction) ;
    inObject->method_instructionUsesGOTOorCALL  (io_ioUsesGOTOorCALL, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_instruction build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (cPtr_midrange_5F_instruction * inObject,
                                                                       const GALGAS_routineMap constin_inRoutineMap,
                                                                       const GALGAS_registerTable constin_inRegisterTable,
                                                                       const GALGAS_constantMap constin_inConstantMap,
                                                                       GALGAS_uint & io_ioLocalLabelIndex,
                                                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                       GALGAS_string & io_ioListFileContents,
                                                                       const GALGAS_uint constin_inTotalBankCount,
                                                                       GALGAS_uint & io_ioCurrentBank,
                                                                       const GALGAS_bool constin_inShouldPreserveBank,
                                                                       GALGAS_bool & io_ioContinuesInSequence,
                                                                       const GALGAS_routineKind constin_inRoutineKind,
                                                                       GALGAS_stringset & io_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction) ;
    inObject->method_build_5F_midrange_5F_ipic_5F_instructionList (constin_inRoutineMap, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioListFileContents, constin_inTotalBankCount, io_ioCurrentBank, constin_inShouldPreserveBank, io_ioContinuesInSequence, constin_inRoutineKind, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression buildIPICinstructionForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildIPICinstructionForCondition (cPtr_midrange_5F_conditionExpression * inObject,
                                                           const GALGAS_uint constin_inTotalBankCount,
                                                           const GALGAS_uint constin_inCurrentBank,
                                                           const GALGAS_registerTable constin_inRegisterTable,
                                                           const GALGAS_constantMap constin_inConstantMap,
                                                           GALGAS_uint & io_ioLocalLabelIndex,
                                                           const GALGAS_bool constin_inComplementaryBranch,
                                                           const GALGAS_location constin_inInstructionLocation,
                                                           const GALGAS_string constin_inTargetLabel,
                                                           GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                           GALGAS_string & io_ioListFileContents,
                                                           GALGAS_stringset & io_ioUsedRegisters,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_conditionExpression) ;
    inObject->method_buildIPICinstructionForCondition (constin_inTotalBankCount, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, constin_inComplementaryBranch, constin_inInstructionLocation, constin_inTargetLabel, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_computeInstructionCountForCondition (cPtr_midrange_5F_conditionExpression * inObject,
                                                              const GALGAS_bool constin_inComplementaryBranch,
                                                              GALGAS_uint & out_outInstructionCount,
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
//Extension getter '@midrange_intermediate_instruction isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction::getter_isLABELorORG (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (false) ;
//---
  return result_outIsLABELorORG ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
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

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction::getter_isNULL (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (false) ;
//---
  return result_outIsNULL ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isNULL (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_enterReferencedLabel (GALGAS_stringset & /* ioArgument_ioReferencedLabelSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               GALGAS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_enterReferencedLabel  (io_ioReferencedLabelSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (false) ;
//---
  return result_outIsSkipping ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
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

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (true) ;
//---
  return result_outIsReachable ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_nextInstructionIsReachable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_defineLabel (GALGAS_symbolTableForOptimizations & /* ioArgument_ioRoutineSymbolTable */,
                                                                       const GALGAS_uint /* constinArgument_inLineIndex */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                      GALGAS_symbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_defineLabel  (io_ioRoutineSymbolTable, constin_inLineIndex, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_literalOperation optimizeMOVLW'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_optimizeMOVLW (const GALGAS_uint constinArgument_inLineIndex,
                                                                                             GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                             GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("midrange_optimizations.galgas", 375)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction_17085 ;
      {
      routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 377)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_17085, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 377)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__17164 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_17085.ptr ())) ;
        if (nullptr == var__17164.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          {
          const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_3 = this ;
          const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_4 = this ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (temp_3.readProperty_mInstructionLocation (), GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 383)), temp_4.readProperty_mLiteralValue ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 383)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 382)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 387)).add_operation (GALGAS_string (": MOVLW followed by RETURN replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 387)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeMOVLW (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                        const GALGAS_uint constin_inLineIndex,
                                        GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                        GALGAS_string & io_ioListFileContents,
                                        GALGAS_bool & io_ioOptimizationsDone,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    inObject->method_optimizeMOVLW  (constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_optimizeTestDecInc (const GALGAS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                                            const GALGAS_uint constinArgument_inLineIndex,
                                                                                            GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                            GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_line_18303 ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  GALGAS_bool joker_18308 ; // Joker input parameter
  constinArgument_inSymbolTable.method_searchKey (GALGAS_lstring::class_func_new (temp_0.readProperty_mTargetLabel (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 403)), var_line_18303, joker_18308, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 403)) ;
  GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction_18438 ;
  {
  routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_18303.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 405)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_18438, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 405)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_midrange_5F_intermediate_5F_JUMP var_jump_18539 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_18438.ptr ())) ;
    if (nullptr == var_jump_18539.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      {
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::class_func_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mRegisterDescription (), var_jump_18539.readProperty_mTargetLabel ().readProperty_string (), temp_4.readProperty_mIncrement (), temp_5.readProperty_m_5F_W_5F_isDestination (), temp_6.readProperty_mBranchIfZero ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 412)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 411)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 422)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 422)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 423)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
        test_7 = temp_8.readProperty_mIncrement ().boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 425)) ;
        }
      }
      if (kBoolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 427)) ;
      }
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
      ioArgument_ioListFileContents.plusAssign_operation(temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 429)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_10) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 431)) ;
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_13 = this ;
        test_12 = temp_13.readProperty_mBranchIfZero ().boolEnum () ;
        if (kBoolTrue == test_12) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 434)) ;
        }
      }
      if (kBoolFalse == test_12) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 436)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": branching to JUMP replaced by second JUMP label\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 438)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      GALGAS_midrange_5F_intermediate_5F_GOTO var_goto_19613 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_firstInstruction_18438.ptr ())) ;
      if (nullptr == var_goto_19613.ptr ()) {
        test_14 = kBoolFalse ;
      }
      if (kBoolTrue == test_14) {
        {
        const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_15 = this ;
        const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_16 = this ;
        const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_17 = this ;
        const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_18 = this ;
        const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_19 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::class_func_new (temp_15.readProperty_mInstructionLocation (), temp_16.readProperty_mRegisterDescription (), var_goto_19613.readProperty_mTargetLabel ().readProperty_string (), temp_17.readProperty_mIncrement (), temp_18.readProperty_m_5F_W_5F_isDestination (), temp_19.readProperty_mBranchIfZero ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 442)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 441)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 452)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 452)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 453)) ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_21 = this ;
          test_20 = temp_21.readProperty_mIncrement ().boolEnum () ;
          if (kBoolTrue == test_20) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 455)) ;
          }
        }
        if (kBoolFalse == test_20) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 457)) ;
        }
        const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_22 = this ;
        ioArgument_ioListFileContents.plusAssign_operation(temp_22.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 459)) ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_24 = this ;
          test_23 = temp_24.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
          if (kBoolTrue == test_23) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 461)) ;
          }
        }
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_26 = this ;
          test_25 = temp_26.readProperty_mBranchIfZero ().boolEnum () ;
          if (kBoolTrue == test_25) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 464)) ;
          }
        }
        if (kBoolFalse == test_25) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 466)) ;
        }
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": branching to GOTO replaced by second JUMP label\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 468)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                             const GALGAS_uint constin_inLineIndex,
                                             GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_bool & io_ioOptimizationsDone,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    inObject->method_optimizeTestDecInc  (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_BitTestSkip optimizeBitTestSkip'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_optimizeBitTestSkip (const GALGAS_uint constinArgument_inLineIndex,
                                                                                              GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                              GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_jumpLabel_21031 = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_ok_21068 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_midrange_5F_intermediate_5F_JUMP var_jump_21088 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 484)).ptr ())) ;
    if (nullptr == var_jump_21088.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      var_jumpLabel_21031 = var_jump_21088.readProperty_mTargetLabel ().readProperty_string () ;
      var_ok_21068 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_21068.boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction_21449 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 493)).ptr ())) ;
        if (nullptr == var_instruction_21449.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          var_ok_21068 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) var_instruction_21449.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 496)).objectCompare (GALGAS_uint (uint32_t (1U)))) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_ok_21068 = GALGAS_bool (false) ;
      }
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_ok_21068.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_stringset var_reachedLabelSet_22061 ;
      {
      GALGAS_midrange_5F_intermediate_5F_instruction joker_22053 ; // Joker input parameter
      routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 504)), ioArgument_ioGeneratedInstructionList, joker_22053, var_reachedLabelSet_22061, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 504)) ;
      }
      var_ok_21068 = var_reachedLabelSet_22061.getter_hasKey (var_jumpLabel_21031 COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 505)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_ok_21068.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_5 = this ;
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_6 = this ;
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_7 = this ;
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_8 = this ;
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::class_func_new (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mSkipIfSet ().operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 513)), temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 511)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 510)) ;
      }
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("midrange_optimizations.galgas", 520)), constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 519)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  lines ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 526)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 526)).add_operation (constinArgument_inLineIndex.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 526)).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 526)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" bit test skip, following by a JUMP skipping next instruction, is complemented\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 527)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBitTestSkip (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                              const GALGAS_uint constin_inLineIndex,
                                              GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                              GALGAS_string & io_ioListFileContents,
                                              GALGAS_bool & io_ioOptimizationsDone,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    inObject->method_optimizeBitTestSkip  (constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_midrange_5F_symbolTableForConvertingRelatives::cMapElement_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_lstring & inKey,
                                                                                                                      const GALGAS_uint & in_mRoutineAddress
                                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineAddress (in_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_midrange_5F_symbolTableForConvertingRelatives::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_midrange_5F_symbolTableForConvertingRelatives::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_midrange_5F_symbolTableForConvertingRelatives (mProperty_lkey, mProperty_mRoutineAddress COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_midrange_5F_symbolTableForConvertingRelatives::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineAddress" ":") ;
  mProperty_mRoutineAddress.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_midrange_5F_symbolTableForConvertingRelatives::compare (const cCollectionElement * inOperand) const {
  cMapElement_midrange_5F_symbolTableForConvertingRelatives * operand = (cMapElement_midrange_5F_symbolTableForConvertingRelatives *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineAddress.objectCompare (operand->mProperty_mRoutineAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives::GALGAS_midrange_5F_symbolTableForConvertingRelatives (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives::GALGAS_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives & GALGAS_midrange_5F_symbolTableForConvertingRelatives::operator = (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives GALGAS_midrange_5F_symbolTableForConvertingRelatives::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives GALGAS_midrange_5F_symbolTableForConvertingRelatives::class_func_mapWithMapToOverride (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inMapToOverride
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives GALGAS_midrange_5F_symbolTableForConvertingRelatives::getter_overriddenMap (Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTableForConvertingRelatives::addAssign_operation (const GALGAS_lstring & inKey,
                                                                                const GALGAS_uint & inArgument0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_midrange_5F_symbolTableForConvertingRelatives * p = nullptr ;
  macroMyNew (p, cMapElement_midrange_5F_symbolTableForConvertingRelatives (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@midrange_5F_symbolTableForConvertingRelatives insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives GALGAS_midrange_5F_symbolTableForConvertingRelatives::add_operation (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inOperand,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives result = *this ;
  cEnumerator_midrange_5F_symbolTableForConvertingRelatives enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRoutineAddress (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTableForConvertingRelatives::setter_insertKey (GALGAS_lstring inKey,
                                                                             GALGAS_uint inArgument0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_midrange_5F_symbolTableForConvertingRelatives * p = nullptr ;
  macroMyNew (p, cMapElement_midrange_5F_symbolTableForConvertingRelatives (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_midrange_5F_symbolTableForConvertingRelatives_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTableForConvertingRelatives::method_searchKey (GALGAS_lstring inKey,
                                                                             GALGAS_uint & outArgument0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_midrange_5F_symbolTableForConvertingRelatives * p = (const cMapElement_midrange_5F_symbolTableForConvertingRelatives *) performSearch (inKey,
                                                                                                                                                           inCompiler,
                                                                                                                                                           kSearchErrorMessage_midrange_5F_symbolTableForConvertingRelatives_searchKey
                                                                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_midrange_5F_symbolTableForConvertingRelatives) ;
    outArgument0 = p->mProperty_mRoutineAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_midrange_5F_symbolTableForConvertingRelatives::getter_mRoutineAddressForKey (const GALGAS_string & inKey,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_midrange_5F_symbolTableForConvertingRelatives * p = (const cMapElement_midrange_5F_symbolTableForConvertingRelatives *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_midrange_5F_symbolTableForConvertingRelatives) ;
    result = p->mProperty_mRoutineAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTableForConvertingRelatives::setter_setMRoutineAddressForKey (GALGAS_uint inAttributeValue,
                                                                                            GALGAS_string inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_midrange_5F_symbolTableForConvertingRelatives * p = (cMapElement_midrange_5F_symbolTableForConvertingRelatives *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_midrange_5F_symbolTableForConvertingRelatives) ;
    p->mProperty_mRoutineAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_midrange_5F_symbolTableForConvertingRelatives * GALGAS_midrange_5F_symbolTableForConvertingRelatives::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_midrange_5F_symbolTableForConvertingRelatives * result = (cMapElement_midrange_5F_symbolTableForConvertingRelatives *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_midrange_5F_symbolTableForConvertingRelatives) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_midrange_5F_symbolTableForConvertingRelatives::cEnumerator_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inEnumeratedObject,
                                                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element cEnumerator_midrange_5F_symbolTableForConvertingRelatives::current (LOCATION_ARGS) const {
  const cMapElement_midrange_5F_symbolTableForConvertingRelatives * p = (const cMapElement_midrange_5F_symbolTableForConvertingRelatives *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_midrange_5F_symbolTableForConvertingRelatives) ;
  return GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (p->mProperty_lkey, p->mProperty_mRoutineAddress) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_midrange_5F_symbolTableForConvertingRelatives::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_midrange_5F_symbolTableForConvertingRelatives::current_mRoutineAddress (LOCATION_ARGS) const {
  const cMapElement_midrange_5F_symbolTableForConvertingRelatives * p = (const cMapElement_midrange_5F_symbolTableForConvertingRelatives *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_midrange_5F_symbolTableForConvertingRelatives) ;
  return p->mProperty_mRoutineAddress ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_symbolTableForConvertingRelatives::optional_searchKey (const GALGAS_string & inKey,
                                                                               GALGAS_uint & outArgument0) const {
  const cMapElement_midrange_5F_symbolTableForConvertingRelatives * p = (const cMapElement_midrange_5F_symbolTableForConvertingRelatives *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_midrange_5F_symbolTableForConvertingRelatives) ;
    outArgument0 = p->mProperty_mRoutineAddress ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_symbolTableForConvertingRelatives generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives ("midrange_symbolTableForConvertingRelatives",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTableForConvertingRelatives::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_symbolTableForConvertingRelatives::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTableForConvertingRelatives (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives GALGAS_midrange_5F_symbolTableForConvertingRelatives::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives result ;
  const GALGAS_midrange_5F_symbolTableForConvertingRelatives * p = (const GALGAS_midrange_5F_symbolTableForConvertingRelatives *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_symbolTableForConvertingRelatives *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTableForConvertingRelatives", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_defineLabelAtAddress (GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabelAtAddress (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               GALGAS_midrange_5F_symbolTableForConvertingRelatives & io_ioRoutineSymbolTable,
                                               GALGAS_uint & io_ioAddress,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_defineLabelAtAddress  (io_ioRoutineSymbolTable, io_ioAddress, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction compute'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_compute (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                  const GALGAS_midrange_5F_symbolTableForConvertingRelatives constin_inRoutineSymbolTable,
                                  GALGAS_uint & io_ioAddress,
                                  GALGAS_bool & io_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                  GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                  const GALGAS_uint constin_inIndex,
                                  GALGAS_string & io_ioListFileContents,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_compute (constin_inRoutineSymbolTable, io_ioAddress, io_ioJUMP_5F_or_5F_JSR_5F_fixed, io_ioGeneratedInstructionList, constin_inIndex, io_ioListFileContents, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildAssemblyCode (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            GALGAS_string & io_ioString,
                                            GALGAS_uint & io_ioLocalLabelIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_buildAssemblyCode (io_ioString, io_ioLocalLabelIndex, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_midrange_5F_symbolTable::cMapElement_midrange_5F_symbolTable (const GALGAS_lstring & inKey,
                                                                          const GALGAS_uint & in_mRoutineAddress
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineAddress (in_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_midrange_5F_symbolTable::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_midrange_5F_symbolTable::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_midrange_5F_symbolTable (mProperty_lkey, mProperty_mRoutineAddress COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_midrange_5F_symbolTable::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineAddress" ":") ;
  mProperty_mRoutineAddress.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_midrange_5F_symbolTable::compare (const cCollectionElement * inOperand) const {
  cMapElement_midrange_5F_symbolTable * operand = (cMapElement_midrange_5F_symbolTable *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineAddress.objectCompare (operand->mProperty_mRoutineAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable::GALGAS_midrange_5F_symbolTable (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable::GALGAS_midrange_5F_symbolTable (const GALGAS_midrange_5F_symbolTable & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable & GALGAS_midrange_5F_symbolTable::operator = (const GALGAS_midrange_5F_symbolTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable GALGAS_midrange_5F_symbolTable::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable GALGAS_midrange_5F_symbolTable::class_func_mapWithMapToOverride (const GALGAS_midrange_5F_symbolTable & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable GALGAS_midrange_5F_symbolTable::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_symbolTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTable::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_midrange_5F_symbolTable * p = nullptr ;
  macroMyNew (p, cMapElement_midrange_5F_symbolTable (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@midrange_5F_symbolTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable GALGAS_midrange_5F_symbolTable::add_operation (const GALGAS_midrange_5F_symbolTable & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_symbolTable result = *this ;
  cEnumerator_midrange_5F_symbolTable enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRoutineAddress (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTable::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_uint inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_midrange_5F_symbolTable * p = nullptr ;
  macroMyNew (p, cMapElement_midrange_5F_symbolTable (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_midrange_5F_symbolTable_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTable::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_uint & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_midrange_5F_symbolTable * p = (const cMapElement_midrange_5F_symbolTable *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_midrange_5F_symbolTable_searchKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_midrange_5F_symbolTable) ;
    outArgument0 = p->mProperty_mRoutineAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_midrange_5F_symbolTable::getter_mRoutineAddressForKey (const GALGAS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_midrange_5F_symbolTable * p = (const cMapElement_midrange_5F_symbolTable *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_midrange_5F_symbolTable) ;
    result = p->mProperty_mRoutineAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTable::setter_setMRoutineAddressForKey (GALGAS_uint inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_midrange_5F_symbolTable * p = (cMapElement_midrange_5F_symbolTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_midrange_5F_symbolTable) ;
    p->mProperty_mRoutineAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_midrange_5F_symbolTable * GALGAS_midrange_5F_symbolTable::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_midrange_5F_symbolTable * result = (cMapElement_midrange_5F_symbolTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_midrange_5F_symbolTable) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_midrange_5F_symbolTable::cEnumerator_midrange_5F_symbolTable (const GALGAS_midrange_5F_symbolTable & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element cEnumerator_midrange_5F_symbolTable::current (LOCATION_ARGS) const {
  const cMapElement_midrange_5F_symbolTable * p = (const cMapElement_midrange_5F_symbolTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_midrange_5F_symbolTable) ;
  return GALGAS_midrange_5F_symbolTable_2D_element (p->mProperty_lkey, p->mProperty_mRoutineAddress) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_midrange_5F_symbolTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_midrange_5F_symbolTable::current_mRoutineAddress (LOCATION_ARGS) const {
  const cMapElement_midrange_5F_symbolTable * p = (const cMapElement_midrange_5F_symbolTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_midrange_5F_symbolTable) ;
  return p->mProperty_mRoutineAddress ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_symbolTable::optional_searchKey (const GALGAS_string & inKey,
                                                         GALGAS_uint & outArgument0) const {
  const cMapElement_midrange_5F_symbolTable * p = (const cMapElement_midrange_5F_symbolTable *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_midrange_5F_symbolTable) ;
    outArgument0 = p->mProperty_mRoutineAddress ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_symbolTable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable ("midrange_symbolTable",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_symbolTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable GALGAS_midrange_5F_symbolTable::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable result ;
  const GALGAS_midrange_5F_symbolTable * p = (const GALGAS_midrange_5F_symbolTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_symbolTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_enterLabelAtAddress (GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                               GALGAS_uint & /* ioArgument_ioAddress */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                              GALGAS_uint & io_ioAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_enterLabelAtAddress  (io_ioRoutineSymbolTable, io_ioAddress, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      const GALGAS_registerTable constin_inRegisterTable,
                                                      const GALGAS_constantMap constin_inConstantMap,
                                                      const GALGAS_uint constin_inTotalBankCount,
                                                      const GALGAS_midrange_5F_symbolTable constin_inRoutineSymbolTable,
                                                      GALGAS_string & io_ioListFileContents,
                                                      GALGAS_uint & io_ioAddress,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_generateBinaryCodeAtAddress (constin_inRegisterTable, constin_inConstantMap, constin_inTotalBankCount, constin_inRoutineSymbolTable, io_ioListFileContents, io_ioAddress, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@midrange_instruction_FD_base_code basecode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint extensionGetter_basecode (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (1792U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (1280U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (2304U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (768U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (2816U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (2560U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (3840U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (3072U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (512U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (1536U)) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@midrange_F_instruction_base_code baseCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint extensionGetter_baseCode (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (384U)) ;
    }
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (128U)) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@midrange_bit_oriented_op baseCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint extensionGetter_baseCode (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (4096U)) ;
    }
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (5120U)) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@midrange_literal_instruction_opcode baseCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint extensionGetter_baseCode (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (15872U)) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (14592U)) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (14336U)) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (12288U)) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (13312U)) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      result_outBaseCode = GALGAS_uint (uint32_t (14848U)) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//--------------------------------------------------------------------------------------------------

cMapElement_midrange_5F_declaredRoutineMap::cMapElement_midrange_5F_declaredRoutineMap (const GALGAS_lstring & inKey
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_midrange_5F_declaredRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_midrange_5F_declaredRoutineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_midrange_5F_declaredRoutineMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_midrange_5F_declaredRoutineMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_midrange_5F_declaredRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_midrange_5F_declaredRoutineMap * operand = (cMapElement_midrange_5F_declaredRoutineMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap::GALGAS_midrange_5F_declaredRoutineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap::GALGAS_midrange_5F_declaredRoutineMap (const GALGAS_midrange_5F_declaredRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap & GALGAS_midrange_5F_declaredRoutineMap::operator = (const GALGAS_midrange_5F_declaredRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap GALGAS_midrange_5F_declaredRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap GALGAS_midrange_5F_declaredRoutineMap::class_func_mapWithMapToOverride (const GALGAS_midrange_5F_declaredRoutineMap & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap GALGAS_midrange_5F_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_declaredRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_declaredRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_midrange_5F_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_midrange_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@midrange_5F_declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap GALGAS_midrange_5F_declaredRoutineMap::add_operation (const GALGAS_midrange_5F_declaredRoutineMap & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_declaredRoutineMap result = *this ;
  cEnumerator_midrange_5F_declaredRoutineMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_declaredRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_midrange_5F_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_midrange_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_midrange_5F_declaredRoutineMap_searchKey = "the '%K' routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_declaredRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_midrange_5F_declaredRoutineMap * p = (const cMapElement_midrange_5F_declaredRoutineMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_midrange_5F_declaredRoutineMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_midrange_5F_declaredRoutineMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_midrange_5F_declaredRoutineMap * GALGAS_midrange_5F_declaredRoutineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_midrange_5F_declaredRoutineMap * result = (cMapElement_midrange_5F_declaredRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_midrange_5F_declaredRoutineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_midrange_5F_declaredRoutineMap::cEnumerator_midrange_5F_declaredRoutineMap (const GALGAS_midrange_5F_declaredRoutineMap & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element cEnumerator_midrange_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_midrange_5F_declaredRoutineMap * p = (const cMapElement_midrange_5F_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_midrange_5F_declaredRoutineMap) ;
  return GALGAS_midrange_5F_declaredRoutineMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_midrange_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_declaredRoutineMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_midrange_5F_declaredRoutineMap * p = (const cMapElement_midrange_5F_declaredRoutineMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_midrange_5F_declaredRoutineMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_declaredRoutineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ("midrange_declaredRoutineMap",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap GALGAS_midrange_5F_declaredRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap result ;
  const GALGAS_midrange_5F_declaredRoutineMap * p = (const GALGAS_midrange_5F_declaredRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_bootloaderReservedRAMmap::cMapElement_bootloaderReservedRAMmap (const GALGAS_lstring & inKey,
                                                                            const GALGAS_luint & in_mReservedSize
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mReservedSize (in_mReservedSize) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_bootloaderReservedRAMmap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_bootloaderReservedRAMmap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_bootloaderReservedRAMmap (mProperty_lkey, mProperty_mReservedSize COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_bootloaderReservedRAMmap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReservedSize" ":") ;
  mProperty_mReservedSize.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_bootloaderReservedRAMmap::compare (const cCollectionElement * inOperand) const {
  cMapElement_bootloaderReservedRAMmap * operand = (cMapElement_bootloaderReservedRAMmap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReservedSize.objectCompare (operand->mProperty_mReservedSize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap::GALGAS_bootloaderReservedRAMmap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap::GALGAS_bootloaderReservedRAMmap (const GALGAS_bootloaderReservedRAMmap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap & GALGAS_bootloaderReservedRAMmap::operator = (const GALGAS_bootloaderReservedRAMmap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap GALGAS_bootloaderReservedRAMmap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap GALGAS_bootloaderReservedRAMmap::class_func_mapWithMapToOverride (const GALGAS_bootloaderReservedRAMmap & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap GALGAS_bootloaderReservedRAMmap::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_bootloaderReservedRAMmap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bootloaderReservedRAMmap::addAssign_operation (const GALGAS_lstring & inKey,
                                                           const GALGAS_luint & inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_bootloaderReservedRAMmap * p = nullptr ;
  macroMyNew (p, cMapElement_bootloaderReservedRAMmap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bootloaderReservedRAMmap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap GALGAS_bootloaderReservedRAMmap::add_operation (const GALGAS_bootloaderReservedRAMmap & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_bootloaderReservedRAMmap result = *this ;
  cEnumerator_bootloaderReservedRAMmap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mReservedSize (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bootloaderReservedRAMmap::setter_insertKey (GALGAS_lstring inKey,
                                                        GALGAS_luint inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_bootloaderReservedRAMmap * p = nullptr ;
  macroMyNew (p, cMapElement_bootloaderReservedRAMmap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the reserved size for the '%K' bank is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_bootloaderReservedRAMmap_searchKey = "the reserved size for the '%K' bank is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_bootloaderReservedRAMmap::method_searchKey (GALGAS_lstring inKey,
                                                        GALGAS_luint & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_bootloaderReservedRAMmap * p = (const cMapElement_bootloaderReservedRAMmap *) performSearch (inKey,
                                                                                                                 inCompiler,
                                                                                                                 kSearchErrorMessage_bootloaderReservedRAMmap_searchKey
                                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_bootloaderReservedRAMmap) ;
    outArgument0 = p->mProperty_mReservedSize ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_bootloaderReservedRAMmap::getter_mReservedSizeForKey (const GALGAS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bootloaderReservedRAMmap * p = (const cMapElement_bootloaderReservedRAMmap *) attributes ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bootloaderReservedRAMmap) ;
    result = p->mProperty_mReservedSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bootloaderReservedRAMmap::setter_setMReservedSizeForKey (GALGAS_luint inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_bootloaderReservedRAMmap * p = (cMapElement_bootloaderReservedRAMmap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bootloaderReservedRAMmap) ;
    p->mProperty_mReservedSize = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_bootloaderReservedRAMmap * GALGAS_bootloaderReservedRAMmap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_bootloaderReservedRAMmap * result = (cMapElement_bootloaderReservedRAMmap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bootloaderReservedRAMmap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_bootloaderReservedRAMmap::cEnumerator_bootloaderReservedRAMmap (const GALGAS_bootloaderReservedRAMmap & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element cEnumerator_bootloaderReservedRAMmap::current (LOCATION_ARGS) const {
  const cMapElement_bootloaderReservedRAMmap * p = (const cMapElement_bootloaderReservedRAMmap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bootloaderReservedRAMmap) ;
  return GALGAS_bootloaderReservedRAMmap_2D_element (p->mProperty_lkey, p->mProperty_mReservedSize) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_bootloaderReservedRAMmap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_bootloaderReservedRAMmap::current_mReservedSize (LOCATION_ARGS) const {
  const cMapElement_bootloaderReservedRAMmap * p = (const cMapElement_bootloaderReservedRAMmap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bootloaderReservedRAMmap) ;
  return p->mProperty_mReservedSize ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bootloaderReservedRAMmap::optional_searchKey (const GALGAS_string & inKey,
                                                          GALGAS_luint & outArgument0) const {
  const cMapElement_bootloaderReservedRAMmap * p = (const cMapElement_bootloaderReservedRAMmap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_bootloaderReservedRAMmap) ;
    outArgument0 = p->mProperty_mReservedSize ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bootloaderReservedRAMmap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap ("bootloaderReservedRAMmap",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bootloaderReservedRAMmap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bootloaderReservedRAMmap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootloaderReservedRAMmap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap GALGAS_bootloaderReservedRAMmap::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap result ;
  const GALGAS_bootloaderReservedRAMmap * p = (const GALGAS_bootloaderReservedRAMmap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bootloaderReservedRAMmap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootloaderReservedRAMmap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_PiccoloInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_pic_31__38_PiccoloInstruction::objectCompare (const GALGAS_pic_31__38_PiccoloInstruction & inOperand) const {
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

GALGAS_pic_31__38_PiccoloInstruction::GALGAS_pic_31__38_PiccoloInstruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction::GALGAS_pic_31__38_PiccoloInstruction (const cPtr_pic_31__38_PiccoloInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_PiccoloInstruction) ;
}
//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_PiccoloInstruction::setter_setMInstructionLocation (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_PiccoloInstruction * p = (cPtr_pic_31__38_PiccoloInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_PiccoloInstruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_PiccoloInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_PiccoloInstruction * p = (cPtr_pic_31__38_PiccoloInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_PiccoloInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18PiccoloInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_PiccoloInstruction::cPtr_pic_31__38_PiccoloInstruction (const GALGAS_location & in_mInstructionLocation
                                                                        COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18PiccoloInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ("pic18PiccoloInstruction",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_PiccoloInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_PiccoloInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_PiccoloInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction GALGAS_pic_31__38_PiccoloInstruction::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_PiccoloInstruction result ;
  const GALGAS_pic_31__38_PiccoloInstruction * p = (const GALGAS_pic_31__38_PiccoloInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_PiccoloInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_PiccoloInstruction_2D_weak::objectCompare (const GALGAS_pic_31__38_PiccoloInstruction_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_PiccoloInstruction_2D_weak::GALGAS_pic_31__38_PiccoloInstruction_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction_2D_weak & GALGAS_pic_31__38_PiccoloInstruction_2D_weak::operator = (const GALGAS_pic_31__38_PiccoloInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction_2D_weak::GALGAS_pic_31__38_PiccoloInstruction_2D_weak (const GALGAS_pic_31__38_PiccoloInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction_2D_weak GALGAS_pic_31__38_PiccoloInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_PiccoloInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction GALGAS_pic_31__38_PiccoloInstruction_2D_weak::bang_pic_31__38_PiccoloInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_PiccoloInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_PiccoloInstruction) ;
      result = GALGAS_pic_31__38_PiccoloInstruction ((cPtr_pic_31__38_PiccoloInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18PiccoloInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak ("pic18PiccoloInstruction-weak",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_PiccoloInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_PiccoloInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_PiccoloInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction_2D_weak GALGAS_pic_31__38_PiccoloInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_PiccoloInstruction_2D_weak result ;
  const GALGAS_pic_31__38_PiccoloInstruction_2D_weak * p = (const GALGAS_pic_31__38_PiccoloInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_PiccoloInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_InstructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_InstructionList : public cCollectionElement {
  public: GALGAS_pic_31__38_InstructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_InstructionList (const GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_InstructionList (const GALGAS_pic_31__38_InstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_InstructionList::cCollectionElement_pic_31__38_InstructionList (const GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_InstructionList::cCollectionElement_pic_31__38_InstructionList (const GALGAS_pic_31__38_InstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_InstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_InstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_pic_31__38_InstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_pic_31__38_InstructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_pic_31__38_InstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_InstructionList * operand = (cCollectionElement_pic_31__38_InstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_InstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList::GALGAS_pic_31__38_InstructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList::GALGAS_pic_31__38_InstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_InstructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InstructionList::class_func_listWithValue (const GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_pic_31__38_InstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_InstructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_InstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList::addAssign_operation (const GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_InstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList::setter_append (const GALGAS_pic_31__38_PiccoloInstruction inOperand0,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_InstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList::setter_insertAtIndex (const GALGAS_pic_31__38_PiccoloInstruction inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_pic_31__38_InstructionList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_InstructionList::setter_removeAtIndex (GALGAS_pic_31__38_PiccoloInstruction & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_InstructionList * p = (cCollectionElement_pic_31__38_InstructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
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

void GALGAS_pic_31__38_InstructionList::setter_popFirst (GALGAS_pic_31__38_PiccoloInstruction & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InstructionList * p = (cCollectionElement_pic_31__38_InstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList::setter_popLast (GALGAS_pic_31__38_PiccoloInstruction & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InstructionList * p = (cCollectionElement_pic_31__38_InstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList::method_first (GALGAS_pic_31__38_PiccoloInstruction & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InstructionList * p = (cCollectionElement_pic_31__38_InstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList::method_last (GALGAS_pic_31__38_PiccoloInstruction & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InstructionList * p = (cCollectionElement_pic_31__38_InstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InstructionList::add_operation (const GALGAS_pic_31__38_InstructionList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result = GALGAS_pic_31__38_InstructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result = GALGAS_pic_31__38_InstructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result = GALGAS_pic_31__38_InstructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList::plusAssign_operation (const GALGAS_pic_31__38_InstructionList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList::setter_setMInstructionAtIndex (GALGAS_pic_31__38_PiccoloInstruction inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InstructionList * p = (cCollectionElement_pic_31__38_InstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction GALGAS_pic_31__38_InstructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InstructionList * p = (cCollectionElement_pic_31__38_InstructionList *) attributes.ptr () ;
  GALGAS_pic_31__38_PiccoloInstruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_InstructionList::cEnumerator_pic_31__38_InstructionList (const GALGAS_pic_31__38_InstructionList & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element cEnumerator_pic_31__38_InstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InstructionList * p = (const cCollectionElement_pic_31__38_InstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction cEnumerator_pic_31__38_InstructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InstructionList * p = (const cCollectionElement_pic_31__38_InstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @pic18InstructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList ("pic18InstructionList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_InstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_InstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InstructionList::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList result ;
  const GALGAS_pic_31__38_InstructionList * p = (const GALGAS_pic_31__38_InstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_InstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_nobanksel reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_nobanksel::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_nobanksel::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_nobanksel * p = (const cPtr_pic_31__38_Instruction_5F_nobanksel *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_nobanksel::objectCompare (const GALGAS_pic_31__38_Instruction_5F_nobanksel & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_nobanksel::GALGAS_pic_31__38_Instruction_5F_nobanksel (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_nobanksel::GALGAS_pic_31__38_Instruction_5F_nobanksel (const cPtr_pic_31__38_Instruction_5F_nobanksel * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_nobanksel GALGAS_pic_31__38_Instruction_5F_nobanksel::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_nobanksel result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_nobanksel (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_nobanksel class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_nobanksel::cPtr_pic_31__38_Instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_nobanksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;
}

void cPtr_pic_31__38_Instruction_5F_nobanksel::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_nobanksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_nobanksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_nobanksel (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_nobanksel generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ("pic18Instruction_nobanksel",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_nobanksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_nobanksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_nobanksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_nobanksel GALGAS_pic_31__38_Instruction_5F_nobanksel::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_nobanksel result ;
  const GALGAS_pic_31__38_Instruction_5F_nobanksel * p = (const GALGAS_pic_31__38_Instruction_5F_nobanksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_nobanksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_nobanksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak::GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak & GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_nobanksel & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak::GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak (const GALGAS_pic_31__38_Instruction_5F_nobanksel & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_nobanksel GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak::bang_pic_31__38_Instruction_5F_nobanksel_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_nobanksel result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
      result = GALGAS_pic_31__38_Instruction_5F_nobanksel ((cPtr_pic_31__38_Instruction_5F_nobanksel *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_nobanksel-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak ("pic18Instruction_nobanksel-weak",
                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_nobanksel_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_nobanksel-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_checknobank reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_checknobank::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_checknobank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_checknobank * p = (const cPtr_pic_31__38_Instruction_5F_checknobank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checknobank) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_checknobank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_checknobank & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_checknobank::GALGAS_pic_31__38_Instruction_5F_checknobank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checknobank::GALGAS_pic_31__38_Instruction_5F_checknobank (const cPtr_pic_31__38_Instruction_5F_checknobank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_checknobank) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checknobank GALGAS_pic_31__38_Instruction_5F_checknobank::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checknobank result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_checknobank (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_checknobank class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_checknobank::cPtr_pic_31__38_Instruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_checknobank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;
}

void cPtr_pic_31__38_Instruction_5F_checknobank::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_checknobank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_checknobank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_checknobank (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_checknobank generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ("pic18Instruction_checknobank",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_checknobank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_checknobank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_checknobank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checknobank GALGAS_pic_31__38_Instruction_5F_checknobank::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checknobank result ;
  const GALGAS_pic_31__38_Instruction_5F_checknobank * p = (const GALGAS_pic_31__38_Instruction_5F_checknobank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_checknobank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checknobank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak::GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak & GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_checknobank & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak::GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak (const GALGAS_pic_31__38_Instruction_5F_checknobank & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checknobank GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak::bang_pic_31__38_Instruction_5F_checknobank_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_checknobank result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_checknobank) ;
      result = GALGAS_pic_31__38_Instruction_5F_checknobank ((cPtr_pic_31__38_Instruction_5F_checknobank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_checknobank-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak ("pic18Instruction_checknobank-weak",
                                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_checknobank_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checknobank-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_checkbank reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_checkbank::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_checkbank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_checkbank * p = (const cPtr_pic_31__38_Instruction_5F_checkbank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checkbank) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBankIndex.objectCompare (p->mProperty_mBankIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_checkbank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_checkbank & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_checkbank::GALGAS_pic_31__38_Instruction_5F_checkbank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checkbank::GALGAS_pic_31__38_Instruction_5F_checkbank (const cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_checkbank) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checkbank GALGAS_pic_31__38_Instruction_5F_checkbank::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                       const GALGAS_uint & inAttribute_mBankIndex
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checkbank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_checkbank (inAttribute_mInstructionLocation, inAttribute_mBankIndex COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_checkbank::setter_setMBankIndex (GALGAS_uint inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_checkbank * p = (cPtr_pic_31__38_Instruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checkbank) ;
    p->mProperty_mBankIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_pic_31__38_Instruction_5F_checkbank::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_checkbank * p = (cPtr_pic_31__38_Instruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checkbank) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_checkbank class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_checkbank::cPtr_pic_31__38_Instruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_uint & in_mBankIndex
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBankIndex (in_mBankIndex) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_checkbank::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_checkbank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_checkbank (mProperty_mInstructionLocation, mProperty_mBankIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_checkbank generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ("pic18Instruction_checkbank",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_checkbank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_checkbank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_checkbank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checkbank GALGAS_pic_31__38_Instruction_5F_checkbank::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checkbank result ;
  const GALGAS_pic_31__38_Instruction_5F_checkbank * p = (const GALGAS_pic_31__38_Instruction_5F_checkbank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_checkbank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checkbank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak::GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak & GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_checkbank & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak::GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak (const GALGAS_pic_31__38_Instruction_5F_checkbank & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checkbank GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak::bang_pic_31__38_Instruction_5F_checkbank_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_checkbank result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_checkbank) ;
      result = GALGAS_pic_31__38_Instruction_5F_checkbank ((cPtr_pic_31__38_Instruction_5F_checkbank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_checkbank-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak ("pic18Instruction_checkbank-weak",
                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_checkbank_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checkbank-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_PiccoloSimpleInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_pic_31__38_PiccoloSimpleInstruction::objectCompare (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand) const {
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

GALGAS_pic_31__38_PiccoloSimpleInstruction::GALGAS_pic_31__38_PiccoloSimpleInstruction (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloSimpleInstruction::GALGAS_pic_31__38_PiccoloSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18PiccoloSimpleInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_PiccoloSimpleInstruction::cPtr_pic_31__38_PiccoloSimpleInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18PiccoloSimpleInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ("pic18PiccoloSimpleInstruction",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_PiccoloSimpleInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_PiccoloSimpleInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_PiccoloSimpleInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloSimpleInstruction GALGAS_pic_31__38_PiccoloSimpleInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_PiccoloSimpleInstruction result ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction * p = (const GALGAS_pic_31__38_PiccoloSimpleInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_PiccoloSimpleInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloSimpleInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak::objectCompare (const GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak::GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak & GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak::operator = (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak::GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloSimpleInstruction GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak::bang_pic_31__38_PiccoloSimpleInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_PiccoloSimpleInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
      result = GALGAS_pic_31__38_PiccoloSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18PiccoloSimpleInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak ("pic18PiccoloSimpleInstruction-weak",
                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak result ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak * p = (const GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloSimpleInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_banksel reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_banksel::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_banksel::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_banksel * p = (const cPtr_pic_31__38_Instruction_5F_banksel *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBankIndex.objectCompare (p->mProperty_mBankIndex) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWarningOnUselessBanksel.objectCompare (p->mProperty_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_banksel::GALGAS_pic_31__38_Instruction_5F_banksel (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel::GALGAS_pic_31__38_Instruction_5F_banksel (const cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel GALGAS_pic_31__38_Instruction_5F_banksel::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                   const GALGAS_luint & inAttribute_mBankIndex,
                                                                                                   const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_banksel (inAttribute_mInstructionLocation, inAttribute_mBankIndex, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel::setter_setMBankIndex (GALGAS_luint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_banksel * p = (cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    p->mProperty_mBankIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel::setter_setMWarningOnUselessBanksel (GALGAS_bool inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_banksel * p = (cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    p->mProperty_mWarningOnUselessBanksel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_banksel::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel * p = (cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_banksel::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel * p = (cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_banksel class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel::cPtr_pic_31__38_Instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_luint & in_mBankIndex,
                                                                                const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBankIndex (in_mBankIndex),
mProperty_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_banksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;
}

void cPtr_pic_31__38_Instruction_5F_banksel::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_banksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel (mProperty_mInstructionLocation, mProperty_mBankIndex, mProperty_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_banksel generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ("pic18Instruction_banksel",
                                                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel GALGAS_pic_31__38_Instruction_5F_banksel::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel result ;
  const GALGAS_pic_31__38_Instruction_5F_banksel * p = (const GALGAS_pic_31__38_Instruction_5F_banksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_banksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak::GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak & GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_banksel & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak::GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak (const GALGAS_pic_31__38_Instruction_5F_banksel & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak::bang_pic_31__38_Instruction_5F_banksel_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_banksel result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_banksel) ;
      result = GALGAS_pic_31__38_Instruction_5F_banksel ((cPtr_pic_31__38_Instruction_5F_banksel *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_banksel-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak ("pic18Instruction_banksel-weak",
                                                                                                 & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_banksel_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak & GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak::bang_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
      result = GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ((cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_banksel_register-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak ("pic18Instruction_banksel_register-weak",
                                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel_register-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak::GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak & GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_savebank & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak::GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak (const GALGAS_pic_31__38_Instruction_5F_savebank & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak::bang_pic_31__38_Instruction_5F_savebank_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
      result = GALGAS_pic_31__38_Instruction_5F_savebank ((cPtr_pic_31__38_Instruction_5F_savebank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_savebank-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak ("pic18Instruction_savebank-weak",
                                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_savebank_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_savebank-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak & GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::bang_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
      result = GALGAS_pic_31__38_Instruction_5F_repetitionStatique ((cPtr_pic_31__38_Instruction_5F_repetitionStatique *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_repetitionStatique-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak ("pic18Instruction_repetitionStatique-weak",
                                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_repetitionStatique-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractBlockTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_abstractBlockTerminationForBlockInstruction::objectCompare (const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand) const {
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

GALGAS_abstractBlockTerminationForBlockInstruction::GALGAS_abstractBlockTerminationForBlockInstruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction::GALGAS_abstractBlockTerminationForBlockInstruction (const cPtr_abstractBlockTerminationForBlockInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBlockTerminationForBlockInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractBlockTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_abstractBlockTerminationForBlockInstruction::cPtr_abstractBlockTerminationForBlockInstruction (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractBlockTerminationForBlockInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ("abstractBlockTerminationForBlockInstruction",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBlockTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBlockTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBlockTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_abstractBlockTerminationForBlockInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBlockTerminationForBlockInstruction result ;
  const GALGAS_abstractBlockTerminationForBlockInstruction * p = (const GALGAS_abstractBlockTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractBlockTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBlockTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak::objectCompare (const GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak & inOperand) const {
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

GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak::GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak & GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak::operator = (const GALGAS_abstractBlockTerminationForBlockInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak::GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (const GALGAS_abstractBlockTerminationForBlockInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak::bang_abstractBlockTerminationForBlockInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractBlockTerminationForBlockInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBlockTerminationForBlockInstruction) ;
      result = GALGAS_abstractBlockTerminationForBlockInstruction ((cPtr_abstractBlockTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractBlockTerminationForBlockInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak ("abstractBlockTerminationForBlockInstruction-weak",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak result ;
  const GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak * p = (const GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBlockTerminationForBlockInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @exitBlockTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_exitBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_exitBlockTerminationForBlockInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_exitBlockTerminationForBlockInstruction * p = (const cPtr_exitBlockTerminationForBlockInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_exitBlockTerminationForBlockInstruction) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_exitBlockTerminationForBlockInstruction::objectCompare (const GALGAS_exitBlockTerminationForBlockInstruction & inOperand) const {
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

GALGAS_exitBlockTerminationForBlockInstruction::GALGAS_exitBlockTerminationForBlockInstruction (void) :
GALGAS_abstractBlockTerminationForBlockInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_exitBlockTerminationForBlockInstruction::GALGAS_exitBlockTerminationForBlockInstruction (const cPtr_exitBlockTerminationForBlockInstruction * inSourcePtr) :
GALGAS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_exitBlockTerminationForBlockInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_exitBlockTerminationForBlockInstruction GALGAS_exitBlockTerminationForBlockInstruction::class_func_new (const GALGAS_location & inAttribute_mLocation
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_exitBlockTerminationForBlockInstruction result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_exitBlockTerminationForBlockInstruction (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_exitBlockTerminationForBlockInstruction::setter_setMLocation (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_exitBlockTerminationForBlockInstruction * p = (cPtr_exitBlockTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_exitBlockTerminationForBlockInstruction) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_exitBlockTerminationForBlockInstruction::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_exitBlockTerminationForBlockInstruction * p = (cPtr_exitBlockTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_exitBlockTerminationForBlockInstruction) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @exitBlockTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_exitBlockTerminationForBlockInstruction::cPtr_exitBlockTerminationForBlockInstruction (const GALGAS_location & in_mLocation
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (THERE),
mProperty_mLocation (in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_exitBlockTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;
}

void cPtr_exitBlockTerminationForBlockInstruction::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@exitBlockTerminationForBlockInstruction:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_exitBlockTerminationForBlockInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_exitBlockTerminationForBlockInstruction (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @exitBlockTerminationForBlockInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ("exitBlockTerminationForBlockInstruction",
                                                                                               & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_exitBlockTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_exitBlockTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exitBlockTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_exitBlockTerminationForBlockInstruction GALGAS_exitBlockTerminationForBlockInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_exitBlockTerminationForBlockInstruction result ;
  const GALGAS_exitBlockTerminationForBlockInstruction * p = (const GALGAS_exitBlockTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_exitBlockTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exitBlockTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_exitBlockTerminationForBlockInstruction_2D_weak::objectCompare (const GALGAS_exitBlockTerminationForBlockInstruction_2D_weak & inOperand) const {
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

GALGAS_exitBlockTerminationForBlockInstruction_2D_weak::GALGAS_exitBlockTerminationForBlockInstruction_2D_weak (void) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_exitBlockTerminationForBlockInstruction_2D_weak & GALGAS_exitBlockTerminationForBlockInstruction_2D_weak::operator = (const GALGAS_exitBlockTerminationForBlockInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_exitBlockTerminationForBlockInstruction_2D_weak::GALGAS_exitBlockTerminationForBlockInstruction_2D_weak (const GALGAS_exitBlockTerminationForBlockInstruction & inSource) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_exitBlockTerminationForBlockInstruction_2D_weak GALGAS_exitBlockTerminationForBlockInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_exitBlockTerminationForBlockInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_exitBlockTerminationForBlockInstruction GALGAS_exitBlockTerminationForBlockInstruction_2D_weak::bang_exitBlockTerminationForBlockInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_exitBlockTerminationForBlockInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_exitBlockTerminationForBlockInstruction) ;
      result = GALGAS_exitBlockTerminationForBlockInstruction ((cPtr_exitBlockTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @exitBlockTerminationForBlockInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction_2D_weak ("exitBlockTerminationForBlockInstruction-weak",
                                                                                                       & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_exitBlockTerminationForBlockInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_exitBlockTerminationForBlockInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exitBlockTerminationForBlockInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_exitBlockTerminationForBlockInstruction_2D_weak GALGAS_exitBlockTerminationForBlockInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_exitBlockTerminationForBlockInstruction_2D_weak result ;
  const GALGAS_exitBlockTerminationForBlockInstruction_2D_weak * p = (const GALGAS_exitBlockTerminationForBlockInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_exitBlockTerminationForBlockInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exitBlockTerminationForBlockInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_gotoTerminationForBlockInstruction_2D_weak::objectCompare (const GALGAS_gotoTerminationForBlockInstruction_2D_weak & inOperand) const {
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

GALGAS_gotoTerminationForBlockInstruction_2D_weak::GALGAS_gotoTerminationForBlockInstruction_2D_weak (void) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction_2D_weak & GALGAS_gotoTerminationForBlockInstruction_2D_weak::operator = (const GALGAS_gotoTerminationForBlockInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction_2D_weak::GALGAS_gotoTerminationForBlockInstruction_2D_weak (const GALGAS_gotoTerminationForBlockInstruction & inSource) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction_2D_weak GALGAS_gotoTerminationForBlockInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_gotoTerminationForBlockInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction GALGAS_gotoTerminationForBlockInstruction_2D_weak::bang_gotoTerminationForBlockInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_gotoTerminationForBlockInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_gotoTerminationForBlockInstruction) ;
      result = GALGAS_gotoTerminationForBlockInstruction ((cPtr_gotoTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @gotoTerminationForBlockInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2D_weak ("gotoTerminationForBlockInstruction-weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gotoTerminationForBlockInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gotoTerminationForBlockInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gotoTerminationForBlockInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction_2D_weak GALGAS_gotoTerminationForBlockInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gotoTerminationForBlockInstruction_2D_weak result ;
  const GALGAS_gotoTerminationForBlockInstruction_2D_weak * p = (const GALGAS_gotoTerminationForBlockInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gotoTerminationForBlockInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gotoTerminationForBlockInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_ConditionExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_pic_31__38_ConditionExpression::objectCompare (const GALGAS_pic_31__38_ConditionExpression & inOperand) const {
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

GALGAS_pic_31__38_ConditionExpression::GALGAS_pic_31__38_ConditionExpression (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression::GALGAS_pic_31__38_ConditionExpression (const cPtr_pic_31__38_ConditionExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_ConditionExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18ConditionExpression class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_ConditionExpression::cPtr_pic_31__38_ConditionExpression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18ConditionExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ("pic18ConditionExpression",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_ConditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_ConditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_ConditionExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_ConditionExpression::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_ConditionExpression result ;
  const GALGAS_pic_31__38_ConditionExpression * p = (const GALGAS_pic_31__38_ConditionExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_ConditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18ConditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_testTerminationForBlockInstruction_2D_weak::objectCompare (const GALGAS_testTerminationForBlockInstruction_2D_weak & inOperand) const {
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

GALGAS_testTerminationForBlockInstruction_2D_weak::GALGAS_testTerminationForBlockInstruction_2D_weak (void) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction_2D_weak & GALGAS_testTerminationForBlockInstruction_2D_weak::operator = (const GALGAS_testTerminationForBlockInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction_2D_weak::GALGAS_testTerminationForBlockInstruction_2D_weak (const GALGAS_testTerminationForBlockInstruction & inSource) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction_2D_weak GALGAS_testTerminationForBlockInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_testTerminationForBlockInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction_2D_weak::bang_testTerminationForBlockInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_testTerminationForBlockInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testTerminationForBlockInstruction) ;
      result = GALGAS_testTerminationForBlockInstruction ((cPtr_testTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @testTerminationForBlockInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2D_weak ("testTerminationForBlockInstruction-weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testTerminationForBlockInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testTerminationForBlockInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testTerminationForBlockInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction_2D_weak GALGAS_testTerminationForBlockInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_testTerminationForBlockInstruction_2D_weak result ;
  const GALGAS_testTerminationForBlockInstruction_2D_weak * p = (const GALGAS_testTerminationForBlockInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_testTerminationForBlockInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testTerminationForBlockInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_BlockInstructionBlockList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_BlockInstructionBlockList : public cCollectionElement {
  public: GALGAS_pic_31__38_BlockInstructionBlockList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_BlockInstructionBlockList (const GALGAS_lstring & in_mBlockName,
                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                   const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                   const GALGAS_location & in_mEndOfBlock
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_BlockInstructionBlockList (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_BlockInstructionBlockList::cCollectionElement_pic_31__38_BlockInstructionBlockList (const GALGAS_lstring & in_mBlockName,
                                                                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                  const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                                  const GALGAS_location & in_mEndOfBlock
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBlockName, in_mInstructionList, in_mBlockTerminaisonForBlockInstruction, in_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_BlockInstructionBlockList::cCollectionElement_pic_31__38_BlockInstructionBlockList (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBlockName, inElement.mProperty_mInstructionList, inElement.mProperty_mBlockTerminaisonForBlockInstruction, inElement.mProperty_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_BlockInstructionBlockList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_BlockInstructionBlockList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_pic_31__38_BlockInstructionBlockList (mObject.mProperty_mBlockName, mObject.mProperty_mInstructionList, mObject.mProperty_mBlockTerminaisonForBlockInstruction, mObject.mProperty_mEndOfBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_pic_31__38_BlockInstructionBlockList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBlockName" ":") ;
  mObject.mProperty_mBlockName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBlockTerminaisonForBlockInstruction" ":") ;
  mObject.mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfBlock" ":") ;
  mObject.mProperty_mEndOfBlock.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_pic_31__38_BlockInstructionBlockList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_BlockInstructionBlockList * operand = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList::GALGAS_pic_31__38_BlockInstructionBlockList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList::GALGAS_pic_31__38_BlockInstructionBlockList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_BlockInstructionBlockList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_BlockInstructionBlockList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_BlockInstructionBlockList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                   const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                                   const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                                   const GALGAS_location & inOperand3
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_pic_31__38_BlockInstructionBlockList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_BlockInstructionBlockList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_lstring & in_mBlockName,
                                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                             const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                             const GALGAS_location & in_mEndOfBlock
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_BlockInstructionBlockList (in_mBlockName,
                                                                          in_mInstructionList,
                                                                          in_mBlockTerminaisonForBlockInstruction,
                                                                          in_mEndOfBlock COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                       const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                       const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                       const GALGAS_location & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_BlockInstructionBlockList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::setter_append (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_pic_31__38_InstructionList inOperand1,
                                                                 const GALGAS_abstractBlockTerminationForBlockInstruction inOperand2,
                                                                 const GALGAS_location inOperand3,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_BlockInstructionBlockList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                        const GALGAS_pic_31__38_InstructionList inOperand1,
                                                                        const GALGAS_abstractBlockTerminationForBlockInstruction inOperand2,
                                                                        const GALGAS_location inOperand3,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_pic_31__38_BlockInstructionBlockList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_BlockInstructionBlockList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                        GALGAS_pic_31__38_InstructionList & outOperand1,
                                                                        GALGAS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                                        GALGAS_location & outOperand3,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
        outOperand0 = p->mObject.mProperty_mBlockName ;
        outOperand1 = p->mObject.mProperty_mInstructionList ;
        outOperand2 = p->mObject.mProperty_mBlockTerminaisonForBlockInstruction ;
        outOperand3 = p->mObject.mProperty_mEndOfBlock ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                   GALGAS_pic_31__38_InstructionList & outOperand1,
                                                                   GALGAS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                                   GALGAS_location & outOperand3,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    outOperand0 = p->mObject.mProperty_mBlockName ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mBlockTerminaisonForBlockInstruction ;
    outOperand3 = p->mObject.mProperty_mEndOfBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                  GALGAS_pic_31__38_InstructionList & outOperand1,
                                                                  GALGAS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                                  GALGAS_location & outOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    outOperand0 = p->mObject.mProperty_mBlockName ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mBlockTerminaisonForBlockInstruction ;
    outOperand3 = p->mObject.mProperty_mEndOfBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::method_first (GALGAS_lstring & outOperand0,
                                                                GALGAS_pic_31__38_InstructionList & outOperand1,
                                                                GALGAS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                                GALGAS_location & outOperand3,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    outOperand0 = p->mObject.mProperty_mBlockName ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mBlockTerminaisonForBlockInstruction ;
    outOperand3 = p->mObject.mProperty_mEndOfBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::method_last (GALGAS_lstring & outOperand0,
                                                               GALGAS_pic_31__38_InstructionList & outOperand1,
                                                               GALGAS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                               GALGAS_location & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    outOperand0 = p->mObject.mProperty_mBlockName ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mBlockTerminaisonForBlockInstruction ;
    outOperand3 = p->mObject.mProperty_mEndOfBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_BlockInstructionBlockList::add_operation (const GALGAS_pic_31__38_BlockInstructionBlockList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_BlockInstructionBlockList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_BlockInstructionBlockList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_BlockInstructionBlockList result = GALGAS_pic_31__38_BlockInstructionBlockList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_BlockInstructionBlockList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_BlockInstructionBlockList result = GALGAS_pic_31__38_BlockInstructionBlockList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_BlockInstructionBlockList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_BlockInstructionBlockList result = GALGAS_pic_31__38_BlockInstructionBlockList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::plusAssign_operation (const GALGAS_pic_31__38_BlockInstructionBlockList inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::setter_setMBlockNameAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBlockName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_BlockInstructionBlockList::getter_mBlockNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    result = p->mObject.mProperty_mBlockName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_BlockInstructionBlockList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::setter_setMBlockTerminaisonForBlockInstructionAtIndex (GALGAS_abstractBlockTerminationForBlockInstruction inOperand,
                                                                                                         GALGAS_uint inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBlockTerminaisonForBlockInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_pic_31__38_BlockInstructionBlockList::getter_mBlockTerminaisonForBlockInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) attributes.ptr () ;
  GALGAS_abstractBlockTerminationForBlockInstruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    result = p->mObject.mProperty_mBlockTerminaisonForBlockInstruction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList::setter_setMEndOfBlockAtIndex (GALGAS_location inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBlock = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_BlockInstructionBlockList::getter_mEndOfBlockAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (cCollectionElement_pic_31__38_BlockInstructionBlockList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
    result = p->mObject.mProperty_mEndOfBlock ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_BlockInstructionBlockList::cEnumerator_pic_31__38_BlockInstructionBlockList (const GALGAS_pic_31__38_BlockInstructionBlockList & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element cEnumerator_pic_31__38_BlockInstructionBlockList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (const cCollectionElement_pic_31__38_BlockInstructionBlockList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38_BlockInstructionBlockList::current_mBlockName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (const cCollectionElement_pic_31__38_BlockInstructionBlockList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
  return p->mObject.mProperty_mBlockName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_BlockInstructionBlockList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (const cCollectionElement_pic_31__38_BlockInstructionBlockList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction cEnumerator_pic_31__38_BlockInstructionBlockList::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (const cCollectionElement_pic_31__38_BlockInstructionBlockList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
  return p->mObject.mProperty_mBlockTerminaisonForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_pic_31__38_BlockInstructionBlockList::current_mEndOfBlock (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_BlockInstructionBlockList * p = (const cCollectionElement_pic_31__38_BlockInstructionBlockList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_BlockInstructionBlockList) ;
  return p->mObject.mProperty_mEndOfBlock ;
}




//--------------------------------------------------------------------------------------------------
//
//     @pic18BlockInstructionBlockList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ("pic18BlockInstructionBlockList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BlockInstructionBlockList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BlockInstructionBlockList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BlockInstructionBlockList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_BlockInstructionBlockList::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList result ;
  const GALGAS_pic_31__38_BlockInstructionBlockList * p = (const GALGAS_pic_31__38_BlockInstructionBlockList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_BlockInstructionBlockList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BlockInstructionBlockList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_block_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_block_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_block_2D_weak::GALGAS_pic_31__38_Instruction_5F_block_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block_2D_weak & GALGAS_pic_31__38_Instruction_5F_block_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_block & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block_2D_weak::GALGAS_pic_31__38_Instruction_5F_block_2D_weak (const GALGAS_pic_31__38_Instruction_5F_block & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block_2D_weak GALGAS_pic_31__38_Instruction_5F_block_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block_2D_weak::bang_pic_31__38_Instruction_5F_block_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_block) ;
      result = GALGAS_pic_31__38_Instruction_5F_block ((cPtr_pic_31__38_Instruction_5F_block *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_block-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2D_weak ("pic18Instruction_block-weak",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_block_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_block_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_block_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block_2D_weak GALGAS_pic_31__38_Instruction_5F_block_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_block_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_block_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_block_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_block-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_AbstractCaseItem reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_AbstractCaseItem::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_pic_31__38_AbstractCaseItem::objectCompare (const GALGAS_pic_31__38_AbstractCaseItem & inOperand) const {
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

GALGAS_pic_31__38_AbstractCaseItem::GALGAS_pic_31__38_AbstractCaseItem (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem::GALGAS_pic_31__38_AbstractCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_AbstractCaseItem) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18AbstractCaseItem class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_AbstractCaseItem::cPtr_pic_31__38_AbstractCaseItem (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18AbstractCaseItem generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ("pic18AbstractCaseItem",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_AbstractCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_AbstractCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_AbstractCaseItem (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem GALGAS_pic_31__38_AbstractCaseItem::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AbstractCaseItem result ;
  const GALGAS_pic_31__38_AbstractCaseItem * p = (const GALGAS_pic_31__38_AbstractCaseItem *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_AbstractCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AbstractCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_AbstractCaseItem_2D_weak::objectCompare (const GALGAS_pic_31__38_AbstractCaseItem_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_AbstractCaseItem_2D_weak::GALGAS_pic_31__38_AbstractCaseItem_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem_2D_weak & GALGAS_pic_31__38_AbstractCaseItem_2D_weak::operator = (const GALGAS_pic_31__38_AbstractCaseItem & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem_2D_weak::GALGAS_pic_31__38_AbstractCaseItem_2D_weak (const GALGAS_pic_31__38_AbstractCaseItem & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem_2D_weak GALGAS_pic_31__38_AbstractCaseItem_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_AbstractCaseItem_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem GALGAS_pic_31__38_AbstractCaseItem_2D_weak::bang_pic_31__38_AbstractCaseItem_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_AbstractCaseItem result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_AbstractCaseItem) ;
      result = GALGAS_pic_31__38_AbstractCaseItem ((cPtr_pic_31__38_AbstractCaseItem *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18AbstractCaseItem-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2D_weak ("pic18AbstractCaseItem-weak",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_AbstractCaseItem_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_AbstractCaseItem_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_AbstractCaseItem_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem_2D_weak GALGAS_pic_31__38_AbstractCaseItem_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AbstractCaseItem_2D_weak result ;
  const GALGAS_pic_31__38_AbstractCaseItem_2D_weak * p = (const GALGAS_pic_31__38_AbstractCaseItem_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_AbstractCaseItem_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AbstractCaseItem-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_ADDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_ADDWFC ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ANDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_ANDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_COMF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_COMF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_DECF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_DECF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_INCF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_INCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_IORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_IORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_MOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLCF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_RLCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLNCF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_RLNCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRCF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_RRCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRNCF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_RRNCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBFWB (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_SUBFWB ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_SUBWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWFB (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_SUBWFB ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SWAPF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_SWAPF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_XORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = kEnum_XORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_ADDWF () const {
  const bool ok = mEnum == kEnum_ADDWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_ADDWFC () const {
  const bool ok = mEnum == kEnum_ADDWFC ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_ANDWF () const {
  const bool ok = mEnum == kEnum_ANDWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_COMF () const {
  const bool ok = mEnum == kEnum_COMF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_DECF () const {
  const bool ok = mEnum == kEnum_DECF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_INCF () const {
  const bool ok = mEnum == kEnum_INCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_IORWF () const {
  const bool ok = mEnum == kEnum_IORWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_MOVF () const {
  const bool ok = mEnum == kEnum_MOVF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_RLCF () const {
  const bool ok = mEnum == kEnum_RLCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_RLNCF () const {
  const bool ok = mEnum == kEnum_RLNCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_RRCF () const {
  const bool ok = mEnum == kEnum_RRCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_RRNCF () const {
  const bool ok = mEnum == kEnum_RRNCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_SUBFWB () const {
  const bool ok = mEnum == kEnum_SUBFWB ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_SUBWF () const {
  const bool ok = mEnum == kEnum_SUBWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_SUBWFB () const {
  const bool ok = mEnum == kEnum_SUBWFB ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_SWAPF () const {
  const bool ok = mEnum == kEnum_SWAPF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::optional_XORWF () const {
  const bool ok = mEnum == kEnum_XORWF ;
  return ok ;
}

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

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ADDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isADDWFC (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ADDWFC == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_COMF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRLCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RLCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRLNCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RLNCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRRCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RRCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRRNCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RRNCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSUBFWB (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBFWB == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSUBWFB (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBWFB == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SWAPF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::description (String & ioString,
                                                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @pic18Instruction_FDA_base_code_AST: ") ;
  ioString.appendCString (gEnumNameArrayFor_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const {
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
//     @pic18Instruction_FDA_base_code_AST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ("pic18Instruction_FDA_base_code_AST",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST * p = (const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FDA_base_code_AST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak::GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak & GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_FDA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak::GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak (const GALGAS_pic_31__38_Instruction_5F_FDA & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak::bang_pic_31__38_Instruction_5F_FDA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_FDA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_FDA) ;
      result = GALGAS_pic_31__38_Instruction_5F_FDA ((cPtr_pic_31__38_Instruction_5F_FDA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_FDA-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak ("pic18Instruction_FDA-weak",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FDA_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FDA-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code::GALGAS_FA_5F_instruction_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CPFSEQ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::class_func_CPFSGT (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CPFSGT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::class_func_CPFSLT (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CPFSLT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::class_func_MULWF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MULWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::class_func_NEGF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_NEGF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::class_func_SETF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_SETF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_TSTFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_instruction_5F_base_5F_code::optional_CLRF () const {
  const bool ok = mEnum == kEnum_CLRF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_instruction_5F_base_5F_code::optional_CPFSEQ () const {
  const bool ok = mEnum == kEnum_CPFSEQ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_instruction_5F_base_5F_code::optional_CPFSGT () const {
  const bool ok = mEnum == kEnum_CPFSGT ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_instruction_5F_base_5F_code::optional_CPFSLT () const {
  const bool ok = mEnum == kEnum_CPFSLT ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_instruction_5F_base_5F_code::optional_MOVWF () const {
  const bool ok = mEnum == kEnum_MOVWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_instruction_5F_base_5F_code::optional_MULWF () const {
  const bool ok = mEnum == kEnum_MULWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_instruction_5F_base_5F_code::optional_NEGF () const {
  const bool ok = mEnum == kEnum_NEGF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_instruction_5F_base_5F_code::optional_SETF () const {
  const bool ok = mEnum == kEnum_SETF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_instruction_5F_base_5F_code::optional_TSTFSZ () const {
  const bool ok = mEnum == kEnum_TSTFSZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_FA_5F_instruction_5F_base_5F_code [10] = {
  "(not built)",
  "CLRF",
  "CPFSEQ",
  "CPFSGT",
  "CPFSLT",
  "MOVWF",
  "MULWF",
  "NEGF",
  "SETF",
  "TSTFSZ"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_instruction_5F_base_5F_code::getter_isCPFSEQ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSEQ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_instruction_5F_base_5F_code::getter_isCPFSGT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSGT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_instruction_5F_base_5F_code::getter_isCPFSLT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSLT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_instruction_5F_base_5F_code::getter_isMULWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MULWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_instruction_5F_base_5F_code::getter_isNEGF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_NEGF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_instruction_5F_base_5F_code::getter_isSETF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SETF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_instruction_5F_base_5F_code::getter_isTSTFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_TSTFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_FA_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @FA_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_FA_5F_instruction_5F_base_5F_code [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_FA_5F_instruction_5F_base_5F_code::objectCompare (const GALGAS_FA_5F_instruction_5F_base_5F_code & inOperand) const {
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
//     @FA_instruction_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ("FA_instruction_base_code",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_FA_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_FA_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_FA_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_FA_5F_instruction_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  const GALGAS_FA_5F_instruction_5F_base_5F_code * p = (const GALGAS_FA_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_FA_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("FA_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_FA_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_FA_2D_weak::GALGAS_pic_31__38_Instruction_5F_FA_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA_2D_weak & GALGAS_pic_31__38_Instruction_5F_FA_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_FA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA_2D_weak::GALGAS_pic_31__38_Instruction_5F_FA_2D_weak (const GALGAS_pic_31__38_Instruction_5F_FA & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA_2D_weak GALGAS_pic_31__38_Instruction_5F_FA_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA GALGAS_pic_31__38_Instruction_5F_FA_2D_weak::bang_pic_31__38_Instruction_5F_FA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_FA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_FA) ;
      result = GALGAS_pic_31__38_Instruction_5F_FA ((cPtr_pic_31__38_Instruction_5F_FA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_FA-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA_2D_weak ("pic18Instruction_FA-weak",
                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FA_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FA_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FA_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA_2D_weak GALGAS_pic_31__38_Instruction_5F_FA_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_FA_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_FA_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FA_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FA-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak::GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak & GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_MOVFF & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak::GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak (const GALGAS_pic_31__38_Instruction_5F_MOVFF & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak::bang_pic_31__38_Instruction_5F_MOVFF_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_MOVFF result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
      result = GALGAS_pic_31__38_Instruction_5F_MOVFF ((cPtr_pic_31__38_Instruction_5F_MOVFF *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_MOVFF-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak ("pic18Instruction_MOVFF-weak",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_MOVFF_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MOVFF-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op::GALGAS_bit_5F_oriented_5F_op (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op GALGAS_bit_5F_oriented_5F_op::class_func_BCF (UNUSED_LOCATION_ARGS) {
  GALGAS_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op GALGAS_bit_5F_oriented_5F_op::class_func_BSF (UNUSED_LOCATION_ARGS) {
  GALGAS_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BSF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op GALGAS_bit_5F_oriented_5F_op::class_func_BTG (UNUSED_LOCATION_ARGS) {
  GALGAS_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BTG ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bit_5F_oriented_5F_op::optional_BCF () const {
  const bool ok = mEnum == kEnum_BCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bit_5F_oriented_5F_op::optional_BSF () const {
  const bool ok = mEnum == kEnum_BSF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bit_5F_oriented_5F_op::optional_BTG () const {
  const bool ok = mEnum == kEnum_BTG ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_bit_5F_oriented_5F_op [4] = {
  "(not built)",
  "BCF",
  "BSF",
  "BTG"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BSF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_bit_5F_oriented_5F_op::getter_isBTG (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BTG == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bit_5F_oriented_5F_op::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @bit_oriented_op: ") ;
  ioString.appendCString (gEnumNameArrayFor_bit_5F_oriented_5F_op [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bit_5F_oriented_5F_op::objectCompare (const GALGAS_bit_5F_oriented_5F_op & inOperand) const {
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
//     @bit_oriented_op generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ("bit_oriented_op",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op GALGAS_bit_5F_oriented_5F_op::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bit_5F_oriented_5F_op result ;
  const GALGAS_bit_5F_oriented_5F_op * p = (const GALGAS_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak::GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak & GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_FBA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak::GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak (const GALGAS_pic_31__38_Instruction_5F_FBA & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak::bang_pic_31__38_Instruction_5F_FBA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_FBA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_FBA) ;
      result = GALGAS_pic_31__38_Instruction_5F_FBA ((cPtr_pic_31__38_Instruction_5F_FBA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_FBA-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak ("pic18Instruction_FBA-weak",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FBA_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FBA-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch::GALGAS_conditional_5F_branch (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_conditional_5F_branch::class_func_bz (UNUSED_LOCATION_ARGS) {
  GALGAS_conditional_5F_branch result ;
  result.mEnum = kEnum_bz ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_conditional_5F_branch::class_func_bnz (UNUSED_LOCATION_ARGS) {
  GALGAS_conditional_5F_branch result ;
  result.mEnum = kEnum_bnz ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_conditional_5F_branch::class_func_bn (UNUSED_LOCATION_ARGS) {
  GALGAS_conditional_5F_branch result ;
  result.mEnum = kEnum_bn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_conditional_5F_branch::class_func_bnn (UNUSED_LOCATION_ARGS) {
  GALGAS_conditional_5F_branch result ;
  result.mEnum = kEnum_bnn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_conditional_5F_branch::class_func_bc (UNUSED_LOCATION_ARGS) {
  GALGAS_conditional_5F_branch result ;
  result.mEnum = kEnum_bc ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_conditional_5F_branch::class_func_bnc (UNUSED_LOCATION_ARGS) {
  GALGAS_conditional_5F_branch result ;
  result.mEnum = kEnum_bnc ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_conditional_5F_branch::class_func_bov (UNUSED_LOCATION_ARGS) {
  GALGAS_conditional_5F_branch result ;
  result.mEnum = kEnum_bov ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_conditional_5F_branch::class_func_bnov (UNUSED_LOCATION_ARGS) {
  GALGAS_conditional_5F_branch result ;
  result.mEnum = kEnum_bnov ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditional_5F_branch::optional_bz () const {
  const bool ok = mEnum == kEnum_bz ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditional_5F_branch::optional_bnz () const {
  const bool ok = mEnum == kEnum_bnz ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditional_5F_branch::optional_bn () const {
  const bool ok = mEnum == kEnum_bn ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditional_5F_branch::optional_bnn () const {
  const bool ok = mEnum == kEnum_bnn ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditional_5F_branch::optional_bc () const {
  const bool ok = mEnum == kEnum_bc ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditional_5F_branch::optional_bnc () const {
  const bool ok = mEnum == kEnum_bnc ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditional_5F_branch::optional_bov () const {
  const bool ok = mEnum == kEnum_bov ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditional_5F_branch::optional_bnov () const {
  const bool ok = mEnum == kEnum_bnov ;
  return ok ;
}

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

GALGAS_bool GALGAS_conditional_5F_branch::getter_isBz (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bz == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditional_5F_branch::getter_isBnz (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bnz == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditional_5F_branch::getter_isBn (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditional_5F_branch::getter_isBnn (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bnn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditional_5F_branch::getter_isBc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditional_5F_branch::getter_isBnc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bnc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditional_5F_branch::getter_isBov (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bov == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditional_5F_branch::getter_isBnov (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bnov == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_conditional_5F_branch::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @conditional_branch: ") ;
  ioString.appendCString (gEnumNameArrayFor_conditional_5F_branch [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_conditional_5F_branch::objectCompare (const GALGAS_conditional_5F_branch & inOperand) const {
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
//     @conditional_branch generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditional_5F_branch ("conditional_branch",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_conditional_5F_branch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_conditional_5F_branch ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_conditional_5F_branch::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_conditional_5F_branch (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_conditional_5F_branch::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_conditional_5F_branch result ;
  const GALGAS_conditional_5F_branch * p = (const GALGAS_conditional_5F_branch *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_conditional_5F_branch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("conditional_branch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind::GALGAS_jumpInstructionKind (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_jumpInstructionKind::class_func_ipicRelative (UNUSED_LOCATION_ARGS) {
  GALGAS_jumpInstructionKind result ;
  result.mEnum = kEnum_ipicRelative ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_jumpInstructionKind::class_func_relative (UNUSED_LOCATION_ARGS) {
  GALGAS_jumpInstructionKind result ;
  result.mEnum = kEnum_relative ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_jumpInstructionKind::class_func_absolute (UNUSED_LOCATION_ARGS) {
  GALGAS_jumpInstructionKind result ;
  result.mEnum = kEnum_absolute ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_jumpInstructionKind::optional_ipicRelative () const {
  const bool ok = mEnum == kEnum_ipicRelative ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_jumpInstructionKind::optional_relative () const {
  const bool ok = mEnum == kEnum_relative ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_jumpInstructionKind::optional_absolute () const {
  const bool ok = mEnum == kEnum_absolute ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_jumpInstructionKind [4] = {
  "(not built)",
  "ipicRelative",
  "relative",
  "absolute"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_jumpInstructionKind::getter_isIpicRelative (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ipicRelative == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_jumpInstructionKind::getter_isRelative (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_relative == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_jumpInstructionKind::getter_isAbsolute (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_absolute == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_jumpInstructionKind::description (String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @jumpInstructionKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_jumpInstructionKind [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_jumpInstructionKind::objectCompare (const GALGAS_jumpInstructionKind & inOperand) const {
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
//     @jumpInstructionKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_jumpInstructionKind ("jumpInstructionKind",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_jumpInstructionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_jumpInstructionKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_jumpInstructionKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_jumpInstructionKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_jumpInstructionKind::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_jumpInstructionKind result ;
  const GALGAS_jumpInstructionKind * p = (const GALGAS_jumpInstructionKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_jumpInstructionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("jumpInstructionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak & GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (const GALGAS_pic_31__38_Instruction_5F_JSR & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::bang_pic_31__38_Instruction_5F_JSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_JSR) ;
      result = GALGAS_pic_31__38_Instruction_5F_JSR ((cPtr_pic_31__38_Instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_JSR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak ("pic18Instruction_JSR-weak",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak & GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_macro & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (const GALGAS_pic_31__38_Instruction_5F_macro & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::bang_pic_31__38_Instruction_5F_macro_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_macro result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_macro) ;
      result = GALGAS_pic_31__38_Instruction_5F_macro ((cPtr_pic_31__38_Instruction_5F_macro *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_macro-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro_2D_weak ("pic18Instruction_macro-weak",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_macro-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak & GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (const GALGAS_pic_31__38_Instruction_5F_JUMP & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::bang_pic_31__38_Instruction_5F_JUMP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_JUMP) ;
      result = GALGAS_pic_31__38_Instruction_5F_JUMP ((cPtr_pic_31__38_Instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_JUMP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak ("pic18Instruction_JUMP-weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak & GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::bang_pic_31__38_Instruction_5F_JUMPCC_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
      result = GALGAS_pic_31__38_Instruction_5F_JUMPCC ((cPtr_pic_31__38_Instruction_5F_JUMPCC *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_JUMPCC-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak ("pic18Instruction_JUMPCC-weak",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMPCC-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind::GALGAS_pic_31__38_InstructionWithNoOperandKind (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_InstructionWithNoOperandKind::class_func_CLRWDT (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = kEnum_CLRWDT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_InstructionWithNoOperandKind::class_func_DAW (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = kEnum_DAW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = kEnum_NOP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_InstructionWithNoOperandKind::class_func_POP (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = kEnum_POP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_InstructionWithNoOperandKind::class_func_PUSH (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = kEnum_PUSH ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_InstructionWithNoOperandKind::class_func_RESET (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = kEnum_RESET ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_InstructionWithNoOperandKind::class_func_SLEEP (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = kEnum_SLEEP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InstructionWithNoOperandKind::optional_CLRWDT () const {
  const bool ok = mEnum == kEnum_CLRWDT ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InstructionWithNoOperandKind::optional_DAW () const {
  const bool ok = mEnum == kEnum_DAW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InstructionWithNoOperandKind::optional_NOP () const {
  const bool ok = mEnum == kEnum_NOP ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InstructionWithNoOperandKind::optional_POP () const {
  const bool ok = mEnum == kEnum_POP ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InstructionWithNoOperandKind::optional_PUSH () const {
  const bool ok = mEnum == kEnum_PUSH ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InstructionWithNoOperandKind::optional_RESET () const {
  const bool ok = mEnum == kEnum_RESET ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InstructionWithNoOperandKind::optional_SLEEP () const {
  const bool ok = mEnum == kEnum_SLEEP ;
  return ok ;
}

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

GALGAS_bool GALGAS_pic_31__38_InstructionWithNoOperandKind::getter_isCLRWDT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRWDT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_InstructionWithNoOperandKind::getter_isDAW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DAW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_InstructionWithNoOperandKind::getter_isNOP (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_NOP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_InstructionWithNoOperandKind::getter_isPOP (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_POP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_InstructionWithNoOperandKind::getter_isPUSH (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_PUSH == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_InstructionWithNoOperandKind::getter_isRESET (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RESET == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_InstructionWithNoOperandKind::getter_isSLEEP (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SLEEP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionWithNoOperandKind::description (String & ioString,
                                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @pic18InstructionWithNoOperandKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_pic_31__38_InstructionWithNoOperandKind [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_InstructionWithNoOperandKind::objectCompare (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand) const {
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
//     @pic18InstructionWithNoOperandKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ("pic18InstructionWithNoOperandKind",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_InstructionWithNoOperandKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_InstructionWithNoOperandKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InstructionWithNoOperandKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_InstructionWithNoOperandKind::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  const GALGAS_pic_31__38_InstructionWithNoOperandKind * p = (const GALGAS_pic_31__38_InstructionWithNoOperandKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_InstructionWithNoOperandKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionWithNoOperandKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_withNoOperand reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_withNoOperand::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_withNoOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (const cPtr_pic_31__38_Instruction_5F_withNoOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_withNoOperand::objectCompare (const GALGAS_pic_31__38_Instruction_5F_withNoOperand & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_withNoOperand::GALGAS_pic_31__38_Instruction_5F_withNoOperand (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_withNoOperand::GALGAS_pic_31__38_Instruction_5F_withNoOperand (const cPtr_pic_31__38_Instruction_5F_withNoOperand * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_withNoOperand GALGAS_pic_31__38_Instruction_5F_withNoOperand::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                               const GALGAS_pic_31__38_InstructionWithNoOperandKind & inAttribute_mKind
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_withNoOperand result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_withNoOperand (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_withNoOperand::setter_setMKind (GALGAS_pic_31__38_InstructionWithNoOperandKind inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (cPtr_pic_31__38_Instruction_5F_withNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_Instruction_5F_withNoOperand::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionWithNoOperandKind () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (cPtr_pic_31__38_Instruction_5F_withNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_withNoOperand class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_withNoOperand::cPtr_pic_31__38_Instruction_5F_withNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_withNoOperand::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_withNoOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_withNoOperand (mProperty_mInstructionLocation, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_withNoOperand generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ("pic18Instruction_withNoOperand",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_withNoOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_withNoOperand::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_withNoOperand (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_withNoOperand GALGAS_pic_31__38_Instruction_5F_withNoOperand::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_withNoOperand result ;
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand * p = (const GALGAS_pic_31__38_Instruction_5F_withNoOperand *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_withNoOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_withNoOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak::GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak & GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_withNoOperand & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak::GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak (const GALGAS_pic_31__38_Instruction_5F_withNoOperand & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_withNoOperand GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak::bang_pic_31__38_Instruction_5F_withNoOperand_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_withNoOperand result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
      result = GALGAS_pic_31__38_Instruction_5F_withNoOperand ((cPtr_pic_31__38_Instruction_5F_withNoOperand *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_withNoOperand-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak ("pic18Instruction_withNoOperand-weak",
                                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_withNoOperand_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_withNoOperand-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode::GALGAS_literal_5F_instruction_5F_opcode (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_literal_5F_instruction_5F_opcode::class_func_ADDLW (UNUSED_LOCATION_ARGS) {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_ADDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_literal_5F_instruction_5F_opcode::class_func_ANDLW (UNUSED_LOCATION_ARGS) {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_ANDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_literal_5F_instruction_5F_opcode::class_func_IORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_IORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (UNUSED_LOCATION_ARGS) {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_MOVLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_literal_5F_instruction_5F_opcode::class_func_MULLW (UNUSED_LOCATION_ARGS) {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_MULLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_literal_5F_instruction_5F_opcode::class_func_SUBLW (UNUSED_LOCATION_ARGS) {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_SUBLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_literal_5F_instruction_5F_opcode::class_func_XORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_XORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_literal_5F_instruction_5F_opcode::optional_ADDLW () const {
  const bool ok = mEnum == kEnum_ADDLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_literal_5F_instruction_5F_opcode::optional_ANDLW () const {
  const bool ok = mEnum == kEnum_ANDLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_literal_5F_instruction_5F_opcode::optional_IORLW () const {
  const bool ok = mEnum == kEnum_IORLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_literal_5F_instruction_5F_opcode::optional_MOVLW () const {
  const bool ok = mEnum == kEnum_MOVLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_literal_5F_instruction_5F_opcode::optional_MULLW () const {
  const bool ok = mEnum == kEnum_MULLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_literal_5F_instruction_5F_opcode::optional_SUBLW () const {
  const bool ok = mEnum == kEnum_SUBLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_literal_5F_instruction_5F_opcode::optional_XORLW () const {
  const bool ok = mEnum == kEnum_XORLW ;
  return ok ;
}

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

GALGAS_bool GALGAS_literal_5F_instruction_5F_opcode::getter_isADDLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ADDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_literal_5F_instruction_5F_opcode::getter_isMULLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MULLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_literal_5F_instruction_5F_opcode::getter_isSUBLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_literal_5F_instruction_5F_opcode::description (String & ioString,
                                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @literal_instruction_opcode: ") ;
  ioString.appendCString (gEnumNameArrayFor_literal_5F_instruction_5F_opcode [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_literal_5F_instruction_5F_opcode::objectCompare (const GALGAS_literal_5F_instruction_5F_opcode & inOperand) const {
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
//     @literal_instruction_opcode generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ("literal_instruction_opcode",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_literal_5F_instruction_5F_opcode::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  const GALGAS_literal_5F_instruction_5F_opcode * p = (const GALGAS_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_literalOperation * p = (const cPtr_pic_31__38_Instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLiteralInstruction.objectCompare (p->mProperty_mLiteralInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImmediatExpression.objectCompare (p->mProperty_mImmediatExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_literalOperation::objectCompare (const GALGAS_pic_31__38_Instruction_5F_literalOperation & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_literalOperation::GALGAS_pic_31__38_Instruction_5F_literalOperation (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_literalOperation::GALGAS_pic_31__38_Instruction_5F_literalOperation (const cPtr_pic_31__38_Instruction_5F_literalOperation * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_literalOperation GALGAS_pic_31__38_Instruction_5F_literalOperation::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                     const GALGAS_literal_5F_instruction_5F_opcode & inAttribute_mLiteralInstruction,
                                                                                                                     const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralInstruction.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mLiteralInstruction, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_literalOperation::setter_setMLiteralInstruction (GALGAS_literal_5F_instruction_5F_opcode inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_literalOperation * p = (cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    p->mProperty_mLiteralInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_literalOperation::setter_setMImmediatExpression (GALGAS_immediatExpression inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_literalOperation * p = (cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    p->mProperty_mImmediatExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_pic_31__38_Instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_literalOperation * p = (cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_literalOperation::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_literalOperation * p = (cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_literalOperation::cPtr_pic_31__38_Instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                  const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralInstruction (in_mLiteralInstruction),
mProperty_mImmediatExpression (in_mImmediatExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_literalOperation::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_literalOperation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ("pic18Instruction_literalOperation",
                                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_literalOperation GALGAS_pic_31__38_Instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_literalOperation result ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation * p = (const GALGAS_pic_31__38_Instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak::GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak & GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak::GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak (const GALGAS_pic_31__38_Instruction_5F_literalOperation & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_literalOperation GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak::bang_pic_31__38_Instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
      result = GALGAS_pic_31__38_Instruction_5F_literalOperation ((cPtr_pic_31__38_Instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_literalOperation-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak ("pic18Instruction_literalOperation-weak",
                                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_literalOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_literalOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_fnop reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_fnop::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_fnop::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_fnop * p = (const cPtr_pic_31__38_Instruction_5F_fnop *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_fnop) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImmediatExpression.objectCompare (p->mProperty_mImmediatExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_fnop::objectCompare (const GALGAS_pic_31__38_Instruction_5F_fnop & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_fnop::GALGAS_pic_31__38_Instruction_5F_fnop (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_fnop::GALGAS_pic_31__38_Instruction_5F_fnop (const cPtr_pic_31__38_Instruction_5F_fnop * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_fnop) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_fnop GALGAS_pic_31__38_Instruction_5F_fnop::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                             const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_fnop result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_fnop (inAttribute_mInstructionLocation, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_fnop::setter_setMImmediatExpression (GALGAS_immediatExpression inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_fnop * p = (cPtr_pic_31__38_Instruction_5F_fnop *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_fnop) ;
    p->mProperty_mImmediatExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_fnop::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_fnop * p = (cPtr_pic_31__38_Instruction_5F_fnop *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_fnop) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_fnop class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_fnop::cPtr_pic_31__38_Instruction_5F_fnop (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_immediatExpression & in_mImmediatExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mImmediatExpression (in_mImmediatExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_fnop::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_fnop::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_fnop (mProperty_mInstructionLocation, mProperty_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_fnop generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ("pic18Instruction_fnop",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_fnop::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_fnop::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_fnop (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_fnop GALGAS_pic_31__38_Instruction_5F_fnop::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_fnop result ;
  const GALGAS_pic_31__38_Instruction_5F_fnop * p = (const GALGAS_pic_31__38_Instruction_5F_fnop *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_fnop *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_fnop", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak::GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak & GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_fnop & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak::GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak (const GALGAS_pic_31__38_Instruction_5F_fnop & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_fnop GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak::bang_pic_31__38_Instruction_5F_fnop_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_fnop result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_fnop) ;
      result = GALGAS_pic_31__38_Instruction_5F_fnop ((cPtr_pic_31__38_Instruction_5F_fnop *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_fnop-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak ("pic18Instruction_fnop-weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_fnop_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_fnop-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_LFSR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_LFSR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFSRindex.printNonNullClassInstanceProperties ("mFSRindex") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_LFSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LFSR * p = (const cPtr_pic_31__38_Instruction_5F_LFSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFSRindex.objectCompare (p->mProperty_mFSRindex) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImmediatExpression.objectCompare (p->mProperty_mImmediatExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_LFSR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_LFSR::GALGAS_pic_31__38_Instruction_5F_LFSR (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LFSR::GALGAS_pic_31__38_Instruction_5F_LFSR (const cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LFSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LFSR GALGAS_pic_31__38_Instruction_5F_LFSR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                             const GALGAS_luint & inAttribute_mFSRindex,
                                                                                             const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LFSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFSRindex.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LFSR (inAttribute_mInstructionLocation, inAttribute_mFSRindex, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_LFSR::setter_setMFSRindex (GALGAS_luint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    p->mProperty_mFSRindex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_LFSR::setter_setMImmediatExpression (GALGAS_immediatExpression inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    p->mProperty_mImmediatExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_LFSR::readProperty_mFSRindex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    return p->mProperty_mFSRindex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_LFSR::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LFSR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LFSR::cPtr_pic_31__38_Instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_luint & in_mFSRindex,
                                                                          const GALGAS_immediatExpression & in_mImmediatExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFSRindex (in_mFSRindex),
mProperty_mImmediatExpression (in_mImmediatExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LFSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;
}

void cPtr_pic_31__38_Instruction_5F_LFSR::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_LFSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFSRindex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_LFSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LFSR (mProperty_mInstructionLocation, mProperty_mFSRindex, mProperty_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_LFSR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ("pic18Instruction_LFSR",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LFSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LFSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LFSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LFSR GALGAS_pic_31__38_Instruction_5F_LFSR::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LFSR result ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR * p = (const GALGAS_pic_31__38_Instruction_5F_LFSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LFSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LFSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak::GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak & GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_LFSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak::GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak (const GALGAS_pic_31__38_Instruction_5F_LFSR & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LFSR GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak::bang_pic_31__38_Instruction_5F_LFSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_LFSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_LFSR) ;
      result = GALGAS_pic_31__38_Instruction_5F_LFSR ((cPtr_pic_31__38_Instruction_5F_LFSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_LFSR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak ("pic18Instruction_LFSR-weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LFSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LFSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_LTBLPTR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_LTBLPTR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_LTBLPTR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (const cPtr_pic_31__38_Instruction_5F_LTBLPTR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImmediatExpression.objectCompare (p->mProperty_mImmediatExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_LTBLPTR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_LTBLPTR::GALGAS_pic_31__38_Instruction_5F_LTBLPTR (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LTBLPTR::GALGAS_pic_31__38_Instruction_5F_LTBLPTR (const cPtr_pic_31__38_Instruction_5F_LTBLPTR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LTBLPTR GALGAS_pic_31__38_Instruction_5F_LTBLPTR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                   const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LTBLPTR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR (inAttribute_mInstructionLocation, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_LTBLPTR::setter_setMImmediatExpression (GALGAS_immediatExpression inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (cPtr_pic_31__38_Instruction_5F_LTBLPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
    p->mProperty_mImmediatExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_LTBLPTR::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (cPtr_pic_31__38_Instruction_5F_LTBLPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LTBLPTR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LTBLPTR::cPtr_pic_31__38_Instruction_5F_LTBLPTR (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mImmediatExpression (in_mImmediatExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LTBLPTR::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_LTBLPTR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LTBLPTR (mProperty_mInstructionLocation, mProperty_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_LTBLPTR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ("pic18Instruction_LTBLPTR",
                                                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LTBLPTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LTBLPTR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LTBLPTR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LTBLPTR GALGAS_pic_31__38_Instruction_5F_LTBLPTR::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LTBLPTR result ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR * p = (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LTBLPTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LTBLPTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak::GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak & GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak::GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LTBLPTR GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak::bang_pic_31__38_Instruction_5F_LTBLPTR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_LTBLPTR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
      result = GALGAS_pic_31__38_Instruction_5F_LTBLPTR ((cPtr_pic_31__38_Instruction_5F_LTBLPTR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_LTBLPTR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak ("pic18Instruction_LTBLPTR-weak",
                                                                                                 & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LTBLPTR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak::GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak & GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak::GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak::bang_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
      result = GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ((cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_LDATA8PTR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak ("pic18Instruction_LDATA8PTR-weak",
                                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATA8PTR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak::GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak & GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak::GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak::bang_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
      result = GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ((cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_LDATA16PTR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak ("pic18Instruction_LDATA16PTR-weak",
                                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATA16PTR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption::GALGAS_tableAccessOption (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_tableAccessOption::class_func_simpleAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_tableAccessOption result ;
  result.mEnum = kEnum_simpleAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_tableAccessOption::class_func_postIncrement (UNUSED_LOCATION_ARGS) {
  GALGAS_tableAccessOption result ;
  result.mEnum = kEnum_postIncrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_tableAccessOption::class_func_postDecrement (UNUSED_LOCATION_ARGS) {
  GALGAS_tableAccessOption result ;
  result.mEnum = kEnum_postDecrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_tableAccessOption::class_func_preIncrement (UNUSED_LOCATION_ARGS) {
  GALGAS_tableAccessOption result ;
  result.mEnum = kEnum_preIncrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_tableAccessOption::optional_simpleAccess () const {
  const bool ok = mEnum == kEnum_simpleAccess ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_tableAccessOption::optional_postIncrement () const {
  const bool ok = mEnum == kEnum_postIncrement ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_tableAccessOption::optional_postDecrement () const {
  const bool ok = mEnum == kEnum_postDecrement ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_tableAccessOption::optional_preIncrement () const {
  const bool ok = mEnum == kEnum_preIncrement ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_tableAccessOption [5] = {
  "(not built)",
  "simpleAccess",
  "postIncrement",
  "postDecrement",
  "preIncrement"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableAccessOption::getter_isSimpleAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_simpleAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableAccessOption::getter_isPostIncrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_postIncrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableAccessOption::getter_isPostDecrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_postDecrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableAccessOption::getter_isPreIncrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_preIncrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableAccessOption::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @tableAccessOption: ") ;
  ioString.appendCString (gEnumNameArrayFor_tableAccessOption [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_tableAccessOption::objectCompare (const GALGAS_tableAccessOption & inOperand) const {
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
//     @tableAccessOption generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableAccessOption ("tableAccessOption",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableAccessOption::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableAccessOption ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableAccessOption::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableAccessOption (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_tableAccessOption::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableAccessOption result ;
  const GALGAS_tableAccessOption * p = (const GALGAS_tableAccessOption *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_tableAccessOption *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableAccessOption", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_TBLRD reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_TBLRD::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_Instruction_5F_TBLRD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_Instruction_5F_TBLRD * p = (const cPtr_pic_31__38_Instruction_5F_TBLRD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_Instruction_5F_TBLRD::objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLRD & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_TBLRD::GALGAS_pic_31__38_Instruction_5F_TBLRD (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_TBLRD::GALGAS_pic_31__38_Instruction_5F_TBLRD (const cPtr_pic_31__38_Instruction_5F_TBLRD * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_TBLRD GALGAS_pic_31__38_Instruction_5F_TBLRD::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                               const GALGAS_tableAccessOption & inAttribute_mOption
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLRD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_TBLRD (inAttribute_mInstructionLocation, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_TBLRD::setter_setMOption (GALGAS_tableAccessOption inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_TBLRD * p = (cPtr_pic_31__38_Instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
    p->mProperty_mOption = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_pic_31__38_Instruction_5F_TBLRD::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_tableAccessOption () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_TBLRD * p = (cPtr_pic_31__38_Instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_TBLRD class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_TBLRD::cPtr_pic_31__38_Instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_tableAccessOption & in_mOption
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOption (in_mOption) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_TBLRD::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_TBLRD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_TBLRD (mProperty_mInstructionLocation, mProperty_mOption COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_TBLRD generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ("pic18Instruction_TBLRD",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_TBLRD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_TBLRD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_TBLRD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_TBLRD GALGAS_pic_31__38_Instruction_5F_TBLRD::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLRD result ;
  const GALGAS_pic_31__38_Instruction_5F_TBLRD * p = (const GALGAS_pic_31__38_Instruction_5F_TBLRD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_TBLRD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLRD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak::GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak & GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_TBLRD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak::GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak (const GALGAS_pic_31__38_Instruction_5F_TBLRD & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_TBLRD GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak::bang_pic_31__38_Instruction_5F_TBLRD_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_TBLRD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
      result = GALGAS_pic_31__38_Instruction_5F_TBLRD ((cPtr_pic_31__38_Instruction_5F_TBLRD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_TBLRD-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak ("pic18Instruction_TBLRD-weak",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_TBLRD_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLRD-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

