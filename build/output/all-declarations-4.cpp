#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_LFSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LFSR::objectCompare (const GGS_pic_31__38_Instruction_5F_LFSR & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LFSR::GGS_pic_31__38_Instruction_5F_LFSR (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR GGS_pic_31__38_Instruction_5F_LFSR::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_luint & in_mFSRindex,
                  const GGS_immediatExpression & in_mImmediatExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_LFSR * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_LFSR (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_LFSR_init_21__21__21_ (in_mInstructionLocation, in_mFSRindex, in_mImmediatExpression, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_LFSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::
pic_31__38_Instruction_5F_LFSR_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_luint & in_mFSRindex,
                                                 const GGS_immediatExpression & in_mImmediatExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFSRindex = in_mFSRindex ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR::GGS_pic_31__38_Instruction_5F_LFSR (const cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LFSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR GGS_pic_31__38_Instruction_5F_LFSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_luint & in_mFSRindex,
                                                                                       const GGS_immediatExpression & in_mImmediatExpression,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LFSR result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LFSR (in_mInstructionLocation, in_mFSRindex, in_mImmediatExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_Instruction_5F_LFSR::readProperty_mFSRindex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    return p->mProperty_mFSRindex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_Instruction_5F_LFSR::setProperty_mFSRindex (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    p->mProperty_mFSRindex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_LFSR::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_Instruction_5F_LFSR::setProperty_mImmediatExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    p->mProperty_mImmediatExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LFSR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LFSR::cPtr_pic_31__38_Instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mFSRindex (),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LFSR::cPtr_pic_31__38_Instruction_5F_LFSR (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_luint & in_mFSRindex,
                                                                          const GGS_immediatExpression & in_mImmediatExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFSRindex (),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFSRindex = in_mFSRindex ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_LFSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LFSR (mProperty_mInstructionLocation, mProperty_mFSRindex, mProperty_mImmediatExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_LFSR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFSRindex.printNonNullClassInstanceProperties ("mFSRindex") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_LFSR generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ("pic18Instruction_LFSR",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_LFSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_LFSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_LFSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR GGS_pic_31__38_Instruction_5F_LFSR::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LFSR result ;
  const GGS_pic_31__38_Instruction_5F_LFSR * p = (const GGS_pic_31__38_Instruction_5F_LFSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_LFSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LFSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_LFSR_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::GGS_pic_31__38_Instruction_5F_LFSR_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR_2E_weak & GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_LFSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::bang_pic_31__38_Instruction_5F_LFSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_LFSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR_2E_weak ("pic18Instruction_LFSR.weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_LTBLPTR GGS_pic_31__38_Instruction_5F_LTBLPTR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                             const GGS_immediatExpression & in_mImmediatExpression,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LTBLPTR result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR (in_mInstructionLocation, in_mImmediatExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

void GGS_pic_31__38_Instruction_5F_LTBLPTR::setProperty_mImmediatExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (cPtr_pic_31__38_Instruction_5F_LTBLPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
    p->mProperty_mImmediatExpression = inValue ;
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_LTBLPTR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ("pic18Instruction_LTBLPTR",
                                                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_LTBLPTR::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak & GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_LTBLPTR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::bang_pic_31__38_Instruction_5F_LTBLPTR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_LTBLPTR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak ("pic18Instruction_LTBLPTR.weak",
                                                                                                 & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak & GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::bang_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak ("pic18Instruction_LDATA8PTR.weak",
                                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak & GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::bang_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak ("pic18Instruction_LDATA16PTR.weak",
                                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableAccessOption ("tableAccessOption",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_tableAccessOption::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_TBLRD GGS_pic_31__38_Instruction_5F_TBLRD::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_tableAccessOption & in_mOption,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_TBLRD result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_TBLRD (in_mInstructionLocation, in_mOption,  inCompiler COMMA_THERE)) ;
  return result ;
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

void GGS_pic_31__38_Instruction_5F_TBLRD::setProperty_mOption (const GGS_tableAccessOption & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_TBLRD * p = (cPtr_pic_31__38_Instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
    p->mProperty_mOption = inValue ;
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_TBLRD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ("pic18Instruction_TBLRD",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_TBLRD::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak & GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_TBLRD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::bang_pic_31__38_Instruction_5F_TBLRD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_TBLRD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD_2E_weak ("pic18Instruction_TBLRD.weak",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_TBLWT GGS_pic_31__38_Instruction_5F_TBLWT::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_tableAccessOption & in_mOption,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_TBLWT result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_TBLWT (in_mInstructionLocation, in_mOption,  inCompiler COMMA_THERE)) ;
  return result ;
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

void GGS_pic_31__38_Instruction_5F_TBLWT::setProperty_mOption (const GGS_tableAccessOption & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_TBLWT * p = (cPtr_pic_31__38_Instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
    p->mProperty_mOption = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_TBLWT::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_TBLWT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ("pic18Instruction_TBLWT",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_TBLWT::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak & GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_TBLWT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::bang_pic_31__38_Instruction_5F_TBLWT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_TBLWT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT_2E_weak ("pic18Instruction_TBLWT.weak",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::staticTypeDescriptor (void) const {
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
// @pic_31__38_Instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_MNOP::objectCompare (const GGS_pic_31__38_Instruction_5F_MNOP & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_MNOP::GGS_pic_31__38_Instruction_5F_MNOP (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP GGS_pic_31__38_Instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::
pic_31__38_Instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                             const GGS_luint & in_mOccurrenceFactor,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP::GGS_pic_31__38_Instruction_5F_MNOP (const cPtr_pic_31__38_Instruction_5F_MNOP * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP GGS_pic_31__38_Instruction_5F_MNOP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_luint & in_mOccurrenceFactor,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_MNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_MNOP (in_mInstructionLocation, in_mOccurrenceFactor,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_Instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_MNOP * p = (cPtr_pic_31__38_Instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_Instruction_5F_MNOP::setProperty_mOccurrenceFactor (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_MNOP * p = (cPtr_pic_31__38_Instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MNOP) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_MNOP::cPtr_pic_31__38_Instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_MNOP::cPtr_pic_31__38_Instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_luint & in_mOccurrenceFactor,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;
}

void cPtr_pic_31__38_Instruction_5F_MNOP::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_MNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_MNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ("pic18Instruction_MNOP",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP GGS_pic_31__38_Instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_MNOP result ;
  const GGS_pic_31__38_Instruction_5F_MNOP * p = (const GGS_pic_31__38_Instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::GGS_pic_31__38_Instruction_5F_MNOP_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP_2E_weak & GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::bang_pic_31__38_Instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP_2E_weak ("pic18Instruction_MNOP.weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
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
// @pic_31__38_Instruction_5F_NOPBRA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_NOPBRA::objectCompare (const GGS_pic_31__38_Instruction_5F_NOPBRA & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_NOPBRA::GGS_pic_31__38_Instruction_5F_NOPBRA (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA GGS_pic_31__38_Instruction_5F_NOPBRA::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_NOPBRA * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_NOPBRA (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_NOPBRA_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_NOPBRA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::
pic_31__38_Instruction_5F_NOPBRA_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_luint & in_mOccurrenceFactor,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA::GGS_pic_31__38_Instruction_5F_NOPBRA (const cPtr_pic_31__38_Instruction_5F_NOPBRA * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA GGS_pic_31__38_Instruction_5F_NOPBRA::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_luint & in_mOccurrenceFactor,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_NOPBRA result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_NOPBRA (in_mInstructionLocation, in_mOccurrenceFactor,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_Instruction_5F_NOPBRA::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_NOPBRA * p = (cPtr_pic_31__38_Instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_Instruction_5F_NOPBRA::setProperty_mOccurrenceFactor (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_NOPBRA * p = (cPtr_pic_31__38_Instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_NOPBRA class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_NOPBRA::cPtr_pic_31__38_Instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_NOPBRA::cPtr_pic_31__38_Instruction_5F_NOPBRA (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_luint & in_mOccurrenceFactor,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_NOPBRA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ;
}

void cPtr_pic_31__38_Instruction_5F_NOPBRA::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_NOPBRA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_NOPBRA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_NOPBRA (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_NOPBRA::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_NOPBRA generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ("pic18Instruction_NOPBRA",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_NOPBRA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_NOPBRA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_NOPBRA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA GGS_pic_31__38_Instruction_5F_NOPBRA::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_NOPBRA result ;
  const GGS_pic_31__38_Instruction_5F_NOPBRA * p = (const GGS_pic_31__38_Instruction_5F_NOPBRA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_NOPBRA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_NOPBRA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak & GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_NOPBRA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::bang_pic_31__38_Instruction_5F_NOPBRA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_NOPBRA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA_2E_weak ("pic18Instruction_NOPBRA.weak",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_FOREVER GGS_pic_31__38_Instruction_5F_FOREVER::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                             const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                             const GGS_location & in_mEndOfInstructionList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FOREVER result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FOREVER (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
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

void GGS_pic_31__38_Instruction_5F_FOREVER::setProperty_mInstructionList (const GGS_pic_31__38_InstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FOREVER * p = (cPtr_pic_31__38_Instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
    p->mProperty_mInstructionList = inValue ;
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

void GGS_pic_31__38_Instruction_5F_FOREVER::setProperty_mEndOfInstructionList (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_FOREVER * p = (cPtr_pic_31__38_Instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
    p->mProperty_mEndOfInstructionList = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FOREVER::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_FOREVER::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ("pic18Instruction_FOREVER",
                                                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_FOREVER::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak & GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_FOREVER & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::bang_pic_31__38_Instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_FOREVER result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER_2E_weak ("pic18Instruction_FOREVER.weak",
                                                                                                 & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_if_5F_semi_5F_colon_5F_op ("if_semi_colon_op",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_if_5F_semi_5F_colon_5F_op::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::setProperty_mEmbeddedInstruction (const GGS_pic_31__38_PiccoloSimpleInstruction & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
    p->mProperty_mEmbeddedInstruction = inValue ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ("pic18Instruction_IF_SEMI_COLON",
                                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::bang_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ("pic18Instruction_IF_SEMI_COLON.weak",
                                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak (void) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak & GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::bang_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak ("pic18Instruction_IF_FA_SEMI_COLON.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak (void) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak & GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::bang_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak ("pic18Instruction_IF_BitTest.weak",
                                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak (void) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak & GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::bang_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak ("pic18Instruction_IF_IncDec.weak",
                                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_Instruction_5F_computed_5F_retlw::setProperty_mSizeExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    p->mProperty_mSizeExpression = inValue ;
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

void GGS_pic_31__38_Instruction_5F_computed_5F_retlw::setProperty_mImmediateExpressionList (const GGS_immediatExpressionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    p->mProperty_mImmediateExpressionList = inValue ;
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

void GGS_pic_31__38_Instruction_5F_computed_5F_retlw::setProperty_mUsesRelativeCall (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    p->mProperty_mUsesRelativeCall = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ("pic18Instruction_computed_retlw",
                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_computed_5F_retlw::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak ("pic18Instruction_computed_retlw.weak",
                                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_Instruction_5F_computed_5F_bra::setProperty_mSizeExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    p->mProperty_mSizeExpression = inValue ;
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

void GGS_pic_31__38_Instruction_5F_computed_5F_bra::setProperty_mTargetLabels (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    p->mProperty_mTargetLabels = inValue ;
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

void GGS_pic_31__38_Instruction_5F_computed_5F_bra::setProperty_mUsesRelativeCall (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    p->mProperty_mUsesRelativeCall = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ("pic18Instruction_computed_bra",
                                                                                                 & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_computed_5F_bra::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak ("pic18Instruction_computed_bra.weak",
                                                                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_Instruction_5F_computed_5F_goto::setProperty_mSizeExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    p->mProperty_mSizeExpression = inValue ;
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

void GGS_pic_31__38_Instruction_5F_computed_5F_goto::setProperty_mTargetLabels (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    p->mProperty_mTargetLabels = inValue ;
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

void GGS_pic_31__38_Instruction_5F_computed_5F_goto::setProperty_mUsesRelativeCall (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    p->mProperty_mUsesRelativeCall = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ("pic18Instruction_computed_goto",
                                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_computed_5F_goto::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak ("pic18Instruction_computed_goto.weak",
                                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_Instruction_5F_computed_5F_rcall::setProperty_mSizeExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    p->mProperty_mSizeExpression = inValue ;
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

void GGS_pic_31__38_Instruction_5F_computed_5F_rcall::setProperty_mTargetLabels (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    p->mProperty_mTargetLabels = inValue ;
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

void GGS_pic_31__38_Instruction_5F_computed_5F_rcall::setProperty_mUsesRelativeCall (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    p->mProperty_mUsesRelativeCall = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ("pic18Instruction_computed_rcall",
                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_computed_5F_rcall::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak ("pic18Instruction_computed_rcall.weak",
                                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak ("pic18ConditionExpression.weak",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_ConditionExpression_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition_2E_weak ("pic18RegisterTestCondition.weak",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_RegisterTestCondition_2E_weak::staticTypeDescriptor (void) const {
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
//  Enum pic18RegisterComparison
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison::GGS_pic_31__38_RegisterComparison (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_notEqual (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_notEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_equal (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_greaterOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_greater (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_greater ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_lowerOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_lower (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_lower ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_pic_31__38_RegisterComparison [7] = {
  "(not built)",
  "notEqual",
  "equal",
  "greaterOrEqual",
  "greater",
  "lowerOrEqual",
  "lower"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greaterOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greater == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lowerOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lower == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RegisterComparison::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @pic18RegisterComparison: ") ;
  ioString.appendCString (gEnumNameArrayFor_pic_31__38_RegisterComparison [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18RegisterComparison generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ("pic18RegisterComparison",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_RegisterComparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RegisterComparison::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RegisterComparison (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  const GGS_pic_31__38_RegisterComparison * p = (const GGS_pic_31__38_RegisterComparison *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RegisterComparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition_2E_weak ("pic18RegisterComparisonCondition.weak",
                                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_RegisterComparisonCondition_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition_2E_weak ("pic18IncDecRegisterInCondition.weak",
                                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_BccInStructuredCondition::setProperty_mConditionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    p->mProperty_mConditionLocation = inValue ;
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

void GGS_pic_31__38_BccInStructuredCondition::setProperty_mCondition (const GGS_conditional_5F_branch & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    p->mProperty_mCondition = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_BccInStructuredCondition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ("pic18BccInStructuredCondition",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_BccInStructuredCondition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition_2E_weak ("pic18BccInStructuredCondition.weak",
                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_BccInStructuredCondition_2E_weak::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_NegateCondition::setProperty_mCondition (const GGS_pic_31__38_ConditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_NegateCondition * p = (cPtr_pic_31__38_NegateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_NegateCondition) ;
    p->mProperty_mCondition = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_NegateCondition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ("pic18NegateCondition",
                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_NegateCondition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2E_weak ("pic18NegateCondition.weak",
                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_NegateCondition_2E_weak::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_AndCondition::setProperty_mLeftExpression (const GGS_pic_31__38_ConditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    p->mProperty_mLeftExpression = inValue ;
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

void GGS_pic_31__38_AndCondition::setProperty_mRightExpression (const GGS_pic_31__38_ConditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    p->mProperty_mRightExpression = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_AndCondition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition ("pic18AndCondition",
                                                                               & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_AndCondition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2E_weak ("pic18AndCondition.weak",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_AndCondition_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition_2E_weak ("pic18BitTestInStructuredCondition.weak",
                                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_Instruction_5F_structured_5F_if::setProperty_mIfCondition (const GGS_pic_31__38_ConditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mIfCondition = inValue ;
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

void GGS_pic_31__38_Instruction_5F_structured_5F_if::setProperty_mThenInstructionList (const GGS_pic_31__38_InstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mThenInstructionList = inValue ;
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

void GGS_pic_31__38_Instruction_5F_structured_5F_if::setProperty_mElseInstructionList (const GGS_pic_31__38_InstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mElseInstructionList = inValue ;
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

void GGS_pic_31__38_Instruction_5F_structured_5F_if::setProperty_mEndOfElsePartLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mEndOfElsePartLocation = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_structured_5F_if::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ("pic18Instruction_structured_if",
                                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak ("pic18Instruction_structured_if.weak",
                                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_pic_31__38_DoWhilePartList::description (String & ioString, const int32_t inIndentation) const {
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

GGS_pic_31__38_DoWhilePartList::GGS_pic_31__38_DoWhilePartList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList::GGS_pic_31__38_DoWhilePartList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_pic_31__38_DoWhilePartList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_pic_31__38_DoWhilePartList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::plusPlusAssignOperation (const GGS_pic_31__38_DoWhilePartList_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::class_func_listWithValue (const GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                                         const GGS_pic_31__38_InstructionList & inOperand1,
                                                                                         const GGS_location & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_pic_31__38_DoWhilePartList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_pic_31__38_DoWhilePartList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                const GGS_location & in_mEndOfPartLocation
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (in_mCondition,
                                                                in_mInstructionList,
                                                                in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::addAssignOperation (const GGS_pic_31__38_ConditionExpression & inOperand0,
                                                         const GGS_pic_31__38_InstructionList & inOperand1,
                                                         const GGS_location & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_append (const GGS_pic_31__38_ConditionExpression inOperand0,
                                                    const GGS_pic_31__38_InstructionList inOperand1,
                                                    const GGS_location inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_insertAtIndex (const GGS_pic_31__38_ConditionExpression inOperand0,
                                                           const GGS_pic_31__38_InstructionList inOperand1,
                                                           const GGS_location inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_removeAtIndex (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                           GGS_pic_31__38_InstructionList & outOperand1,
                                                           GGS_location & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
      outOperand0 = p->mObject.mProperty_mCondition ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_popFirst (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                      GGS_pic_31__38_InstructionList & outOperand1,
                                                      GGS_location & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_popLast (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                     GGS_pic_31__38_InstructionList & outOperand1,
                                                     GGS_location & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::method_first (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                   GGS_pic_31__38_InstructionList & outOperand1,
                                                   GGS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::method_last (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                  GGS_pic_31__38_InstructionList & outOperand1,
                                                  GGS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::add_operation (const GGS_pic_31__38_DoWhilePartList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_DoWhilePartList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_DoWhilePartList result = GGS_pic_31__38_DoWhilePartList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_DoWhilePartList result = GGS_pic_31__38_DoWhilePartList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_DoWhilePartList result = GGS_pic_31__38_DoWhilePartList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::plusAssignOperation (const GGS_pic_31__38_DoWhilePartList inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_setMConditionAtIndex (GGS_pic_31__38_ConditionExpression inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCondition = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_pic_31__38_DoWhilePartList::getter_mConditionAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  GGS_pic_31__38_ConditionExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    result = p->mObject.mProperty_mCondition ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_DoWhilePartList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  GGS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_setMEndOfPartLocationAtIndex (GGS_location inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfPartLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_DoWhilePartList::getter_mEndOfPartLocationAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    result = p->mObject.mProperty_mEndOfPartLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @pic_31__38_DoWhilePartList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_DoWhilePartList::DownEnumerator_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element DownEnumerator_pic_31__38_DoWhilePartList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression DownEnumerator_pic_31__38_DoWhilePartList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_DoWhilePartList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_pic_31__38_DoWhilePartList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mEndOfPartLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_DoWhilePartList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_DoWhilePartList::UpEnumerator_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element UpEnumerator_pic_31__38_DoWhilePartList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression UpEnumerator_pic_31__38_DoWhilePartList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_DoWhilePartList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_pic_31__38_DoWhilePartList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mEndOfPartLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18DoWhilePartList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ("pic18DoWhilePartList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_DoWhilePartList::staticTypeDescriptor (void) const {
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

void GGS_pic_31__38_Instruction_5F_do_5F_while::setProperty_mRepeatedInstructionList (const GGS_pic_31__38_InstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    p->mProperty_mRepeatedInstructionList = inValue ;
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

void GGS_pic_31__38_Instruction_5F_do_5F_while::setProperty_mEndOfRepeatedInstructionList (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    p->mProperty_mEndOfRepeatedInstructionList = inValue ;
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

void GGS_pic_31__38_Instruction_5F_do_5F_while::setProperty_mWhilePartList (const GGS_pic_31__38_DoWhilePartList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    p->mProperty_mWhilePartList = inValue ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_do_5F_while::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ("pic18Instruction_do_while",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2E_weak ("pic18Instruction_do_while.weak",
                                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_pic_31__38_InterruptDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInterruptName" ":") ;
  mObject.mProperty_mInterruptName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFastReturn" ":") ;
  mObject.mProperty_mFastReturn.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInterruptLocation" ":") ;
  mObject.mProperty_mEndOfInterruptLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList::GGS_pic_31__38_InterruptDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList::GGS_pic_31__38_InterruptDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_pic_31__38_InterruptDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_pic_31__38_InterruptDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::plusPlusAssignOperation (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inValue
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                         const GGS_bool & inOperand1,
                                                                                                         const GGS_pic_31__38_InstructionList & inOperand2,
                                                                                                         const GGS_location & inOperand3
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_pic_31__38_InterruptDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_pic_31__38_InterruptDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GGS_lstring & in_mInterruptName,
                                                                        const GGS_bool & in_mFastReturn,
                                                                        const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                        const GGS_location & in_mEndOfInterruptLocation
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (in_mInterruptName,
                                                                        in_mFastReturn,
                                                                        in_mInstructionList,
                                                                        in_mEndOfInterruptLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                 const GGS_bool & inOperand1,
                                                                 const GGS_pic_31__38_InstructionList & inOperand2,
                                                                 const GGS_location & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                            const GGS_bool inOperand1,
                                                            const GGS_pic_31__38_InstructionList inOperand2,
                                                            const GGS_location inOperand3,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mInterruptName ;
      outOperand1 = p->mObject.mProperty_mFastReturn ;
      outOperand2 = p->mObject.mProperty_mInstructionList ;
      outOperand3 = p->mObject.mProperty_mEndOfInterruptLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                              GGS_bool & outOperand1,
                                                              GGS_pic_31__38_InstructionList & outOperand2,
                                                              GGS_location & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mFastReturn ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                             GGS_bool & outOperand1,
                                                             GGS_pic_31__38_InstructionList & outOperand2,
                                                             GGS_location & outOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mFastReturn ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::method_first (GGS_lstring & outOperand0,
                                                           GGS_bool & outOperand1,
                                                           GGS_pic_31__38_InstructionList & outOperand2,
                                                           GGS_location & outOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mFastReturn ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::method_last (GGS_lstring & outOperand0,
                                                          GGS_bool & outOperand1,
                                                          GGS_pic_31__38_InstructionList & outOperand2,
                                                          GGS_location & outOperand3,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mFastReturn ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::add_operation (const GGS_pic_31__38_InterruptDefinitionList & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_InterruptDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InterruptDefinitionList result = GGS_pic_31__38_InterruptDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InterruptDefinitionList result = GGS_pic_31__38_InterruptDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InterruptDefinitionList result = GGS_pic_31__38_InterruptDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::plusAssignOperation (const GGS_pic_31__38_InterruptDefinitionList inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_setMInterruptNameAtIndex (GGS_lstring inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInterruptName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_InterruptDefinitionList::getter_mInterruptNameAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mInterruptName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_setMFastReturnAtIndex (GGS_bool inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFastReturn = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InterruptDefinitionList::getter_mFastReturnAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mFastReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_InterruptDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GGS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_setMEndOfInterruptLocationAtIndex (GGS_location inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInterruptLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_InterruptDefinitionList::getter_mEndOfInterruptLocationAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @pic_31__38_InterruptDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_InterruptDefinitionList::DownEnumerator_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element DownEnumerator_pic_31__38_InterruptDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38_InterruptDefinitionList::current_mInterruptName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mInterruptName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_pic_31__38_InterruptDefinitionList::current_mFastReturn (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mFastReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_InterruptDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_pic_31__38_InterruptDefinitionList::current_mEndOfInterruptLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mEndOfInterruptLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_InterruptDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_InterruptDefinitionList::UpEnumerator_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element UpEnumerator_pic_31__38_InterruptDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38_InterruptDefinitionList::current_mInterruptName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mInterruptName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_pic_31__38_InterruptDefinitionList::current_mFastReturn (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mFastReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_InterruptDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_pic_31__38_InterruptDefinitionList::current_mEndOfInterruptLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mEndOfInterruptLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18InterruptDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ("pic18InterruptDefinitionList",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_InterruptDefinitionList::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_pic_31__38_RoutineDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineName" ":") ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
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

GGS_pic_31__38_RoutineDefinitionList::GGS_pic_31__38_RoutineDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList::GGS_pic_31__38_RoutineDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_pic_31__38_RoutineDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_pic_31__38_RoutineDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::plusPlusAssignOperation (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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
  GGS_pic_31__38_RoutineDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GGS_pic_31__38_RoutineDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_pic_31__38_RoutineDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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
  macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (in_mRoutineName,
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

void GGS_pic_31__38_RoutineDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                               const GGS_luint & inOperand1,
                                                               const GGS_luint & inOperand2,
                                                               const GGS_bool & inOperand3,
                                                               const GGS_bool & inOperand4,
                                                               const GGS_pic_31__38_InstructionList & inOperand5,
                                                               const GGS_location & inOperand6
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
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
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mRoutineName ;
      outOperand1 = p->mObject.mProperty_mRequiredBank ;
      outOperand2 = p->mObject.mProperty_mReturnedBank ;
      outOperand3 = p->mObject.mProperty_mPreservesBank ;
      outOperand4 = p->mObject.mProperty_mIsNoReturn ;
      outOperand5 = p->mObject.mProperty_mInstructionList ;
      outOperand6 = p->mObject.mProperty_mEndOfRoutineLocation ;
    }
  }else{
    drop () ;    
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
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mRequiredBank ;
    outOperand2 = p->mObject.mProperty_mReturnedBank ;
    outOperand3 = p->mObject.mProperty_mPreservesBank ;
    outOperand4 = p->mObject.mProperty_mIsNoReturn ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfRoutineLocation ;
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
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mRequiredBank ;
    outOperand2 = p->mObject.mProperty_mReturnedBank ;
    outOperand3 = p->mObject.mProperty_mPreservesBank ;
    outOperand4 = p->mObject.mProperty_mIsNoReturn ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfRoutineLocation ;
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
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mRequiredBank ;
    outOperand2 = p->mObject.mProperty_mReturnedBank ;
    outOperand3 = p->mObject.mProperty_mPreservesBank ;
    outOperand4 = p->mObject.mProperty_mIsNoReturn ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfRoutineLocation ;
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
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mRequiredBank ;
    outOperand2 = p->mObject.mProperty_mReturnedBank ;
    outOperand3 = p->mObject.mProperty_mPreservesBank ;
    outOperand4 = p->mObject.mProperty_mIsNoReturn ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::add_operation (const GGS_pic_31__38_RoutineDefinitionList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_RoutineDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RoutineDefinitionList result = GGS_pic_31__38_RoutineDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RoutineDefinitionList result = GGS_pic_31__38_RoutineDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RoutineDefinitionList result = GGS_pic_31__38_RoutineDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::plusAssignOperation (const GGS_pic_31__38_RoutineDefinitionList inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMRoutineNameAtIndex (GGS_lstring inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_RoutineDefinitionList::getter_mRoutineNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMRequiredBankAtIndex (GGS_luint inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRequiredBank = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_RoutineDefinitionList::getter_mRequiredBankAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mRequiredBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMReturnedBankAtIndex (GGS_luint inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReturnedBank = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_RoutineDefinitionList::getter_mReturnedBankAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mReturnedBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMPreservesBankAtIndex (GGS_bool inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPreservesBank = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RoutineDefinitionList::getter_mPreservesBankAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mPreservesBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMIsNoReturnAtIndex (GGS_bool inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsNoReturn = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RoutineDefinitionList::getter_mIsNoReturnAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_RoutineDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GGS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMEndOfRoutineLocationAtIndex (GGS_location inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfRoutineLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_RoutineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @pic_31__38_RoutineDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_RoutineDefinitionList::DownEnumerator_pic_31__38_RoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element DownEnumerator_pic_31__38_RoutineDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38_RoutineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_pic_31__38_RoutineDefinitionList::current_mRequiredBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_pic_31__38_RoutineDefinitionList::current_mReturnedBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_pic_31__38_RoutineDefinitionList::current_mPreservesBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_pic_31__38_RoutineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_RoutineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_pic_31__38_RoutineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mEndOfRoutineLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_RoutineDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_RoutineDefinitionList::UpEnumerator_pic_31__38_RoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element UpEnumerator_pic_31__38_RoutineDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38_RoutineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_pic_31__38_RoutineDefinitionList::current_mRequiredBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_pic_31__38_RoutineDefinitionList::current_mReturnedBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_pic_31__38_RoutineDefinitionList::current_mPreservesBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_pic_31__38_RoutineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_RoutineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_pic_31__38_RoutineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mEndOfRoutineLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18RoutineDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ("pic18RoutineDefinitionList",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_RoutineDefinitionList::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_pic_31__38_MacroDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMacroName" ":") ;
  mObject.mProperty_mMacroName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantNameList" ":") ;
  mObject.mProperty_mConstantNameList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList::GGS_pic_31__38_MacroDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList::GGS_pic_31__38_MacroDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_pic_31__38_MacroDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_pic_31__38_MacroDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::plusPlusAssignOperation (const GGS_pic_31__38_MacroDefinitionList_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                 const GGS_lstringlist & inOperand1,
                                                                                                 const GGS_pic_31__38_InstructionList & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_pic_31__38_MacroDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_pic_31__38_MacroDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_lstring & in_mMacroName,
                                                                    const GGS_lstringlist & in_mConstantNameList,
                                                                    const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (in_mMacroName,
                                                                    in_mConstantNameList,
                                                                    in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                             const GGS_lstringlist & inOperand1,
                                                             const GGS_pic_31__38_InstructionList & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                        const GGS_lstringlist inOperand1,
                                                        const GGS_pic_31__38_InstructionList inOperand2,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                               const GGS_lstringlist inOperand1,
                                                               const GGS_pic_31__38_InstructionList inOperand2,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                               GGS_lstringlist & outOperand1,
                                                               GGS_pic_31__38_InstructionList & outOperand2,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mMacroName ;
      outOperand1 = p->mObject.mProperty_mConstantNameList ;
      outOperand2 = p->mObject.mProperty_mInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                          GGS_lstringlist & outOperand1,
                                                          GGS_pic_31__38_InstructionList & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mMacroName ;
    outOperand1 = p->mObject.mProperty_mConstantNameList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                         GGS_lstringlist & outOperand1,
                                                         GGS_pic_31__38_InstructionList & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mMacroName ;
    outOperand1 = p->mObject.mProperty_mConstantNameList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::method_first (GGS_lstring & outOperand0,
                                                       GGS_lstringlist & outOperand1,
                                                       GGS_pic_31__38_InstructionList & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mMacroName ;
    outOperand1 = p->mObject.mProperty_mConstantNameList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::method_last (GGS_lstring & outOperand0,
                                                      GGS_lstringlist & outOperand1,
                                                      GGS_pic_31__38_InstructionList & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mMacroName ;
    outOperand1 = p->mObject.mProperty_mConstantNameList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::add_operation (const GGS_pic_31__38_MacroDefinitionList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroDefinitionList result = GGS_pic_31__38_MacroDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroDefinitionList result = GGS_pic_31__38_MacroDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroDefinitionList result = GGS_pic_31__38_MacroDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::plusAssignOperation (const GGS_pic_31__38_MacroDefinitionList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_setMMacroNameAtIndex (GGS_lstring inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMacroName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_MacroDefinitionList::getter_mMacroNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    result = p->mObject.mProperty_mMacroName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_setMConstantNameListAtIndex (GGS_lstringlist inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantNameList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_pic_31__38_MacroDefinitionList::getter_mConstantNameListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    result = p->mObject.mProperty_mConstantNameList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_MacroDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  GGS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @pic_31__38_MacroDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_MacroDefinitionList::DownEnumerator_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element DownEnumerator_pic_31__38_MacroDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38_MacroDefinitionList::current_mMacroName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mMacroName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_pic_31__38_MacroDefinitionList::current_mConstantNameList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_MacroDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_MacroDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_MacroDefinitionList::UpEnumerator_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element UpEnumerator_pic_31__38_MacroDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38_MacroDefinitionList::current_mMacroName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mMacroName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_pic_31__38_MacroDefinitionList::current_mConstantNameList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_MacroDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18MacroDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ("pic18MacroDefinitionList",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_MacroDefinitionList::staticTypeDescriptor (void) const {
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

cMapElement_pic_31__38_MacroMap::cMapElement_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mConstantNameList (inValue.mProperty_mConstantNameList),
mProperty_mInstructionList (inValue.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_pic_31__38_MacroMap::cMapElement_pic_31__38_MacroMap (const GGS_lstring & inKey,
                                                                  const GGS_lstringlist & in_mConstantNameList,
                                                                  const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstantNameList (in_mConstantNameList),
mProperty_mInstructionList (in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_pic_31__38_MacroMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_pic_31__38_MacroMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_pic_31__38_MacroMap (mProperty_lkey, mProperty_mConstantNameList, mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_pic_31__38_MacroMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantNameList" ":") ;
  mProperty_mConstantNameList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap::GGS_pic_31__38_MacroMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap::GGS_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap & GGS_pic_31__38_MacroMap::operator = (const GGS_pic_31__38_MacroMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_ GGS_pic_31__38_MacroMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_pic_31__38_MacroMap * p = (cMapElement_pic_31__38_MacroMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_pic_31__38_MacroMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_pic_31__38_MacroMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mConstantNameList = p->mProperty_mConstantNameList ;
      element.mProperty_mInstructionList = p->mProperty_mInstructionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::class_func_mapWithMapToOverride (const GGS_pic_31__38_MacroMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::setter_insertKey (GGS_lstring inKey,
                                                GGS_lstringlist inArgument0,
                                                GGS_pic_31__38_InstructionList inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38_MacroMap * p = nullptr ;
  macroMyNew (p, cMapElement_pic_31__38_MacroMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' macro is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_pic_31__38_MacroMap_searchKey = "there is no '%K' macro" ;

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::method_searchKey (GGS_lstring inKey,
                                                GGS_lstringlist & outArgument0,
                                                GGS_pic_31__38_InstructionList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_pic_31__38_MacroMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    outArgument0 = p->mProperty_mConstantNameList ;
    outArgument1 = p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_pic_31__38_MacroMap::getter_mConstantNameListForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) attributes ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    result = p->mProperty_mConstantNameList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_MacroMap::getter_mInstructionListForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) attributes ;
  GGS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::setter_setMConstantNameListForKey (GGS_lstringlist inAttributeValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38_MacroMap * p = (cMapElement_pic_31__38_MacroMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    p->mProperty_mConstantNameList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::setter_setMInstructionListForKey (GGS_pic_31__38_InstructionList inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38_MacroMap * p = (cMapElement_pic_31__38_MacroMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    p->mProperty_mInstructionList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_pic_31__38_MacroMap * GGS_pic_31__38_MacroMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38_MacroMap * result = (cMapElement_pic_31__38_MacroMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_pic_31__38_MacroMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @pic_31__38_MacroMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_MacroMap::DownEnumerator_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element DownEnumerator_pic_31__38_MacroMap::current (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return GGS_pic_31__38_MacroMap_2E_element (p->mProperty_lkey, p->mProperty_mConstantNameList, p->mProperty_mInstructionList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38_MacroMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_pic_31__38_MacroMap::current_mConstantNameList (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return p->mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_MacroMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return p->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @pic_31__38_MacroMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_MacroMap::UpEnumerator_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element UpEnumerator_pic_31__38_MacroMap::current (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return GGS_pic_31__38_MacroMap_2E_element (p->mProperty_lkey, p->mProperty_mConstantNameList, p->mProperty_mInstructionList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38_MacroMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_pic_31__38_MacroMap::current_mConstantNameList (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return p->mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_MacroMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return p->mProperty_mInstructionList ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18MacroMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap ("pic18MacroMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_MacroMap::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_routineDeclarationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineName" ":") ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
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
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList::GGS_routineDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList::GGS_routineDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_routineDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_routineDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::plusPlusAssignOperation (const GGS_routineDeclarationList_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineDeclarationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_luint & inOperand1,
                                                                                 const GGS_luint & inOperand2,
                                                                                 const GGS_bool & inOperand3,
                                                                                 const GGS_bool & inOperand4
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_routineDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_routineDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_routineDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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
  macroMyNew (p, cCollectionElement_routineDeclarationList (in_mRoutineName,
                                                            in_mRequiredBank,
                                                            in_mReturnedBank,
                                                            in_mPreservesBank,
                                                            in_mIsNoReturn COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                     const GGS_luint & inOperand1,
                                                     const GGS_luint & inOperand2,
                                                     const GGS_bool & inOperand3,
                                                     const GGS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_append (const GGS_lstring inOperand0,
                                                const GGS_luint inOperand1,
                                                const GGS_luint inOperand2,
                                                const GGS_bool inOperand3,
                                                const GGS_bool inOperand4,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mRoutineName ;
      outOperand1 = p->mObject.mProperty_mRequiredBank ;
      outOperand2 = p->mObject.mProperty_mReturnedBank ;
      outOperand3 = p->mObject.mProperty_mPreservesBank ;
      outOperand4 = p->mObject.mProperty_mIsNoReturn ;
    }
  }else{
    drop () ;    
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
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mRequiredBank ;
    outOperand2 = p->mObject.mProperty_mReturnedBank ;
    outOperand3 = p->mObject.mProperty_mPreservesBank ;
    outOperand4 = p->mObject.mProperty_mIsNoReturn ;
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
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mRequiredBank ;
    outOperand2 = p->mObject.mProperty_mReturnedBank ;
    outOperand3 = p->mObject.mProperty_mPreservesBank ;
    outOperand4 = p->mObject.mProperty_mIsNoReturn ;
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
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mRequiredBank ;
    outOperand2 = p->mObject.mProperty_mReturnedBank ;
    outOperand3 = p->mObject.mProperty_mPreservesBank ;
    outOperand4 = p->mObject.mProperty_mIsNoReturn ;
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
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mRequiredBank ;
    outOperand2 = p->mObject.mProperty_mReturnedBank ;
    outOperand3 = p->mObject.mProperty_mPreservesBank ;
    outOperand4 = p->mObject.mProperty_mIsNoReturn ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::add_operation (const GGS_routineDeclarationList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineDeclarationList result = GGS_routineDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineDeclarationList result = GGS_routineDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineDeclarationList result = GGS_routineDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::plusAssignOperation (const GGS_routineDeclarationList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMRoutineNameAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_routineDeclarationList::getter_mRoutineNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMRequiredBankAtIndex (GGS_luint inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRequiredBank = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_routineDeclarationList::getter_mRequiredBankAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mRequiredBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMReturnedBankAtIndex (GGS_luint inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReturnedBank = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_routineDeclarationList::getter_mReturnedBankAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mReturnedBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMPreservesBankAtIndex (GGS_bool inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPreservesBank = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineDeclarationList::getter_mPreservesBankAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mPreservesBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMIsNoReturnAtIndex (GGS_bool inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsNoReturn = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineDeclarationList::getter_mIsNoReturnAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineDeclarationList::DownEnumerator_routineDeclarationList (const GGS_routineDeclarationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element DownEnumerator_routineDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineDeclarationList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_routineDeclarationList::current_mRequiredBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_routineDeclarationList::current_mReturnedBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineDeclarationList::current_mPreservesBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineDeclarationList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineDeclarationList::UpEnumerator_routineDeclarationList (const GGS_routineDeclarationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element UpEnumerator_routineDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineDeclarationList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_routineDeclarationList::current_mRequiredBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_routineDeclarationList::current_mReturnedBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineDeclarationList::current_mPreservesBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineDeclarationList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}




//--------------------------------------------------------------------------------------------------
//     @routineDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList ("routineDeclarationList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineDeclarationList::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programKind ("programKind",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_programKind::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_dataList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDataName" ":") ;
  mObject.mProperty_mDataName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValueList" ":") ;
  mObject.mProperty_mValueList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsByteList" ":") ;
  mObject.mProperty_mIsByteList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList::GGS_dataList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList::GGS_dataList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_dataList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_dataList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::plusPlusAssignOperation (const GGS_dataList_2E_element & inValue
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_dataList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                     const GGS_immediatExpressionList & inOperand1,
                                                     const GGS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) {
  GGS_dataList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_dataList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_dataList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                              const GGS_lstring & in_mDataName,
                                              const GGS_immediatExpressionList & in_mValueList,
                                              const GGS_bool & in_mIsByteList
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = nullptr ;
  macroMyNew (p, cCollectionElement_dataList (in_mDataName,
                                              in_mValueList,
                                              in_mIsByteList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::addAssignOperation (const GGS_lstring & inOperand0,
                                       const GGS_immediatExpressionList & inOperand1,
                                       const GGS_bool & inOperand2
                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_dataList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_append (const GGS_lstring inOperand0,
                                  const GGS_immediatExpressionList inOperand1,
                                  const GGS_bool inOperand2,
                                  Compiler * /* inCompiler */
                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_dataList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                         const GGS_immediatExpressionList inOperand1,
                                         const GGS_bool inOperand2,
                                         const GGS_uint inInsertionIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_dataList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                         GGS_immediatExpressionList & outOperand1,
                                         GGS_bool & outOperand2,
                                         const GGS_uint inRemoveIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_dataList) ;
      outOperand0 = p->mObject.mProperty_mDataName ;
      outOperand1 = p->mObject.mProperty_mValueList ;
      outOperand2 = p->mObject.mProperty_mIsByteList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_popFirst (GGS_lstring & outOperand0,
                                    GGS_immediatExpressionList & outOperand1,
                                    GGS_bool & outOperand2,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    outOperand0 = p->mObject.mProperty_mDataName ;
    outOperand1 = p->mObject.mProperty_mValueList ;
    outOperand2 = p->mObject.mProperty_mIsByteList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_popLast (GGS_lstring & outOperand0,
                                   GGS_immediatExpressionList & outOperand1,
                                   GGS_bool & outOperand2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    outOperand0 = p->mObject.mProperty_mDataName ;
    outOperand1 = p->mObject.mProperty_mValueList ;
    outOperand2 = p->mObject.mProperty_mIsByteList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::method_first (GGS_lstring & outOperand0,
                                 GGS_immediatExpressionList & outOperand1,
                                 GGS_bool & outOperand2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    outOperand0 = p->mObject.mProperty_mDataName ;
    outOperand1 = p->mObject.mProperty_mValueList ;
    outOperand2 = p->mObject.mProperty_mIsByteList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::method_last (GGS_lstring & outOperand0,
                                GGS_immediatExpressionList & outOperand1,
                                GGS_bool & outOperand2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    outOperand0 = p->mObject.mProperty_mDataName ;
    outOperand1 = p->mObject.mProperty_mValueList ;
    outOperand2 = p->mObject.mProperty_mIsByteList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::add_operation (const GGS_dataList & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_dataList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::getter_subListWithRange (const GGS_range & inRange,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_dataList result = GGS_dataList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_dataList result = GGS_dataList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::getter_subListToIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_dataList result = GGS_dataList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::plusAssignOperation (const GGS_dataList inOperand,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_setMDataNameAtIndex (GGS_lstring inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDataName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dataList::getter_mDataNameAtIndex (const GGS_uint & inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    result = p->mObject.mProperty_mDataName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_setMValueListAtIndex (GGS_immediatExpressionList inOperand,
                                                GGS_uint inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValueList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_dataList::getter_mValueListAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  GGS_immediatExpressionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_setMIsByteListAtIndex (GGS_bool inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsByteList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_dataList::getter_mIsByteListAtIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    result = p->mObject.mProperty_mIsByteList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @dataList
//--------------------------------------------------------------------------------------------------

DownEnumerator_dataList::DownEnumerator_dataList (const GGS_dataList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element DownEnumerator_dataList::current (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_dataList::current_mDataName (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mDataName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList DownEnumerator_dataList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_dataList::current_mIsByteList (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mIsByteList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @dataList
//--------------------------------------------------------------------------------------------------

UpEnumerator_dataList::UpEnumerator_dataList (const GGS_dataList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element UpEnumerator_dataList::current (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_dataList::current_mDataName (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mDataName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList UpEnumerator_dataList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_dataList::current_mIsByteList (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mIsByteList ;
}




//--------------------------------------------------------------------------------------------------
//     @dataList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList ("dataList",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dataList::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_checkpicList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorLocation" ":") ;
  mObject.mProperty_mErrorLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValueList" ":") ;
  mObject.mProperty_mValueList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList::GGS_checkpicList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList::GGS_checkpicList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_checkpicList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_checkpicList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::plusPlusAssignOperation (const GGS_checkpicList_2E_element & inValue
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_checkpicList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::class_func_listWithValue (const GGS_location & inOperand0,
                                                             const GGS_lstringlist & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  GGS_checkpicList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_checkpicList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_checkpicList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_location & in_mErrorLocation,
                                                  const GGS_lstringlist & in_mValueList
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_checkpicList * p = nullptr ;
  macroMyNew (p, cCollectionElement_checkpicList (in_mErrorLocation,
                                                  in_mValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::addAssignOperation (const GGS_location & inOperand0,
                                           const GGS_lstringlist & inOperand1
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_checkpicList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_append (const GGS_location inOperand0,
                                      const GGS_lstringlist inOperand1,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_checkpicList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_insertAtIndex (const GGS_location inOperand0,
                                             const GGS_lstringlist inOperand1,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_checkpicList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_removeAtIndex (GGS_location & outOperand0,
                                             GGS_lstringlist & outOperand1,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_checkpicList) ;
      outOperand0 = p->mObject.mProperty_mErrorLocation ;
      outOperand1 = p->mObject.mProperty_mValueList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_popFirst (GGS_location & outOperand0,
                                        GGS_lstringlist & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    outOperand0 = p->mObject.mProperty_mErrorLocation ;
    outOperand1 = p->mObject.mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_popLast (GGS_location & outOperand0,
                                       GGS_lstringlist & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    outOperand0 = p->mObject.mProperty_mErrorLocation ;
    outOperand1 = p->mObject.mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::method_first (GGS_location & outOperand0,
                                     GGS_lstringlist & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    outOperand0 = p->mObject.mProperty_mErrorLocation ;
    outOperand1 = p->mObject.mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::method_last (GGS_location & outOperand0,
                                    GGS_lstringlist & outOperand1,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    outOperand0 = p->mObject.mProperty_mErrorLocation ;
    outOperand1 = p->mObject.mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::add_operation (const GGS_checkpicList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_checkpicList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_checkpicList result = GGS_checkpicList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_checkpicList result = GGS_checkpicList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_checkpicList result = GGS_checkpicList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::plusAssignOperation (const GGS_checkpicList inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_setMErrorLocationAtIndex (GGS_location inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_checkpicList::getter_mErrorLocationAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    result = p->mObject.mProperty_mErrorLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_setMValueListAtIndex (GGS_lstringlist inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValueList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_checkpicList::getter_mValueListAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @checkpicList
//--------------------------------------------------------------------------------------------------

DownEnumerator_checkpicList::DownEnumerator_checkpicList (const GGS_checkpicList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element DownEnumerator_checkpicList::current (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_checkpicList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject.mProperty_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_checkpicList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject.mProperty_mValueList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @checkpicList
//--------------------------------------------------------------------------------------------------

UpEnumerator_checkpicList::UpEnumerator_checkpicList (const GGS_checkpicList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element UpEnumerator_checkpicList::current (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_checkpicList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject.mProperty_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_checkpicList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject.mProperty_mValueList ;
}




//--------------------------------------------------------------------------------------------------
//     @checkpicList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList ("checkpicList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_checkpicList::staticTypeDescriptor (void) const {
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
//  Extension Getter '@pic18RegisterComparison mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_pic_31__38_RegisterComparison & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_RegisterComparison temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_pic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_notEqual:
    {
      result_outResult = GGS_string ("!=") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_equal:
    {
      result_outResult = GGS_string ("==") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greaterOrEqual:
    {
      result_outResult = GGS_string (">=") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greater:
    {
      result_outResult = GGS_string (">") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lowerOrEqual:
    {
      result_outResult = GGS_string ("<=") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lower:
    {
      result_outResult = GGS_string ("<") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@conditional_branch condition'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_condition (const GGS_conditional_5F_branch & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_conditional_5F_branch temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_conditional_5F_branch::Enumeration::invalid:
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bz:
    {
      result_outResult = GGS_string ("Z") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnz:
    {
      result_outResult = GGS_string ("NZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bn:
    {
      result_outResult = GGS_string ("N") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnn:
    {
      result_outResult = GGS_string ("NN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bc:
    {
      result_outResult = GGS_string ("C") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnc:
    {
      result_outResult = GGS_string ("NC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bov:
    {
      result_outResult = GGS_string ("OV") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnov:
    {
      result_outResult = GGS_string ("NOV") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@pic18InstructionWithNoOperandKind assemblyCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_assemblyCode (const GGS_pic_31__38_InstructionWithNoOperandKind & inObject,
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
//  Extension Getter '@FA_instruction_base_code mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_FA_5F_instruction_5F_base_5F_code & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_FA_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      result_outResult = GGS_string ("CLRF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      result_outResult = GGS_string ("CPFSEQ") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      result_outResult = GGS_string ("CPFSGT") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      result_outResult = GGS_string ("CPFSLT") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      result_outResult = GGS_string ("MOVWF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      result_outResult = GGS_string ("MULWF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      result_outResult = GGS_string ("NEGF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      result_outResult = GGS_string ("SETF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      result_outResult = GGS_string ("TSTFSZ") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@bit_oriented_op mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_bit_5F_oriented_5F_op & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      result_outResult = GGS_string ("BCF") ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      result_outResult = GGS_string ("BSF") ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BTG:
    {
      result_outResult = GGS_string ("BTG") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@conditional_branch mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_conditional_5F_branch & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_conditional_5F_branch temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_conditional_5F_branch::Enumeration::invalid:
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bz:
    {
      result_outResult = GGS_string ("BZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnz:
    {
      result_outResult = GGS_string ("BNZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bn:
    {
      result_outResult = GGS_string ("BN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnn:
    {
      result_outResult = GGS_string ("BNN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bc:
    {
      result_outResult = GGS_string ("BC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnc:
    {
      result_outResult = GGS_string ("BNC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bov:
    {
      result_outResult = GGS_string ("BOV") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnov:
    {
      result_outResult = GGS_string ("BNOV") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@literal_instruction_opcode mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_literal_5F_instruction_5F_opcode & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ADDLW:
    {
      result_outResult = GGS_string ("ADDLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      result_outResult = GGS_string ("ANDLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      result_outResult = GGS_string ("IORLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      result_outResult = GGS_string ("MOVLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MULLW:
    {
      result_outResult = GGS_string ("MULLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_SUBLW:
    {
      result_outResult = GGS_string ("SUBLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      result_outResult = GGS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@tableAccessOption mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_tableAccessOption & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_tableAccessOption temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_tableAccessOption::Enumeration::invalid:
    break ;
  case GGS_tableAccessOption::Enumeration::enum_simpleAccess:
    {
      result_outResult = GGS_string ("*") ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postIncrement:
    {
      result_outResult = GGS_string ("*+") ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postDecrement:
    {
      result_outResult = GGS_string ("*-") ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_preIncrement:
    {
      result_outResult = GGS_string ("+*") ;
    }
    break ;
  }
//---
  return result_outResult ;
}






//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument_interruptDefinitionList,
                                                                         GGS_pic_31__38_RoutineDefinitionList & ioArgument_routineDefinitionList,
                                                                         GGS_pic_31__38_MacroDefinitionList & ioArgument_ioMacroDefinitionList,
                                                                         GGS_lstringlist & ioArgument_unusedRoutineList,
                                                                         GGS_lstringlist & ioArgument_inlinedRoutineList,
                                                                         GGS_ramDefinitionList & ioArgument_ramDefinitionList,
                                                                         GGS_lstringlist & ioArgument_unusedRegisterList,
                                                                         GGS_configDefinitionList & ioArgument_configDefinitionList,
                                                                         GGS_constantDefinitionList & ioArgument_constantDefinitionList,
                                                                         GGS_checkpicList & ioArgument_ioCheckpicList,
                                                                         GGS_dataList & ioArgument_dataList,
                                                                         GGS_bool & ioArgument_needsComputedGoto_32_,
                                                                         GGS_bool & ioArgument_needsComputedGoto_34_,
                                                                         Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 45)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_unusedRegister_1261 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        ioArgument_unusedRegisterList.addAssignOperation (var_unusedRegister_1261  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 49)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GGS_lstring var_unusedRoutine_1428 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        ioArgument_unusedRoutineList.addAssignOperation (var_unusedRoutine_1428  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 58)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        GGS_lstring var_inlinedRoutine_1578 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        ioArgument_inlinedRoutineList.addAssignOperation (var_inlinedRoutine_1578  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 66)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 5: {
      nt_configuration_5F_definition_ (ioArgument_configDefinitionList, inCompiler) ;
    } break ;
    case 6: {
      nt_ram_5F_definition_ (ioArgument_ramDefinitionList, inCompiler) ;
    } break ;
    case 7: {
      nt_constant_5F_definition_ (ioArgument_constantDefinitionList, inCompiler) ;
    } break ;
    case 8: {
      nt_interrupt_5F_definition_ (ioArgument_interruptDefinitionList, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_, inCompiler) ;
    } break ;
    case 9: {
      nt_routine_5F_definition_ (ioArgument_routineDefinitionList, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_, inCompiler) ;
    } break ;
    case 10: {
      nt_data_5F_definition_ (ioArgument_dataList, inCompiler) ;
    } break ;
    case 11: {
      nt_checkpic_5F_definition_ (ioArgument_ioCheckpicList, inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas", 91)) ;
      GGS_lstring var_includedFilePath_2223 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
      cGrammar_pic_31__38__5F_include_5F_grammar::_performSourceFileParsing_ (inCompiler, var_includedFilePath_2223, ioArgument_interruptDefinitionList, ioArgument_routineDefinitionList, ioArgument_ioMacroDefinitionList, ioArgument_unusedRoutineList, ioArgument_inlinedRoutineList, ioArgument_ramDefinitionList, ioArgument_unusedRegisterList, ioArgument_configDefinitionList, ioArgument_constantDefinitionList, ioArgument_ioCheckpicList, ioArgument_dataList, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 93)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      GGS_lstring var_macroName_2696 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      GGS_lstringlist var_constantNameList_2735 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        GGS_lstring var_constantName_2793 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        var_constantNameList_2735.addAssignOperation (var_constantName_2793  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 115)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      GGS_labelMap var_labelMap_2908 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
      GGS_pic_31__38_InstructionList var_instructionList_2979 ;
      nt_instruction_5F_list_ (var_instructionList_2979, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_, var_labelMap_2908, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
      ioArgument_ioMacroDefinitionList.addAssignOperation (var_macroName_2696, var_constantNameList_2735, var_instructionList_2979  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 128)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 45)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 5: {
      nt_configuration_5F_definition_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_ram_5F_definition_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_constant_5F_definition_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_interrupt_5F_definition_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_routine_5F_definition_parse (inCompiler) ;
    } break ;
    case 10: {
      nt_data_5F_definition_parse (inCompiler) ;
    } break ;
    case 11: {
      nt_checkpic_5F_definition_parse (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas", 91)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 45)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 5: {
      nt_configuration_5F_definition_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_ram_5F_definition_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_constant_5F_definition_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_interrupt_5F_definition_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_routine_5F_definition_indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_data_5F_definition_indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_checkpic_5F_definition_indexing (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas", 91)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GGS_checkpicList & ioArgument_ioList,
                                                                                           Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  GGS_location var_loc_3315 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 140)) ;
  GGS_lstringlist var_valueList_3342 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_s_3413 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    var_valueList_3342.addAssignOperation (var_s_3413  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 144)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioList.addAssignOperation (var_loc_3315, var_valueList_3342  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 148)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GGS_dataList & ioArgument_ioDataList,
                                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    appendFixItActions (fixItArray0, EnumFixItKind::fixItReplace, GGS_string ("data16")) ;
    inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 156)), GGS_string ("obsolete keyword"), fixItArray0  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 156)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_dataName_3735 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  GGS_immediatExpressionList var_valueList_3780 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_immediatExpression var_expression_3857 ;
    nt_immediate_5F_expression_ (var_expression_3857, inCompiler) ;
    var_valueList_3780.addAssignOperation (var_expression_3857, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 165))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 165)) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 167)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
  ioArgument_ioDataList.addAssignOperation (var_dataName_3735, var_valueList_3780, GGS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 170)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_parse (inCompiler) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 167)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 167)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GGS_dataList & ioArgument_ioDataList,
                                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  GGS_lstring var_dataName_4131 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  GGS_immediatExpressionList var_valueList_4176 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_immediatExpression var_expression_4253 ;
    nt_immediate_5F_expression_ (var_expression_4253, inCompiler) ;
    var_valueList_4176.addAssignOperation (var_expression_4253, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 182))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 182)) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
  ioArgument_ioDataList.addAssignOperation (var_dataName_4131, var_valueList_4176, GGS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 187)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_parse (inCompiler) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GGS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                                                                        GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                        GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                        GGS_labelMap & ioArgument_ioLabelMap,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_9 (inCompiler)) {
    case 2: {
      GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_4726 ;
      nt_simple_5F_instruction_ (var_instruction_4726, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4726  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 202)) ;
    } break ;
    case 3: {
      GGS_pic_31__38_PiccoloInstruction var_instruction_4825 ;
      nt_structured_5F_instruction_ (var_instruction_4825, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4825  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 209)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_9 (inCompiler)) {
    case 2: {
      nt_simple_5F_instruction_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_structured_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_9 (inCompiler)) {
    case 2: {
      nt_simple_5F_instruction_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_structured_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                                                            GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                            GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                            Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  GGS_lstring var_interruptName_5214 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 221)) ;
  GGS_bool var_isFast_5240 ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
    var_isFast_5240 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 226)) ;
    var_isFast_5240 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  GGS_labelMap var_labelMap_5337 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_InstructionList var_instructionList_5382 ;
  nt_instruction_5F_list_ (var_instructionList_5382, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5337, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
  ioArgument_ioInterruptDefinitionList.addAssignOperation (var_interruptName_5214, var_isFast_5240, var_instructionList_5382, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 237))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 237)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 221)) ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 226)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 221)) ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 226)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  GGS_bool var_noreturn_5778 ;
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
    var_noreturn_5778 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 250)) ;
    var_noreturn_5778 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  GGS_lstring var_routineName_5904 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 254)) ;
  GGS_luint var_requiredBank_5956 ;
  GGS_luint var_returnedBank_5982 ;
  GGS_bool var_preservesBank_6007 ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
    var_requiredBank_5956 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 259)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 259)), inCompiler COMMA_HERE) ;
    var_returnedBank_5982 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 260)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 260)), inCompiler COMMA_HERE) ;
    var_preservesBank_6007 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 266)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_noreturn_5778.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 268)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 268)) ;
        }
      }
      var_preservesBank_6007 = GGS_bool (true) ;
      var_requiredBank_5956 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 271)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 271)), inCompiler COMMA_HERE) ;
      var_returnedBank_5982 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 272)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 272)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      var_requiredBank_5956 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 275)) ;
      var_preservesBank_6007 = GGS_bool (false) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
        var_returnedBank_5982 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 278)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 278)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        var_returnedBank_5982 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 281)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_noreturn_5778.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            TC_Array <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 283)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 283)) ;
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      var_returnedBank_5982 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 288)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_noreturn_5778.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 290)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 290)) ;
        }
      }
      var_preservesBank_6007 = GGS_bool (false) ;
      var_requiredBank_5956 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 293)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 293)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  GGS_labelMap var_labelMap_7163 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_InstructionList var_instructionList_7230 ;
  nt_instruction_5F_list_ (var_instructionList_7230, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7163, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_5904, var_requiredBank_5956, var_returnedBank_5982, var_preservesBank_6007, var_noreturn_5778, var_instructionList_7230, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 304))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 304)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 250)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 254)) ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 266)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 275)) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 281)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 288)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 250)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 254)) ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 266)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 275)) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 281)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 288)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 311)) ;
  GGS_pic_31__38_ConditionExpression var_condition_7608 ;
  nt_condition_5F_factor_ (var_condition_7608, inCompiler) ;
  outArgument_outCondition = GGS_pic_31__38_NegateCondition::init_21_ (var_condition_7608, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 311)) ;
  nt_condition_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 311)) ;
  nt_condition_5F_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    GGS_bool var_isIncrement_7988 ;
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 330)) ;
      var_isIncrement_7988 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 332)) ;
      var_isIncrement_7988 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_8123 ;
    nt_register_5F_parsing_ (var_registerExpression_8123, inCompiler) ;
    GGS_bool var_W_5F_isDestination_8156 ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_8156 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      var_W_5F_isDestination_8156 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_8300 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
    GGS_string var_condition_8332 = var_conditionString_8300.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 342)) ;
    GGS_bool var_branchIfZero_8399 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_condition_8332.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_branchIfZero_8399 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_condition_8332.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_branchIfZero_8399 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_8300.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_8300.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 349)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 349)), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 349)) ;
        var_branchIfZero_8399.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_pic_31__38_IncDecRegisterInCondition::init_21__21__21__21_ (var_registerExpression_8123, var_isIncrement_7988, var_W_5F_isDestination_8156, var_branchIfZero_8399, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_registerExpression var_registerExpression_8851 ;
    nt_register_5F_parsing_ (var_registerExpression_8851, inCompiler) ;
    GGS_pic_31__38_RegisterComparison var_comparison_8903 ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_notEqual (SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_equal (SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_lowerOrEqual (SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_greaterOrEqual (SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_lower (SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_greater (SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outCondition = GGS_pic_31__38_RegisterComparisonCondition::init_21__21_ (var_registerExpression_8851, var_comparison_8903, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_registerExpression var_registerExpression_9504 ;
    nt_register_5F_parsing_ (var_registerExpression_9504, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 379)) ;
    GGS_bitNumberExpression var_bitNumberExpression_9561 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_9561, inCompiler) ;
    outArgument_outCondition = GGS_pic_31__38_BitTestInStructuredCondition::init_21__21_ (var_registerExpression_9504, var_bitNumberExpression_9561, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_registerExpression var_registerName_9729 ;
    nt_register_5F_parsing_ (var_registerName_9729, inCompiler) ;
    GGS_lstring var_conditionString_9773 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
    GGS_string var_condition_9805 = var_conditionString_9773.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 388)) ;
    GGS_bool var_branchIfZero_9872 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_condition_9805.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_branchIfZero_9872 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_condition_9805.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          var_branchIfZero_9872 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_conditionString_9773.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_9773.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 395)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 395)), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 395)) ;
        var_branchIfZero_9872.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_pic_31__38_RegisterTestCondition::init_21__21_ (var_registerName_9729, var_branchIfZero_9872, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_conditional_5F_branch var_conditional_5F_branch_10260 ;
    GGS_lstring var_conditionString_10310 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
    GGS_string var_condition_10342 = var_conditionString_10310.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 403)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas", 405)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas", 407)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("NN"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas", 409)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("N"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas", 411)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("C"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas", 413)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("NC"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas", 415)) ;
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("OV"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas", 417)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  GalgasBool test_13 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_13) {
                    test_13 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("NOV"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_13) {
                      var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas", 419)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_13) {
                    TC_Array <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (var_conditionString_10310.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_10310.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 421)).add_operation (GGS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 421)), fixItArray14  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 421)) ;
                    var_conditional_5F_branch_10260.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    outArgument_outCondition = GGS_pic_31__38_BccInStructuredCondition::init_21__21_ (var_conditionString_10310.readProperty_location (), var_conditional_5F_branch_10260, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 330)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 332)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 379)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 330)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 332)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 379)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 433)) ;
  nt_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 437)) ;
      GGS_pic_31__38_ConditionExpression var_c_11585 ;
      nt_condition_5F_term_ (var_c_11585, inCompiler) ;
      GGS_pic_31__38_ConditionExpression var_rc_11621 = GGS_pic_31__38_NegateCondition::init_21_ (var_c_11585, inCompiler COMMA_HERE) ;
      GGS_pic_31__38_ConditionExpression var_lc_11688 = GGS_pic_31__38_NegateCondition::init_21_ (outArgument_outCondition, inCompiler COMMA_HERE) ;
      outArgument_outCondition = GGS_pic_31__38_NegateCondition::init_21_ (GGS_pic_31__38_AndCondition::init_21__21_ (var_lc_11688, var_rc_11621, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 443)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 433)) ;
  nt_condition_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 437)) ;
      nt_condition_5F_term_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 443)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 433)) ;
  nt_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 437)) ;
      nt_condition_5F_term_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 443)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 453)) ;
      GGS_pic_31__38_ConditionExpression var_c_12059 ;
      nt_condition_5F_factor_ (var_c_12059, inCompiler) ;
      outArgument_outCondition = GGS_pic_31__38_AndCondition::init_21__21_ (outArgument_outCondition, var_c_12059, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 453)) ;
      nt_condition_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 453)) ;
      nt_condition_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
  outArgument_outBlockTermination = GGS_exitBlockTerminationForBlockInstruction::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 464)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GGS_lstring var_nextBlockName_12552 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
  outArgument_outBlockTermination = GGS_gotoTerminationForBlockInstruction::init_21_ (var_nextBlockName_12552, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GGS_location var_location_12814 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 479)) ;
  GGS_pic_31__38_ConditionExpression var_condition_12897 ;
  nt_condition_5F_expression_ (var_condition_12897, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 481)) ;
  GGS_abstractBlockTerminationForBlockInstruction var_terminationIfTrue_12987 ;
  nt_block_5F_termination_ (var_terminationIfTrue_12987, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 483)) ;
  GGS_abstractBlockTerminationForBlockInstruction var_terminationIfFalse_13085 ;
  nt_block_5F_termination_ (var_terminationIfFalse_13085, inCompiler) ;
  outArgument_outBlockTermination = GGS_testTerminationForBlockInstruction::init_21__21__21__21_ (var_condition_12897, var_terminationIfTrue_12987, var_terminationIfFalse_13085, var_location_12814, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 481)) ;
  nt_block_5F_termination_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 483)) ;
  nt_block_5F_termination_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 481)) ;
  nt_block_5F_termination_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 483)) ;
  nt_block_5F_termination_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_ (GGS_pic_31__38_PiccoloInstruction & outArgument_outInstruction,
                                                                                               GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                               GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                               GGS_labelMap & ioArgument_ioLabelMap,
                                                                                               Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 497)) ;
    GGS_lstring var_switchLabel_13488 ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
      var_switchLabel_13488 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 500)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_switchLabel_13488 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_switchLabel_13488, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 503)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_13639 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 505)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    GGS_pic_31__38_SwitchInstructionCaseList var_caseList_13724 = GGS_pic_31__38_SwitchInstructionCaseList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 509)) ;
      GGS_lstring var_caseLabel_13782 ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
        var_caseLabel_13782 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 512)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_caseLabel_13782 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 514)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (var_caseLabel_13782.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string temp_2 ;
          const GalgasBool test_3 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = var_switchLabel_13488.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string ("empty") ;
          }
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_caseLabel_13782.readProperty_location (), GGS_string ("'case' label does not match 'switch' label, it should be ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 517)), fixItArray4  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 517)) ;
        }
      }
      GGS_location var_caseLocation_14139 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 520)) ;
      GGS_pic_31__38_CaseExpressionList var_caseExpressionList_14179 = GGS_pic_31__38_CaseExpressionList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_pic_31__38__5F_syntax_26 (inCompiler)) {
        case 1: {
          GGS_immediatExpression var_caseExpression_14313 ;
          nt_immediate_5F_expression_ (var_caseExpression_14313, inCompiler) ;
          var_caseExpressionList_14179.addAssignOperation (GGS_pic_31__38_SimpleConstantCaseItem::init_21__21_ (var_caseExpression_14313, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 525)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 525)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 527)) ;
          GGS_immediatExpression var_minExpression_14508 ;
          nt_immediate_5F_expression_ (var_minExpression_14508, inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 529)) ;
          GGS_immediatExpression var_maxExpression_14594 ;
          nt_immediate_5F_expression_ (var_maxExpression_14594, inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
          var_caseExpressionList_14179.addAssignOperation (GGS_pic_31__38_IntervalCaseItem::init_21__21__21_ (var_minExpression_14508, var_maxExpression_14594, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 532)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 532)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 535)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 537)) ;
      GGS_pic_31__38_InstructionList var_instructionList_14843 ;
      nt_instruction_5F_list_ (var_instructionList_14843, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_caseList_13724.addAssignOperation (var_caseLocation_14139, var_caseExpressionList_14179, var_instructionList_14843  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 543)) ;
      if (select_pic_31__38__5F_syntax_23 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    GGS_pic_31__38_InstructionList var_elseInstructionList_15059 ;
    GGS_location var_elseLocation_15097 ;
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLocation_15097 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 549)) ;
      var_elseInstructionList_15059 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 552)) ;
      GGS_lstring var_elseLabel_15249 ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
        var_elseLabel_15249 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 555)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_elseLabel_15249 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 557)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (var_elseLabel_15249.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = var_switchLabel_13488.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string ("empty") ;
          }
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_elseLabel_15249.readProperty_location (), GGS_string ("'else' label does not match 'switch' label, it should be ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 560)), fixItArray9  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 560)) ;
        }
      }
      var_elseLocation_15097 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 563)) ;
      nt_instruction_5F_list_ (var_elseInstructionList_15059, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_switch::init_21__21__21__21_ (var_instructionLocation_13639, var_caseList_13724, var_elseLocation_15097, var_elseInstructionList_15059, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 575)) ;
    GGS_lstring var_endSwitchLabel_15933 ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
      var_endSwitchLabel_15933 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 578)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endSwitchLabel_15933 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 580)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (var_endSwitchLabel_15933.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string temp_11 ;
        const GalgasBool test_12 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          temp_11 = var_switchLabel_13488.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_12) {
          temp_11 = GGS_string ("empty") ;
        }
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_switchLabel_13488.readProperty_location (), GGS_string ("'end' label does not match 'switch' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 583)), fixItArray13  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 583)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    GGS_location var_instructionLocation_16308 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 588)) ;
    GGS_lstring var_startBlockName_16376 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    GGS_pic_31__38_BlockInstructionBlockList var_blockList_16407 = GGS_pic_31__38_BlockInstructionBlockList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      GGS_lstring var_blockName_16497 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 594)) ;
      GGS_pic_31__38_InstructionList var_instructionList_16577 ;
      nt_instruction_5F_list_ (var_instructionList_16577, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      GGS_location var_endOfBlock_16706 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 601)) ;
      GGS_abstractBlockTerminationForBlockInstruction var_blockTermination_16810 ;
      nt_block_5F_termination_ (var_blockTermination_16810, inCompiler) ;
      var_blockList_16407.addAssignOperation (var_blockName_16497, var_instructionList_16577, var_blockTermination_16810, var_endOfBlock_16706  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 603)) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_block::init_21__21__21__21_ (var_instructionLocation_16308, var_startBlockName_16376, var_blockList_16407, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 610)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 613)) ;
    GGS_lstring var_doLabel_17103 ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
      var_doLabel_17103 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 616)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_17103 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_17103, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 619)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_17238 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 621)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    GGS_lstring var_constantName_17305 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 624)) ;
    GGS_immediatExpression var_lowBoundExpression_17378 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_17378, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 626)) ;
    GGS_immediatExpression var_highBoundExpression_17459 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_17459, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 628)) ;
    GGS_pic_31__38_InstructionList var_instructionList_17543 ;
    nt_instruction_5F_list_ (var_instructionList_17543, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_repetitionStatique::init_21__21__21__21__21__21_ (var_instructionLocation_17238, var_constantName_17305, var_lowBoundExpression_17378, var_highBoundExpression_17459, var_instructionList_17543, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 640)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 642)) ;
    GGS_lstring var_endDoLabel_17874 ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
      var_endDoLabel_17874 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 645)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_17874 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 647)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::notEqual, var_doLabel_17103.readProperty_string ().objectCompare (var_endDoLabel_17874.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_string temp_16 ;
        const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, var_doLabel_17103.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          temp_16 = var_doLabel_17103.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_17) {
          temp_16 = GGS_string ("empty") ;
        }
        TC_Array <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (var_endDoLabel_17874.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 650)), fixItArray18  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 650)) ;
      }
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    GGS_luint var_bankIndex_18228 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_checkbank::init_21__21_ (var_bankIndex_18228.readProperty_location (), var_bankIndex_18228.readProperty_uint (), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_checknobank::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 659)), inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
      TC_Array <FixItDescription> fixItArray19 ;
      appendFixItActions (fixItArray19, EnumFixItKind::fixItReplace, GGS_string ("ldata16ptr")) ;
      inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 663)), GGS_string ("obsolete keyword"), fixItArray19  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 663)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 665)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_18576 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 667)) ;
    GGS_lstring var_dataName_18635 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    GGS_luint var_dataIndex_18678 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::init_21__21__21_ (var_instructionLocation_18576, var_dataName_18635, var_dataIndex_18678, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    GGS_location var_instructionLocation_18830 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 675)) ;
    GGS_lstring var_dataName_18889 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    GGS_luint var_dataIndex_18932 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::init_21__21__21_ (var_instructionLocation_18830, var_dataName_18889, var_dataIndex_18932, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    GGS_location var_instructionLocation_19081 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 683)) ;
    GGS_immediatExpression var_expression_19170 ;
    nt_immediate_5F_expression_ (var_expression_19170, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LTBLPTR::init_21__21_ (var_instructionLocation_19081, var_expression_19170, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    GGS_location var_instructionLocation_19301 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 688)) ;
    GGS_luint var_bank_19364 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 689)) ;
    GGS_bool var_warningOnUselessBanksel_19383 ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19383 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 695)) ;
      var_warningOnUselessBanksel_19383 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_banksel::init_21__21__21_ (var_instructionLocation_19301, var_bank_19364, var_warningOnUselessBanksel_19383, inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    GGS_location var_instructionLocation_19668 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 701)) ;
    GGS_registerExpression var_register_19753 ;
    nt_register_5F_parsing_ (var_register_19753, inCompiler) ;
    GGS_bool var_warningOnUselessBanksel_19776 ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19776 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 708)) ;
      var_warningOnUselessBanksel_19776 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_banksel_5F_register::init_21__21__21_ (var_instructionLocation_19668, var_register_19753, var_warningOnUselessBanksel_19776, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_nobanksel::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 714)), inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    GGS_location var_instructionLocation_20160 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 717)) ;
    GGS_registerExpression var_register_20245 ;
    nt_register_5F_parsing_ (var_register_20245, inCompiler) ;
    GGS_pic_31__38_InstructionList var_instructionList_20310 ;
    nt_instruction_5F_list_ (var_instructionList_20310, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_savebank::init_21__21__21__21_ (var_instructionLocation_20160, var_register_20245, var_instructionList_20310, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 729)), inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    GGS_location var_instructionLocation_20595 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 733)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 734)) ;
    GGS_immediatExpression var_sizeExpression_20672 ;
    nt_immediate_5F_expression_ (var_sizeExpression_20672, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      GGS_immediatExpressionList var_argumentList_20730 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        GGS_immediatExpression var_expression_20820 ;
        nt_immediate_5F_expression_ (var_expression_20820, inCompiler) ;
        var_argumentList_20730.addAssignOperation (var_expression_20820, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 742))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 742)) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 744)) ;
        }else{
          repeatFlag_20 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_retlw::init_21__21__21__21_ (var_instructionLocation_20595, var_sizeExpression_20672, var_argumentList_20730, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_32_ = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      GGS_lstringlist var_argumentList_21128 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_21 = true ;
      while (repeatFlag_21) {
        GGS_lstring var_targetRoutine_21206 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        var_argumentList_21128.addAssignOperation (var_targetRoutine_21206  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 757)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 759)) ;
        }else{
          repeatFlag_21 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_bra::init_21__21__21__21_ (var_instructionLocation_20595, var_sizeExpression_20672, var_argumentList_21128, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_32_ = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      GGS_lstringlist var_argumentList_21525 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_22 = true ;
      while (repeatFlag_22) {
        GGS_lstring var_targetRoutine_21603 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        var_argumentList_21525.addAssignOperation (var_targetRoutine_21603  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 772)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 774)) ;
        }else{
          repeatFlag_22 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_goto::init_21__21__21__21_ (var_instructionLocation_20595, var_sizeExpression_20672, var_argumentList_21525, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_34_ = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      GGS_lstringlist var_argumentList_21924 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_23 = true ;
      while (repeatFlag_23) {
        GGS_lstring var_targetRoutine_22002 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        var_argumentList_21924.addAssignOperation (var_targetRoutine_22002  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 787)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 789)) ;
        }else{
          repeatFlag_23 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_rcall::init_21__21__21__21_ (var_instructionLocation_20595, var_sizeExpression_20672, var_argumentList_21924, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_34_ = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 799)) ;
    GGS_lstring var_foreverLabel_22337 ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
      var_foreverLabel_22337 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 802)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_foreverLabel_22337 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_22337, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 805)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_22492 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 807)) ;
    GGS_pic_31__38_InstructionList var_instructionList_22563 ;
    nt_instruction_5F_list_ (var_instructionList_22563, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 813)) ;
    GGS_lstring var_endForeverLabel_22683 ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
      var_endForeverLabel_22683 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 816)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endForeverLabel_22683 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 818)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      test_24 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_22337.readProperty_string ().objectCompare (var_endForeverLabel_22683.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        GGS_string temp_25 ;
        const GalgasBool test_26 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_22337.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          temp_25 = var_foreverLabel_22337.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_26) {
          temp_25 = GGS_string ("empty") ;
        }
        TC_Array <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (var_endForeverLabel_22683.readProperty_location (), GGS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_25, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 821)), fixItArray27  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 821)) ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FOREVER::init_21__21__21_ (var_instructionLocation_22492, var_instructionList_22563, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 827)), inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    GGS_location var_instructionLocation_23194 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 831)) ;
    GGS_registerExpression var_registerName_23259 ;
    nt_register_5F_parsing_ (var_registerName_23259, inCompiler) ;
    GGS_if_5F_semi_5F_colon_5F_op var_opCode_23298 ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSEQ (SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSGT (SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSLT (SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
    } break ;
    case 4: {
      GGS_lstring var_conditionString_23532 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
      GGS_string var_condition_23566 = var_conditionString_23532.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 842)) ;
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::notEqual, var_condition_23566.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          TC_Array <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (var_conditionString_23532.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_23566, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 844)).add_operation (GGS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 844)), fixItArray29  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 844)) ;
        }
      }
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_TSTFSZ (SOURCE_FILE ("pic18_syntax.galgas", 846)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 848)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_23868 ;
    nt_simple_5F_instruction_ (var_instruction_23868, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::init_21__21__21__21_ (var_instructionLocation_23194, var_instruction_23868, var_opCode_23298, var_registerName_23259, inCompiler COMMA_HERE) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    GGS_location var_instructionLocation_24051 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 857)) ;
    GGS_registerExpression var_registerName_24116 ;
    GGS_bitNumberExpression var_bitNumber_24158 ;
    GGS_bool var_skipIfSet_24182 ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 862)) ;
      nt_register_5F_parsing_ (var_registerName_24116, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 864)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24158, inCompiler) ;
      var_skipIfSet_24182 = GGS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerName_24116, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 869)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24158, inCompiler) ;
      var_skipIfSet_24182 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 873)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_24518 ;
    nt_simple_5F_instruction_ (var_instruction_24518, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::init_21__21__21__21__21_ (var_instructionLocation_24051, var_instruction_24518, var_skipIfSet_24182, var_registerName_24116, var_bitNumber_24158, inCompiler COMMA_HERE) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    GGS_location var_instructionLocation_24720 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 884)) ;
    GGS_bool var_increment_24771 ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 887)) ;
      var_increment_24771 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 889)) ;
      var_increment_24771 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerName_24900 ;
    nt_register_5F_parsing_ (var_registerName_24900, inCompiler) ;
    GGS_bool var_w_5F_isTarget_24927 ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_24927 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      var_w_5F_isTarget_24927 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_bool var_skipIfZero_25039 ;
    GGS_lstring var_conditionString_25081 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    GGS_string var_condition_25113 = var_conditionString_25081.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 900)) ;
    GalgasBool test_30 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_30) {
      test_30 = GGS_bool (ComparisonKind::equal, var_condition_25113.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_30) {
        var_skipIfZero_25039 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_30) {
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = GGS_bool (ComparisonKind::equal, var_condition_25113.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          var_skipIfZero_25039 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_31) {
        TC_Array <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (var_conditionString_25081.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_25113, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 906)).add_operation (GGS_string ("' condition; it should be 'z' or 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 906)), fixItArray32  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 906)) ;
        var_skipIfZero_25039.drop () ; // Release error dropped variable
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 908)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_25470 ;
    nt_simple_5F_instruction_ (var_instruction_25470, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::init_21__21__21__21__21__21_ (var_instructionLocation_24720, var_instruction_25470, var_increment_24771, var_skipIfZero_25039, var_registerName_24900, var_w_5F_isTarget_24927, inCompiler COMMA_HERE) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 918)) ;
    GGS_lstring var_ifLabel_25684 ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
      var_ifLabel_25684 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 921)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_ifLabel_25684 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_25684, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 924)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_ (var_ifLabel_25684, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 932)) ;
    GGS_lstring var_endIfLabel_25984 ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
      var_endIfLabel_25984 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 935)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endIfLabel_25984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 937)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      test_33 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_25684.readProperty_string ().objectCompare (var_endIfLabel_25984.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        GGS_string temp_34 ;
        const GalgasBool test_35 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_25684.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          temp_34 = var_ifLabel_25684.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_35) {
          temp_34 = GGS_string ("empty") ;
        }
        TC_Array <FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (var_endIfLabel_25984.readProperty_location (), GGS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_34, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 940)), fixItArray36  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 940)) ;
      }
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 944)) ;
    GGS_lstring var_doLabel_26322 ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
      var_doLabel_26322 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 947)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_26322 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_26322, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 950)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_26467 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 952)) ;
    GGS_pic_31__38_InstructionList var_repeatedInstructionList_26538 ;
    nt_instruction_5F_list_ (var_repeatedInstructionList_26538, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GGS_location var_endOfRepeatedInstructionList_26647 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 958)) ;
    GGS_pic_31__38_DoWhilePartList var_whilePartList_26701 = GGS_pic_31__38_DoWhilePartList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_37 = true ;
    while (repeatFlag_37) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 961)) ;
      GGS_lstring var_whileLabel_26785 ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
        var_whileLabel_26785 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 964)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_whileLabel_26785 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 966)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_38 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_38) {
        test_38 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26322.readProperty_string ().objectCompare (var_whileLabel_26785.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_38) {
          GGS_string temp_39 ;
          const GalgasBool test_40 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26322.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_40) {
            temp_39 = var_doLabel_26322.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_40) {
            temp_39 = GGS_string ("empty") ;
          }
          TC_Array <FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (var_whileLabel_26785.readProperty_location (), GGS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_39, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 969)), fixItArray41  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 969)) ;
        }
      }
      GGS_pic_31__38_ConditionExpression var_whileCondition_27146 ;
      nt_condition_5F_expression_ (var_whileCondition_27146, inCompiler) ;
      GGS_pic_31__38_InstructionList var_instructionList_27199 ;
      nt_instruction_5F_list_ (var_instructionList_27199, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_26701.addAssignOperation (var_whileCondition_27146, var_instructionList_27199, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 978))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 978)) ;
      if (select_pic_31__38__5F_syntax_50 (inCompiler) == 2) {
      }else{
        repeatFlag_37 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 981)) ;
    GGS_lstring var_endDoLabel_27415 ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
      var_endDoLabel_27415 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 984)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_27415 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 986)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_42 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_42) {
      test_42 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26322.readProperty_string ().objectCompare (var_endDoLabel_27415.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_42) {
        GGS_string temp_43 ;
        const GalgasBool test_44 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26322.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_44) {
          temp_43 = var_doLabel_26322.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_44) {
          temp_43 = GGS_string ("empty") ;
        }
        TC_Array <FixItDescription> fixItArray45 ;
        inCompiler->emitSemanticError (var_endDoLabel_27415.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_43, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 989)), fixItArray45  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 989)) ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_do_5F_while::init_21__21__21__21_ (var_instructionLocation_26467, var_repeatedInstructionList_26538, var_endOfRepeatedInstructionList_26647, var_whilePartList_26701, inCompiler COMMA_HERE) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    GGS_location var_instructionLocation_27927 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1000)) ;
    GGS_luint var_occurrenceFactor_27990 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_MNOP::init_21__21_ (var_instructionLocation_27927, var_occurrenceFactor_27990, inCompiler COMMA_HERE) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    GGS_location var_instructionLocation_28119 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1005)) ;
    GGS_luint var_occurrenceFactor_28182 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_NOPBRA::init_21__21_ (var_instructionLocation_28119, var_occurrenceFactor_28182, inCompiler COMMA_HERE) ;
  } break ;
  case 22: {
    GGS_conditional_5F_branch var_condition_28319 ;
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_28819 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1027)) ;
    GGS_lstring var_targetLabelName_28887 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMPCC::init_21__21__21__21_ (var_instructionLocation_28819, var_targetLabelName_28887, var_condition_28319, GGS_bool (true), inCompiler COMMA_HERE) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    GGS_location var_instructionLocation_29086 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1036)) ;
    GGS_conditional_5F_branch var_conditional_5F_branch_29151 ;
    GGS_lstring var_conditionString_29201 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    GGS_string var_condition_29233 = var_conditionString_29201.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 1039)) ;
    GalgasBool test_46 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_46) {
      test_46 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_46) {
        var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas", 1041)) ;
      }
    }
    if (GalgasBool::boolFalse == test_46) {
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        test_47 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas", 1043)) ;
        }
      }
      if (GalgasBool::boolFalse == test_47) {
        GalgasBool test_48 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_48) {
          test_48 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("NN"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_48) {
            var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas", 1045)) ;
          }
        }
        if (GalgasBool::boolFalse == test_48) {
          GalgasBool test_49 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_49) {
            test_49 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("N"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_49) {
              var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas", 1047)) ;
            }
          }
          if (GalgasBool::boolFalse == test_49) {
            GalgasBool test_50 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_50) {
              test_50 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("C"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_50) {
                var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas", 1049)) ;
              }
            }
            if (GalgasBool::boolFalse == test_50) {
              GalgasBool test_51 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_51) {
                test_51 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("NC"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_51) {
                  var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas", 1051)) ;
                }
              }
              if (GalgasBool::boolFalse == test_51) {
                GalgasBool test_52 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_52) {
                  test_52 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("OV"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_52) {
                    var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas", 1053)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_52) {
                  GalgasBool test_53 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_53) {
                    test_53 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("NOV"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_53) {
                      var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas", 1055)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_53) {
                    TC_Array <FixItDescription> fixItArray54 ;
                    inCompiler->emitSemanticError (var_conditionString_29201.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_29201.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1057)).add_operation (GGS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1057)), fixItArray54  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1057)) ;
                    var_conditional_5F_branch_29151.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    GGS_lstring var_targetLabelName_30180 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMPCC::init_21__21__21__21_ (var_instructionLocation_29086, var_targetLabelName_30180, var_conditional_5F_branch_29151, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    GGS_location var_instructionLocation_30389 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1069)) ;
    GGS_lstring var_targetLabelName_30457 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30389, var_targetLabelName_30457, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas", 1074)), inCompiler COMMA_HERE) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    GGS_location var_instructionLocation_30667 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1077)) ;
    GGS_lstring var_targetLabelName_30735 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30667, var_targetLabelName_30735, GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("pic18_syntax.galgas", 1082)), inCompiler COMMA_HERE) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    GGS_location var_instructionLocation_30930 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1085)) ;
    GGS_lstring var_targetLabelName_30998 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30930, var_targetLabelName_30998, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("pic18_syntax.galgas", 1090)), inCompiler COMMA_HERE) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    GGS_lstring var_macroName_31213 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    GGS_immediatExpressionList var_immediatExpressionList_31263 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_55 = true ;
    while (repeatFlag_55) {
      GGS_immediatExpression var_constantExpression_31357 ;
      nt_immediate_5F_expression_ (var_constantExpression_31357, inCompiler) ;
      var_immediatExpressionList_31263.addAssignOperation (var_constantExpression_31357, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1099))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1099)) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1101)) ;
      }else{
        repeatFlag_55 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_macro::init_21__21__21_ (var_macroName_31213.readProperty_location (), var_macroName_31213, var_immediatExpressionList_31263, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 497)) ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 509)) ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 514)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_pic_31__38__5F_syntax_26 (inCompiler)) {
        case 1: {
          nt_immediate_5F_expression_parse (inCompiler) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 527)) ;
          nt_immediate_5F_expression_parse (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 529)) ;
          nt_immediate_5F_expression_parse (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 535)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 537)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      if (select_pic_31__38__5F_syntax_23 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 552)) ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 557)) ;
      } break ;
      default:
        break ;
      }
      nt_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 575)) ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 580)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 594)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      nt_block_5F_termination_parse (inCompiler) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 613)) ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 624)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 626)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 628)) ;
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 642)) ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 647)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 665)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 689)) ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 695)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 708)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 734)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_immediate_5F_expression_parse (inCompiler) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 744)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 759)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 774)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 789)) ;
        }else{
          repeatFlag_6 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 799)) ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 813)) ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 818)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 848)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 862)) ;
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 864)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 869)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 873)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 887)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 889)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 908)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 918)) ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 932)) ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 937)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 944)) ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_parse (inCompiler) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 961)) ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 966)) ;
      } break ;
      default:
        break ;
      }
      nt_condition_5F_expression_parse (inCompiler) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      if (select_pic_31__38__5F_syntax_50 (inCompiler) == 2) {
      }else{
        repeatFlag_7 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 981)) ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 986)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
  } break ;
  case 22: {
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    bool repeatFlag_8 = true ;
    while (repeatFlag_8) {
      nt_immediate_5F_expression_parse (inCompiler) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1101)) ;
      }else{
        repeatFlag_8 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 497)) ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 509)) ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 514)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_pic_31__38__5F_syntax_26 (inCompiler)) {
        case 1: {
          nt_immediate_5F_expression_indexing (inCompiler) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 527)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 529)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 535)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 537)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_23 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 552)) ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 557)) ;
      } break ;
      default:
        break ;
      }
      nt_instruction_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 575)) ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 580)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 594)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      nt_block_5F_termination_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 613)) ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 624)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 626)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 628)) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 642)) ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 647)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 665)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 689)) ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 695)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 708)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 734)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_immediate_5F_expression_indexing (inCompiler) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 744)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 759)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 774)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 789)) ;
        }else{
          repeatFlag_6 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 799)) ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 813)) ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 818)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 848)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 862)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 864)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 869)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 873)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 887)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 889)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 908)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 918)) ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 932)) ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 937)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 944)) ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 961)) ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 966)) ;
      } break ;
      default:
        break ;
      }
      nt_condition_5F_expression_indexing (inCompiler) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_50 (inCompiler) == 2) {
      }else{
        repeatFlag_7 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 981)) ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 986)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
  } break ;
  case 22: {
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    bool repeatFlag_8 = true ;
    while (repeatFlag_8) {
      nt_immediate_5F_expression_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1101)) ;
      }else{
        repeatFlag_8 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_ (const GGS_lstring constinArgument_ifLabel,
                                                                                                     GGS_pic_31__38_PiccoloInstruction & outArgument_outInstruction,
                                                                                                     GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                     GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                     GGS_labelMap & ioArgument_ioLabelMap,
                                                                                                     Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_31867 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1121)) ;
  GGS_pic_31__38_ConditionExpression var_structured_5F_if_5F_condition_31934 ;
  nt_condition_5F_expression_ (var_structured_5F_if_5F_condition_31934, inCompiler) ;
  GGS_pic_31__38_InstructionList var_thenInstructionList_31988 ;
  nt_instruction_5F_list_ (var_thenInstructionList_31988, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GGS_pic_31__38_InstructionList var_elseInstructionList_32107 ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
    var_elseInstructionList_32107 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1132)) ;
    GGS_lstring var_elsifIfLabel_32221 ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_32221 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1135)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifIfLabel_32221 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1137)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_32221.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_32221.readProperty_location (), GGS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1140)), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1140)) ;
      }
    }
    GGS_pic_31__38_PiccoloInstruction var_elsifPartInstruction_32598 ;
    nt_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_32598, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_32107 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
    var_elseInstructionList_32107.addAssignOperation (var_elsifPartInstruction_32598  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1150)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1152)) ;
    GGS_lstring var_elsifLabel_32829 ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
      var_elsifLabel_32829 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1155)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifLabel_32829 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1157)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifLabel_32829.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elsifLabel_32829.readProperty_location (), GGS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1160)), fixItArray7  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1160)) ;
      }
    }
    nt_instruction_5F_list_ (var_elseInstructionList_32107, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElsePartLocation_33286 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1169)) ;
  outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_structured_5F_if::init_21__21__21__21__21_ (var_instructionLocation_31867, var_structured_5F_if_5F_condition_31934, var_thenInstructionList_31988, var_elseInstructionList_32107, var_endOfElsePartLocation_33286, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1132)) ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1137)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1152)) ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1157)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1132)) ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1137)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1152)) ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1157)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument_outInstruction,
                                                                                           Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST var_baseCode_33697 ;
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("pic18_syntax.galgas", 1185)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("pic18_syntax.galgas", 1188)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ANDWF (SOURCE_FILE ("pic18_syntax.galgas", 1191)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_COMF (SOURCE_FILE ("pic18_syntax.galgas", 1194)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_DECF (SOURCE_FILE ("pic18_syntax.galgas", 1197)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_INCF (SOURCE_FILE ("pic18_syntax.galgas", 1200)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_IORWF (SOURCE_FILE ("pic18_syntax.galgas", 1203)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1206)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLCF (SOURCE_FILE ("pic18_syntax.galgas", 1209)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLNCF (SOURCE_FILE ("pic18_syntax.galgas", 1212)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRCF (SOURCE_FILE ("pic18_syntax.galgas", 1215)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRNCF (SOURCE_FILE ("pic18_syntax.galgas", 1218)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBFWB (SOURCE_FILE ("pic18_syntax.galgas", 1221)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWF (SOURCE_FILE ("pic18_syntax.galgas", 1224)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWFB (SOURCE_FILE ("pic18_syntax.galgas", 1227)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SWAPF (SOURCE_FILE ("pic18_syntax.galgas", 1230)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_XORWF (SOURCE_FILE ("pic18_syntax.galgas", 1233)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_34495 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1235)) ;
    GGS_registerExpression var_registerName_34551 ;
    nt_register_5F_parsing_ (var_registerName_34551, inCompiler) ;
    GGS_bool var_W_5F_isDestination_34594 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_34594, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FDA::init_21__21__21__21_ (var_instructionLocation_34495, var_baseCode_33697, var_registerName_34551, var_W_5F_isDestination_34594, inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_baseCode_33697.objectCompare (GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1245)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_34594.operator_not (SOURCE_FILE ("pic18_syntax.galgas", 1245)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_34495, GGS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1246)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    GGS_location var_instructionLocation_35089 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1251)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1253)) ;
    GGS_registerExpression var_registerName_35161 ;
    nt_register_5F_parsing_ (var_registerName_35161, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FDA::init_21__21__21__21_ (var_instructionLocation_35089, GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1257)), var_registerName_35161, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_FA_5F_instruction_5F_base_5F_code var_FAinstruction_35360 ;
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("pic18_syntax.galgas", 1265)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("pic18_syntax.galgas", 1268)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_MULWF (SOURCE_FILE ("pic18_syntax.galgas", 1271)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_NEGF (SOURCE_FILE ("pic18_syntax.galgas", 1274)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("pic18_syntax.galgas", 1277)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_35778 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1279)) ;
    GGS_registerExpression var_registerName_35843 ;
    nt_register_5F_parsing_ (var_registerName_35843, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FA::init_21__21__21_ (var_instructionLocation_35778, var_FAinstruction_35360, var_registerName_35843, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    GGS_location var_instructionLocation_36004 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1287)) ;
    GGS_registerExpression var_sourceRegisterName_36069 ;
    nt_register_5F_parsing_ (var_sourceRegisterName_36069, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1289)) ;
    GGS_registerExpression var_destinationRegisterName_36124 ;
    nt_register_5F_parsing_ (var_destinationRegisterName_36124, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_MOVFF::init_21__21__21_ (var_instructionLocation_36004, var_sourceRegisterName_36069, var_destinationRegisterName_36124, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_bit_5F_oriented_5F_op var_bitOrientedOp_36310 ;
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
      var_bitOrientedOp_36310 = GGS_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
      var_bitOrientedOp_36310 = GGS_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
      var_bitOrientedOp_36310 = GGS_bit_5F_oriented_5F_op::class_func_BTG (SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_36531 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1304)) ;
    GGS_registerExpression var_registerName_36616 ;
    nt_register_5F_parsing_ (var_registerName_36616, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1306)) ;
    GGS_bitNumberExpression var_bitNumber_36688 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumber_36688, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FBA::init_21__21__21__21_ (var_instructionLocation_36531, var_bitOrientedOp_36310, var_registerName_36616, var_bitNumber_36688, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    GGS_location var_instructionLocation_36867 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1316)) ;
    GGS_lstring var_targetLabelName_36935 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_36867, var_targetLabelName_36935, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas", 1321)), inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    GGS_location var_instructionLocation_37144 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1324)) ;
    GGS_lstring var_targetLabelName_37212 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_37144, var_targetLabelName_37212, GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("pic18_syntax.galgas", 1329)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    GGS_location var_instructionLocation_37418 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1332)) ;
    GGS_lstring var_targetLabelName_37486 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_37418, var_targetLabelName_37486, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("pic18_syntax.galgas", 1337)), inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1340)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_CLRWDT (SOURCE_FILE ("pic18_syntax.galgas", 1340)), inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1343)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_DAW (SOURCE_FILE ("pic18_syntax.galgas", 1343)), inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1346)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (SOURCE_FILE ("pic18_syntax.galgas", 1346)), inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1349)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_POP (SOURCE_FILE ("pic18_syntax.galgas", 1349)), inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1352)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_PUSH (SOURCE_FILE ("pic18_syntax.galgas", 1352)), inCompiler COMMA_HERE) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1355)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_RESET (SOURCE_FILE ("pic18_syntax.galgas", 1355)), inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1358)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_SLEEP (SOURCE_FILE ("pic18_syntax.galgas", 1358)), inCompiler COMMA_HERE) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    GGS_location var_instructionLocation_38603 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1361)) ;
    GGS_immediatExpression var_expression_38692 ;
    nt_immediate_5F_expression_ (var_expression_38692, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_fnop::init_21__21_ (var_instructionLocation_38603, var_expression_38692, inCompiler COMMA_HERE) ;
  } break ;
  case 17: {
    GGS_literal_5F_instruction_5F_opcode var_literalInstruction_38836 ;
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_ANDLW (SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_IORLW (SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_MULLW (SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_SUBLW (SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_XORLW (SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_39438 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1383)) ;
    GGS_immediatExpression var_expression_39527 ;
    nt_immediate_5F_expression_ (var_expression_39527, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_literalOperation::init_21__21__21_ (var_instructionLocation_39438, var_literalInstruction_38836, var_expression_39527, inCompiler COMMA_HERE) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    GGS_location var_instructionLocation_39702 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1391)) ;
    GGS_luint var_FSRindex_39765 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1393)) ;
    GGS_immediatExpression var_expression_39814 ;
    nt_immediate_5F_expression_ (var_expression_39814, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LFSR::init_21__21__21_ (var_instructionLocation_39702, var_FSRindex_39765, var_expression_39814, inCompiler COMMA_HERE) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    GGS_location var_instructionLocation_39950 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1398)) ;
    GGS_tableAccessOption var_accessOption_40014 ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
      var_accessOption_40014 = GGS_tableAccessOption::class_func_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas", 1402)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
      var_accessOption_40014 = GGS_tableAccessOption::class_func_postIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1405)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
      var_accessOption_40014 = GGS_tableAccessOption::class_func_postDecrement (SOURCE_FILE ("pic18_syntax.galgas", 1408)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
      var_accessOption_40014 = GGS_tableAccessOption::class_func_preIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1411)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_TBLRD::init_21__21_ (var_instructionLocation_39950, var_accessOption_40014, inCompiler COMMA_HERE) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    GGS_location var_instructionLocation_40446 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1416)) ;
    GGS_tableAccessOption var_accessOption_40510 ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
      var_accessOption_40510 = GGS_tableAccessOption::class_func_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas", 1420)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
      var_accessOption_40510 = GGS_tableAccessOption::class_func_postIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1423)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
      var_accessOption_40510 = GGS_tableAccessOption::class_func_postDecrement (SOURCE_FILE ("pic18_syntax.galgas", 1426)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
      var_accessOption_40510 = GGS_tableAccessOption::class_func_preIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1429)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_TBLWT::init_21__21_ (var_instructionLocation_40446, var_accessOption_40510, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1253)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 3: {
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1289)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 5: {
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1306)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 17: {
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1393)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
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

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1253)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1289)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1306)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 17: {
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1393)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

