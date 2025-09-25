#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const {
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

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                      const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_init_21__21__21__21_ (in_mInstructionLocation, in_mEmbeddedInstruction, in_mCompareInstruction, in_mRegisterDescription, inCompiler) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::
ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                 const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                 const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                                 const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mCompareInstruction = in_mCompareInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * inSourcePtr) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                               const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                                               const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                                                                                               const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (in_mInstructionLocation, in_mEmbeddedInstruction, in_mCompareInstruction, in_mRegisterDescription,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::readProperty_mCompareInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    return p->mProperty_mCompareInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_compare_register class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (inCompiler COMMA_THERE),
mProperty_mCompareInstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const GGS_location & in_mInstructionLocation,
                                                                                                                                  const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                                  const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction, inCompiler COMMA_THERE),
mProperty_mCompareInstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mCompareInstruction = in_mCompareInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_skip_instruction_compare_register:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCompareInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mCompareInstruction, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mCompareInstruction.printNonNullClassInstanceProperties ("mCompareInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_compare_register generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ("ipic18_skip_instruction_compare_register",
                                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_compare_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::operator = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @ipic_31__38__5F_skip_5F_instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const {
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

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                          const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                          const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                          const GGS_bool & in_m_5F_W_5F_isDestination,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_skip_5F_instruction_5F_FDA_init_21__21__21__21__21_ (in_mInstructionLocation, in_mEmbeddedInstruction, in_mInstruction_5F_FDA_5F_base_5F_code, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::
ipic_31__38__5F_skip_5F_instruction_5F_FDA_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                     const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                     const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = in_mInstruction_5F_FDA_5F_base_5F_code ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                               const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                               const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                               const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                               const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (in_mInstructionLocation, in_mEmbeddedInstruction, in_mInstruction_5F_FDA_5F_base_5F_code, in_mRegisterDescription, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    return p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_FDA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                                                                                  const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                  const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                  const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction, inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = in_mInstruction_5F_FDA_5F_base_5F_code ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_skip_instruction_FDA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


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
//     @ipic18_skip_instruction_FDA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ("ipic18_skip_instruction_FDA",
                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::operator = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::class_func_emptyMap (LOCATION_ARGS) {
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

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::class_func_emptyMap (LOCATION_ARGS) {
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

GGS_branchOverflowMapDictionary GGS_branchOverflowMapDictionary::class_func_emptyDict (LOCATION_ARGS) {
  return GGS_branchOverflowMapDictionary::builtDictionary (THERE) ;
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

GGS_branchOverflowMap GGS_branchOverflowMap::class_func_new (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchOverflowMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
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
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 412)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_branchOverflowMap temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 413)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_instructionRelativeBranchOverflow (const GGS_uint /* constinArgument_inAddress */,
                                                                                       const GGS_string /* constinArgument_inBlockLabel */,
                                                                                       const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                       GGS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionRelativeBranchOverflow (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                            const GGS_uint constin_inAddress,
                                                            const GGS_string constin_inBlockLabel,
                                                            const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                            GGS_branchOverflowMap & io_ioOverflowMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_instructionRelativeBranchOverflow (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioOverflowMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractBlockTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint /* constinArgument_inAddress */,
                                                                                        const GGS_string /* constinArgument_inBlockLabel */,
                                                                                        const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                        const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GGS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorRelativeBranchOverflow (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const GGS_uint constin_inAddress,
                                                           const GGS_string constin_inBlockLabel,
                                                           const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           const GGS_string constin_inNextBlockLabel,
                                                           GGS_branchOverflowMap & io_ioOverflowMap,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_terminatorRelativeBranchOverflow (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioOverflowMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractBlockTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint /* constinArgument_inAddress */,
                                                                                                 const GGS_string /* constinArgument_inBlockLabel */,
                                                                                                 const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                 const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GGS_uint & /* ioArgument_ioConversionCount */,
                                                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                 GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractBlockTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performTerminatorRelativeBranchResolution (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                    const GGS_uint constin_inAddress,
                                                                    const GGS_string constin_inBlockLabel,
                                                                    const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    const GGS_string constin_inNextBlockLabel,
                                                                    GGS_uint & io_ioConversionCount,
                                                                    GGS_string & io_ioListFileContents,
                                                                    GGS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  out_outModifiedTerminator.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_performTerminatorRelativeBranchResolution (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioConversionCount, io_ioListFileContents, out_outModifiedTerminator, inCompiler COMMA_THERE) ;
  }
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

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::class_func_emptyMap (LOCATION_ARGS) {
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

class cCollectionElement_codeList : public cCollectionElement {
  public: GGS_codeList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_codeList (const GGS_string & in_mAssemblyCode,
                                       const GGS_uintlist & in_mBinaryCode
                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_codeList (const GGS_codeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_codeList::cCollectionElement_codeList (const GGS_string & in_mAssemblyCode,
                                                          const GGS_uintlist & in_mBinaryCode
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAssemblyCode, in_mBinaryCode) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_codeList::cCollectionElement_codeList (const GGS_codeList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAssemblyCode, inElement.mProperty_mBinaryCode) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_codeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_codeList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_codeList (mObject.mProperty_mAssemblyCode, mObject.mProperty_mBinaryCode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @codeList
//--------------------------------------------------------------------------------------------------

GGS_codeList::GGS_codeList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList::GGS_codeList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_codeList * p = (cCollectionElement_codeList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    const GGS_codeList_2E_element element (p->mObject.mProperty_mAssemblyCode, p->mObject.mProperty_mBinaryCode) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                              const GGS_string & in_mAssemblyCode,
                                              const GGS_uintlist & in_mBinaryCode
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_codeList (in_mAssemblyCode, in_mBinaryCode COMMA_THERE)) ;
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

GGS_codeList GGS_codeList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_codeList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::class_func_emptyMap (LOCATION_ARGS) {
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
//
//Abstract extension method '@ipic18SequentialInstruction generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                       const GGS_uint constin_inAddress,
                                       const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                       const GGS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                       GGS_codeList & out_outCode,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCode.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_generateCode (constin_inAddress, constin_inSymbolTable, constin_inDataMap, out_outCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateTerminatorCode (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                 const GGS_uint constin_inAddress,
                                                 const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const GGS_string constin_inNextBlockLabel,
                                                 GGS_codeList & out_outCode,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCode.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_generateTerminatorCode (constin_inAddress, constin_inSymbolTable, constin_inNextBlockLabel, out_outCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                  const GGS_ipic_31__38_AbstractBlockTerminator in_inTerminator,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isEqualToTerminator (in_inTerminator, inCompiler COMMA_THERE) ;
  }
  return result ;
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
//
//Extension getter '@ipic18SequentialInstruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_SequentialInstruction::getter_instructionSize (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}



//--------------------------------------------------------------------------------------------------

GGS_uint callExtensionGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_instructionSize (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_performInstructionRelativeBranchResolution (const GGS_uint /* constinArgument_inAddress */,
                                                                                                const GGS_string /* constinArgument_inBlockLabel */,
                                                                                                const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                GGS_uint & /* ioArgument_ioConversionCount */,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstruction temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInstructionRelativeBranchResolution (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                     const GGS_uint constin_inAddress,
                                                                     const GGS_string constin_inBlockLabel,
                                                                     const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                     GGS_uint & io_ioConversionCount,
                                                                     GGS_string & io_ioListFileContents,
                                                                     GGS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  out_outModifiedInstruction.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_performInstructionRelativeBranchResolution (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioConversionCount, io_ioListFileContents, out_outModifiedInstruction, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18SequentialInstruction instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist callExtensionGetter_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_stringlist result ;
  if (nullptr != inObject) {
    result = inObject->getter_instructionDisplay (inCompiler COMMA_THERE) ;
  }
  return result ;
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

GGS_declaredRoutineMap GGS_declaredRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
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

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addVisitedBlocks (cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                           GGS_stringset & io_ioVisitedBlockSet,
                                           const GGS_blockInstructionBlockMap constin_inBlockMap,
                                           const GGS_string constin_inCurrentBlockName,
                                           const GGS_uint constin_inInitialBlockSetting,
                                           GGS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           GGS_bool & io_ioContinuesInSequence,
                                           GGS_bool & io_ioContinueAccessibilityExploration,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBlockTerminationForBlockInstruction) ;
    inObject->method_addVisitedBlocks (io_ioVisitedBlockSet, constin_inBlockMap, constin_inCurrentBlockName, constin_inInitialBlockSetting, io_ioBlockInitialBankSelectionMap, io_ioContinuesInSequence, io_ioContinueAccessibilityExploration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBlock (cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                        const GGS_uint constin_inAccessBankSplitOffset,
                                        const GGS_uint constin_inCurrentBank,
                                        const GGS_registerTable constin_inRegisterTable,
                                        const GGS_constantMap constin_inConstantMap,
                                        GGS_uint & io_ioLocalLabelIndex,
                                        GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        GGS_stringset & io_ioUsedRegisters,
                                        const GGS_string constin_inLabelForBlock,
                                        GGS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outTerminator.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBlockTerminationForBlockInstruction) ;
    inObject->method_generateBlock (constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedBlockList, io_ioUsedRegisters, constin_inLabelForBlock, out_outTerminator, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18ConditionExpression analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCondition (cPtr_pic_31__38_ConditionExpression * inObject,
                                           const GGS_uint constin_inAccessBankSplitOffset,
                                           const GGS_uint constin_inCurrentBank,
                                           const GGS_registerTable constin_inRegisterTable,
                                           const GGS_constantMap constin_inConstantMap,
                                           GGS_uint & io_ioLocalLabelIndex,
                                           GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const GGS_lstring constin_inConditionTrueLabel,
                                           const GGS_lstring constin_inConditionFalseLabel,
                                           GGS_stringset & io_ioUsedRegisters,
                                           GGS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCurrentBlockTerminator.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_ConditionExpression) ;
    inObject->method_analyzeCondition (constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedBlockList, constin_inConditionTrueLabel, constin_inConditionFalseLabel, io_ioUsedRegisters, out_outCurrentBlockTerminator, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTerminator (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const GGS_ipic_31__38_BlockList constin_inBlockList,
                                             const GGS_string constin_inBlockLabel,
                                             GGS_bool & io_ioOptimizationDone,
                                             GGS_string & io_ioListFileContents,
                                             GGS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outOptimizedTerminator.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_optimizeTerminator (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTerminator, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_getOptimizedTerminators (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                   const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                   const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                   const GGS_string constinArgument_inBlockLabel,
                                                                                   GGS_bool & ioArgument_ioOptimizationDone,
                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                   GGS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedTrueTerminator,
                                                                                   GGS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedFalseTerminator,
                                                                                   GGS_bool & outArgument_outIdenticalTerminators,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator var_optimizedTrueTerminator_7308 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedTrueTerminator_7308, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 169)) ;
  GGS_ipic_31__38_SingleInstructionTerminator temp_1 ;
  if (var_optimizedTrueTerminator_7308.isValid ()) {
    if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedTrueTerminator_7308.ptr ())) {
      temp_1 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_7308.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedTrueTerminator_7308.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 178)) ;
    }
  }
  outArgument_outOptimizedTrueTerminator = temp_1 ;
  GGS_ipic_31__38_AbstractBlockTerminator var_optimizedFalseTerminator_7679 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_2 = this ;
  callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedFalseTerminator_7679, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 180)) ;
  GGS_ipic_31__38_SingleInstructionTerminator temp_3 ;
  if (var_optimizedFalseTerminator_7679.isValid ()) {
    if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedFalseTerminator_7679.ptr ())) {
      temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedFalseTerminator_7679.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedFalseTerminator_7679.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 189)) ;
    }
  }
  outArgument_outOptimizedFalseTerminator = temp_3 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 191)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outIdenticalTerminators = GGS_bool (true) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 193)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_ipic_31__38_RetlwTerminator temp_6 ;
        if (outArgument_outOptimizedTrueTerminator.isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
            temp_6 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 194)) ;
          }
        }
        GGS_ipic_31__38_RetlwTerminator var_t_8161 = temp_6 ;
        GGS_ipic_31__38_RetlwTerminator temp_7 ;
        if (outArgument_outOptimizedFalseTerminator.isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
            temp_7 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 195)) ;
          }
        }
        GGS_ipic_31__38_RetlwTerminator var_f_8252 = temp_7 ;
        outArgument_outIdenticalTerminators = GGS_bool (ComparisonKind::equal, var_t_8161.readProperty_mLiteralValue ().objectCompare (var_f_8252.readProperty_mLiteralValue ())) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 197)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GGS_ipic_31__38_JumpTerminator temp_9 ;
          if (outArgument_outOptimizedTrueTerminator.isValid ()) {
            if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
              temp_9 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 198)) ;
            }
          }
          GGS_ipic_31__38_JumpTerminator var_t_8538 = temp_9 ;
          GGS_ipic_31__38_JumpTerminator temp_10 ;
          if (outArgument_outOptimizedFalseTerminator.isValid ()) {
            if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
              temp_10 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 199)) ;
            }
          }
          GGS_ipic_31__38_JumpTerminator var_f_8627 = temp_10 ;
          outArgument_outIdenticalTerminators = GGS_bool (ComparisonKind::equal, var_t_8538.readProperty_mLabel ().objectCompare (var_f_8627.readProperty_mLabel ())) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        outArgument_outIdenticalTerminators = GGS_bool (false) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptimizedTerminators (cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const GGS_ipic_31__38_BlockList constin_inBlockList,
                                                  const GGS_string constin_inBlockLabel,
                                                  GGS_bool & io_ioOptimizationDone,
                                                  GGS_string & io_ioListFileContents,
                                                  GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  GGS_bool & out_outIdenticalTerminators,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  out_outOptimizedTrueTerminator.drop () ;
  out_outOptimizedFalseTerminator.drop () ;
  out_outIdenticalTerminators.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    inObject->method_getOptimizedTerminators (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTrueTerminator, out_outOptimizedFalseTerminator, out_outIdenticalTerminators, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterTerminatorReferencedLabels (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const GGS_ipic_31__38_BlockList constin_inBlockList,
                                                          GGS_stringset & io_ioReferencedBlockSet,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_enterTerminatorReferencedLabels (constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction enterInstructionReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                      const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                      GGS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionReferencedLabels (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                           const GGS_ipic_31__38_BlockList constin_inBlockList,
                                                           GGS_stringset & io_ioReferencedBlockSet,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_enterInstructionReferencedLabels (constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                         const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                         const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                         const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                         GGS_bool & outArgument_outOptimizationDone,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                         GGS_bool & outArgument_outNOPsubstitution,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstruction temp_0 = this ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outNOPsubstitution = GGS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeInstruction (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                              const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                              const GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                              const GGS_ipic_31__38_BlockList constin_inBlockList,
                                              const GGS_lstring constin_inBlockLabel,
                                              GGS_bool & out_outOptimizationDone,
                                              GGS_string & io_ioListFileContents,
                                              GGS_ipic_31__38_SequentialInstruction & out_outOptimizedInstruction,
                                              GGS_bool & out_outNOPsubstitution,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  out_outOptimizationDone.drop () ;
  out_outOptimizedInstruction.drop () ;
  out_outNOPsubstitution.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_optimizeInstruction (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, out_outOptimizationDone, io_ioListFileContents, out_outOptimizedInstruction, out_outNOPsubstitution, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionReferencedLabels (const GGS_ipic_31__38_SequentialInstructionList inObject,
                                                       const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                       const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                       GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList temp_0 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_35902 (temp_0) ;
  while (enumerator_35902.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_35902.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 943)) ;
    enumerator_35902.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

GGS_optimizeFlagStruct::GGS_optimizeFlagStruct (void) :
mProperty_mRemoveEmptyRoutine (),
mProperty_mJSRtoRETLWreplacedByMOVLW (),
mProperty_mJSRfollowedByRETreplacedByJUMP (),
mProperty_mMOVLWfollowedByRETreplacedByRETLW (),
mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (),
mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (),
mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank () {
}

//--------------------------------------------------------------------------------------------------

GGS_optimizeFlagStruct::GGS_optimizeFlagStruct (const GGS_optimizeFlagStruct & inSource) :
mProperty_mRemoveEmptyRoutine (inSource.mProperty_mRemoveEmptyRoutine),
mProperty_mJSRtoRETLWreplacedByMOVLW (inSource.mProperty_mJSRtoRETLWreplacedByMOVLW),
mProperty_mJSRfollowedByRETreplacedByJUMP (inSource.mProperty_mJSRfollowedByRETreplacedByJUMP),
mProperty_mMOVLWfollowedByRETreplacedByRETLW (inSource.mProperty_mMOVLWfollowedByRETreplacedByRETLW),
mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (inSource.mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction),
mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (inSource.mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction),
mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (inSource.mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) {
}

//--------------------------------------------------------------------------------------------------

GGS_optimizeFlagStruct & GGS_optimizeFlagStruct::operator = (const GGS_optimizeFlagStruct & inSource) {
  mProperty_mRemoveEmptyRoutine = inSource.mProperty_mRemoveEmptyRoutine ;
  mProperty_mJSRtoRETLWreplacedByMOVLW = inSource.mProperty_mJSRtoRETLWreplacedByMOVLW ;
  mProperty_mJSRfollowedByRETreplacedByJUMP = inSource.mProperty_mJSRfollowedByRETreplacedByJUMP ;
  mProperty_mMOVLWfollowedByRETreplacedByRETLW = inSource.mProperty_mMOVLWfollowedByRETreplacedByRETLW ;
  mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction = inSource.mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction = inSource.mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank = inSource.mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optimizeFlagStruct GGS_optimizeFlagStruct::init_21__21__21__21__21__21__21_ (const GGS_bool & in_mRemoveEmptyRoutine,
                                                                                 const GGS_bool & in_mJSRtoRETLWreplacedByMOVLW,
                                                                                 const GGS_bool & in_mJSRfollowedByRETreplacedByJUMP,
                                                                                 const GGS_bool & in_mMOVLWfollowedByRETreplacedByRETLW,
                                                                                 const GGS_bool & in_mJSRtoOneInstructionRoutineReplacedByInstruction,
                                                                                 const GGS_bool & in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction,
                                                                                 const GGS_bool & in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optimizeFlagStruct result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRemoveEmptyRoutine = in_mRemoveEmptyRoutine ;
  result.mProperty_mJSRtoRETLWreplacedByMOVLW = in_mJSRtoRETLWreplacedByMOVLW ;
  result.mProperty_mJSRfollowedByRETreplacedByJUMP = in_mJSRfollowedByRETreplacedByJUMP ;
  result.mProperty_mMOVLWfollowedByRETreplacedByRETLW = in_mMOVLWfollowedByRETreplacedByRETLW ;
  result.mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction = in_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  result.mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction = in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  result.mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank = in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optimizeFlagStruct::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optimizeFlagStruct::GGS_optimizeFlagStruct (const GGS_bool & inOperand0,
                                                const GGS_bool & inOperand1,
                                                const GGS_bool & inOperand2,
                                                const GGS_bool & inOperand3,
                                                const GGS_bool & inOperand4,
                                                const GGS_bool & inOperand5,
                                                const GGS_bool & inOperand6) :
mProperty_mRemoveEmptyRoutine (inOperand0),
mProperty_mJSRtoRETLWreplacedByMOVLW (inOperand1),
mProperty_mJSRfollowedByRETreplacedByJUMP (inOperand2),
mProperty_mMOVLWfollowedByRETreplacedByRETLW (inOperand3),
mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (inOperand4),
mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (inOperand5),
mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_optimizeFlagStruct GGS_optimizeFlagStruct::class_func_new (const GGS_bool & in_mRemoveEmptyRoutine,
                                                               const GGS_bool & in_mJSRtoRETLWreplacedByMOVLW,
                                                               const GGS_bool & in_mJSRfollowedByRETreplacedByJUMP,
                                                               const GGS_bool & in_mMOVLWfollowedByRETreplacedByRETLW,
                                                               const GGS_bool & in_mJSRtoOneInstructionRoutineReplacedByInstruction,
                                                               const GGS_bool & in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction,
                                                               const GGS_bool & in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optimizeFlagStruct result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRemoveEmptyRoutine = in_mRemoveEmptyRoutine ;
  result.mProperty_mJSRtoRETLWreplacedByMOVLW = in_mJSRtoRETLWreplacedByMOVLW ;
  result.mProperty_mJSRfollowedByRETreplacedByJUMP = in_mJSRfollowedByRETreplacedByJUMP ;
  result.mProperty_mMOVLWfollowedByRETreplacedByRETLW = in_mMOVLWfollowedByRETreplacedByRETLW ;
  result.mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction = in_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  result.mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction = in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  result.mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank = in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optimizeFlagStruct::isValid (void) const {
  return mProperty_mRemoveEmptyRoutine.isValid () && mProperty_mJSRtoRETLWreplacedByMOVLW.isValid () && mProperty_mJSRfollowedByRETreplacedByJUMP.isValid () && mProperty_mMOVLWfollowedByRETreplacedByRETLW.isValid () && mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.isValid () && mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.isValid () && mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optimizeFlagStruct::drop (void) {
  mProperty_mRemoveEmptyRoutine.drop () ;
  mProperty_mJSRtoRETLWreplacedByMOVLW.drop () ;
  mProperty_mJSRfollowedByRETreplacedByJUMP.drop () ;
  mProperty_mMOVLWfollowedByRETreplacedByRETLW.drop () ;
  mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.drop () ;
  mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.drop () ;
  mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optimizeFlagStruct::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optimizeFlagStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRemoveEmptyRoutine.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mJSRtoRETLWreplacedByMOVLW.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mJSRfollowedByRETreplacedByJUMP.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMOVLWfollowedByRETreplacedByRETLW.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optimizeFlagStruct generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optimizeFlagStruct ("optimizeFlagStruct",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optimizeFlagStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optimizeFlagStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optimizeFlagStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optimizeFlagStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optimizeFlagStruct GGS_optimizeFlagStruct::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_optimizeFlagStruct result ;
  const GGS_optimizeFlagStruct * p = (const GGS_optimizeFlagStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optimizeFlagStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optimizeFlagStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@bool flagValue'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_flagValue (const GGS_bool & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_bool temp_0 = inObject ;
  GGS_string temp_1 ;
  const GalgasBool test_2 = temp_0.boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_string ("enabled") ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_string ("disabled") ;
  }
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//'@blockInvocationGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_blockInvocationGraph::GGS_blockInvocationGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInvocationGraph GGS_blockInvocationGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_blockInvocationGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
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
  capCollectionElement attributes ;
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
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
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
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
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
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInvocationGraph::method_nodesWithNoSuccessor (GGS_stringlist & outInfoList,
                                                            GGS_lstringlist & outKeyList
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInvocationGraph::method_nodesWithNoPredecessor (GGS_stringlist & outInfoList,
                                                              GGS_lstringlist & outKeyList
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
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

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction buildInstructionInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_buildInstructionInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                                     GGS_string & /* ioArgument_ioGraphVizString */,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildInstructionInvocationGraph (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          const GGS_lstring constin_inBlockLabel,
                                                          GGS_string & io_ioGraphVizString,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_buildInstructionInvocationGraph (constin_inBlockLabel, io_ioGraphVizString, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorInvocationGraph (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const GGS_lstring constin_inBlockLabel,
                                                         GGS_string & io_ioGraphVizString,
                                                         const GGS_bool constin_inDottedArrow,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_buildTerminatorInvocationGraph (constin_inBlockLabel, io_ioGraphVizString, constin_inDottedArrow, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GGS_string in_inNextBlockLabel,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_needToInsertJumpInstruction (in_inNextBlockLabel, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractBlockTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                                   GGS_blockInvocationGraph & /* ioArgument_ioGraph */,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorOrderedGraph (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                      const GGS_lstring constin_inBlockLabel,
                                                      GGS_blockInvocationGraph & io_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_buildTerminatorOrderedGraph (constin_inBlockLabel, io_ioGraph, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@clusterList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_clusterList : public cCollectionElement {
  public: GGS_clusterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_clusterList (const GGS_ipic_31__38_BlockList & in_mBlockList
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_clusterList (const GGS_clusterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_clusterList::cCollectionElement_clusterList (const GGS_ipic_31__38_BlockList & in_mBlockList
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBlockList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_clusterList::cCollectionElement_clusterList (const GGS_clusterList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBlockList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_clusterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_clusterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_clusterList (mObject.mProperty_mBlockList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @clusterList
//--------------------------------------------------------------------------------------------------

GGS_clusterList::GGS_clusterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList::GGS_clusterList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    const GGS_clusterList_2E_element element (p->mObject.mProperty_mBlockList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GGS_ipic_31__38_BlockList & in_mBlockList
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_clusterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_clusterList (in_mBlockList COMMA_THERE)) ;
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

GGS_clusterList GGS_clusterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_clusterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::class_func_emptyMap (LOCATION_ARGS) {
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
//  Map type @generatedCodeMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap::GGS_generatedCodeMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap::~ GGS_generatedCodeMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap::GGS_generatedCodeMap (const GGS_generatedCodeMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap & GGS_generatedCodeMap::operator = (const GGS_generatedCodeMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_generatedCodeMap::getter_hasKey (const GGS_string & inKey
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_generatedCodeMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_generatedCodeMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_generatedCodeMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_generatedCodeMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_generatedCodeMap::getter_keyList (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generatedCodeMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_generatedCodeMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::performInsert (const GGS_generatedCodeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_generatedCodeMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>
GGS_generatedCodeMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_generatedCodeMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>>
GGS_generatedCodeMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_generatedCodeMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_ GGS_generatedCodeMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_generatedCodeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_generatedCodeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_generatedCodeMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mCode = info->mProperty_mCode ;
      element.mProperty_mInstruction = info->mProperty_mInstruction ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::class_func_mapWithMapToOverride (const GGS_generatedCodeMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_generatedCodeMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_generatedCodeMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_codeList inArgument0,
                                             GGS_ipic_31__38_SequentialInstruction inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_generatedCodeMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_codeList & outArgument0,
                                             GGS_ipic_31__38_SequentialInstruction & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' entry is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mCode ;
    outArgument1 = info->mProperty_mInstruction ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_generatedCodeMap::getter_mCodeForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mCode ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_generatedCodeMap::getter_mInstructionForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInstruction ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::setter_setMCodeForKey (GGS_codeList inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_generatedCodeMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mCode = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::setter_setMInstructionForKey (GGS_ipic_31__38_SequentialInstruction inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_generatedCodeMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInstruction = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_generatedCodeMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> & inArray,
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
    ioString.appendString ("mCode:") ;
    inArray (i COMMA_HERE)->mProperty_mCode.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInstruction:") ;
    inArray (i COMMA_HERE)->mProperty_mInstruction.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> array = sortedInfoArray () ;
    GGS_generatedCodeMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_generatedCodeMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_generatedCodeMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @generatedCodeMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_generatedCodeMap::DownEnumerator_generatedCodeMap (const GGS_generatedCodeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element DownEnumerator_generatedCodeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_generatedCodeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList DownEnumerator_generatedCodeMap::current_mCode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction DownEnumerator_generatedCodeMap::current_mInstruction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstruction ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @generatedCodeMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_generatedCodeMap::UpEnumerator_generatedCodeMap (const GGS_generatedCodeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element UpEnumerator_generatedCodeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_generatedCodeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList UpEnumerator_generatedCodeMap::current_mCode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction UpEnumerator_generatedCodeMap::current_mInstruction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstruction ;
}


//--------------------------------------------------------------------------------------------------
//     @generatedCodeMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap ("generatedCodeMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_generatedCodeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generatedCodeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generatedCodeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  const GGS_generatedCodeMap * p = (const GGS_generatedCodeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generatedCodeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@uint x4string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_x_34_string (const GGS_uint & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GGS_uint (uint32_t (4096U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 13)) ;
  const GGS_uint temp_1 = inObject ;
  result_outResult.plusAssignOperation(temp_1.divide_operation (GGS_uint (uint32_t (256U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)) ;
  const GGS_uint temp_2 = inObject ;
  result_outResult.plusAssignOperation(temp_2.divide_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 15)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)) ;
  const GGS_uint temp_3 = inObject ;
  result_outResult.plusAssignOperation(temp_3.operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@uint x6string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_x_36_string (const GGS_uint & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GGS_uint (uint32_t (65536U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 22)) ;
  const GGS_uint temp_1 = inObject ;
  result_outResult.plusAssignOperation(temp_1.divide_operation (GGS_uint (uint32_t (4096U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)) ;
  const GGS_uint temp_2 = inObject ;
  result_outResult.plusAssignOperation(temp_2.divide_operation (GGS_uint (uint32_t (256U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)) ;
  const GGS_uint temp_3 = inObject ;
  result_outResult.plusAssignOperation(temp_3.divide_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)) ;
  const GGS_uint temp_4 = inObject ;
  result_outResult.plusAssignOperation(temp_4.operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Map type @blockMapForStackComputation
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation::GGS_blockMapForStackComputation (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation::~ GGS_blockMapForStackComputation (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation::GGS_blockMapForStackComputation (const GGS_blockMapForStackComputation & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation & GGS_blockMapForStackComputation::operator = (const GGS_blockMapForStackComputation & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::class_func_emptyMap (LOCATION_ARGS) {
  GGS_blockMapForStackComputation result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockMapForStackComputation::getter_hasKey (const GGS_string & inKey
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockMapForStackComputation::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                const GGS_uint & inLevel
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockMapForStackComputation::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockMapForStackComputation::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockMapForStackComputation::getter_locationForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_blockMapForStackComputation::getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockMapForStackComputation_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::performInsert (const GGS_blockMapForStackComputation_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_blockMapForStackComputation_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>
GGS_blockMapForStackComputation::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_blockMapForStackComputation::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>>
GGS_blockMapForStackComputation::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_blockMapForStackComputation::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_ GGS_blockMapForStackComputation
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockMapForStackComputation_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_blockMapForStackComputation_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockMapForStackComputation_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mBlock = info->mProperty_mBlock ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::class_func_mapWithMapToOverride (const GGS_blockMapForStackComputation & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockMapForStackComputation_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_blockMapForStackComputation result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::setter_insertKey (GGS_lstring inLKey,
                                                        GGS_ipic_31__38_Block inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_blockMapForStackComputation_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::method_searchKey (GGS_lstring inLKey,
                                                        GGS_ipic_31__38_Block & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> info ;
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
  }else{
    outArgument0 = info->mProperty_mBlock ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block GGS_blockMapForStackComputation::getter_mBlockForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_Block result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBlock ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::setter_setMBlockForKey (GGS_ipic_31__38_Block inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockMapForStackComputation_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBlock = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_blockMapForStackComputation_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> & inArray,
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
    ioString.appendString ("mBlock:") ;
    inArray (i COMMA_HERE)->mProperty_mBlock.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> array = sortedInfoArray () ;
    GGS_blockMapForStackComputation_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_blockMapForStackComputation_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_blockMapForStackComputation_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @blockMapForStackComputation
//--------------------------------------------------------------------------------------------------

DownEnumerator_blockMapForStackComputation::DownEnumerator_blockMapForStackComputation (const GGS_blockMapForStackComputation & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element DownEnumerator_blockMapForStackComputation::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_blockMapForStackComputation::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block DownEnumerator_blockMapForStackComputation::current_mBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBlock ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @blockMapForStackComputation
//--------------------------------------------------------------------------------------------------

UpEnumerator_blockMapForStackComputation::UpEnumerator_blockMapForStackComputation (const GGS_blockMapForStackComputation & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element UpEnumerator_blockMapForStackComputation::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_blockMapForStackComputation::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block UpEnumerator_blockMapForStackComputation::current_mBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBlock ;
}


//--------------------------------------------------------------------------------------------------
//     @blockMapForStackComputation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation ("blockMapForStackComputation",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockMapForStackComputation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockMapForStackComputation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockMapForStackComputation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation result ;
  const GGS_blockMapForStackComputation * p = (const GGS_blockMapForStackComputation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockMapForStackComputation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @routineCallMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap::GGS_routineCallMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap::~ GGS_routineCallMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap::GGS_routineCallMap (const GGS_routineCallMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap & GGS_routineCallMap::operator = (const GGS_routineCallMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineCallMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_routineCallMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineCallMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineCallMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineCallMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineCallMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_routineCallMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_routineCallMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineCallMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineCallMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::performInsert (const GGS_routineCallMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_routineCallMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>
GGS_routineCallMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_routineCallMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>>
GGS_routineCallMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineCallMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_ GGS_routineCallMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineCallMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_routineCallMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineCallMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mCalledRoutineSet = info->mProperty_mCalledRoutineSet ;
      element.mProperty_mTerminatorStackNeeds = info->mProperty_mTerminatorStackNeeds ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::class_func_mapWithMapToOverride (const GGS_routineCallMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_routineCallMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineCallMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_routineCallMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_stringset inArgument0,
                                           GGS_uint inArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_routineCallMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineCallMap::getter_mCalledRoutineSetForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mCalledRoutineSet ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineCallMap::getter_mTerminatorStackNeedsForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTerminatorStackNeeds ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::setter_setMCalledRoutineSetForKey (GGS_stringset inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineCallMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mCalledRoutineSet = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::setter_setMTerminatorStackNeedsForKey (GGS_uint inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineCallMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTerminatorStackNeeds = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_routineCallMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> & inArray,
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
    ioString.appendString ("mCalledRoutineSet:") ;
    inArray (i COMMA_HERE)->mProperty_mCalledRoutineSet.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTerminatorStackNeeds:") ;
    inArray (i COMMA_HERE)->mProperty_mTerminatorStackNeeds.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> array = sortedInfoArray () ;
    GGS_routineCallMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_routineCallMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_routineCallMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineCallMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineCallMap::DownEnumerator_routineCallMap (const GGS_routineCallMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element DownEnumerator_routineCallMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineCallMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset DownEnumerator_routineCallMap::current_mCalledRoutineSet (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCalledRoutineSet ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_routineCallMap::current_mTerminatorStackNeeds (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminatorStackNeeds ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineCallMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineCallMap::UpEnumerator_routineCallMap (const GGS_routineCallMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element UpEnumerator_routineCallMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineCallMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset UpEnumerator_routineCallMap::current_mCalledRoutineSet (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCalledRoutineSet ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_routineCallMap::current_mTerminatorStackNeeds (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminatorStackNeeds ;
}


//--------------------------------------------------------------------------------------------------
//     @routineCallMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap ("routineCallMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineCallMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineCallMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineCallMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_routineCallMap result ;
  const GGS_routineCallMap * p = (const GGS_routineCallMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineCallMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @routineStackRequirementMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap::GGS_routineStackRequirementMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap::~ GGS_routineStackRequirementMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap::GGS_routineStackRequirementMap (const GGS_routineStackRequirementMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap & GGS_routineStackRequirementMap::operator = (const GGS_routineStackRequirementMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_routineStackRequirementMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineStackRequirementMap::getter_hasKey (const GGS_string & inKey
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineStackRequirementMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                               const GGS_uint & inLevel
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineStackRequirementMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineStackRequirementMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_routineStackRequirementMap::getter_locationForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_routineStackRequirementMap::getter_keyList (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineStackRequirementMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineStackRequirementMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::performInsert (const GGS_routineStackRequirementMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_routineStackRequirementMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>
GGS_routineStackRequirementMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_routineStackRequirementMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>>
GGS_routineStackRequirementMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineStackRequirementMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_ GGS_routineStackRequirementMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineStackRequirementMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_routineStackRequirementMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineStackRequirementMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLevels = info->mProperty_mLevels ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::class_func_mapWithMapToOverride (const GGS_routineStackRequirementMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineStackRequirementMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_routineStackRequirementMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::setter_insertKey (GGS_lstring inLKey,
                                                       GGS_uint inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_routineStackRequirementMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::method_searchKey (GGS_lstring inLKey,
                                                       GGS_uint & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' entry is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mLevels ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineStackRequirementMap::getter_mLevelsForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLevels ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::setter_setMLevelsForKey (GGS_uint inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineStackRequirementMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLevels = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_routineStackRequirementMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> & inArray,
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
    ioString.appendString ("mLevels:") ;
    inArray (i COMMA_HERE)->mProperty_mLevels.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> array = sortedInfoArray () ;
    GGS_routineStackRequirementMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_routineStackRequirementMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_routineStackRequirementMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineStackRequirementMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineStackRequirementMap::DownEnumerator_routineStackRequirementMap (const GGS_routineStackRequirementMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element DownEnumerator_routineStackRequirementMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineStackRequirementMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_routineStackRequirementMap::current_mLevels (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLevels ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineStackRequirementMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineStackRequirementMap::UpEnumerator_routineStackRequirementMap (const GGS_routineStackRequirementMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element UpEnumerator_routineStackRequirementMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineStackRequirementMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_routineStackRequirementMap::current_mLevels (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLevels ;
}


//--------------------------------------------------------------------------------------------------
//     @routineStackRequirementMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap ("routineStackRequirementMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineStackRequirementMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineStackRequirementMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineStackRequirementMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap result ;
  const GGS_routineStackRequirementMap * p = (const GGS_routineStackRequirementMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineStackRequirementMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_exploreAccessibleBlocksForStackComputations (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                      GGS_stringset & io_ioBlockToExploreSet,
                                                                      GGS_stringset & io_ioExploredBlockSet,
                                                                      GGS_uint & out_outStackNeeds,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outStackNeeds.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_exploreAccessibleBlocksForStackComputations (io_ioBlockToExploreSet, io_ioExploredBlockSet, out_outStackNeeds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction buildCalledRoutineSetForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_buildCalledRoutineSetForStackComputations (GGS_stringset & /* ioArgument_ioRoutineCalledSet */,
                                                                                               Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildCalledRoutineSetForStackComputations (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                    GGS_stringset & io_ioRoutineCalledSet,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_buildCalledRoutineSetForStackComputations (io_ioRoutineCalledSet, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//  Map type @blockDurationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap::GGS_blockDurationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap::~ GGS_blockDurationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap::GGS_blockDurationMap (const GGS_blockDurationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap & GGS_blockDurationMap::operator = (const GGS_blockDurationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockDurationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_blockDurationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockDurationMap::getter_hasKey (const GGS_string & inKey
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockDurationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockDurationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockDurationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockDurationMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_blockDurationMap::getter_keyList (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockDurationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockDurationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::performInsert (const GGS_blockDurationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_blockDurationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>
GGS_blockDurationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_blockDurationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>>
GGS_blockDurationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_blockDurationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_ GGS_blockDurationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockDurationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_blockDurationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockDurationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mMinDuration = info->mProperty_mMinDuration ;
      element.mProperty_mMaxDuration = info->mProperty_mMaxDuration ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::class_func_mapWithMapToOverride (const GGS_blockDurationMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_blockDurationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockDurationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_blockDurationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_uint inArgument0,
                                             GGS_uint inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_blockDurationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_uint & outArgument0,
                                             GGS_uint & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' entry is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mMinDuration ;
    outArgument1 = info->mProperty_mMaxDuration ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockDurationMap::getter_mMinDurationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMinDuration ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockDurationMap::getter_mMaxDurationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMaxDuration ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::setter_setMMinDurationForKey (GGS_uint inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockDurationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMinDuration = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::setter_setMMaxDurationForKey (GGS_uint inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockDurationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMaxDuration = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_blockDurationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>> & inArray,
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
    ioString.appendString ("mMinDuration:") ;
    inArray (i COMMA_HERE)->mProperty_mMinDuration.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mMaxDuration:") ;
    inArray (i COMMA_HERE)->mProperty_mMaxDuration.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>> array = sortedInfoArray () ;
    GGS_blockDurationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_blockDurationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_blockDurationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @blockDurationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_blockDurationMap::DownEnumerator_blockDurationMap (const GGS_blockDurationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element DownEnumerator_blockDurationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_blockDurationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_blockDurationMap::current_mMinDuration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMinDuration ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_blockDurationMap::current_mMaxDuration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaxDuration ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @blockDurationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_blockDurationMap::UpEnumerator_blockDurationMap (const GGS_blockDurationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element UpEnumerator_blockDurationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_blockDurationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_blockDurationMap::current_mMinDuration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMinDuration ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_blockDurationMap::current_mMaxDuration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaxDuration ;
}


//--------------------------------------------------------------------------------------------------
//     @blockDurationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap ("blockDurationMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockDurationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockDurationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockDurationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_blockDurationMap result ;
  const GGS_blockDurationMap * p = (const GGS_blockDurationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockDurationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorMinMaxDuration (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const GGS_blockDurationMap constin_inExploredBlockMap,
                                                   const GGS_string constin_inNextLabel,
                                                   GGS_uint & out_outMin,
                                                   GGS_uint & out_outMax,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outMin.drop () ;
  out_outMax.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_terminatorMinMaxDuration (constin_inExploredBlockMap, constin_inNextLabel, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SingleInstructionTerminator duration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_duration (cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                   const GGS_blockDurationMap constin_inExploredBlockMap,
                                   const GGS_string constin_inNextLabel,
                                   GGS_uint & out_outMin,
                                   GGS_uint & out_outMax,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outMin.drop () ;
  out_outMax.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SingleInstructionTerminator) ;
    inObject->method_duration (constin_inExploredBlockMap, constin_inNextLabel, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                    GGS_uint & outArgument_outMin,
                                                                    GGS_uint & outArgument_outMax,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (1U)) ;
  outArgument_outMax = GGS_uint (uint32_t (1U)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         const GGS_blockDurationMap constin_inExploredBlockMap,
                                         GGS_uint & out_outMin,
                                         GGS_uint & out_outMax,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  out_outMin.drop () ;
  out_outMax.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_minMaxDuration (constin_inExploredBlockMap, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
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
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "unicode_character_cpp.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_piccoloDevice_5F_lexique::cTokenFor_piccoloDevice_5F_lexique (void) :
mLexicalAttribute_charValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_piccoloDevice_5F_lexique::Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                                                                    const String & inSourceFileName
                                                                    COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_piccoloDevice_5F_lexique::Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                                                                    const String & inSourceString,
                                                                    const String & inStringForError
                                                                    COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_piccoloDevice_5F_lexique_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge = "hex number too large" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_internalError = "internal error" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_piccoloDevice_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 34)) {
    static const char * syntaxErrorMessageArray [34] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a 32-bit unsigned number",
        "a character string constant \"...\"",
        "a comment",
        "the 'controller' keyword",
        "the 'processor' keyword",
        "the 'romsize' keyword",
        "the 'eepromsize' keyword",
        "the 'bank' keyword",
        "the 'unusedregister' keyword",
        "the 'mirrorat' keyword",
        "the 'ram' keyword",
        "the 'register' keyword",
        "the 'at' keyword",
        "the 'to' keyword",
        "the 'configuration' keyword",
        "the 'width' keyword",
        "the 'description' keyword",
        "the 'mask' keyword",
        "the 'illegal' keyword",
        "the 'message' keyword",
        "the 'setting' keyword",
        "the '<' delimitor",
        "the '>' delimitor",
        "the ',' delimitor",
        "the '-' delimitor",
        "the '/' delimitor",
        "the ';' delimitor",
        "the ':' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '{' delimitor",
        "the '}' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__2C_ = {
  TO_UNICODE (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__2D_ = {
  TO_UNICODE ('-'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__2F_ = {
  TO_UNICODE ('/'),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__30_x = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__3A_ = {
  TO_UNICODE (':'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__3B_ = {
  TO_UNICODE (';'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__3C_ = {
  TO_UNICODE ('<'),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__3E_ = {
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__5B_ = {
  TO_UNICODE ('['),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__5D_ = {
  TO_UNICODE (']'),
} ;

//--- Unicode string for '$at$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_at = {
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$bank$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_bank = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$configuration$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_configuration = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$controller$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_controller = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$description$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_description = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('c'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$eepromsize$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_eepromsize = {
  TO_UNICODE ('e'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$illegal$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_illegal = {
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$mask$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_mask = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$message$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_message = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$mirrorat$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_mirrorat = {
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$processor$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_processor = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$ram$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_ram = {
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
} ;

//--- Unicode string for '$register$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_register = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$romsize$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_romsize = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$setting$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_setting = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$to$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_to = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$unusedregister$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_unusedregister = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$width$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_width = {
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__7B_ = {
  TO_UNICODE ('{'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__7D_ = {
  TO_UNICODE ('}'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'controlKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccoloDevice_5F_lexique_controlKeyWordList = 18 ;

static const C_unicode_lexique_table_entry ktable_for_piccoloDevice_5F_lexique_controlKeyWordList [ktable_size_piccoloDevice_5F_lexique_controlKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_at, Lexique_piccoloDevice_5F_lexique::kToken_at),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_to, Lexique_piccoloDevice_5F_lexique::kToken_to),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_ram, Lexique_piccoloDevice_5F_lexique::kToken_ram),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_bank, Lexique_piccoloDevice_5F_lexique::kToken_bank),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_mask, Lexique_piccoloDevice_5F_lexique::kToken_mask),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_width, Lexique_piccoloDevice_5F_lexique::kToken_width),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_illegal, Lexique_piccoloDevice_5F_lexique::kToken_illegal),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_message, Lexique_piccoloDevice_5F_lexique::kToken_message),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_romsize, Lexique_piccoloDevice_5F_lexique::kToken_romsize),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_setting, Lexique_piccoloDevice_5F_lexique::kToken_setting),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_mirrorat, Lexique_piccoloDevice_5F_lexique::kToken_mirrorat),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_register, Lexique_piccoloDevice_5F_lexique::kToken_register),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_processor, Lexique_piccoloDevice_5F_lexique::kToken_processor),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_controller, Lexique_piccoloDevice_5F_lexique::kToken_controller),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_eepromsize, Lexique_piccoloDevice_5F_lexique::kToken_eepromsize),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_description, Lexique_piccoloDevice_5F_lexique::kToken_description),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_configuration, Lexique_piccoloDevice_5F_lexique::kToken_configuration),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_unusedregister, Lexique_piccoloDevice_5F_lexique::kToken_unusedregister)
} ;

int32_t Lexique_piccoloDevice_5F_lexique::search_into_controlKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccoloDevice_5F_lexique_controlKeyWordList, ktable_size_piccoloDevice_5F_lexique_controlKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccoloDevice_5F_lexique_delimitorsList = 11 ;

static const C_unicode_lexique_table_entry ktable_for_piccoloDevice_5F_lexique_delimitorsList [ktable_size_piccoloDevice_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__2C_, Lexique_piccoloDevice_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__2D_, Lexique_piccoloDevice_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__2F_, Lexique_piccoloDevice_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3A_, Lexique_piccoloDevice_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3B_, Lexique_piccoloDevice_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3C_, Lexique_piccoloDevice_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3E_, Lexique_piccoloDevice_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__5B_, Lexique_piccoloDevice_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__5D_, Lexique_piccoloDevice_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__7B_, Lexique_piccoloDevice_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__7D_, Lexique_piccoloDevice_5F_lexique::kToken__7D_)
} ;

int32_t Lexique_piccoloDevice_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccoloDevice_5F_lexique_delimitorsList, ktable_size_piccoloDevice_5F_lexique_delimitorsList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_piccoloDevice_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_piccoloDevice_5F_lexique * ptr = (const cTokenFor_piccoloDevice_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_string:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("string") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_controller:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("controller") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_processor:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("processor") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_romsize:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("romsize") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_eepromsize:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("eepromsize") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bank:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bank") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_unusedregister:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("unusedregister") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_mirrorat:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("mirrorat") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_ram:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("ram") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_register:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("register") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_at:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("at") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_to:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("to") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_configuration:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("configuration") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_width:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("width") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_description:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("description") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_mask:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("mask") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_illegal:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("illegal") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_message:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("message") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_setting:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("setting") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (",") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (";") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_piccoloDevice_5F_lexique::internalParseLexicalToken (cTokenFor_piccoloDevice_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_charValue = TO_UNICODE (0) ;
  token.mLexicalAttribute_identifierString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_controlKeyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__30_x, true)) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
      ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3C_, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__2F_, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          if (testForInputUTF32Char (TO_UNICODE ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\f')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\n')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\r')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\t')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\v')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('0'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\0')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\'')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            do {
              ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_piccoloDevice_5F_lexique_ASCIIcodeTooLargeError, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
          }else{
            lexicalError (gLexicalMessage_piccoloDevice_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE ('~'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        token.mTokenCode = kToken_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_piccoloDevice_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
    }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_piccoloDevice_5F_lexique::parseLexicalToken (void) {
  cTokenFor_piccoloDevice_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_piccoloDevice_5F_lexique::enterToken (cTokenFor_piccoloDevice_5F_lexique & ioToken) {
  cTokenFor_piccoloDevice_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_piccoloDevice_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

utf32 Lexique_piccoloDevice_5F_lexique::attributeValue_charValue (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_piccoloDevice_5F_lexique::attributeValue_identifierString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_piccoloDevice_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_piccoloDevice_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lchar Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_charValue (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_char value (ptr->mLexicalAttribute_charValue) ;
  GGS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_identifierString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_identifierString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_piccoloDevice_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("string") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("controller") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("processor") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("romsize") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("eepromsize") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bank") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("unusedregister") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mirrorat") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ram") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("register") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("at") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("to") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("configuration") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("width") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("description") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mask") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("illegal") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("message") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("setting") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_piccoloDevice_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("piccoloDevice_lexique:controlKeyWordList") ;
  ioList.appendObject ("piccoloDevice_lexique:delimitorsList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_piccoloDevice_5F_lexique (const String & inIdentifier,
                                                               bool & ioFound,
                                                               GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "piccoloDevice_lexique:controlKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("at") ;
    ioList.appendObject ("to") ;
    ioList.appendObject ("ram") ;
    ioList.appendObject ("bank") ;
    ioList.appendObject ("mask") ;
    ioList.appendObject ("width") ;
    ioList.appendObject ("illegal") ;
    ioList.appendObject ("message") ;
    ioList.appendObject ("romsize") ;
    ioList.appendObject ("setting") ;
    ioList.appendObject ("mirrorat") ;
    ioList.appendObject ("register") ;
    ioList.appendObject ("processor") ;
    ioList.appendObject ("controller") ;
    ioList.appendObject ("eepromsize") ;
    ioList.appendObject ("description") ;
    ioList.appendObject ("configuration") ;
    ioList.appendObject ("unusedregister") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "piccoloDevice_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("<") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("}") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_piccoloDevice_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_piccoloDevice_5F_lexique, getKeywordsForIdentifier_piccoloDevice_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_piccoloDevice_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [34] = {0,
    0 /* piccoloDevice_lexique_1_identifier */,
    4 /* piccoloDevice_lexique_1_integer */,
    5 /* piccoloDevice_lexique_1_string */,
    6 /* piccoloDevice_lexique_1_comment */,
    1 /* piccoloDevice_lexique_1_controller */,
    1 /* piccoloDevice_lexique_1_processor */,
    1 /* piccoloDevice_lexique_1_romsize */,
    1 /* piccoloDevice_lexique_1_eepromsize */,
    1 /* piccoloDevice_lexique_1_bank */,
    1 /* piccoloDevice_lexique_1_unusedregister */,
    1 /* piccoloDevice_lexique_1_mirrorat */,
    1 /* piccoloDevice_lexique_1_ram */,
    1 /* piccoloDevice_lexique_1_register */,
    1 /* piccoloDevice_lexique_1_at */,
    1 /* piccoloDevice_lexique_1_to */,
    1 /* piccoloDevice_lexique_1_configuration */,
    1 /* piccoloDevice_lexique_1_width */,
    1 /* piccoloDevice_lexique_1_description */,
    1 /* piccoloDevice_lexique_1_mask */,
    1 /* piccoloDevice_lexique_1_illegal */,
    1 /* piccoloDevice_lexique_1_message */,
    1 /* piccoloDevice_lexique_1_setting */,
    3 /* piccoloDevice_lexique_1__3C_ */,
    3 /* piccoloDevice_lexique_1__3E_ */,
    3 /* piccoloDevice_lexique_1__2C_ */,
    3 /* piccoloDevice_lexique_1__2D_ */,
    3 /* piccoloDevice_lexique_1__2F_ */,
    3 /* piccoloDevice_lexique_1__3B_ */,
    3 /* piccoloDevice_lexique_1__3A_ */,
    3 /* piccoloDevice_lexique_1__5B_ */,
    3 /* piccoloDevice_lexique_1__5D_ */,
    3 /* piccoloDevice_lexique_1__7B_ */,
    3 /* piccoloDevice_lexique_1__7D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_piccoloDevice_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 7) {
    static const char * kStyleArray [7] = {
      "",
      "keywordStyle",
      "instructionStyle",
      "delimitersStyle",
      "integerStyle",
      "stringStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @declaredByteMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap::GGS_declaredByteMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap::~ GGS_declaredByteMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap::GGS_declaredByteMap (const GGS_declaredByteMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap & GGS_declaredByteMap::operator = (const GGS_declaredByteMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_declaredByteMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredByteMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredByteMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declaredByteMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declaredByteMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_declaredByteMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_declaredByteMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredByteMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_declaredByteMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::performInsert (const GGS_declaredByteMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_declaredByteMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>
GGS_declaredByteMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_declaredByteMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>>
GGS_declaredByteMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_declaredByteMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_ GGS_declaredByteMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declaredByteMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_declaredByteMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_declaredByteMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::class_func_mapWithMapToOverride (const GGS_declaredByteMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_declaredByteMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_declaredByteMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_declaredByteMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' byte is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::method_searchKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' byte is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_declaredByteMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> & inArray,
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

void GGS_declaredByteMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> array = sortedInfoArray () ;
    GGS_declaredByteMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_declaredByteMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_declaredByteMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @declaredByteMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_declaredByteMap::DownEnumerator_declaredByteMap (const GGS_declaredByteMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element DownEnumerator_declaredByteMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_declaredByteMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @declaredByteMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_declaredByteMap::UpEnumerator_declaredByteMap (const GGS_declaredByteMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element UpEnumerator_declaredByteMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_declaredByteMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @declaredByteMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap ("declaredByteMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredByteMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredByteMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredByteMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap result ;
  const GGS_declaredByteMap * p = (const GGS_declaredByteMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredByteMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @registerTable
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_registerTable::GGS_registerTable (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable::~ GGS_registerTable (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable::GGS_registerTable (const GGS_registerTable & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable & GGS_registerTable::operator = (const GGS_registerTable & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_registerTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::class_func_emptyMap (LOCATION_ARGS) {
  GGS_registerTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerTable::getter_hasKey (const GGS_string & inKey
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerTable::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                  const GGS_uint & inLevel
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_registerTable::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_registerTable::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_registerTable::getter_locationForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_registerTable::getter_keyList (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerTable::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_registerTable_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::performInsert (const GGS_registerTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>
GGS_registerTable::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_registerTable::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>>
GGS_registerTable::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_registerTable::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_ GGS_registerTable
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_registerTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_registerTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_registerTable_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRegisterAddressList = info->mProperty_mRegisterAddressList ;
      element.mProperty_mSize = info->mProperty_mSize ;
      element.mProperty_mBitSliceTable = info->mProperty_mBitSliceTable ;
      element.mProperty_mBitDefinitionString = info->mProperty_mBitDefinitionString ;
      element.mProperty_mProtection = info->mProperty_mProtection ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::class_func_mapWithMapToOverride (const GGS_registerTable & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_registerTable result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_registerTable_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_registerTable result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_insertKey (GGS_lstring inLKey,
                                          GGS_uintlist inArgument0,
                                          GGS_uint inArgument1,
                                          GGS_bitSliceTable inArgument2,
                                          GGS_string inArgument3,
                                          GGS_registerProtection inArgument4,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const GGS_registerTable_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4) ;
  const char * kInsertErrorMessage = "the '%K' register is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::method_searchKey (GGS_lstring inLKey,
                                          GGS_uintlist & outArgument0,
                                          GGS_uint & outArgument1,
                                          GGS_bitSliceTable & outArgument2,
                                          GGS_string & outArgument3,
                                          GGS_registerProtection & outArgument4,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' register is not declared" ;
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
    outArgument0 = info->mProperty_mRegisterAddressList ;
    outArgument1 = info->mProperty_mSize ;
    outArgument2 = info->mProperty_mBitSliceTable ;
    outArgument3 = info->mProperty_mBitDefinitionString ;
    outArgument4 = info->mProperty_mProtection ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_registerTable::getter_mRegisterAddressListForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterAddressList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_registerTable::getter_mSizeForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_registerTable::getter_mBitSliceTableForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_bitSliceTable result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitSliceTable ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_registerTable::getter_mBitDefinitionStringForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitDefinitionString ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerTable::getter_mProtectionForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_registerProtection result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mProtection ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMRegisterAddressListForKey (GGS_uintlist inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterAddressList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMSizeForKey (GGS_uint inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMBitSliceTableForKey (GGS_bitSliceTable inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitSliceTable = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMBitDefinitionStringForKey (GGS_string inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitDefinitionString = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMProtectionForKey (GGS_registerProtection inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mProtection = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_registerTable_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>> & inArray,
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
    ioString.appendString ("mRegisterAddressList:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterAddressList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSize:") ;
    inArray (i COMMA_HERE)->mProperty_mSize.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBitSliceTable:") ;
    inArray (i COMMA_HERE)->mProperty_mBitSliceTable.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBitDefinitionString:") ;
    inArray (i COMMA_HERE)->mProperty_mBitDefinitionString.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mProtection:") ;
    inArray (i COMMA_HERE)->mProperty_mProtection.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>> array = sortedInfoArray () ;
    GGS_registerTable_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_registerTable_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_registerTable_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @registerTable
//--------------------------------------------------------------------------------------------------

DownEnumerator_registerTable::DownEnumerator_registerTable (const GGS_registerTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element DownEnumerator_registerTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_registerTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_registerTable::current_mRegisterAddressList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddressList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_registerTable::current_mSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable DownEnumerator_registerTable::current_mBitSliceTable (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitSliceTable ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_registerTable::current_mBitDefinitionString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitDefinitionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection DownEnumerator_registerTable::current_mProtection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mProtection ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @registerTable
//--------------------------------------------------------------------------------------------------

UpEnumerator_registerTable::UpEnumerator_registerTable (const GGS_registerTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element UpEnumerator_registerTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_registerTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_registerTable::current_mRegisterAddressList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddressList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_registerTable::current_mSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable UpEnumerator_registerTable::current_mBitSliceTable (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitSliceTable ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_registerTable::current_mBitDefinitionString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitDefinitionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection UpEnumerator_registerTable::current_mProtection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mProtection ;
}


//--------------------------------------------------------------------------------------------------
//     @registerTable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable ("registerTable",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_registerTable result ;
  const GGS_registerTable * p = (const GGS_registerTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerTable checkPrivateAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkPrivateAccess (const GGS_registerTable inObject,
                                         const GGS_lstring constinArgument_inKey,
                                         const GGS_bool constinArgument_inWriteAccess,
                                         const GGS_registerProtection constinArgument_inRegisterProtection,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRegisterProtection.enumValue ()) {
  case GGS_registerProtection::Enumeration::invalid:
    break ;
  case GGS_registerProtection::Enumeration::enum_publicRegister:
    break ;
  case GGS_registerProtection::Enumeration::enum_protectedRegister:
    {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_bool test_1 = constinArgument_inWriteAccess ;
        if (GalgasBool::boolTrue == test_1.boolEnum ()) {
          const GGS_registerTable temp_2 = inObject ;
          test_1 = temp_2.getter_hasKey (constinArgument_inKey.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 32)) ;
        }
        test_0 = test_1.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          const GGS_registerTable temp_3 = inObject ;
          GGS_location var_declarationLocation_1019 = temp_3.getter_locationForKey (constinArgument_inKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 33)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::notEqual, var_declarationLocation_1019.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 34)).objectCompare (constinArgument_inKey.readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 34)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inKey.readProperty_location (), GGS_string ("register is protected, write is reserved to instructions in declaration file"), fixItArray5  COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 35)) ;
            }
          }
        }
      }
    }
    break ;
  case GGS_registerProtection::Enumeration::enum_privateRegister:
    {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_registerTable temp_7 = inObject ;
        test_6 = temp_7.getter_hasKey (constinArgument_inKey.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 39)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_registerTable temp_8 = inObject ;
          GGS_location var_declarationLocation_1323 = temp_8.getter_locationForKey (constinArgument_inKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 40)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::notEqual, var_declarationLocation_1323.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 41)).objectCompare (constinArgument_inKey.readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 41)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (constinArgument_inKey.readProperty_location (), GGS_string ("register is private to declaration file"), fixItArray10  COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 42)) ;
            }
          }
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Map type @ramBankTable
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable::GGS_ramBankTable (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable::~ GGS_ramBankTable (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable::GGS_ramBankTable (const GGS_ramBankTable & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable & GGS_ramBankTable::operator = (const GGS_ramBankTable & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_ramBankTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::class_func_emptyMap (LOCATION_ARGS) {
  GGS_ramBankTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ramBankTable::getter_hasKey (const GGS_string & inKey
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ramBankTable::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                 const GGS_uint & inLevel
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ramBankTable::getter_locationForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_ramBankTable::getter_keyList (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramBankTable::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_ramBankTable_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::performInsert (const GGS_ramBankTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>
GGS_ramBankTable::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_ramBankTable::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>>
GGS_ramBankTable::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_ramBankTable::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_ GGS_ramBankTable
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ramBankTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_ramBankTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_ramBankTable_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFirstAddress = info->mProperty_mFirstAddress ;
      element.mProperty_mFirstFreeAddress = info->mProperty_mFirstFreeAddress ;
      element.mProperty_mLastAddressPlusOne = info->mProperty_mLastAddressPlusOne ;
      element.mProperty_mMirrorOffsetList = info->mProperty_mMirrorOffsetList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::class_func_mapWithMapToOverride (const GGS_ramBankTable & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GGS_ramBankTable result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_ramBankTable_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_ramBankTable result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_insertKey (GGS_lstring inLKey,
                                         GGS_uint inArgument0,
                                         GGS_uint inArgument1,
                                         GGS_uint inArgument2,
                                         GGS_uintlist inArgument3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_ramBankTable_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' bank ram is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::method_searchKey (GGS_lstring inLKey,
                                         GGS_uint & outArgument0,
                                         GGS_uint & outArgument1,
                                         GGS_uint & outArgument2,
                                         GGS_uintlist & outArgument3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' bank ram is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mFirstAddress ;
    outArgument1 = info->mProperty_mFirstFreeAddress ;
    outArgument2 = info->mProperty_mLastAddressPlusOne ;
    outArgument3 = info->mProperty_mMirrorOffsetList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_mFirstAddressForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFirstAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_mFirstFreeAddressForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFirstFreeAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_mLastAddressPlusOneForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLastAddressPlusOne ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_ramBankTable::getter_mMirrorOffsetListForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMirrorOffsetList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMFirstAddressForKey (GGS_uint inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFirstAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMFirstFreeAddressForKey (GGS_uint inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFirstFreeAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMLastAddressPlusOneForKey (GGS_uint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLastAddressPlusOne = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMMirrorOffsetListForKey (GGS_uintlist inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMirrorOffsetList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_ramBankTable_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> & inArray,
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
    ioString.appendString ("mFirstAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mFirstAddress.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFirstFreeAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mFirstFreeAddress.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLastAddressPlusOne:") ;
    inArray (i COMMA_HERE)->mProperty_mLastAddressPlusOne.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mMirrorOffsetList:") ;
    inArray (i COMMA_HERE)->mProperty_mMirrorOffsetList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> array = sortedInfoArray () ;
    GGS_ramBankTable_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_ramBankTable_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_ramBankTable_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @ramBankTable
//--------------------------------------------------------------------------------------------------

DownEnumerator_ramBankTable::DownEnumerator_ramBankTable (const GGS_ramBankTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element DownEnumerator_ramBankTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_ramBankTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ramBankTable::current_mFirstAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFirstAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ramBankTable::current_mFirstFreeAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFirstFreeAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ramBankTable::current_mLastAddressPlusOne (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLastAddressPlusOne ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_ramBankTable::current_mMirrorOffsetList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMirrorOffsetList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @ramBankTable
//--------------------------------------------------------------------------------------------------

UpEnumerator_ramBankTable::UpEnumerator_ramBankTable (const GGS_ramBankTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element UpEnumerator_ramBankTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_ramBankTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ramBankTable::current_mFirstAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFirstAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ramBankTable::current_mFirstFreeAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFirstFreeAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ramBankTable::current_mLastAddressPlusOne (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLastAddressPlusOne ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_ramBankTable::current_mMirrorOffsetList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMirrorOffsetList ;
}


//--------------------------------------------------------------------------------------------------
//     @ramBankTable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable ("ramBankTable",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ramBankTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ramBankTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ramBankTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_ramBankTable result ;
  const GGS_ramBankTable * p = (const GGS_ramBankTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ramBankTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum processorType
//--------------------------------------------------------------------------------------------------

GGS_processorType::GGS_processorType (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_processorType GGS_processorType::class_func_pic_31__38__5F__36__30_ (UNUSED_LOCATION_ARGS) {
  GGS_processorType result ;
  result.mEnum = Enumeration::enum_pic_31__38__5F__36__30_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_processorType GGS_processorType::class_func_pic_31__38__5F__38__30_ (UNUSED_LOCATION_ARGS) {
  GGS_processorType result ;
  result.mEnum = Enumeration::enum_pic_31__38__5F__38__30_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_processorType GGS_processorType::class_func_midrange (UNUSED_LOCATION_ARGS) {
  GGS_processorType result ;
  result.mEnum = Enumeration::enum_midrange ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_processorType GGS_processorType::class_func_baseline (UNUSED_LOCATION_ARGS) {
  GGS_processorType result ;
  result.mEnum = Enumeration::enum_baseline ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_processorType [5] = {
  "(not built)",
  "pic18_60",
  "pic18_80",
  "midrange",
  "baseline"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_processorType::getter_isPic_31__38__5F__36__30_ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_pic_31__38__5F__36__30_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_processorType::getter_isPic_31__38__5F__38__30_ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_pic_31__38__5F__38__30_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_processorType::getter_isMidrange (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_midrange == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_processorType::getter_isBaseline (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_baseline == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_processorType::description (String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @processorType: ") ;
  ioString.appendCString (gEnumNameArrayFor_processorType [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @processorType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_processorType ("processorType",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_processorType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_processorType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_processorType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_processorType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_processorType GGS_processorType::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_processorType result ;
  const GGS_processorType * p = (const GGS_processorType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_processorType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("processorType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@illegalMaskList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_illegalMaskList : public cCollectionElement {
  public: GGS_illegalMaskList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_illegalMaskList (const GGS_luint & in_mIllegalValue,
                                              const GGS_luint & in_mIllegalMask,
                                              const GGS_lstring & in_mDescription
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_illegalMaskList (const GGS_illegalMaskList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_illegalMaskList::cCollectionElement_illegalMaskList (const GGS_luint & in_mIllegalValue,
                                                                        const GGS_luint & in_mIllegalMask,
                                                                        const GGS_lstring & in_mDescription
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIllegalValue, in_mIllegalMask, in_mDescription) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_illegalMaskList::cCollectionElement_illegalMaskList (const GGS_illegalMaskList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mIllegalValue, inElement.mProperty_mIllegalMask, inElement.mProperty_mDescription) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_illegalMaskList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_illegalMaskList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_illegalMaskList (mObject.mProperty_mIllegalValue, mObject.mProperty_mIllegalMask, mObject.mProperty_mDescription COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @illegalMaskList
//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList::GGS_illegalMaskList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList::GGS_illegalMaskList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    const GGS_illegalMaskList_2E_element element (p->mObject.mProperty_mIllegalValue, p->mObject.mProperty_mIllegalMask, p->mObject.mProperty_mDescription) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_luint & in_mIllegalValue,
                                                     const GGS_luint & in_mIllegalMask,
                                                     const GGS_lstring & in_mDescription
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = nullptr ;
  macroMyNew (p, cCollectionElement_illegalMaskList (in_mIllegalValue, in_mIllegalMask, in_mDescription COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_illegalMaskList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_illegalMaskList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::description (String & ioString,
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
      ioString.appendString ("mIllegalValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIllegalValue.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIllegalMask:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIllegalMask.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDescription:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDescription.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_illegalMaskList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_illegalMaskList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::plusPlusAssignOperation (const GGS_illegalMaskList_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::class_func_listWithValue (const GGS_luint & inOperand0,
                                                                   const GGS_luint & inOperand1,
                                                                   const GGS_lstring & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_illegalMaskList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_illegalMaskList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::addAssignOperation (const GGS_luint & inOperand0,
                                              const GGS_luint & inOperand1,
                                              const GGS_lstring & inOperand2
                                              COMMA_LOCATION_ARGS) {
  const GGS_illegalMaskList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_append (const GGS_luint inOperand0,
                                         const GGS_luint inOperand1,
                                         const GGS_lstring inOperand2,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_illegalMaskList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_insertAtIndex (const GGS_luint inOperand0,
                                                const GGS_luint inOperand1,
                                                const GGS_lstring inOperand2,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_illegalMaskList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_illegalMaskList::setter_removeAtIndex (GGS_luint & outOperand0,
                                                GGS_luint & outOperand1,
                                                GGS_lstring & outOperand2,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mIllegalValue ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mIllegalMask ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mDescription ;
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

void GGS_illegalMaskList::setter_popFirst (GGS_luint & outOperand0,
                                           GGS_luint & outOperand1,
                                           GGS_lstring & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mIllegalValue ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIllegalMask ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDescription ;
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

void GGS_illegalMaskList::setter_popLast (GGS_luint & outOperand0,
                                          GGS_luint & outOperand1,
                                          GGS_lstring & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mIllegalValue ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIllegalMask ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDescription ;
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

void GGS_illegalMaskList::method_first (GGS_luint & outOperand0,
                                        GGS_luint & outOperand1,
                                        GGS_lstring & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mIllegalValue ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIllegalMask ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDescription ;
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

void GGS_illegalMaskList::method_last (GGS_luint & outOperand0,
                                       GGS_luint & outOperand1,
                                       GGS_lstring & outOperand2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mIllegalValue ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIllegalMask ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDescription ;
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

GGS_illegalMaskList GGS_illegalMaskList::add_operation (const GGS_illegalMaskList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
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

GGS_illegalMaskList GGS_illegalMaskList::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
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

GGS_illegalMaskList GGS_illegalMaskList::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::plusAssignOperation (const GGS_illegalMaskList inList,
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

void GGS_illegalMaskList::setter_setMIllegalValueAtIndex (GGS_luint inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIllegalValue = inOperand ;
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
  
GGS_luint GGS_illegalMaskList::getter_mIllegalValueAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIllegalValue ;
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

void GGS_illegalMaskList::setter_setMIllegalMaskAtIndex (GGS_luint inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIllegalMask = inOperand ;
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
  
GGS_luint GGS_illegalMaskList::getter_mIllegalMaskAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIllegalMask ;
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

void GGS_illegalMaskList::setter_setMDescriptionAtIndex (GGS_lstring inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDescription = inOperand ;
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
  
GGS_lstring GGS_illegalMaskList::getter_mDescriptionAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDescription ;
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
// Down Enumerator for @illegalMaskList
//--------------------------------------------------------------------------------------------------

DownEnumerator_illegalMaskList::DownEnumerator_illegalMaskList (const GGS_illegalMaskList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element DownEnumerator_illegalMaskList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_illegalMaskList::current_mIllegalValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIllegalValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_illegalMaskList::current_mIllegalMask (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIllegalMask ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_illegalMaskList::current_mDescription (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDescription ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @illegalMaskList
//--------------------------------------------------------------------------------------------------

UpEnumerator_illegalMaskList::UpEnumerator_illegalMaskList (const GGS_illegalMaskList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element UpEnumerator_illegalMaskList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_illegalMaskList::current_mIllegalValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIllegalValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_illegalMaskList::current_mIllegalMask (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIllegalMask ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_illegalMaskList::current_mDescription (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDescription ;
}




//--------------------------------------------------------------------------------------------------
//     @illegalMaskList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_illegalMaskList ("illegalMaskList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_illegalMaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_illegalMaskList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_illegalMaskList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_illegalMaskList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_illegalMaskList result ;
  const GGS_illegalMaskList * p = (const GGS_illegalMaskList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_illegalMaskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("illegalMaskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @configRegisterMaskMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap::GGS_configRegisterMaskMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap::~ GGS_configRegisterMaskMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap::GGS_configRegisterMaskMap (const GGS_configRegisterMaskMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap & GGS_configRegisterMaskMap::operator = (const GGS_configRegisterMaskMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_configRegisterMaskMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configRegisterMaskMap::getter_hasKey (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configRegisterMaskMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                          const GGS_uint & inLevel
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configRegisterMaskMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configRegisterMaskMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_configRegisterMaskMap::getter_locationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_configRegisterMaskMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMaskMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configRegisterMaskMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::performInsert (const GGS_configRegisterMaskMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMaskMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>
GGS_configRegisterMaskMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_configRegisterMaskMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>>
GGS_configRegisterMaskMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_configRegisterMaskMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_ GGS_configRegisterMaskMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configRegisterMaskMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_configRegisterMaskMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_configRegisterMaskMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mMaskValue = info->mProperty_mMaskValue ;
      element.mProperty_mDescription = info->mProperty_mDescription ;
      element.mProperty_mFieldSettingMap = info->mProperty_mFieldSettingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::class_func_mapWithMapToOverride (const GGS_configRegisterMaskMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configRegisterMaskMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMaskMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::setter_insertKey (GGS_lstring inLKey,
                                                  GGS_luint inArgument0,
                                                  GGS_lstring inArgument1,
                                                  GGS_fieldSettingMap inArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_configRegisterMaskMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' configuration register mask is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::method_searchKey (GGS_lstring inLKey,
                                                  GGS_luint & outArgument0,
                                                  GGS_lstring & outArgument1,
                                                  GGS_fieldSettingMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' configuration register mask is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mMaskValue ;
    outArgument1 = info->mProperty_mDescription ;
    outArgument2 = info->mProperty_mFieldSettingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configRegisterMaskMap::getter_mMaskValueForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (key) ;
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

GGS_lstring GGS_configRegisterMaskMap::getter_mDescriptionForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (key) ;
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

GGS_fieldSettingMap GGS_configRegisterMaskMap::getter_mFieldSettingMapForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_fieldSettingMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (key) ;
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

void GGS_configRegisterMaskMap::setter_setMMaskValueForKey (GGS_luint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMaskMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_configRegisterMaskMap::setter_setMDescriptionForKey (GGS_lstring inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMaskMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_configRegisterMaskMap::setter_setMFieldSettingMapForKey (GGS_fieldSettingMap inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMaskMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_configRegisterMaskMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> & inArray,
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

void GGS_configRegisterMaskMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> array = sortedInfoArray () ;
    GGS_configRegisterMaskMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_configRegisterMaskMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_configRegisterMaskMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @configRegisterMaskMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_configRegisterMaskMap::DownEnumerator_configRegisterMaskMap (const GGS_configRegisterMaskMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element DownEnumerator_configRegisterMaskMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configRegisterMaskMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_configRegisterMaskMap::current_mMaskValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configRegisterMaskMap::current_mDescription (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap DownEnumerator_configRegisterMaskMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @configRegisterMaskMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_configRegisterMaskMap::UpEnumerator_configRegisterMaskMap (const GGS_configRegisterMaskMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element UpEnumerator_configRegisterMaskMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configRegisterMaskMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_configRegisterMaskMap::current_mMaskValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configRegisterMaskMap::current_mDescription (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap UpEnumerator_configRegisterMaskMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFieldSettingMap ;
}


//--------------------------------------------------------------------------------------------------
//     @configRegisterMaskMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap ("configRegisterMaskMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMaskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMaskMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMaskMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap result ;
  const GGS_configRegisterMaskMap * p = (const GGS_configRegisterMaskMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMaskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @configRegisterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap::GGS_configRegisterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap::~ GGS_configRegisterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap::GGS_configRegisterMap (const GGS_configRegisterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap & GGS_configRegisterMap::operator = (const GGS_configRegisterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_configRegisterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configRegisterMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configRegisterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configRegisterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configRegisterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_configRegisterMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_configRegisterMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configRegisterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::performInsert (const GGS_configRegisterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>
GGS_configRegisterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_configRegisterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>>
GGS_configRegisterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_configRegisterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_ GGS_configRegisterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configRegisterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_configRegisterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_configRegisterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRegisterAddress = info->mProperty_mRegisterAddress ;
      element.mProperty_mRegisterWidth = info->mProperty_mRegisterWidth ;
      element.mProperty_mConfigRegisterMaskMap = info->mProperty_mConfigRegisterMaskMap ;
      element.mProperty_mIllegalMaskList = info->mProperty_mIllegalMaskList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::class_func_mapWithMapToOverride (const GGS_configRegisterMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configRegisterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_luint inArgument0,
                                              GGS_luint inArgument1,
                                              GGS_configRegisterMaskMap inArgument2,
                                              GGS_illegalMaskList inArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_configRegisterMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' configuration register is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_luint & outArgument0,
                                              GGS_luint & outArgument1,
                                              GGS_configRegisterMaskMap & outArgument2,
                                              GGS_illegalMaskList & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' configuration register is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mRegisterAddress ;
    outArgument1 = info->mProperty_mRegisterWidth ;
    outArgument2 = info->mProperty_mConfigRegisterMaskMap ;
    outArgument3 = info->mProperty_mIllegalMaskList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configRegisterMap::getter_mRegisterAddressForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configRegisterMap::getter_mRegisterWidthForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterWidth ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMap::getter_mConfigRegisterMaskMapForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMaskMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mConfigRegisterMaskMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_configRegisterMap::getter_mIllegalMaskListForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIllegalMaskList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMRegisterAddressForKey (GGS_luint inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMRegisterWidthForKey (GGS_luint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterWidth = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMConfigRegisterMaskMapForKey (GGS_configRegisterMaskMap inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mConfigRegisterMaskMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMIllegalMaskListForKey (GGS_illegalMaskList inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIllegalMaskList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_configRegisterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> & inArray,
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
    ioString.appendString ("mRegisterAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterAddress.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRegisterWidth:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterWidth.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mConfigRegisterMaskMap:") ;
    inArray (i COMMA_HERE)->mProperty_mConfigRegisterMaskMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIllegalMaskList:") ;
    inArray (i COMMA_HERE)->mProperty_mIllegalMaskList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> array = sortedInfoArray () ;
    GGS_configRegisterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_configRegisterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_configRegisterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @configRegisterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_configRegisterMap::DownEnumerator_configRegisterMap (const GGS_configRegisterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element DownEnumerator_configRegisterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configRegisterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_configRegisterMap::current_mRegisterAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_configRegisterMap::current_mRegisterWidth (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap DownEnumerator_configRegisterMap::current_mConfigRegisterMaskMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConfigRegisterMaskMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList DownEnumerator_configRegisterMap::current_mIllegalMaskList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIllegalMaskList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @configRegisterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_configRegisterMap::UpEnumerator_configRegisterMap (const GGS_configRegisterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element UpEnumerator_configRegisterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configRegisterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_configRegisterMap::current_mRegisterAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_configRegisterMap::current_mRegisterWidth (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap UpEnumerator_configRegisterMap::current_mConfigRegisterMaskMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConfigRegisterMaskMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList UpEnumerator_configRegisterMap::current_mIllegalMaskList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIllegalMaskList ;
}


//--------------------------------------------------------------------------------------------------
//     @configRegisterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap ("configRegisterMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap result ;
  const GGS_configRegisterMap * p = (const GGS_configRegisterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                        Lexique_piccoloDevice_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  GGS_lstring var_deviceName_336 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  GGS_processorType var_processorType_388 ;
  GGS_lstring var_processorName_427 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_processorType_388 = GGS_processorType::class_func_pic_31__38__5F__36__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 18)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("pic18_80"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_processorType_388 = GGS_processorType::class_func_pic_31__38__5F__38__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 20)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_processorType_388 = GGS_processorType::class_func_midrange (SOURCE_FILE ("piccoloDevice_syntax.galgas", 22)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("baseline"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_processorType_388 = GGS_processorType::class_func_baseline (SOURCE_FILE ("piccoloDevice_syntax.galgas", 24)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)), GGS_string ("The '").add_operation (var_processorName_427.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)).add_operation (GGS_string ("' processor is not handled"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)), fixItArray4  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)) ;
          var_processorType_388.drop () ; // Release error dropped variable
        }
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  GGS_luint var_romSize_964 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  GGS_uint var_eepromSize_990 ;
  GGS_uint var_eepromAddress_1013 ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
    var_eepromSize_990 = GGS_uint (uint32_t (0U)) ;
    var_eepromAddress_1013 = GGS_uint (uint32_t (0U)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    GGS_luint var_l_5F_eepromSize_1125 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    var_eepromSize_990 = var_l_5F_eepromSize_1125.readProperty_uint () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    GGS_luint var_l_5F_eepromAddress_1208 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    var_eepromAddress_1013 = var_l_5F_eepromAddress_1208.readProperty_uint () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  GGS_luint var_bankCount_1312 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    }else{
      repeatFlag_5 = false ;
    }
  }
  GGS_ramBankTable var_ramBankTable_1521 = GGS_ramBankTable::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      GGS_lstring var_ramName_1610 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      GGS_luint var_ramStart_1652 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      GGS_luint var_ramEnd_1696 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      GGS_uintlist var_mirrorOffsetList_1711 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_7 = true ;
        while (repeatFlag_7) {
          GGS_luint var_mirrorStartAddress_1820 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          var_mirrorOffsetList_1711.addAssignOperation (var_mirrorStartAddress_1820.readProperty_uint ().substract_operation (var_ramStart_1652.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          }else{
            repeatFlag_7 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
      {
      var_ramBankTable_1521.setter_insertKey (var_ramName_1610, var_ramStart_1652.readProperty_uint (), var_ramStart_1652.readProperty_uint (), var_ramEnd_1696.readProperty_uint ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 85)), var_mirrorOffsetList_1711, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 81)) ;
      }
    }else{
      repeatFlag_6 = false ;
    }
  }
  GGS_registerTable var_registerTable_2149 = GGS_registerTable::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      GGS_lstring var_registerName_2245 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      GGS_uintlist var_registerAddressList_2275 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GGS_luint var_registerAddress_2348 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        var_registerAddressList_2275.addAssignOperation (var_registerAddress_2348.readProperty_uint ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 98)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      GGS_uint var_sliceIndex_2465 = GGS_uint (uint32_t (8U)) ;
      GGS_bitSliceTable var_bitSliceTable_2488 = GGS_bitSliceTable::init (inCompiler COMMA_HERE) ;
      GGS_string var_bitDefinitionString_2537 = GGS_string (" <") ;
      bool repeatFlag_10 = true ;
      while (repeatFlag_10) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          GGS_uint var_sliceWidth_2606 = GGS_uint (uint32_t (0U)) ;
          bool repeatFlag_11 = true ;
          while (repeatFlag_11) {
            GGS_uint var_sliceBase_2674 = var_sliceIndex_2465 ;
            GGS_lstring var_sliceName_2734 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2606.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2606.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 113)).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (var_sliceName_2734.readProperty_location (), GGS_string ("a slice of 1 bit is expected for '").add_operation (var_sliceName_2734.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)), fixItArray13  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)) ;
                }
              }
              var_sliceWidth_2606 = GGS_uint (uint32_t (1U)) ;
              var_bitDefinitionString_2537.plusAssignOperation(var_sliceName_2734.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 117)) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              GGS_luint var_sliceSize_3064 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2606.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2606.objectCompare (var_sliceSize_3064.readProperty_uint ())) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 121)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (var_sliceName_2734.readProperty_location (), GGS_string ("a slice of ").add_operation (var_sliceWidth_2606.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GGS_string (" bits is expected for '"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (var_sliceName_2734.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), fixItArray15  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)) ;
                }
              }
              var_sliceWidth_2606 = var_sliceSize_3064.readProperty_uint () ;
              var_sliceBase_2674 = var_sliceBase_2674.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)).substract_operation (var_sliceSize_3064.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
              var_bitDefinitionString_2537.plusAssignOperation(var_sliceName_2734.readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (var_sliceSize_3064.readProperty_uint ().getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)) ;
            } break ;
            default:
              break ;
            }
            {
            var_bitSliceTable_2488.setter_insertKey (var_sliceName_2734, var_sliceIndex_2465.substract_operation (var_sliceWidth_2606, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)), var_sliceWidth_2606, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)) ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
              var_bitDefinitionString_2537.plusAssignOperation(GGS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 132)) ;
            }else{
              repeatFlag_11 = false ;
            }
          }
          var_sliceIndex_2465 = var_sliceIndex_2465.substract_operation (var_sliceWidth_2606, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 134)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
          var_bitDefinitionString_2537.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 137)) ;
          var_sliceIndex_2465.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 138)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
          var_bitDefinitionString_2537.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 142)) ;
        }else{
          repeatFlag_10 = false ;
        }
      }
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, var_sliceIndex_2465.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (var_registerName_2245.readProperty_location (), GGS_string ("Incorrect bit definition for register '").add_operation (var_registerName_2245.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)), fixItArray17  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)) ;
        }
      }
      var_bitDefinitionString_2537.plusAssignOperation(GGS_string (">"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 147)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      {
      var_registerTable_2149.setter_insertKey (var_registerName_2245, var_registerAddressList_2275, GGS_uint (uint32_t (1U)), var_bitSliceTable_2488, var_bitDefinitionString_2537, GGS_registerProtection::class_func_publicRegister (SOURCE_FILE ("piccoloDevice_syntax.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 149)) ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    }else{
      repeatFlag_8 = false ;
    }
  }
  GGS_configRegisterMap var_configRegisterMap_4155 = GGS_configRegisterMap::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_18 = true ;
  while (repeatFlag_18) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      GGS_lstring var_configRegisterName_4264 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      GGS_luint var_configRegisterAddress_4318 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      GGS_luint var_configRegisterWidth_4378 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      GGS_illegalMaskList var_illegalMaskList_4406 = GGS_illegalMaskList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_19 = true ;
      while (repeatFlag_19) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          GGS_luint var_illegalValue_4508 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          GGS_luint var_illegalMask_4562 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          GGS_lstring var_illegalDescriptionString_4619 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
          var_illegalMaskList_4406.addAssignOperation (var_illegalValue_4508, var_illegalMask_4562, var_illegalDescriptionString_4619  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 170)) ;
        }else{
          repeatFlag_19 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      GGS_configRegisterMaskMap var_configRegisterMaskMap_4746 = GGS_configRegisterMaskMap::init (inCompiler COMMA_HERE) ;
      GGS_stringset var_settingNameSet_4803 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          GGS_lstring var_maskName_4887 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          GalgasBool test_21 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_21) {
            test_21 = var_settingNameSet_4803.getter_hasKey (var_maskName_4887.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 178)).boolEnum () ;
            if (GalgasBool::boolTrue == test_21) {
              GenericArray <FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (var_maskName_4887.readProperty_location (), GGS_string ("The '").add_operation (var_maskName_4887.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)).add_operation (GGS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)), fixItArray22  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)) ;
            }
          }
          var_settingNameSet_4803.plusPlusAssignOperation (var_maskName_4887.readProperty_string ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 181)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          GGS_luint var_maskValue_5118 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          GGS_lstring var_maskDescriptionString_5177 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          GGS_fieldSettingMap var_fieldSettingMap_5209 = GGS_fieldSettingMap::init (inCompiler COMMA_HERE) ;
          bool repeatFlag_23 = true ;
          while (repeatFlag_23) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            GGS_luint var_value_5307 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            GGS_luint var_mask_5358 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            GGS_lstring var_descriptionString_5416 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            {
            var_fieldSettingMap_5209.setter_insertKey (var_descriptionString_5416, var_value_5307.readProperty_uint (), var_mask_5358.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 194)) ;
            }
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_23 = false ;
            }
          }
          {
          var_configRegisterMaskMap_4746.setter_insertKey (var_maskName_4887, var_maskValue_5118, var_maskDescriptionString_5177, var_fieldSettingMap_5209, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 197)) ;
          }
        }else{
          repeatFlag_20 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
      {
      var_configRegisterMap_4155.setter_insertKey (var_configRegisterName_4264, var_configRegisterAddress_4318, var_configRegisterWidth_4378, var_configRegisterMaskMap_4746, var_illegalMaskList_4406, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 200)) ;
      }
    }else{
      repeatFlag_18 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).operator_or (GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("pic18_80"))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 210)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      GGS_uintlist joker_6038_5 ; // Joker input parameter
      GGS_uint joker_6038_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6038_3 ; // Joker input parameter
      GGS_string joker_6038_2 ; // Joker input parameter
      GGS_registerProtection joker_6038_1 ; // Joker input parameter
      var_registerTable_2149.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("BSR"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)), inCompiler COMMA_HERE), joker_6038_5, joker_6038_4, joker_6038_3, joker_6038_2, joker_6038_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)) ;
      GGS_uintlist joker_6109_5 ; // Joker input parameter
      GGS_uint joker_6109_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6109_3 ; // Joker input parameter
      GGS_string joker_6109_2 ; // Joker input parameter
      GGS_registerProtection joker_6109_1 ; // Joker input parameter
      var_registerTable_2149.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSL"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)), inCompiler COMMA_HERE), joker_6109_5, joker_6109_4, joker_6109_3, joker_6109_2, joker_6109_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)) ;
      GGS_uintlist joker_6180_5 ; // Joker input parameter
      GGS_uint joker_6180_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6180_3 ; // Joker input parameter
      GGS_string joker_6180_2 ; // Joker input parameter
      GGS_registerProtection joker_6180_1 ; // Joker input parameter
      var_registerTable_2149.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)), inCompiler COMMA_HERE), joker_6180_5, joker_6180_4, joker_6180_3, joker_6180_2, joker_6180_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)) ;
      GGS_uintlist joker_6251_5 ; // Joker input parameter
      GGS_uint joker_6251_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6251_3 ; // Joker input parameter
      GGS_string joker_6251_2 ; // Joker input parameter
      GGS_registerProtection joker_6251_1 ; // Joker input parameter
      var_registerTable_2149.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSU"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)), inCompiler COMMA_HERE), joker_6251_5, joker_6251_4, joker_6251_3, joker_6251_2, joker_6251_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)) ;
    }
  }
  GGS_string var_sharedBankName_6319 = GGS_string::makeEmptyString () ;
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      UpEnumerator_ramBankTable enumerator_6449 (var_ramBankTable_1521) ;
      bool bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6319.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
      if (enumerator_6449.hasCurrentObject () && bool_26) {
        while (enumerator_6449.hasCurrentObject () && bool_26) {
          GGS_uint var_bankAccessibility_6532 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)).left_shift_operation (enumerator_6449.current_mFirstFreeAddress (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)) ;
          UpEnumerator_uintlist enumerator_6593 (enumerator_6449.current_mMirrorOffsetList (HERE)) ;
          while (enumerator_6593.hasCurrentObject ()) {
            var_bankAccessibility_6532 = var_bankAccessibility_6532.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).left_shift_operation (enumerator_6449.current_mFirstFreeAddress (HERE).add_operation (enumerator_6593.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) ;
            enumerator_6593.gotoNextObject () ;
          }
          GalgasBool test_27 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_27) {
            test_27 = GGS_bool (ComparisonKind::equal, GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).left_shift_operation (var_bankCount_1312.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).objectCompare (var_bankAccessibility_6532.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).getter_bigint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_27) {
              var_sharedBankName_6319 = enumerator_6449.current_lkey (HERE).readProperty_string () ;
            }
          }
          enumerator_6449.gotoNextObject () ;
          if (enumerator_6449.hasCurrentObject ()) {
            bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6319.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
          }
        }
      }
    }
  }
  outArgument_outPiccoloDeviceModel = GGS_piccoloDeviceModel::init_21__21__21__21__21__21__21__21__21__21_ (var_deviceName_336, var_processorType_388, var_romSize_964, var_bankCount_1312, var_registerTable_2149, var_ramBankTable_1521, var_eepromSize_990, var_eepromAddress_1013, var_configRegisterMap_4155, var_sharedBankName_6319, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse (Lexique_piccoloDevice_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          bool repeatFlag_6 = true ;
          while (repeatFlag_6) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
            } break ;
            default:
              break ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
            }else{
              repeatFlag_6 = false ;
            }
          }
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
        }else{
          repeatFlag_8 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          bool repeatFlag_10 = true ;
          while (repeatFlag_10) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_10 = false ;
            }
          }
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccoloDevice_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          bool repeatFlag_6 = true ;
          while (repeatFlag_6) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
            } break ;
            default:
              break ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
            }else{
              repeatFlag_6 = false ;
            }
          }
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
        }else{
          repeatFlag_8 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          bool repeatFlag_10 = true ;
          while (repeatFlag_10) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_10 = false ;
            }
          }
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
}

