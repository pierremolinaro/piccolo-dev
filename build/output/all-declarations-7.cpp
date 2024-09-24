#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

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

void GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setProperty_mInstruction_5F_FDA_5F_base_5F_code (const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
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

void GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setProperty_mRegisterDescription (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_mRegisterDescription = inValue ;
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

void GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
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

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::classDescriptor (void) const {
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
//
//     @ipic18_skip_instruction_FDA generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ("ipic18_skip_instruction_FDA",
                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::staticTypeDescriptor (void) const {
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
//
//     @ipic18_skip_instruction_FDA.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak ("ipic18_skip_instruction_FDA.weak",
                                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::staticTypeDescriptor (void) const {
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

cMapElement_symbolTableForBlockOptimization::cMapElement_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization_2E_element & inValue
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mDefinitionBlockIndex (inValue.mProperty_mDefinitionBlockIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForBlockOptimization::cMapElement_symbolTableForBlockOptimization (const GGS_lstring & inKey,
                                                                                          const GGS_uint & in_mDefinitionBlockIndex
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDefinitionBlockIndex" ":") ;
  mProperty_mDefinitionBlockIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization::GGS_symbolTableForBlockOptimization (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization::GGS_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization & GGS_symbolTableForBlockOptimization::operator = (const GGS_symbolTableForBlockOptimization & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::class_func_emptyMap (LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_ GGS_symbolTableForBlockOptimization
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForBlockOptimization_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_symbolTableForBlockOptimization * p = (cMapElement_symbolTableForBlockOptimization *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_symbolTableForBlockOptimization_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForBlockOptimization_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mDefinitionBlockIndex = p->mProperty_mDefinitionBlockIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::class_func_mapWithMapToOverride (const GGS_symbolTableForBlockOptimization & inMapToOverride
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForBlockOptimization result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::enterElement (const GGS_symbolTableForBlockOptimization_2E_element & inValue,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForBlockOptimization * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForBlockOptimization (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForBlockOptimization insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::addAssign_operation (const GGS_lstring & inKey,
                                                               const GGS_uint & inArgument0,
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

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::add_operation (const GGS_symbolTableForBlockOptimization & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForBlockOptimization result = *this ;
  cEnumerator_symbolTableForBlockOptimization enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mDefinitionBlockIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::setter_insertKey (GGS_lstring inKey,
                                                            GGS_uint inArgument0,
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

void GGS_symbolTableForBlockOptimization::method_searchKey (GGS_lstring inKey,
                                                            GGS_uint & outArgument0,
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

GGS_uint GGS_symbolTableForBlockOptimization::getter_mDefinitionBlockIndexForKey (const GGS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
    result = p->mProperty_mDefinitionBlockIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::setter_setMDefinitionBlockIndexForKey (GGS_uint inAttributeValue,
                                                                                 GGS_string inKey,
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

cMapElement_symbolTableForBlockOptimization * GGS_symbolTableForBlockOptimization::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                      const GGS_string & inKey
                                                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForBlockOptimization * result = (cMapElement_symbolTableForBlockOptimization *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForBlockOptimization) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForBlockOptimization::cEnumerator_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inEnumeratedObject,
                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element cEnumerator_symbolTableForBlockOptimization::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
  return GGS_symbolTableForBlockOptimization_2E_element (p->mProperty_lkey, p->mProperty_mDefinitionBlockIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_symbolTableForBlockOptimization::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_symbolTableForBlockOptimization::current_mDefinitionBlockIndex (LOCATION_ARGS) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
  return p->mProperty_mDefinitionBlockIndex ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForBlockOptimization generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ("symbolTableForBlockOptimization",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_symbolTableForBlockOptimization::staticTypeDescriptor (void) const {
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

cMapElement_symbolTableForClusterOrdering::cMapElement_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering_2E_element & inValue
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mCluster (inValue.mProperty_mCluster) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForClusterOrdering::cMapElement_symbolTableForClusterOrdering (const GGS_lstring & inKey,
                                                                                      const GGS_uint & in_mCluster
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mCluster (in_mCluster) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_symbolTableForClusterOrdering::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_symbolTableForClusterOrdering::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_symbolTableForClusterOrdering (mProperty_lkey, mProperty_mCluster COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_symbolTableForClusterOrdering::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCluster" ":") ;
  mProperty_mCluster.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering::GGS_symbolTableForClusterOrdering (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering::GGS_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering & GGS_symbolTableForClusterOrdering::operator = (const GGS_symbolTableForClusterOrdering & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::class_func_emptyMap (LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_ GGS_symbolTableForClusterOrdering
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForClusterOrdering_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_symbolTableForClusterOrdering * p = (cMapElement_symbolTableForClusterOrdering *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_symbolTableForClusterOrdering_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForClusterOrdering_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mCluster = p->mProperty_mCluster ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::class_func_mapWithMapToOverride (const GGS_symbolTableForClusterOrdering & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForClusterOrdering result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::enterElement (const GGS_symbolTableForClusterOrdering_2E_element & inValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForClusterOrdering (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForClusterOrdering insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::addAssign_operation (const GGS_lstring & inKey,
                                                             const GGS_uint & inArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForClusterOrdering (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForClusterOrdering insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::add_operation (const GGS_symbolTableForClusterOrdering & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForClusterOrdering result = *this ;
  cEnumerator_symbolTableForClusterOrdering enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mCluster (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::setter_insertKey (GGS_lstring inKey,
                                                          GGS_uint inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForClusterOrdering (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_symbolTableForClusterOrdering_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::method_searchKey (GGS_lstring inKey,
                                                          GGS_uint & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_symbolTableForClusterOrdering_searchKey
                                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    outArgument0 = p->mProperty_mCluster ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForClusterOrdering::getter_mClusterForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    result = p->mProperty_mCluster ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::setter_setMClusterForKey (GGS_uint inAttributeValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForClusterOrdering * p = (cMapElement_symbolTableForClusterOrdering *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    p->mProperty_mCluster = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForClusterOrdering * GGS_symbolTableForClusterOrdering::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                  const GGS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * result = (cMapElement_symbolTableForClusterOrdering *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForClusterOrdering) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForClusterOrdering::cEnumerator_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element cEnumerator_symbolTableForClusterOrdering::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
  return GGS_symbolTableForClusterOrdering_2E_element (p->mProperty_lkey, p->mProperty_mCluster) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_symbolTableForClusterOrdering::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_symbolTableForClusterOrdering::current_mCluster (LOCATION_ARGS) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
  return p->mProperty_mCluster ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForClusterOrdering generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ("symbolTableForClusterOrdering",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_symbolTableForClusterOrdering::staticTypeDescriptor (void) const {
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

class cNode_branchOverflowMapDictionary : public GGS_branchOverflowMapDictionary_2E_element {
  public: cNode_branchOverflowMapDictionary * mInfPtr ;
  public: cNode_branchOverflowMapDictionary * mSupPtr ;
  public: int32_t mBalance ;

  public: cNode_branchOverflowMapDictionary (const GGS_string & in_key,
                                             const GGS_stringlist & inProperty_mList) :
  GGS_branchOverflowMapDictionary_2E_element (in_key, inProperty_mList),
  mInfPtr (nullptr),
  mSupPtr (nullptr),
  mBalance (0) {
  }

  public: cNode_branchOverflowMapDictionary (cNode_branchOverflowMapDictionary * inNode) ;

  public: cNode_branchOverflowMapDictionary (cNode_branchOverflowMapDictionary &) = delete ;

  public: cNode_branchOverflowMapDictionary& operator = (cNode_branchOverflowMapDictionary &) = delete ;

  public: virtual ~ cNode_branchOverflowMapDictionary (void) {
    macroMyDelete (mInfPtr) ;
    macroMyDelete (mSupPtr) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_branchOverflowMapDictionary : public SharedObject {
//--------------------------------- Attributes
  private: cNode_branchOverflowMapDictionary * mRoot ;
  private: uint32_t mCount ;

//--------------------------------- Constructor
  protected: cSharedDictRoot_branchOverflowMapDictionary (LOCATION_ARGS) :
  SharedObject (THERE),
  mRoot (nullptr),
  mCount (0) {
  }

//--------------------------------- Virtual destructor
  protected: virtual ~ cSharedDictRoot_branchOverflowMapDictionary (void) {
    macroMyDelete (mRoot) ;
  }

//--------------------------------- No copy
  private: cSharedDictRoot_branchOverflowMapDictionary (const cSharedDictRoot_branchOverflowMapDictionary &) ;
  private: cSharedDictRoot_branchOverflowMapDictionary & operator = (const cSharedDictRoot_branchOverflowMapDictionary &) ;

//--------------------------------- Copy a map
  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_branchOverflowMapDictionary * inSource) ;

//--------------------------------- Insert
  protected: VIRTUAL_IN_DEBUG void performInsert (const GGS_branchOverflowMapDictionary_2E_element & inNewNode,
                                                  const bool inEntryOverrideAllowed) {
    macroUniqueSharedObject (this) ;
    bool extension = false ;
    bool entryAlreadyInDict = false ;
    recursiveAddEntry (mRoot, inNewNode, entryAlreadyInDict, extension, inEntryOverrideAllowed) ;
    if (!entryAlreadyInDict) {
      mCount ++ ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkDict (HERE) ;
    #endif
  }

  protected: static void rotateLeft (cNode_branchOverflowMapDictionary * & ioRootPtr) {
    cNode_branchOverflowMapDictionary * ptr = ioRootPtr->mSupPtr ;
    ioRootPtr->mSupPtr = ptr->mInfPtr ;
    ptr->mInfPtr = ioRootPtr;

    if (ptr->mBalance >= 0) {
      ioRootPtr->mBalance ++ ;
    }else{
      ioRootPtr->mBalance += 1 - ptr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ptr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ptr->mBalance ++ ;
    }
    ioRootPtr = ptr ;
  }

  protected: static void rotateRight (cNode_branchOverflowMapDictionary * & ioRootPtr) {
    cNode_branchOverflowMapDictionary * ptr = ioRootPtr->mInfPtr ;
    ioRootPtr->mInfPtr = ptr->mSupPtr ;
    ptr->mSupPtr = ioRootPtr ;
   
    if (ptr->mBalance > 0) {
      ioRootPtr->mBalance += -ptr->mBalance - 1 ;
    }else{
      ioRootPtr->mBalance -- ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ptr->mBalance -- ;
    }else{
      ptr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr = ptr ;
  }

  protected: static void recursiveAddEntry (cNode_branchOverflowMapDictionary * & ioRootPtr,
                                            const GGS_branchOverflowMapDictionary_2E_element & inNewNode,
                                            bool & outEntryAlreadyPresent,
                                            bool & ioExtension,
                                            const bool inEntryOverrideAllowed) {
    if (ioRootPtr == nullptr) {
      macroMyNew (ioRootPtr, cNode_branchOverflowMapDictionary (inNewNode.mProperty_key, inNewNode.mProperty_mList)) ;
      ioExtension = true ;
      outEntryAlreadyPresent = false ;
    }else{
      macroValidPointer (ioRootPtr) ;
      const ComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;
        if (ioExtension) {
          ioRootPtr->mBalance++;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false;
          }else if (ioRootPtr->mBalance == 2) {
            if (ioRootPtr->mInfPtr->mBalance == -1) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;
        if (ioExtension) {
          ioRootPtr->mBalance-- ;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false ;
          }else if (ioRootPtr->mBalance == -2) {
            if (ioRootPtr->mSupPtr->mBalance == 1) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else{  // Found
        ioExtension = false ;
        outEntryAlreadyPresent = true ;
        if (inEntryOverrideAllowed) {
          ioRootPtr->mProperty_mList = inNewNode.mProperty_mList ;
        }
      }
    }
  }

//--------------------------------- Search
  private: VIRTUAL_IN_DEBUG cNode_branchOverflowMapDictionary * findEntryInDict (const GGS_string & inKey) const {
    cNode_branchOverflowMapDictionary * result = nullptr ;
    cNode_branchOverflowMapDictionary * currentNode = mRoot ;
    while ((currentNode != nullptr) && (nullptr == result)) {
      macroValidPointer (currentNode) ;
      const ComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        result = currentNode ;
      }
    }
    return result ;
  }

//--------------------------------- Remove
  protected: VIRTUAL_IN_DEBUG void performRemove (const GGS_string & inKey, cNode_branchOverflowMapDictionary * & outRemovedNodePtr) {
    bool branchHasBeenRemoved = false ; // Unused here
    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;
    if (nullptr != outRemovedNodePtr) {
      mCount -- ;
    }
  }

  protected: static void supBranchDecreased (cNode_branchOverflowMapDictionary * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance ++ ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected: static void infBranchDecreased (cNode_branchOverflowMapDictionary * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -- ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected: static void getPreviousElement (cNode_branchOverflowMapDictionary * & ioRoot,
                                             cNode_branchOverflowMapDictionary * & ioElement,
                                             bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr == nullptr) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  protected: static void internalRemoveRecursively (cNode_branchOverflowMapDictionary * & ioRoot,
                                                     const GGS_string & inKeyToRemove,
                                                     cNode_branchOverflowMapDictionary * & outRemovedNode,
                                                     bool & ioBranchHasBeenRemoved) {
    if (ioRoot != nullptr) {
      const ComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        cNode_branchOverflowMapDictionary * p = ioRoot ;
        if (p->mInfPtr == nullptr) {
          ioRoot = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else if (p->mSupPtr == nullptr) {
          ioRoot = p->mInfPtr;
          p->mInfPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else{
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr = nullptr;
          ioRoot->mBalance = p->mBalance;
          p->mBalance = 0;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
        outRemovedNode = p ;
      }
    }
  }

//--------------------------------- Internal method for enumeration
  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//--------------------------------- Check Dictionary
  #ifndef DO_NOT_GENERATE_CHECKINGS
      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {
      uint32_t n = 0 ;
      checkNode (mRoot, n) ;
      macroAssertThere (n == mCount, "n (%lld) != mCount (%lld)", n, mCount) ;
    }
  #endif


  #ifndef DO_NOT_GENERATE_CHECKINGS
    private: static void checkNode (const cNode_branchOverflowMapDictionary * inNode,
                                     uint32_t & ioCount) {
      if (nullptr != inNode) {
        checkNode (inNode->mInfPtr, ioCount) ;
        ioCount ++ ;
        checkNode (inNode->mSupPtr, ioCount) ;
      }
    }
  #endif

//--------------------------------- Compare Dictionaries
  public: ComparisonResult compare (const cSharedDictRoot_branchOverflowMapDictionary * inOperand) const {
    ComparisonResult result = ComparisonResult::operandEqual ;
    if (mCount < inOperand->mCount) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mCount > inOperand->mCount) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      capCollectionElementArray enumerationArray ;
      populateEnumerationArray (enumerationArray) ;
      capCollectionElementArray operandEnumerationArray ;
      inOperand->populateEnumerationArray (operandEnumerationArray) ;
      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;
    }
    return result ;
  }

//--------------------------------- Friend
  friend class GGS_branchOverflowMapDictionary ;
} ;


//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary::GGS_branchOverflowMapDictionary (void) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary::~ GGS_branchOverflowMapDictionary (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary::GGS_branchOverflowMapDictionary (const GGS_branchOverflowMapDictionary & inSource) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary & GGS_branchOverflowMapDictionary::operator = (const GGS_branchOverflowMapDictionary & inSource) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::drop (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary GGS_branchOverflowMapDictionary::class_func_emptyDict (LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_branchOverflowMapDictionary (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary GGS_branchOverflowMapDictionary::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_branchOverflowMapDictionary (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Description
#endif

//--------------------------------------------------------------------------------------------------

static void internalDescription_branchOverflowMapDictionary (const cNode_branchOverflowMapDictionary * inNode,
                                 String & ioString,
                                 const int32_t inIndentation) {
  if (nullptr != inNode) {
    internalDescription_branchOverflowMapDictionary (inNode->mInfPtr, ioString, inIndentation) ;
    ioString.appendNewLine () ;
    inNode->description (ioString, inIndentation) ;
    internalDescription_branchOverflowMapDictionary (inNode->mSupPtr, ioString, inIndentation) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (":") ;
  if (isValid ()) {
    internalDescription_branchOverflowMapDictionary (mSharedDict->mRoot, ioString, inIndentation) ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_branchOverflowMapDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedDict->mCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element_3F_ GGS_branchOverflowMapDictionary
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_branchOverflowMapDictionary_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_branchOverflowMapDictionary * p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
      result = GGS_branchOverflowMapDictionary_2E_element_3F_::init_nil () ;
    }else{
      result = *p ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insulate
#endif

//--------------------------------------------------------------------------------------------------

cNode_branchOverflowMapDictionary::cNode_branchOverflowMapDictionary (cNode_branchOverflowMapDictionary * inNode) :
GGS_branchOverflowMapDictionary_2E_element (inNode->mProperty_key, inNode->mProperty_mList),
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance) {
  if (inNode->mInfPtr != nullptr) {
    macroMyNew (mInfPtr, cNode_branchOverflowMapDictionary (inNode->mInfPtr)) ;
  }
  if (inNode->mSupPtr != nullptr) {
    macroMyNew (mSupPtr, cNode_branchOverflowMapDictionary (inNode->mSupPtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_branchOverflowMapDictionary::copyFrom (const cSharedDictRoot_branchOverflowMapDictionary * inSource) {
  macroUniqueSharedObject (this) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    inSource->checkDict (HERE) ;
  #endif
  macroValidSharedObject (inSource, cSharedDictRoot_branchOverflowMapDictionary) ;
  mCount = inSource->mCount ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, cNode_branchOverflowMapDictionary (inSource->mRoot)) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::insulate (LOCATION_ARGS) {
  if ((nullptr != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {
    cSharedDictRoot_branchOverflowMapDictionary * p = nullptr ;
    macroMyNew (p, cSharedDictRoot_branchOverflowMapDictionary (THERE)) ;
    p->copyFrom (mSharedDict) ;
    macroAssignSharedObject (mSharedDict, p) ;
    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insert
#endif

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::enterElement (const GGS_branchOverflowMapDictionary_2E_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (inValue, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::addAssign_operation (const GGS_string & inKey,
                                                           const GGS_stringlist & inArgument0,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::setter_insert (const GGS_string inKey,
                                                     const GGS_stringlist inArgument0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_branchOverflowMapDictionary::getter_hasKey (const GGS_string & inKey
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_branchOverflowMapDictionary * p = mSharedDict->findEntryInDict (inKey) ;
    result = GGS_bool (p != nullptr) ;
   }
   return result ;
 }

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::method_searchKey (GGS_string inKey,
                                                        GGS_stringlist & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cNode_branchOverflowMapDictionary * p = nullptr ;
  if (isValid () && inKey.isValid ()) {
    p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_branchOverflowMapDictionary) ;
    outArgument0 = p->mProperty_mList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::setter_removeKey (GGS_string inKey,
                                                        GGS_stringlist & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cNode_branchOverflowMapDictionary * p = nullptr ;
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    mSharedDict->performRemove (inKey, p) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_branchOverflowMapDictionary) ;
    outArgument0 = p->mProperty_mList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_branchOverflowMapDictionary::getter_mListForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
  const cNode_branchOverflowMapDictionary * p = mSharedDict->findEntryInDict (inKey) ;
   if (nullptr == p) {
    //--- Build error message
      String message = "cannot get mList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      macroValidSharedObject (p, cNode_branchOverflowMapDictionary) ;
      result = p->mProperty_mList  ;
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
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    cNode_branchOverflowMapDictionary * p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot setMListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      p->mProperty_mList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object compare
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_branchOverflowMapDictionary::objectCompare (const GGS_branchOverflowMapDictionary & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    result = mSharedDict->compare (inOperand.mSharedDict) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark map Enumeration
#endif

//--------------------------------------------------------------------------------------------------

class cCollectionElement_branchOverflowMapDictionary : public cCollectionElement {
  public: GGS_branchOverflowMapDictionary_2E_element mElement ;

//--- Constructor
  public: cCollectionElement_branchOverflowMapDictionary (const GGS_branchOverflowMapDictionary_2E_element & inElement) :
  cCollectionElement (HERE),
  mElement (inElement) {
  }

//--- No copy
  private: cCollectionElement_branchOverflowMapDictionary (const cCollectionElement_branchOverflowMapDictionary &) ;
  private: cCollectionElement_branchOverflowMapDictionary & operator = (const cCollectionElement_branchOverflowMapDictionary &) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const { return mElement.isValid () ; }

//--- Virtual method for comparing elements

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_branchOverflowMapDictionary (mElement)) ;
    return p ;
  }

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const {
    mElement.description (ioString, inIndentation) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

static void enterAscendingEnumeration_branchOverflowMapDictionary (cNode_branchOverflowMapDictionary * inNode,
                                                       capCollectionElementArray & ioEnumerationArray) {
  if (inNode != nullptr) {
    enterAscendingEnumeration_branchOverflowMapDictionary (inNode->mInfPtr, ioEnumerationArray) ;
    cCollectionElement_branchOverflowMapDictionary * p = nullptr ;
    macroMyNew (p, cCollectionElement_branchOverflowMapDictionary (*inNode)) ;
    capCollectionElement element ;
    element.setPointer (p) ;
    macroDetachSharedObject (p) ;
    ioEnumerationArray.appendObject (element) ;
    enterAscendingEnumeration_branchOverflowMapDictionary (inNode->mSupPtr, ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_branchOverflowMapDictionary::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
  ioEnumerationArray.setCapacity (mCount) ;
  enterAscendingEnumeration_branchOverflowMapDictionary (mRoot, ioEnumerationArray) ;
  macroAssert (mCount == ioEnumerationArray.count (), "mCount (%lld) != ioEnumerationArray.count () (%lld)", mCount, ioEnumerationArray.count ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  if (nullptr != mSharedDict) {
    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_branchOverflowMapDictionary::cEnumerator_branchOverflowMapDictionary (const GGS_branchOverflowMapDictionary & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element cEnumerator_branchOverflowMapDictionary::current (LOCATION_ARGS) const {
  const cCollectionElement_branchOverflowMapDictionary* p = dynamic_cast  <const cCollectionElement_branchOverflowMapDictionary*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_branchOverflowMapDictionary) ;
  return GGS_branchOverflowMapDictionary_2E_element (p->mElement) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_branchOverflowMapDictionary::current_key (LOCATION_ARGS) const {
  const cCollectionElement_branchOverflowMapDictionary* p = dynamic_cast  <const cCollectionElement_branchOverflowMapDictionary*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_branchOverflowMapDictionary) ;
  return p->mElement.mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist cEnumerator_branchOverflowMapDictionary::current_mList (LOCATION_ARGS) const {
  const cCollectionElement_branchOverflowMapDictionary* p = dynamic_cast  <const cCollectionElement_branchOverflowMapDictionary*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_branchOverflowMapDictionary) ;
  return p->mElement.mProperty_mList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @branchOverflowMapDictionary generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary ("branchOverflowMapDictionary",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_branchOverflowMapDictionary::staticTypeDescriptor (void) const {
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

GGS_branchOverflowMap::~ GGS_branchOverflowMap (void) {
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
//
//     @branchOverflowMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap ("branchOverflowMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_branchOverflowMap::staticTypeDescriptor (void) const {
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
//
//Extension Getter '@branchOverflowMap listForKey'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist extensionGetter_listForKey (const GGS_branchOverflowMap & inObject,
                                           const GGS_string & constinArgument_inKey,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_branchOverflowMap temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 412)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_branchOverflowMap temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 413)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'
//
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
    inObject->method_instructionRelativeBranchOverflow  (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioOverflowMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'
//
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
    inObject->method_terminatorRelativeBranchOverflow  (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioOverflowMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'
//
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
    inObject->method_performTerminatorRelativeBranchResolution  (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioConversionCount, io_ioListFileContents, out_outModifiedTerminator, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForRelativesResolution::cMapElement_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution_2E_element & inValue
                                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLabelAddress (inValue.mProperty_mLabelAddress) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForRelativesResolution::cMapElement_symbolTableForRelativesResolution (const GGS_lstring & inKey,
                                                                                              const GGS_uint & in_mLabelAddress
                                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelAddress (in_mLabelAddress) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_symbolTableForRelativesResolution::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_symbolTableForRelativesResolution::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_symbolTableForRelativesResolution (mProperty_lkey, mProperty_mLabelAddress COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_symbolTableForRelativesResolution::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelAddress" ":") ;
  mProperty_mLabelAddress.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution::GGS_symbolTableForRelativesResolution (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution::GGS_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution & GGS_symbolTableForRelativesResolution::operator = (const GGS_symbolTableForRelativesResolution & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::class_func_emptyMap (LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_ GGS_symbolTableForRelativesResolution
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForRelativesResolution_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_symbolTableForRelativesResolution * p = (cMapElement_symbolTableForRelativesResolution *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_symbolTableForRelativesResolution_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForRelativesResolution_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLabelAddress = p->mProperty_mLabelAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::class_func_mapWithMapToOverride (const GGS_symbolTableForRelativesResolution & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForRelativesResolution result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::enterElement (const GGS_symbolTableForRelativesResolution_2E_element & inValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForRelativesResolution (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForRelativesResolution insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::addAssign_operation (const GGS_lstring & inKey,
                                                                 const GGS_uint & inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForRelativesResolution (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForRelativesResolution insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::add_operation (const GGS_symbolTableForRelativesResolution & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForRelativesResolution result = *this ;
  cEnumerator_symbolTableForRelativesResolution enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLabelAddress (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::setter_insertKey (GGS_lstring inKey,
                                                              GGS_uint inArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForRelativesResolution (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_symbolTableForRelativesResolution_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::method_searchKey (GGS_lstring inKey,
                                                              GGS_uint & outArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) performSearch (inKey,
                                                                                                                                   inCompiler,
                                                                                                                                   kSearchErrorMessage_symbolTableForRelativesResolution_searchKey
                                                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    outArgument0 = p->mProperty_mLabelAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForRelativesResolution::getter_mLabelAddressForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    result = p->mProperty_mLabelAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::setter_setMLabelAddressForKey (GGS_uint inAttributeValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForRelativesResolution * p = (cMapElement_symbolTableForRelativesResolution *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    p->mProperty_mLabelAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForRelativesResolution * GGS_symbolTableForRelativesResolution::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                          const GGS_string & inKey
                                                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * result = (cMapElement_symbolTableForRelativesResolution *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForRelativesResolution) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForRelativesResolution::cEnumerator_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inEnumeratedObject,
                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element cEnumerator_symbolTableForRelativesResolution::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
  return GGS_symbolTableForRelativesResolution_2E_element (p->mProperty_lkey, p->mProperty_mLabelAddress) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_symbolTableForRelativesResolution::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_symbolTableForRelativesResolution::current_mLabelAddress (LOCATION_ARGS) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
  return p->mProperty_mLabelAddress ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForRelativesResolution generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ("symbolTableForRelativesResolution",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_symbolTableForRelativesResolution::staticTypeDescriptor (void) const {
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
//
//Class for element of '@codeList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_codeList : public cCollectionElement {
  public: GGS_codeList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_codeList (const GGS_string & in_mAssemblyCode,
                                       const GGS_uintlist & in_mBinaryCode
                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_codeList (const GGS_codeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_codeList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAssemblyCode" ":") ;
  mObject.mProperty_mAssemblyCode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBinaryCode" ":") ;
  mObject.mProperty_mBinaryCode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList::GGS_codeList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList::GGS_codeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_codeList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_codeList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::enterElement (const GGS_codeList_2E_element & inValue,
                                 Compiler * /* inCompiler */
                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_codeList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::class_func_listWithValue (const GGS_string & inOperand0,
                                                     const GGS_uintlist & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  GGS_codeList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_codeList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_codeList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                              const GGS_string & in_mAssemblyCode,
                                              const GGS_uintlist & in_mBinaryCode
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_codeList (in_mAssemblyCode,
                                              in_mBinaryCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::addAssign_operation (const GGS_string & inOperand0,
                                        const GGS_uintlist & inOperand1
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_codeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_append (const GGS_string inOperand0,
                                  const GGS_uintlist inOperand1,
                                  Compiler * /* inCompiler */
                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_codeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_insertAtIndex (const GGS_string inOperand0,
                                         const GGS_uintlist inOperand1,
                                         const GGS_uint inInsertionIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_codeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_removeAtIndex (GGS_string & outOperand0,
                                         GGS_uintlist & outOperand1,
                                         const GGS_uint inRemoveIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_codeList) ;
      outOperand0 = p->mObject.mProperty_mAssemblyCode ;
      outOperand1 = p->mObject.mProperty_mBinaryCode ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_popFirst (GGS_string & outOperand0,
                                    GGS_uintlist & outOperand1,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_popLast (GGS_string & outOperand0,
                                   GGS_uintlist & outOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::method_first (GGS_string & outOperand0,
                                 GGS_uintlist & outOperand1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::method_last (GGS_string & outOperand0,
                                GGS_uintlist & outOperand1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::add_operation (const GGS_codeList & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::getter_subListWithRange (const GGS_range & inRange,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_codeList result = GGS_codeList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_codeList result = GGS_codeList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::getter_subListToIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_codeList result = GGS_codeList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::plusAssign_operation (const GGS_codeList inOperand,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_setMAssemblyCodeAtIndex (GGS_string inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssemblyCode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_codeList::getter_mAssemblyCodeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    result = p->mObject.mProperty_mAssemblyCode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_setMBinaryCodeAtIndex (GGS_uintlist inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBinaryCode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_codeList::getter_mBinaryCodeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  GGS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    result = p->mObject.mProperty_mBinaryCode ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_codeList::cEnumerator_codeList (const GGS_codeList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element cEnumerator_codeList::current (LOCATION_ARGS) const {
  const cCollectionElement_codeList * p = (const cCollectionElement_codeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_codeList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_codeList::current_mAssemblyCode (LOCATION_ARGS) const {
  const cCollectionElement_codeList * p = (const cCollectionElement_codeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_codeList) ;
  return p->mObject.mProperty_mAssemblyCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist cEnumerator_codeList::current_mBinaryCode (LOCATION_ARGS) const {
  const cCollectionElement_codeList * p = (const cCollectionElement_codeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_codeList) ;
  return p->mObject.mProperty_mBinaryCode ;
}




//--------------------------------------------------------------------------------------------------
//
//     @codeList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList ("codeList",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_codeList::staticTypeDescriptor (void) const {
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

cMapElement_pic_31__38__5F_dataAddressMap::cMapElement_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inValue
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mDataAddress (inValue.mProperty_mDataAddress) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_pic_31__38__5F_dataAddressMap::cMapElement_pic_31__38__5F_dataAddressMap (const GGS_lstring & inKey,
                                                                                      const GGS_uint & in_mDataAddress
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDataAddress (in_mDataAddress) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_pic_31__38__5F_dataAddressMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_pic_31__38__5F_dataAddressMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_pic_31__38__5F_dataAddressMap (mProperty_lkey, mProperty_mDataAddress COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_pic_31__38__5F_dataAddressMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDataAddress" ":") ;
  mProperty_mDataAddress.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::GGS_pic_31__38__5F_dataAddressMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::GGS_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap & GGS_pic_31__38__5F_dataAddressMap::operator = (const GGS_pic_31__38__5F_dataAddressMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ GGS_pic_31__38__5F_dataAddressMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_pic_31__38__5F_dataAddressMap * p = (cMapElement_pic_31__38__5F_dataAddressMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_pic_31__38__5F_dataAddressMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mDataAddress = p->mProperty_mDataAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::class_func_mapWithMapToOverride (const GGS_pic_31__38__5F_dataAddressMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataAddressMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::enterElement (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * p = nullptr ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataAddressMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@pic_31__38__5F_dataAddressMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::addAssign_operation (const GGS_lstring & inKey,
                                                             const GGS_uint & inArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * p = nullptr ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataAddressMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@pic_31__38__5F_dataAddressMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::add_operation (const GGS_pic_31__38__5F_dataAddressMap & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataAddressMap result = *this ;
  cEnumerator_pic_31__38__5F_dataAddressMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mDataAddress (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::setter_insertKey (GGS_lstring inKey,
                                                          GGS_uint inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * p = nullptr ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataAddressMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey = "the '%K' data is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::method_searchKey (GGS_lstring inKey,
                                                          GGS_uint & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey
                                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    outArgument0 = p->mProperty_mDataAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_mDataAddressForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    result = p->mProperty_mDataAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::setter_setMDataAddressForKey (GGS_uint inAttributeValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38__5F_dataAddressMap * p = (cMapElement_pic_31__38__5F_dataAddressMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    p->mProperty_mDataAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_pic_31__38__5F_dataAddressMap * GGS_pic_31__38__5F_dataAddressMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                  const GGS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * result = (cMapElement_pic_31__38__5F_dataAddressMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_pic_31__38__5F_dataAddressMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38__5F_dataAddressMap::cEnumerator_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element cEnumerator_pic_31__38__5F_dataAddressMap::current (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
  return GGS_pic_31__38__5F_dataAddressMap_2E_element (p->mProperty_lkey, p->mProperty_mDataAddress) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_pic_31__38__5F_dataAddressMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_pic_31__38__5F_dataAddressMap::current_mDataAddress (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
  return p->mProperty_mDataAddress ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18_dataAddressMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ("pic18_dataAddressMap",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38__5F_dataAddressMap::staticTypeDescriptor (void) const {
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
//
//Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'
//
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
    inObject->method_performInstructionRelativeBranchResolution  (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioConversionCount, io_ioListFileContents, out_outModifiedInstruction, inCompiler COMMA_THERE) ;
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
//
//Extension Getter '@pic18InstructionWithNoOperandKind mnemonic'
//
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

cMapElement_declaredRoutineMap::cMapElement_declaredRoutineMap (const GGS_declaredRoutineMap_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mRequiredBank (inValue.mProperty_mRequiredBank),
mProperty_mReturnedBank (inValue.mProperty_mReturnedBank),
mProperty_mPreservesBank (inValue.mProperty_mPreservesBank),
mProperty_mIsNoReturn (inValue.mProperty_mIsNoReturn),
mProperty_mInstructionList (inValue.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_declaredRoutineMap::cMapElement_declaredRoutineMap (const GGS_lstring & inKey,
                                                                const GGS_luint & in_mRequiredBank,
                                                                const GGS_luint & in_mReturnedBank,
                                                                const GGS_bool & in_mPreservesBank,
                                                                const GGS_bool & in_mIsNoReturn,
                                                                const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRequiredBank (in_mRequiredBank),
mProperty_mReturnedBank (in_mReturnedBank),
mProperty_mPreservesBank (in_mPreservesBank),
mProperty_mIsNoReturn (in_mIsNoReturn),
mProperty_mInstructionList (in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_declaredRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_declaredRoutineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_declaredRoutineMap (mProperty_lkey, mProperty_mRequiredBank, mProperty_mReturnedBank, mProperty_mPreservesBank, mProperty_mIsNoReturn, mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_declaredRoutineMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRequiredBank" ":") ;
  mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnedBank" ":") ;
  mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPreservesBank" ":") ;
  mProperty_mPreservesBank.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsNoReturn" ":") ;
  mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap::GGS_declaredRoutineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap::GGS_declaredRoutineMap (const GGS_declaredRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap & GGS_declaredRoutineMap::operator = (const GGS_declaredRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_ GGS_declaredRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declaredRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_declaredRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_declaredRoutineMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mRequiredBank = p->mProperty_mRequiredBank ;
      element.mProperty_mReturnedBank = p->mProperty_mReturnedBank ;
      element.mProperty_mPreservesBank = p->mProperty_mPreservesBank ;
      element.mProperty_mIsNoReturn = p->mProperty_mIsNoReturn ;
      element.mProperty_mInstructionList = p->mProperty_mInstructionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::class_func_mapWithMapToOverride (const GGS_declaredRoutineMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_declaredRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::enterElement (const GGS_declaredRoutineMap_2E_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredRoutineMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::addAssign_operation (const GGS_lstring & inKey,
                                                  const GGS_luint & inArgument0,
                                                  const GGS_luint & inArgument1,
                                                  const GGS_bool & inArgument2,
                                                  const GGS_bool & inArgument3,
                                                  const GGS_pic_31__38_InstructionList & inArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredRoutineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::add_operation (const GGS_declaredRoutineMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_declaredRoutineMap result = *this ;
  cEnumerator_declaredRoutineMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRequiredBank (HERE), enumerator.current_mReturnedBank (HERE), enumerator.current_mPreservesBank (HERE), enumerator.current_mIsNoReturn (HERE), enumerator.current_mInstructionList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_insertKey (GGS_lstring inKey,
                                               GGS_luint inArgument0,
                                               GGS_luint inArgument1,
                                               GGS_bool inArgument2,
                                               GGS_bool inArgument3,
                                               GGS_pic_31__38_InstructionList inArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredRoutineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_declaredRoutineMap_searchKey = "the '%K' routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::method_searchKey (GGS_lstring inKey,
                                               GGS_luint & outArgument0,
                                               GGS_luint & outArgument1,
                                               GGS_bool & outArgument2,
                                               GGS_bool & outArgument3,
                                               GGS_pic_31__38_InstructionList & outArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_declaredRoutineMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    outArgument0 = p->mProperty_mRequiredBank ;
    outArgument1 = p->mProperty_mReturnedBank ;
    outArgument2 = p->mProperty_mPreservesBank ;
    outArgument3 = p->mProperty_mIsNoReturn ;
    outArgument4 = p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_declaredRoutineMap::getter_mRequiredBankForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mRequiredBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_declaredRoutineMap::getter_mReturnedBankForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mReturnedBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredRoutineMap::getter_mPreservesBankForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mPreservesBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredRoutineMap::getter_mIsNoReturnForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_declaredRoutineMap::getter_mInstructionListForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GGS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_setMRequiredBankForKey (GGS_luint inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mRequiredBank = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_setMReturnedBankForKey (GGS_luint inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mReturnedBank = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_setMPreservesBankForKey (GGS_bool inAttributeValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mPreservesBank = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_setMIsNoReturnForKey (GGS_bool inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mIsNoReturn = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_setMInstructionListForKey (GGS_pic_31__38_InstructionList inAttributeValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mInstructionList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_declaredRoutineMap * GGS_declaredRoutineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * result = (cMapElement_declaredRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_declaredRoutineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_declaredRoutineMap::cEnumerator_declaredRoutineMap (const GGS_declaredRoutineMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element cEnumerator_declaredRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return GGS_declaredRoutineMap_2E_element (p->mProperty_lkey, p->mProperty_mRequiredBank, p->mProperty_mReturnedBank, p->mProperty_mPreservesBank, p->mProperty_mIsNoReturn, p->mProperty_mInstructionList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint cEnumerator_declaredRoutineMap::current_mRequiredBank (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint cEnumerator_declaredRoutineMap::current_mReturnedBank (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_declaredRoutineMap::current_mPreservesBank (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_declaredRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList cEnumerator_declaredRoutineMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declaredRoutineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap ("declaredRoutineMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declaredRoutineMap::staticTypeDescriptor (void) const {
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
//
//Extension method '@pic18PiccoloInstruction performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_PiccoloInstruction::method_performInlining (const GGS_stringset /* constinArgument_inInlinedRoutineSet */,
                                                                 const GGS_declaredRoutineMap /* constinArgument_inDeclaredRoutineMap */,
                                                                 const GGS_stringset /* constinArgument_inCurrentlyInlinedRoutineSet */,
                                                                 GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_PiccoloInstruction temp_0 = this ;
  ioArgument_ioInstructionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 22)) ;
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
    inObject->method_performInlining  (constin_inInlinedRoutineSet, constin_inDeclaredRoutineMap, constin_inCurrentlyInlinedRoutineSet, io_ioInstructionList, inCompiler COMMA_THERE) ;
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

cMapElement_blockInstructionBlockMap::cMapElement_blockInstructionBlockMap (const GGS_blockInstructionBlockMap_2E_element & inValue
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mInstructionList (inValue.mProperty_mInstructionList),
mProperty_mBlockTerminaisonForBlockInstruction (inValue.mProperty_mBlockTerminaisonForBlockInstruction),
mProperty_mEndOfBlock (inValue.mProperty_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockInstructionBlockMap::cMapElement_blockInstructionBlockMap (const GGS_lstring & inKey,
                                                                            const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                            const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                            const GGS_location & in_mEndOfBlock
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mBlockTerminaisonForBlockInstruction (in_mBlockTerminaisonForBlockInstruction),
mProperty_mEndOfBlock (in_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_blockInstructionBlockMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockInstructionBlockMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_blockInstructionBlockMap (mProperty_lkey, mProperty_mInstructionList, mProperty_mBlockTerminaisonForBlockInstruction, mProperty_mEndOfBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_blockInstructionBlockMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBlockTerminaisonForBlockInstruction" ":") ;
  mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfBlock" ":") ;
  mProperty_mEndOfBlock.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap::GGS_blockInstructionBlockMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap::GGS_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap & GGS_blockInstructionBlockMap::operator = (const GGS_blockInstructionBlockMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_ GGS_blockInstructionBlockMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockInstructionBlockMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_blockInstructionBlockMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockInstructionBlockMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mInstructionList = p->mProperty_mInstructionList ;
      element.mProperty_mBlockTerminaisonForBlockInstruction = p->mProperty_mBlockTerminaisonForBlockInstruction ;
      element.mProperty_mEndOfBlock = p->mProperty_mEndOfBlock ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::class_func_mapWithMapToOverride (const GGS_blockInstructionBlockMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_blockInstructionBlockMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::enterElement (const GGS_blockInstructionBlockMap_2E_element & inValue,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInstructionBlockMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockInstructionBlockMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::addAssign_operation (const GGS_lstring & inKey,
                                                        const GGS_pic_31__38_InstructionList & inArgument0,
                                                        const GGS_abstractBlockTerminationForBlockInstruction & inArgument1,
                                                        const GGS_location & inArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInstructionBlockMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockInstructionBlockMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::add_operation (const GGS_blockInstructionBlockMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_blockInstructionBlockMap result = *this ;
  cEnumerator_blockInstructionBlockMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInstructionList (HERE), enumerator.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator.current_mEndOfBlock (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_insertKey (GGS_lstring inKey,
                                                     GGS_pic_31__38_InstructionList inArgument0,
                                                     GGS_abstractBlockTerminationForBlockInstruction inArgument1,
                                                     GGS_location inArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInstructionBlockMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockInstructionBlockMap_searchKey = "the '%K' block is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::method_searchKey (GGS_lstring inKey,
                                                     GGS_pic_31__38_InstructionList & outArgument0,
                                                     GGS_abstractBlockTerminationForBlockInstruction & outArgument1,
                                                     GGS_location & outArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) performSearch (inKey,
                                                                                                                 inCompiler,
                                                                                                                 kSearchErrorMessage_blockInstructionBlockMap_searchKey
                                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    outArgument0 = p->mProperty_mInstructionList ;
    outArgument1 = p->mProperty_mBlockTerminaisonForBlockInstruction ;
    outArgument2 = p->mProperty_mEndOfBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_blockInstructionBlockMap::getter_mInstructionListForKey (const GGS_string & inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) attributes ;
  GGS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction GGS_blockInstructionBlockMap::getter_mBlockTerminaisonForBlockInstructionForKey (const GGS_string & inKey,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) attributes ;
  GGS_abstractBlockTerminationForBlockInstruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    result = p->mProperty_mBlockTerminaisonForBlockInstruction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockInstructionBlockMap::getter_mEndOfBlockForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) attributes ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    result = p->mProperty_mEndOfBlock ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_setMInstructionListForKey (GGS_pic_31__38_InstructionList inAttributeValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    p->mProperty_mInstructionList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_setMBlockTerminaisonForBlockInstructionForKey (GGS_abstractBlockTerminationForBlockInstruction inAttributeValue,
                                                                                         GGS_string inKey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    p->mProperty_mBlockTerminaisonForBlockInstruction = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_setMEndOfBlockForKey (GGS_location inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    p->mProperty_mEndOfBlock = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockInstructionBlockMap * GGS_blockInstructionBlockMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                        const GGS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * result = (cMapElement_blockInstructionBlockMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockInstructionBlockMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_blockInstructionBlockMap::cEnumerator_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element cEnumerator_blockInstructionBlockMap::current (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return GGS_blockInstructionBlockMap_2E_element (p->mProperty_lkey, p->mProperty_mInstructionList, p->mProperty_mBlockTerminaisonForBlockInstruction, p->mProperty_mEndOfBlock) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_blockInstructionBlockMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList cEnumerator_blockInstructionBlockMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return p->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction cEnumerator_blockInstructionBlockMap::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return p->mProperty_mBlockTerminaisonForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_blockInstructionBlockMap::current_mEndOfBlock (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return p->mProperty_mEndOfBlock ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockInstructionBlockMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap ("blockInstructionBlockMap",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_blockInstructionBlockMap::staticTypeDescriptor (void) const {
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

cMapElement_blockInitialBankSelectionMap::cMapElement_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap_2E_element & inValue
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mInitialBankSelection (inValue.mProperty_mInitialBankSelection),
mProperty_mSourceBlock (inValue.mProperty_mSourceBlock) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockInitialBankSelectionMap::cMapElement_blockInitialBankSelectionMap (const GGS_lstring & inKey,
                                                                                    const GGS_uint & in_mInitialBankSelection,
                                                                                    const GGS_string & in_mSourceBlock
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitialBankSelection (in_mInitialBankSelection),
mProperty_mSourceBlock (in_mSourceBlock) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_blockInitialBankSelectionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockInitialBankSelectionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_blockInitialBankSelectionMap (mProperty_lkey, mProperty_mInitialBankSelection, mProperty_mSourceBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_blockInitialBankSelectionMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInitialBankSelection" ":") ;
  mProperty_mInitialBankSelection.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceBlock" ":") ;
  mProperty_mSourceBlock.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap::GGS_blockInitialBankSelectionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap::GGS_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap & GGS_blockInitialBankSelectionMap::operator = (const GGS_blockInitialBankSelectionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_ GGS_blockInitialBankSelectionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockInitialBankSelectionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_blockInitialBankSelectionMap * p = (cMapElement_blockInitialBankSelectionMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_blockInitialBankSelectionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockInitialBankSelectionMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mInitialBankSelection = p->mProperty_mInitialBankSelection ;
      element.mProperty_mSourceBlock = p->mProperty_mSourceBlock ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::class_func_mapWithMapToOverride (const GGS_blockInitialBankSelectionMap & inMapToOverride
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_blockInitialBankSelectionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::enterElement (const GGS_blockInitialBankSelectionMap_2E_element & inValue,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInitialBankSelectionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockInitialBankSelectionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::addAssign_operation (const GGS_lstring & inKey,
                                                            const GGS_uint & inArgument0,
                                                            const GGS_string & inArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInitialBankSelectionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockInitialBankSelectionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::add_operation (const GGS_blockInitialBankSelectionMap & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_blockInitialBankSelectionMap result = *this ;
  cEnumerator_blockInitialBankSelectionMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInitialBankSelection (HERE), enumerator.current_mSourceBlock (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::setter_insertKey (GGS_lstring inKey,
                                                         GGS_uint inArgument0,
                                                         GGS_string inArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInitialBankSelectionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared (internal error)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockInitialBankSelectionMap_searchKey = "the '%K' block is not declared (internal error)" ;

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::method_searchKey (GGS_lstring inKey,
                                                         GGS_uint & outArgument0,
                                                         GGS_string & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_blockInitialBankSelectionMap_searchKey
                                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    outArgument0 = p->mProperty_mInitialBankSelection ;
    outArgument1 = p->mProperty_mSourceBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInitialBankSelectionMap::getter_mInitialBankSelectionForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    result = p->mProperty_mInitialBankSelection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_blockInitialBankSelectionMap::getter_mSourceBlockForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    result = p->mProperty_mSourceBlock ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::setter_setMInitialBankSelectionForKey (GGS_uint inAttributeValue,
                                                                              GGS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInitialBankSelectionMap * p = (cMapElement_blockInitialBankSelectionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    p->mProperty_mInitialBankSelection = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::setter_setMSourceBlockForKey (GGS_string inAttributeValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInitialBankSelectionMap * p = (cMapElement_blockInitialBankSelectionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    p->mProperty_mSourceBlock = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockInitialBankSelectionMap * GGS_blockInitialBankSelectionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                const GGS_string & inKey
                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * result = (cMapElement_blockInitialBankSelectionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockInitialBankSelectionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_blockInitialBankSelectionMap::cEnumerator_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element cEnumerator_blockInitialBankSelectionMap::current (LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
  return GGS_blockInitialBankSelectionMap_2E_element (p->mProperty_lkey, p->mProperty_mInitialBankSelection, p->mProperty_mSourceBlock) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_blockInitialBankSelectionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_blockInitialBankSelectionMap::current_mInitialBankSelection (LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
  return p->mProperty_mInitialBankSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_blockInitialBankSelectionMap::current_mSourceBlock (LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
  return p->mProperty_mSourceBlock ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockInitialBankSelectionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ("blockInitialBankSelectionMap",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_blockInitialBankSelectionMap::staticTypeDescriptor (void) const {
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
//
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//
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
  GGS_ipic_31__38_AbstractBlockTerminator var_optimizedTrueTerminator_7318 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedTrueTerminator_7318, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 169)) ;
  GGS_ipic_31__38_SingleInstructionTerminator temp_1 ;
  if (var_optimizedTrueTerminator_7318.isValid ()) {
    if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedTrueTerminator_7318.ptr ())) {
      temp_1 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_7318.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedTrueTerminator_7318.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 178)) ;
    }
  }
  outArgument_outOptimizedTrueTerminator = temp_1 ;
  GGS_ipic_31__38_AbstractBlockTerminator var_optimizedFalseTerminator_7689 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_2 = this ;
  callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedFalseTerminator_7689, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 180)) ;
  GGS_ipic_31__38_SingleInstructionTerminator temp_3 ;
  if (var_optimizedFalseTerminator_7689.isValid ()) {
    if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedFalseTerminator_7689.ptr ())) {
      temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedFalseTerminator_7689.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedFalseTerminator_7689.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 189)) ;
    }
  }
  outArgument_outOptimizedFalseTerminator = temp_3 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 191)).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outIdenticalTerminators = GGS_bool (true) ;
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 193)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GGS_ipic_31__38_RetlwTerminator temp_6 ;
        if (outArgument_outOptimizedTrueTerminator.isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
            temp_6 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 194)) ;
          }
        }
        GGS_ipic_31__38_RetlwTerminator var_t_8171 = temp_6 ;
        GGS_ipic_31__38_RetlwTerminator temp_7 ;
        if (outArgument_outOptimizedFalseTerminator.isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
            temp_7 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 195)) ;
          }
        }
        GGS_ipic_31__38_RetlwTerminator var_f_8262 = temp_7 ;
        outArgument_outIdenticalTerminators = GGS_bool (ComparisonKind::equal, var_t_8171.readProperty_mLiteralValue ().objectCompare (var_f_8262.readProperty_mLiteralValue ())) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 197)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GGS_ipic_31__38_JumpTerminator temp_9 ;
          if (outArgument_outOptimizedTrueTerminator.isValid ()) {
            if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
              temp_9 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 198)) ;
            }
          }
          GGS_ipic_31__38_JumpTerminator var_t_8548 = temp_9 ;
          GGS_ipic_31__38_JumpTerminator temp_10 ;
          if (outArgument_outOptimizedFalseTerminator.isValid ()) {
            if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
              temp_10 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 199)) ;
            }
          }
          GGS_ipic_31__38_JumpTerminator var_f_8637 = temp_10 ;
          outArgument_outIdenticalTerminators = GGS_bool (ComparisonKind::equal, var_t_8548.readProperty_mLabel ().objectCompare (var_f_8637.readProperty_mLabel ())) ;
        }
      }
      if (kBoolFalse == test_8) {
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
    inObject->method_getOptimizedTerminators  (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTrueTerminator, out_outOptimizedFalseTerminator, out_outIdenticalTerminators, inCompiler COMMA_THERE) ;
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
//
//Extension method '@ipic18SequentialInstruction enterInstructionReferencedLabels'
//
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
    inObject->method_enterInstructionReferencedLabels  (constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction optimizeInstruction'
//
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
    inObject->method_optimizeInstruction  (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, out_outOptimizationDone, io_ioListFileContents, out_outOptimizedInstruction, out_outNOPsubstitution, inCompiler COMMA_THERE) ;
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
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_35966 (temp_0, EnumerationOrder::up) ;
  while (enumerator_35966.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_35966.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 943)) ;
    enumerator_35966.gotoNextObject () ;
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

GGS_optimizeFlagStruct::~ GGS_optimizeFlagStruct (void) {
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
//
//     @optimizeFlagStruct generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optimizeFlagStruct ("optimizeFlagStruct",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optimizeFlagStruct::staticTypeDescriptor (void) const {
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
//
//Extension Getter '@bool flagValue'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_flagValue (const GGS_bool & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_bool temp_0 = inObject ;
  GGS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GGS_string ("enabled") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GGS_string ("disabled") ;
  }
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//'@blockInvocationGraph' graph
//
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
//
//     @blockInvocationGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInvocationGraph ("blockInvocationGraph",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_blockInvocationGraph::staticTypeDescriptor (void) const {
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
//
//Extension method '@ipic18SequentialInstruction buildInstructionInvocationGraph'
//
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
    inObject->method_buildInstructionInvocationGraph  (constin_inBlockLabel, io_ioGraphVizString, inCompiler COMMA_THERE) ;
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
//
//Extension method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'
//
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
    inObject->method_buildTerminatorOrderedGraph  (constin_inBlockLabel, io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@clusterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_clusterList : public cCollectionElement {
  public: GGS_clusterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_clusterList (const GGS_ipic_31__38_BlockList & in_mBlockList
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_clusterList (const GGS_clusterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_clusterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBlockList" ":") ;
  mObject.mProperty_mBlockList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList::GGS_clusterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList::GGS_clusterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_clusterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_clusterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::enterElement (const GGS_clusterList_2E_element & inValue,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_clusterList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::class_func_listWithValue (const GGS_ipic_31__38_BlockList & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  GGS_clusterList result ;
  if (inOperand0.isValid ()) {
    result = GGS_clusterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_clusterList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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

void GGS_clusterList::addAssign_operation (const GGS_ipic_31__38_BlockList & inOperand0
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_clusterList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::setter_append (const GGS_ipic_31__38_BlockList inOperand0,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_clusterList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::setter_insertAtIndex (const GGS_ipic_31__38_BlockList inOperand0,
                                            const GGS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_clusterList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::setter_removeAtIndex (GGS_ipic_31__38_BlockList & outOperand0,
                                            const GGS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_clusterList) ;
      outOperand0 = p->mObject.mProperty_mBlockList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::setter_popFirst (GGS_ipic_31__38_BlockList & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::setter_popLast (GGS_ipic_31__38_BlockList & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::method_first (GGS_ipic_31__38_BlockList & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::method_last (GGS_ipic_31__38_BlockList & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::add_operation (const GGS_clusterList & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_clusterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::getter_subListWithRange (const GGS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_clusterList result = GGS_clusterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_clusterList result = GGS_clusterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_clusterList result = GGS_clusterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::plusAssign_operation (const GGS_clusterList inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::setter_setMBlockListAtIndex (GGS_ipic_31__38_BlockList inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBlockList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_clusterList::getter_mBlockListAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  GGS_ipic_31__38_BlockList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    result = p->mObject.mProperty_mBlockList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_clusterList::cEnumerator_clusterList (const GGS_clusterList & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList_2E_element cEnumerator_clusterList::current (LOCATION_ARGS) const {
  const cCollectionElement_clusterList * p = (const cCollectionElement_clusterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_clusterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList cEnumerator_clusterList::current_mBlockList (LOCATION_ARGS) const {
  const cCollectionElement_clusterList * p = (const cCollectionElement_clusterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_clusterList) ;
  return p->mObject.mProperty_mBlockList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @clusterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_clusterList ("clusterList",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_clusterList::staticTypeDescriptor (void) const {
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

cMapElement_neededConversionForClusterOrder::cMapElement_neededConversionForClusterOrder (const GGS_neededConversionForClusterOrder_2E_element & inValue
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mConversions (inValue.mProperty_mConversions) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_neededConversionForClusterOrder::cMapElement_neededConversionForClusterOrder (const GGS_lstring & inKey,
                                                                                          const GGS_uint & in_mConversions
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConversions (in_mConversions) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_neededConversionForClusterOrder::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_neededConversionForClusterOrder::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_neededConversionForClusterOrder (mProperty_lkey, mProperty_mConversions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_neededConversionForClusterOrder::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConversions" ":") ;
  mProperty_mConversions.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder::GGS_neededConversionForClusterOrder (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder::GGS_neededConversionForClusterOrder (const GGS_neededConversionForClusterOrder & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder & GGS_neededConversionForClusterOrder::operator = (const GGS_neededConversionForClusterOrder & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::class_func_emptyMap (LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_ GGS_neededConversionForClusterOrder
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_neededConversionForClusterOrder_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_neededConversionForClusterOrder * p = (cMapElement_neededConversionForClusterOrder *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_neededConversionForClusterOrder_2E_element_3F_::init_nil () ;
    }else{
      GGS_neededConversionForClusterOrder_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mConversions = p->mProperty_mConversions ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::class_func_mapWithMapToOverride (const GGS_neededConversionForClusterOrder & inMapToOverride
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_neededConversionForClusterOrder result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::enterElement (const GGS_neededConversionForClusterOrder_2E_element & inValue,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * p = nullptr ;
  macroMyNew (p, cMapElement_neededConversionForClusterOrder (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@neededConversionForClusterOrder insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::addAssign_operation (const GGS_lstring & inKey,
                                                               const GGS_uint & inArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * p = nullptr ;
  macroMyNew (p, cMapElement_neededConversionForClusterOrder (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@neededConversionForClusterOrder insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::add_operation (const GGS_neededConversionForClusterOrder & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_neededConversionForClusterOrder result = *this ;
  cEnumerator_neededConversionForClusterOrder enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mConversions (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::setter_insertKey (GGS_lstring inKey,
                                                            GGS_uint inArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * p = nullptr ;
  macroMyNew (p, cMapElement_neededConversionForClusterOrder (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_neededConversionForClusterOrder_searchKey = "the '%K' key is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::method_searchKey (GGS_lstring inKey,
                                                            GGS_uint & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_neededConversionForClusterOrder_searchKey
                                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    outArgument0 = p->mProperty_mConversions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_neededConversionForClusterOrder::getter_mConversionsForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    result = p->mProperty_mConversions ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::setter_setMConversionsForKey (GGS_uint inAttributeValue,
                                                                        GGS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_neededConversionForClusterOrder * p = (cMapElement_neededConversionForClusterOrder *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    p->mProperty_mConversions = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_neededConversionForClusterOrder * GGS_neededConversionForClusterOrder::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                      const GGS_string & inKey
                                                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * result = (cMapElement_neededConversionForClusterOrder *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_neededConversionForClusterOrder) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_neededConversionForClusterOrder::cEnumerator_neededConversionForClusterOrder (const GGS_neededConversionForClusterOrder & inEnumeratedObject,
                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element cEnumerator_neededConversionForClusterOrder::current (LOCATION_ARGS) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
  return GGS_neededConversionForClusterOrder_2E_element (p->mProperty_lkey, p->mProperty_mConversions) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_neededConversionForClusterOrder::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_neededConversionForClusterOrder::current_mConversions (LOCATION_ARGS) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
  return p->mProperty_mConversions ;
}

//--------------------------------------------------------------------------------------------------
//
//     @neededConversionForClusterOrder generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder ("neededConversionForClusterOrder",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_neededConversionForClusterOrder::staticTypeDescriptor (void) const {
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

cMapElement_generatedCodeMap::cMapElement_generatedCodeMap (const GGS_generatedCodeMap_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mCode (inValue.mProperty_mCode),
mProperty_mInstruction (inValue.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_generatedCodeMap::cMapElement_generatedCodeMap (const GGS_lstring & inKey,
                                                            const GGS_codeList & in_mCode,
                                                            const GGS_ipic_31__38_SequentialInstruction & in_mInstruction
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mCode (in_mCode),
mProperty_mInstruction (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_generatedCodeMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_generatedCodeMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_generatedCodeMap (mProperty_lkey, mProperty_mCode, mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_generatedCodeMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCode" ":") ;
  mProperty_mCode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap::GGS_generatedCodeMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap::GGS_generatedCodeMap (const GGS_generatedCodeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap & GGS_generatedCodeMap::operator = (const GGS_generatedCodeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_ GGS_generatedCodeMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_generatedCodeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_generatedCodeMap * p = (cMapElement_generatedCodeMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_generatedCodeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_generatedCodeMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mCode = p->mProperty_mCode ;
      element.mProperty_mInstruction = p->mProperty_mInstruction ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::class_func_mapWithMapToOverride (const GGS_generatedCodeMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_generatedCodeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::enterElement (const GGS_generatedCodeMap_2E_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * p = nullptr ;
  macroMyNew (p, cMapElement_generatedCodeMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@generatedCodeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::addAssign_operation (const GGS_lstring & inKey,
                                                const GGS_codeList & inArgument0,
                                                const GGS_ipic_31__38_SequentialInstruction & inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * p = nullptr ;
  macroMyNew (p, cMapElement_generatedCodeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@generatedCodeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::add_operation (const GGS_generatedCodeMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_generatedCodeMap result = *this ;
  cEnumerator_generatedCodeMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mCode (HERE), enumerator.current_mInstruction (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::setter_insertKey (GGS_lstring inKey,
                                             GGS_codeList inArgument0,
                                             GGS_ipic_31__38_SequentialInstruction inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * p = nullptr ;
  macroMyNew (p, cMapElement_generatedCodeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_generatedCodeMap_searchKey = "the '%K' entry is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::method_searchKey (GGS_lstring inKey,
                                             GGS_codeList & outArgument0,
                                             GGS_ipic_31__38_SequentialInstruction & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_generatedCodeMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    outArgument0 = p->mProperty_mCode ;
    outArgument1 = p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_generatedCodeMap::getter_mCodeForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) attributes ;
  GGS_codeList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    result = p->mProperty_mCode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_generatedCodeMap::getter_mInstructionForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) attributes ;
  GGS_ipic_31__38_SequentialInstruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::setter_setMCodeForKey (GGS_codeList inAttributeValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_generatedCodeMap * p = (cMapElement_generatedCodeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    p->mProperty_mCode = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::setter_setMInstructionForKey (GGS_ipic_31__38_SequentialInstruction inAttributeValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_generatedCodeMap * p = (cMapElement_generatedCodeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    p->mProperty_mInstruction = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_generatedCodeMap * GGS_generatedCodeMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * result = (cMapElement_generatedCodeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_generatedCodeMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_generatedCodeMap::cEnumerator_generatedCodeMap (const GGS_generatedCodeMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element cEnumerator_generatedCodeMap::current (LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
  return GGS_generatedCodeMap_2E_element (p->mProperty_lkey, p->mProperty_mCode, p->mProperty_mInstruction) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_generatedCodeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList cEnumerator_generatedCodeMap::current_mCode (LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
  return p->mProperty_mCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction cEnumerator_generatedCodeMap::current_mInstruction (LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
  return p->mProperty_mInstruction ;
}

//--------------------------------------------------------------------------------------------------
//
//     @generatedCodeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generatedCodeMap ("generatedCodeMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_generatedCodeMap::staticTypeDescriptor (void) const {
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
//
//Extension Getter '@uint x4string'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_x_34_string (const GGS_uint & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GGS_uint (uint32_t (4096U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 13)) ;
  const GGS_uint temp_1 = inObject ;
  result_outResult.plusAssign_operation(temp_1.divide_operation (GGS_uint (uint32_t (256U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)) ;
  const GGS_uint temp_2 = inObject ;
  result_outResult.plusAssign_operation(temp_2.divide_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 15)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)) ;
  const GGS_uint temp_3 = inObject ;
  result_outResult.plusAssign_operation(temp_3.operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@uint x6string'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_x_36_string (const GGS_uint & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GGS_uint (uint32_t (65536U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 22)) ;
  const GGS_uint temp_1 = inObject ;
  result_outResult.plusAssign_operation(temp_1.divide_operation (GGS_uint (uint32_t (4096U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)) ;
  const GGS_uint temp_2 = inObject ;
  result_outResult.plusAssign_operation(temp_2.divide_operation (GGS_uint (uint32_t (256U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)) ;
  const GGS_uint temp_3 = inObject ;
  result_outResult.plusAssign_operation(temp_3.divide_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)) ;
  const GGS_uint temp_4 = inObject ;
  result_outResult.plusAssign_operation(temp_4.operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

cMapElement_blockMapForStackComputation::cMapElement_blockMapForStackComputation (const GGS_blockMapForStackComputation_2E_element & inValue
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mBlock (inValue.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockMapForStackComputation::cMapElement_blockMapForStackComputation (const GGS_lstring & inKey,
                                                                                  const GGS_ipic_31__38_Block & in_mBlock
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mBlock (in_mBlock) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_blockMapForStackComputation::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockMapForStackComputation::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_blockMapForStackComputation (mProperty_lkey, mProperty_mBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_blockMapForStackComputation::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBlock" ":") ;
  mProperty_mBlock.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation::GGS_blockMapForStackComputation (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation::GGS_blockMapForStackComputation (const GGS_blockMapForStackComputation & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation & GGS_blockMapForStackComputation::operator = (const GGS_blockMapForStackComputation & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::class_func_emptyMap (LOCATION_ARGS) {
  GGS_blockMapForStackComputation result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_ GGS_blockMapForStackComputation
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockMapForStackComputation_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_blockMapForStackComputation * p = (cMapElement_blockMapForStackComputation *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_blockMapForStackComputation_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockMapForStackComputation_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mBlock = p->mProperty_mBlock ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::class_func_mapWithMapToOverride (const GGS_blockMapForStackComputation & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_blockMapForStackComputation result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::enterElement (const GGS_blockMapForStackComputation_2E_element & inValue,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * p = nullptr ;
  macroMyNew (p, cMapElement_blockMapForStackComputation (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockMapForStackComputation insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::addAssign_operation (const GGS_lstring & inKey,
                                                           const GGS_ipic_31__38_Block & inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * p = nullptr ;
  macroMyNew (p, cMapElement_blockMapForStackComputation (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockMapForStackComputation insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::add_operation (const GGS_blockMapForStackComputation & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_blockMapForStackComputation result = *this ;
  cEnumerator_blockMapForStackComputation enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mBlock (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::setter_insertKey (GGS_lstring inKey,
                                                        GGS_ipic_31__38_Block inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * p = nullptr ;
  macroMyNew (p, cMapElement_blockMapForStackComputation (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockMapForStackComputation_searchKey = "the '%K' block is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::method_searchKey (GGS_lstring inKey,
                                                        GGS_ipic_31__38_Block & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) performSearch (inKey,
                                                                                                                       inCompiler,
                                                                                                                       kSearchErrorMessage_blockMapForStackComputation_searchKey
                                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    outArgument0 = p->mProperty_mBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block GGS_blockMapForStackComputation::getter_mBlockForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) attributes ;
  GGS_ipic_31__38_Block result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    result = p->mProperty_mBlock ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::setter_setMBlockForKey (GGS_ipic_31__38_Block inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockMapForStackComputation * p = (cMapElement_blockMapForStackComputation *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    p->mProperty_mBlock = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockMapForStackComputation * GGS_blockMapForStackComputation::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                              const GGS_string & inKey
                                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * result = (cMapElement_blockMapForStackComputation *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockMapForStackComputation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_blockMapForStackComputation::cEnumerator_blockMapForStackComputation (const GGS_blockMapForStackComputation & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element cEnumerator_blockMapForStackComputation::current (LOCATION_ARGS) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
  return GGS_blockMapForStackComputation_2E_element (p->mProperty_lkey, p->mProperty_mBlock) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_blockMapForStackComputation::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block cEnumerator_blockMapForStackComputation::current_mBlock (LOCATION_ARGS) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
  return p->mProperty_mBlock ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockMapForStackComputation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockMapForStackComputation ("blockMapForStackComputation",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_blockMapForStackComputation::staticTypeDescriptor (void) const {
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

cMapElement_routineCallMap::cMapElement_routineCallMap (const GGS_routineCallMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mCalledRoutineSet (inValue.mProperty_mCalledRoutineSet),
mProperty_mTerminatorStackNeeds (inValue.mProperty_mTerminatorStackNeeds) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineCallMap::cMapElement_routineCallMap (const GGS_lstring & inKey,
                                                        const GGS_stringset & in_mCalledRoutineSet,
                                                        const GGS_uint & in_mTerminatorStackNeeds
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mCalledRoutineSet (in_mCalledRoutineSet),
mProperty_mTerminatorStackNeeds (in_mTerminatorStackNeeds) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_routineCallMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineCallMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_routineCallMap (mProperty_lkey, mProperty_mCalledRoutineSet, mProperty_mTerminatorStackNeeds COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_routineCallMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCalledRoutineSet" ":") ;
  mProperty_mCalledRoutineSet.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminatorStackNeeds" ":") ;
  mProperty_mTerminatorStackNeeds.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap::GGS_routineCallMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap::GGS_routineCallMap (const GGS_routineCallMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap & GGS_routineCallMap::operator = (const GGS_routineCallMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineCallMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_routineCallMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_ GGS_routineCallMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineCallMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_routineCallMap * p = (cMapElement_routineCallMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_routineCallMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineCallMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mCalledRoutineSet = p->mProperty_mCalledRoutineSet ;
      element.mProperty_mTerminatorStackNeeds = p->mProperty_mTerminatorStackNeeds ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::class_func_mapWithMapToOverride (const GGS_routineCallMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_routineCallMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_routineCallMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::enterElement (const GGS_routineCallMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineCallMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineCallMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_stringset & inArgument0,
                                              const GGS_uint & inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineCallMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineCallMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::add_operation (const GGS_routineCallMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_routineCallMap result = *this ;
  cEnumerator_routineCallMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mCalledRoutineSet (HERE), enumerator.current_mTerminatorStackNeeds (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::setter_insertKey (GGS_lstring inKey,
                                           GGS_stringset inArgument0,
                                           GGS_uint inArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineCallMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineCallMap::getter_mCalledRoutineSetForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) attributes ;
  GGS_stringset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    result = p->mProperty_mCalledRoutineSet ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineCallMap::getter_mTerminatorStackNeedsForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    result = p->mProperty_mTerminatorStackNeeds ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::setter_setMCalledRoutineSetForKey (GGS_stringset inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineCallMap * p = (cMapElement_routineCallMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    p->mProperty_mCalledRoutineSet = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::setter_setMTerminatorStackNeedsForKey (GGS_uint inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineCallMap * p = (cMapElement_routineCallMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    p->mProperty_mTerminatorStackNeeds = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineCallMap * GGS_routineCallMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * result = (cMapElement_routineCallMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineCallMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_routineCallMap::cEnumerator_routineCallMap (const GGS_routineCallMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element cEnumerator_routineCallMap::current (LOCATION_ARGS) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineCallMap) ;
  return GGS_routineCallMap_2E_element (p->mProperty_lkey, p->mProperty_mCalledRoutineSet, p->mProperty_mTerminatorStackNeeds) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_routineCallMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset cEnumerator_routineCallMap::current_mCalledRoutineSet (LOCATION_ARGS) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineCallMap) ;
  return p->mProperty_mCalledRoutineSet ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_routineCallMap::current_mTerminatorStackNeeds (LOCATION_ARGS) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineCallMap) ;
  return p->mProperty_mTerminatorStackNeeds ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineCallMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallMap ("routineCallMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineCallMap::staticTypeDescriptor (void) const {
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

cMapElement_routineStackRequirementMap::cMapElement_routineStackRequirementMap (const GGS_routineStackRequirementMap_2E_element & inValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLevels (inValue.mProperty_mLevels) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineStackRequirementMap::cMapElement_routineStackRequirementMap (const GGS_lstring & inKey,
                                                                                const GGS_uint & in_mLevels
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLevels (in_mLevels) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_routineStackRequirementMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineStackRequirementMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_routineStackRequirementMap (mProperty_lkey, mProperty_mLevels COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_routineStackRequirementMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLevels" ":") ;
  mProperty_mLevels.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap::GGS_routineStackRequirementMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap::GGS_routineStackRequirementMap (const GGS_routineStackRequirementMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap & GGS_routineStackRequirementMap::operator = (const GGS_routineStackRequirementMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_routineStackRequirementMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_ GGS_routineStackRequirementMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineStackRequirementMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_routineStackRequirementMap * p = (cMapElement_routineStackRequirementMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_routineStackRequirementMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineStackRequirementMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLevels = p->mProperty_mLevels ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::class_func_mapWithMapToOverride (const GGS_routineStackRequirementMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_routineStackRequirementMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::enterElement (const GGS_routineStackRequirementMap_2E_element & inValue,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineStackRequirementMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineStackRequirementMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::addAssign_operation (const GGS_lstring & inKey,
                                                          const GGS_uint & inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineStackRequirementMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineStackRequirementMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::add_operation (const GGS_routineStackRequirementMap & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineStackRequirementMap result = *this ;
  cEnumerator_routineStackRequirementMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLevels (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::setter_insertKey (GGS_lstring inKey,
                                                       GGS_uint inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineStackRequirementMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_routineStackRequirementMap_searchKey = "the '%K' entry is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::method_searchKey (GGS_lstring inKey,
                                                       GGS_uint & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_routineStackRequirementMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    outArgument0 = p->mProperty_mLevels ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineStackRequirementMap::getter_mLevelsForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    result = p->mProperty_mLevels ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::setter_setMLevelsForKey (GGS_uint inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineStackRequirementMap * p = (cMapElement_routineStackRequirementMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    p->mProperty_mLevels = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineStackRequirementMap * GGS_routineStackRequirementMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                            const GGS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * result = (cMapElement_routineStackRequirementMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineStackRequirementMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_routineStackRequirementMap::cEnumerator_routineStackRequirementMap (const GGS_routineStackRequirementMap & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element cEnumerator_routineStackRequirementMap::current (LOCATION_ARGS) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
  return GGS_routineStackRequirementMap_2E_element (p->mProperty_lkey, p->mProperty_mLevels) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_routineStackRequirementMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_routineStackRequirementMap::current_mLevels (LOCATION_ARGS) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
  return p->mProperty_mLevels ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineStackRequirementMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap ("routineStackRequirementMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineStackRequirementMap::staticTypeDescriptor (void) const {
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
//
//Extension method '@ipic18SequentialInstruction buildCalledRoutineSetForStackComputations'
//
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
    inObject->method_buildCalledRoutineSetForStackComputations  (io_ioRoutineCalledSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_blockDurationMap::cMapElement_blockDurationMap (const GGS_blockDurationMap_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mMinDuration (inValue.mProperty_mMinDuration),
mProperty_mMaxDuration (inValue.mProperty_mMaxDuration) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockDurationMap::cMapElement_blockDurationMap (const GGS_lstring & inKey,
                                                            const GGS_uint & in_mMinDuration,
                                                            const GGS_uint & in_mMaxDuration
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mMinDuration (in_mMinDuration),
mProperty_mMaxDuration (in_mMaxDuration) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_blockDurationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockDurationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_blockDurationMap (mProperty_lkey, mProperty_mMinDuration, mProperty_mMaxDuration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_blockDurationMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMinDuration" ":") ;
  mProperty_mMinDuration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMaxDuration" ":") ;
  mProperty_mMaxDuration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap::GGS_blockDurationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap::GGS_blockDurationMap (const GGS_blockDurationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap & GGS_blockDurationMap::operator = (const GGS_blockDurationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockDurationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_blockDurationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_ GGS_blockDurationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockDurationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_blockDurationMap * p = (cMapElement_blockDurationMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_blockDurationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockDurationMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mMinDuration = p->mProperty_mMinDuration ;
      element.mProperty_mMaxDuration = p->mProperty_mMaxDuration ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::class_func_mapWithMapToOverride (const GGS_blockDurationMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_blockDurationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_blockDurationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::enterElement (const GGS_blockDurationMap_2E_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockDurationMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockDurationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::addAssign_operation (const GGS_lstring & inKey,
                                                const GGS_uint & inArgument0,
                                                const GGS_uint & inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockDurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockDurationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap GGS_blockDurationMap::add_operation (const GGS_blockDurationMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_blockDurationMap result = *this ;
  cEnumerator_blockDurationMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mMinDuration (HERE), enumerator.current_mMaxDuration (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::setter_insertKey (GGS_lstring inKey,
                                             GGS_uint inArgument0,
                                             GGS_uint inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockDurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockDurationMap_searchKey = "the '%K' entry is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::method_searchKey (GGS_lstring inKey,
                                             GGS_uint & outArgument0,
                                             GGS_uint & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_blockDurationMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    outArgument0 = p->mProperty_mMinDuration ;
    outArgument1 = p->mProperty_mMaxDuration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockDurationMap::getter_mMinDurationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    result = p->mProperty_mMinDuration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockDurationMap::getter_mMaxDurationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    result = p->mProperty_mMaxDuration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::setter_setMMinDurationForKey (GGS_uint inAttributeValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockDurationMap * p = (cMapElement_blockDurationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    p->mProperty_mMinDuration = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap::setter_setMMaxDurationForKey (GGS_uint inAttributeValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockDurationMap * p = (cMapElement_blockDurationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    p->mProperty_mMaxDuration = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockDurationMap * GGS_blockDurationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * result = (cMapElement_blockDurationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockDurationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_blockDurationMap::cEnumerator_blockDurationMap (const GGS_blockDurationMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element cEnumerator_blockDurationMap::current (LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockDurationMap) ;
  return GGS_blockDurationMap_2E_element (p->mProperty_lkey, p->mProperty_mMinDuration, p->mProperty_mMaxDuration) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_blockDurationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_blockDurationMap::current_mMinDuration (LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockDurationMap) ;
  return p->mProperty_mMinDuration ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_blockDurationMap::current_mMaxDuration (LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockDurationMap) ;
  return p->mProperty_mMaxDuration ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockDurationMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap ("blockDurationMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_blockDurationMap::staticTypeDescriptor (void) const {
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
//
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//
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
    inObject->method_minMaxDuration  (constin_inExploredBlockMap, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
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
#include "cLexiqueIntrospection.h"

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
  result.addAssign_operation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("string") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("controller") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("processor") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("romsize") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("eepromsize") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("bank") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("unusedregister") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("mirrorat") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("ram") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("register") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("at") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("to") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("configuration") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("width") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("description") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("mask") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("illegal") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("message") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("setting") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("-") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("/") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("}") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_piccoloDevice_5F_lexique (TC_UniqueArray <String> & ioList) {
  ioList.appendObject ("piccoloDevice_lexique:controlKeyWordList") ;
  ioList.appendObject ("piccoloDevice_lexique:delimitorsList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_piccoloDevice_5F_lexique (const String & inIdentifier,
                                                               bool & ioFound,
                                                               TC_UniqueArray <String> & ioList) {
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

static cLexiqueIntrospection lexiqueIntrospection_piccoloDevice_5F_lexique
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

cMapElement_declaredByteMap::cMapElement_declaredByteMap (const GGS_declaredByteMap_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_declaredByteMap::cMapElement_declaredByteMap (const GGS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_declaredByteMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_declaredByteMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_declaredByteMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_declaredByteMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap::GGS_declaredByteMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap::GGS_declaredByteMap (const GGS_declaredByteMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap & GGS_declaredByteMap::operator = (const GGS_declaredByteMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_declaredByteMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_ GGS_declaredByteMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declaredByteMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_declaredByteMap * p = (cMapElement_declaredByteMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_declaredByteMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_declaredByteMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::class_func_mapWithMapToOverride (const GGS_declaredByteMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_declaredByteMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::enterElement (const GGS_declaredByteMap_2E_element & inValue,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredByteMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredByteMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::addAssign_operation (const GGS_lstring & inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredByteMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredByteMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::add_operation (const GGS_declaredByteMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_declaredByteMap result = *this ;
  cEnumerator_declaredByteMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::setter_insertKey (GGS_lstring inKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredByteMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' byte is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_declaredByteMap_searchKey = "the '%K' byte is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::method_searchKey (GGS_lstring inKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_declaredByteMap * p = (const cMapElement_declaredByteMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_declaredByteMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_declaredByteMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_declaredByteMap * GGS_declaredByteMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GGS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * result = (cMapElement_declaredByteMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_declaredByteMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_declaredByteMap::cEnumerator_declaredByteMap (const GGS_declaredByteMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element cEnumerator_declaredByteMap::current (LOCATION_ARGS) const {
  const cMapElement_declaredByteMap * p = (const cMapElement_declaredByteMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredByteMap) ;
  return GGS_declaredByteMap_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_declaredByteMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declaredByteMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap ("declaredByteMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declaredByteMap::staticTypeDescriptor (void) const {
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

cMapElement_registerTable::cMapElement_registerTable (const GGS_registerTable_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mRegisterAddressList (inValue.mProperty_mRegisterAddressList),
mProperty_mSize (inValue.mProperty_mSize),
mProperty_mBitSliceTable (inValue.mProperty_mBitSliceTable),
mProperty_mBitDefinitionString (inValue.mProperty_mBitDefinitionString),
mProperty_mProtection (inValue.mProperty_mProtection) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_registerTable::cMapElement_registerTable (const GGS_lstring & inKey,
                                                      const GGS_uintlist & in_mRegisterAddressList,
                                                      const GGS_uint & in_mSize,
                                                      const GGS_bitSliceTable & in_mBitSliceTable,
                                                      const GGS_string & in_mBitDefinitionString,
                                                      const GGS_registerProtection & in_mProtection
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegisterAddressList (in_mRegisterAddressList),
mProperty_mSize (in_mSize),
mProperty_mBitSliceTable (in_mBitSliceTable),
mProperty_mBitDefinitionString (in_mBitDefinitionString),
mProperty_mProtection (in_mProtection) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_registerTable::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_registerTable::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_registerTable (mProperty_lkey, mProperty_mRegisterAddressList, mProperty_mSize, mProperty_mBitSliceTable, mProperty_mBitDefinitionString, mProperty_mProtection COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_registerTable::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRegisterAddressList" ":") ;
  mProperty_mRegisterAddressList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSize" ":") ;
  mProperty_mSize.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBitSliceTable" ":") ;
  mProperty_mBitSliceTable.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBitDefinitionString" ":") ;
  mProperty_mBitDefinitionString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProtection" ":") ;
  mProperty_mProtection.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable::GGS_registerTable (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable::GGS_registerTable (const GGS_registerTable & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable & GGS_registerTable::operator = (const GGS_registerTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_registerTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::class_func_emptyMap (LOCATION_ARGS) {
  GGS_registerTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_ GGS_registerTable
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_registerTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_registerTable * p = (cMapElement_registerTable *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_registerTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_registerTable_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mRegisterAddressList = p->mProperty_mRegisterAddressList ;
      element.mProperty_mSize = p->mProperty_mSize ;
      element.mProperty_mBitSliceTable = p->mProperty_mBitSliceTable ;
      element.mProperty_mBitDefinitionString = p->mProperty_mBitDefinitionString ;
      element.mProperty_mProtection = p->mProperty_mProtection ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::class_func_mapWithMapToOverride (const GGS_registerTable & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_registerTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_registerTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::enterElement (const GGS_registerTable_2E_element & inValue,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * p = nullptr ;
  macroMyNew (p, cMapElement_registerTable (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@registerTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::addAssign_operation (const GGS_lstring & inKey,
                                             const GGS_uintlist & inArgument0,
                                             const GGS_uint & inArgument1,
                                             const GGS_bitSliceTable & inArgument2,
                                             const GGS_string & inArgument3,
                                             const GGS_registerProtection & inArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * p = nullptr ;
  macroMyNew (p, cMapElement_registerTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@registerTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::add_operation (const GGS_registerTable & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_registerTable result = *this ;
  cEnumerator_registerTable enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRegisterAddressList (HERE), enumerator.current_mSize (HERE), enumerator.current_mBitSliceTable (HERE), enumerator.current_mBitDefinitionString (HERE), enumerator.current_mProtection (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_insertKey (GGS_lstring inKey,
                                          GGS_uintlist inArgument0,
                                          GGS_uint inArgument1,
                                          GGS_bitSliceTable inArgument2,
                                          GGS_string inArgument3,
                                          GGS_registerProtection inArgument4,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * p = nullptr ;
  macroMyNew (p, cMapElement_registerTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_registerTable_searchKey = "the '%K' register is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::method_searchKey (GGS_lstring inKey,
                                          GGS_uintlist & outArgument0,
                                          GGS_uint & outArgument1,
                                          GGS_bitSliceTable & outArgument2,
                                          GGS_string & outArgument3,
                                          GGS_registerProtection & outArgument4,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_registerTable_searchKey
                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_registerTable) ;
    outArgument0 = p->mProperty_mRegisterAddressList ;
    outArgument1 = p->mProperty_mSize ;
    outArgument2 = p->mProperty_mBitSliceTable ;
    outArgument3 = p->mProperty_mBitDefinitionString ;
    outArgument4 = p->mProperty_mProtection ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_registerTable::getter_mRegisterAddressListForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GGS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mRegisterAddressList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_registerTable::getter_mSizeForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_registerTable::getter_mBitSliceTableForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GGS_bitSliceTable result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mBitSliceTable ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_registerTable::getter_mBitDefinitionStringForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mBitDefinitionString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerTable::getter_mProtectionForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GGS_registerProtection result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mProtection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMRegisterAddressListForKey (GGS_uintlist inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mRegisterAddressList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMSizeForKey (GGS_uint inAttributeValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mSize = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMBitSliceTableForKey (GGS_bitSliceTable inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mBitSliceTable = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMBitDefinitionStringForKey (GGS_string inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mBitDefinitionString = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMProtectionForKey (GGS_registerProtection inAttributeValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mProtection = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_registerTable * GGS_registerTable::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                  const GGS_string & inKey
                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * result = (cMapElement_registerTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_registerTable) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_registerTable::cEnumerator_registerTable (const GGS_registerTable & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element cEnumerator_registerTable::current (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return GGS_registerTable_2E_element (p->mProperty_lkey, p->mProperty_mRegisterAddressList, p->mProperty_mSize, p->mProperty_mBitSliceTable, p->mProperty_mBitDefinitionString, p->mProperty_mProtection) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_registerTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist cEnumerator_registerTable::current_mRegisterAddressList (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mRegisterAddressList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_registerTable::current_mSize (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable cEnumerator_registerTable::current_mBitSliceTable (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mBitSliceTable ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_registerTable::current_mBitDefinitionString (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mBitDefinitionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection cEnumerator_registerTable::current_mProtection (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mProtection ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerTable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable ("registerTable",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerTable::staticTypeDescriptor (void) const {
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
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        GGS_bool test_1 = constinArgument_inWriteAccess ;
        if (kBoolTrue == test_1.boolEnum ()) {
          const GGS_registerTable temp_2 = inObject ;
          test_1 = temp_2.getter_hasKey (constinArgument_inKey.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 32)) ;
        }
        test_0 = test_1.boolEnum () ;
        if (kBoolTrue == test_0) {
          const GGS_registerTable temp_3 = inObject ;
          GGS_location var_declarationLocation_1019 = temp_3.getter_locationForKey (constinArgument_inKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 33)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::notEqual, var_declarationLocation_1019.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 34)).objectCompare (constinArgument_inKey.readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 34)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inKey.readProperty_location (), GGS_string ("register is protected, write is reserved to instructions in declaration file"), fixItArray5  COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 35)) ;
            }
          }
        }
      }
    }
    break ;
  case GGS_registerProtection::Enumeration::enum_privateRegister:
    {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GGS_registerTable temp_7 = inObject ;
        test_6 = temp_7.getter_hasKey (constinArgument_inKey.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 39)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GGS_registerTable temp_8 = inObject ;
          GGS_location var_declarationLocation_1323 = temp_8.getter_locationForKey (constinArgument_inKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 40)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::notEqual, var_declarationLocation_1323.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 41)).objectCompare (constinArgument_inKey.readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 41)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
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

cMapElement_ramBankTable::cMapElement_ramBankTable (const GGS_ramBankTable_2E_element & inValue
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFirstAddress (inValue.mProperty_mFirstAddress),
mProperty_mFirstFreeAddress (inValue.mProperty_mFirstFreeAddress),
mProperty_mLastAddressPlusOne (inValue.mProperty_mLastAddressPlusOne),
mProperty_mMirrorOffsetList (inValue.mProperty_mMirrorOffsetList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_ramBankTable::cMapElement_ramBankTable (const GGS_lstring & inKey,
                                                    const GGS_uint & in_mFirstAddress,
                                                    const GGS_uint & in_mFirstFreeAddress,
                                                    const GGS_uint & in_mLastAddressPlusOne,
                                                    const GGS_uintlist & in_mMirrorOffsetList
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFirstAddress (in_mFirstAddress),
mProperty_mFirstFreeAddress (in_mFirstFreeAddress),
mProperty_mLastAddressPlusOne (in_mLastAddressPlusOne),
mProperty_mMirrorOffsetList (in_mMirrorOffsetList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_ramBankTable::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_ramBankTable::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_ramBankTable (mProperty_lkey, mProperty_mFirstAddress, mProperty_mFirstFreeAddress, mProperty_mLastAddressPlusOne, mProperty_mMirrorOffsetList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_ramBankTable::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFirstAddress" ":") ;
  mProperty_mFirstAddress.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFirstFreeAddress" ":") ;
  mProperty_mFirstFreeAddress.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLastAddressPlusOne" ":") ;
  mProperty_mLastAddressPlusOne.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMirrorOffsetList" ":") ;
  mProperty_mMirrorOffsetList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable::GGS_ramBankTable (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable::GGS_ramBankTable (const GGS_ramBankTable & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable & GGS_ramBankTable::operator = (const GGS_ramBankTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_ramBankTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::class_func_emptyMap (LOCATION_ARGS) {
  GGS_ramBankTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_ GGS_ramBankTable
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ramBankTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_ramBankTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_ramBankTable_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFirstAddress = p->mProperty_mFirstAddress ;
      element.mProperty_mFirstFreeAddress = p->mProperty_mFirstFreeAddress ;
      element.mProperty_mLastAddressPlusOne = p->mProperty_mLastAddressPlusOne ;
      element.mProperty_mMirrorOffsetList = p->mProperty_mMirrorOffsetList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::class_func_mapWithMapToOverride (const GGS_ramBankTable & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GGS_ramBankTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_ramBankTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::enterElement (const GGS_ramBankTable_2E_element & inValue,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * p = nullptr ;
  macroMyNew (p, cMapElement_ramBankTable (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ramBankTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::addAssign_operation (const GGS_lstring & inKey,
                                            const GGS_uint & inArgument0,
                                            const GGS_uint & inArgument1,
                                            const GGS_uint & inArgument2,
                                            const GGS_uintlist & inArgument3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * p = nullptr ;
  macroMyNew (p, cMapElement_ramBankTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ramBankTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::add_operation (const GGS_ramBankTable & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_ramBankTable result = *this ;
  cEnumerator_ramBankTable enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFirstAddress (HERE), enumerator.current_mFirstFreeAddress (HERE), enumerator.current_mLastAddressPlusOne (HERE), enumerator.current_mMirrorOffsetList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_insertKey (GGS_lstring inKey,
                                         GGS_uint inArgument0,
                                         GGS_uint inArgument1,
                                         GGS_uint inArgument2,
                                         GGS_uintlist inArgument3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * p = nullptr ;
  macroMyNew (p, cMapElement_ramBankTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' bank ram is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_ramBankTable_searchKey = "the '%K' bank ram is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::method_searchKey (GGS_lstring inKey,
                                         GGS_uint & outArgument0,
                                         GGS_uint & outArgument1,
                                         GGS_uint & outArgument2,
                                         GGS_uintlist & outArgument3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_ramBankTable_searchKey
                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    outArgument0 = p->mProperty_mFirstAddress ;
    outArgument1 = p->mProperty_mFirstFreeAddress ;
    outArgument2 = p->mProperty_mLastAddressPlusOne ;
    outArgument3 = p->mProperty_mMirrorOffsetList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_mFirstAddressForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mFirstAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_mFirstFreeAddressForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mFirstFreeAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_mLastAddressPlusOneForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mLastAddressPlusOne ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_ramBankTable::getter_mMirrorOffsetListForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GGS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mMirrorOffsetList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMFirstAddressForKey (GGS_uint inAttributeValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mFirstAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMFirstFreeAddressForKey (GGS_uint inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mFirstFreeAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMLastAddressPlusOneForKey (GGS_uint inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mLastAddressPlusOne = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMMirrorOffsetListForKey (GGS_uintlist inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mMirrorOffsetList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_ramBankTable * GGS_ramBankTable::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                const GGS_string & inKey
                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * result = (cMapElement_ramBankTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_ramBankTable) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_ramBankTable::cEnumerator_ramBankTable (const GGS_ramBankTable & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element cEnumerator_ramBankTable::current (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return GGS_ramBankTable_2E_element (p->mProperty_lkey, p->mProperty_mFirstAddress, p->mProperty_mFirstFreeAddress, p->mProperty_mLastAddressPlusOne, p->mProperty_mMirrorOffsetList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_ramBankTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_ramBankTable::current_mFirstAddress (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mFirstAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_ramBankTable::current_mFirstFreeAddress (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mFirstFreeAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_ramBankTable::current_mLastAddressPlusOne (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mLastAddressPlusOne ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist cEnumerator_ramBankTable::current_mMirrorOffsetList (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mMirrorOffsetList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ramBankTable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable ("ramBankTable",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ramBankTable::staticTypeDescriptor (void) const {
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
//
//     @processorType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_processorType ("processorType",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_processorType::staticTypeDescriptor (void) const {
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
//
//Class for element of '@illegalMaskList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_illegalMaskList : public cCollectionElement {
  public: GGS_illegalMaskList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_illegalMaskList (const GGS_luint & in_mIllegalValue,
                                              const GGS_luint & in_mIllegalMask,
                                              const GGS_lstring & in_mDescription
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_illegalMaskList (const GGS_illegalMaskList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_illegalMaskList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIllegalValue" ":") ;
  mObject.mProperty_mIllegalValue.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIllegalMask" ":") ;
  mObject.mProperty_mIllegalMask.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDescription" ":") ;
  mObject.mProperty_mDescription.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList::GGS_illegalMaskList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList::GGS_illegalMaskList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_illegalMaskList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_illegalMaskList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::enterElement (const GGS_illegalMaskList_2E_element & inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_illegalMaskList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::class_func_listWithValue (const GGS_luint & inOperand0,
                                                                   const GGS_luint & inOperand1,
                                                                   const GGS_lstring & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  GGS_illegalMaskList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_illegalMaskList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_illegalMaskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_luint & in_mIllegalValue,
                                                     const GGS_luint & in_mIllegalMask,
                                                     const GGS_lstring & in_mDescription
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = nullptr ;
  macroMyNew (p, cCollectionElement_illegalMaskList (in_mIllegalValue,
                                                     in_mIllegalMask,
                                                     in_mDescription COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::addAssign_operation (const GGS_luint & inOperand0,
                                               const GGS_luint & inOperand1,
                                               const GGS_lstring & inOperand2
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_illegalMaskList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_append (const GGS_luint inOperand0,
                                         const GGS_luint inOperand1,
                                         const GGS_lstring inOperand2,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_illegalMaskList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_insertAtIndex (const GGS_luint inOperand0,
                                                const GGS_luint inOperand1,
                                                const GGS_lstring inOperand2,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_illegalMaskList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_removeAtIndex (GGS_luint & outOperand0,
                                                GGS_luint & outOperand1,
                                                GGS_lstring & outOperand2,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
      outOperand0 = p->mObject.mProperty_mIllegalValue ;
      outOperand1 = p->mObject.mProperty_mIllegalMask ;
      outOperand2 = p->mObject.mProperty_mDescription ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_popFirst (GGS_luint & outOperand0,
                                           GGS_luint & outOperand1,
                                           GGS_lstring & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    outOperand0 = p->mObject.mProperty_mIllegalValue ;
    outOperand1 = p->mObject.mProperty_mIllegalMask ;
    outOperand2 = p->mObject.mProperty_mDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_popLast (GGS_luint & outOperand0,
                                          GGS_luint & outOperand1,
                                          GGS_lstring & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    outOperand0 = p->mObject.mProperty_mIllegalValue ;
    outOperand1 = p->mObject.mProperty_mIllegalMask ;
    outOperand2 = p->mObject.mProperty_mDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::method_first (GGS_luint & outOperand0,
                                        GGS_luint & outOperand1,
                                        GGS_lstring & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    outOperand0 = p->mObject.mProperty_mIllegalValue ;
    outOperand1 = p->mObject.mProperty_mIllegalMask ;
    outOperand2 = p->mObject.mProperty_mDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::method_last (GGS_luint & outOperand0,
                                       GGS_luint & outOperand1,
                                       GGS_lstring & outOperand2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    outOperand0 = p->mObject.mProperty_mIllegalValue ;
    outOperand1 = p->mObject.mProperty_mIllegalMask ;
    outOperand2 = p->mObject.mProperty_mDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::add_operation (const GGS_illegalMaskList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result = GGS_illegalMaskList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result = GGS_illegalMaskList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result = GGS_illegalMaskList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::plusAssign_operation (const GGS_illegalMaskList inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_setMIllegalValueAtIndex (GGS_luint inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIllegalValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_illegalMaskList::getter_mIllegalValueAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    result = p->mObject.mProperty_mIllegalValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_setMIllegalMaskAtIndex (GGS_luint inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIllegalMask = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_illegalMaskList::getter_mIllegalMaskAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    result = p->mObject.mProperty_mIllegalMask ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_setMDescriptionAtIndex (GGS_lstring inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDescription = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_illegalMaskList::getter_mDescriptionAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    result = p->mObject.mProperty_mDescription ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_illegalMaskList::cEnumerator_illegalMaskList (const GGS_illegalMaskList & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element cEnumerator_illegalMaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_luint cEnumerator_illegalMaskList::current_mIllegalValue (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject.mProperty_mIllegalValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint cEnumerator_illegalMaskList::current_mIllegalMask (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject.mProperty_mIllegalMask ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_illegalMaskList::current_mDescription (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject.mProperty_mDescription ;
}




//--------------------------------------------------------------------------------------------------
//
//     @illegalMaskList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_illegalMaskList ("illegalMaskList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_illegalMaskList::staticTypeDescriptor (void) const {
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

cMapElement_configRegisterMaskMap::cMapElement_configRegisterMaskMap (const GGS_configRegisterMaskMap_2E_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mMaskValue (inValue.mProperty_mMaskValue),
mProperty_mDescription (inValue.mProperty_mDescription),
mProperty_mFieldSettingMap (inValue.mProperty_mFieldSettingMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_configRegisterMaskMap::cMapElement_configRegisterMaskMap (const GGS_lstring & inKey,
                                                                      const GGS_luint & in_mMaskValue,
                                                                      const GGS_lstring & in_mDescription,
                                                                      const GGS_fieldSettingMap & in_mFieldSettingMap
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mMaskValue (in_mMaskValue),
mProperty_mDescription (in_mDescription),
mProperty_mFieldSettingMap (in_mFieldSettingMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_configRegisterMaskMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_configRegisterMaskMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_configRegisterMaskMap (mProperty_lkey, mProperty_mMaskValue, mProperty_mDescription, mProperty_mFieldSettingMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_configRegisterMaskMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMaskValue" ":") ;
  mProperty_mMaskValue.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDescription" ":") ;
  mProperty_mDescription.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFieldSettingMap" ":") ;
  mProperty_mFieldSettingMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap::GGS_configRegisterMaskMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap::GGS_configRegisterMaskMap (const GGS_configRegisterMaskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap & GGS_configRegisterMaskMap::operator = (const GGS_configRegisterMaskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_configRegisterMaskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_ GGS_configRegisterMaskMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configRegisterMaskMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_configRegisterMaskMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_configRegisterMaskMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mMaskValue = p->mProperty_mMaskValue ;
      element.mProperty_mDescription = p->mProperty_mDescription ;
      element.mProperty_mFieldSettingMap = p->mProperty_mFieldSettingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::class_func_mapWithMapToOverride (const GGS_configRegisterMaskMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMaskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::enterElement (const GGS_configRegisterMaskMap_2E_element & inValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMaskMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configRegisterMaskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::addAssign_operation (const GGS_lstring & inKey,
                                                     const GGS_luint & inArgument0,
                                                     const GGS_lstring & inArgument1,
                                                     const GGS_fieldSettingMap & inArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMaskMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configRegisterMaskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::add_operation (const GGS_configRegisterMaskMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMaskMap result = *this ;
  cEnumerator_configRegisterMaskMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mMaskValue (HERE), enumerator.current_mDescription (HERE), enumerator.current_mFieldSettingMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::setter_insertKey (GGS_lstring inKey,
                                                  GGS_luint inArgument0,
                                                  GGS_lstring inArgument1,
                                                  GGS_fieldSettingMap inArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMaskMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register mask is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_configRegisterMaskMap_searchKey = "the '%K' configuration register mask is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::method_searchKey (GGS_lstring inKey,
                                                  GGS_luint & outArgument0,
                                                  GGS_lstring & outArgument1,
                                                  GGS_fieldSettingMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_configRegisterMaskMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    outArgument0 = p->mProperty_mMaskValue ;
    outArgument1 = p->mProperty_mDescription ;
    outArgument2 = p->mProperty_mFieldSettingMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configRegisterMaskMap::getter_mMaskValueForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) attributes ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    result = p->mProperty_mMaskValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configRegisterMaskMap::getter_mDescriptionForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    result = p->mProperty_mDescription ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap GGS_configRegisterMaskMap::getter_mFieldSettingMapForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) attributes ;
  GGS_fieldSettingMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    result = p->mProperty_mFieldSettingMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::setter_setMMaskValueForKey (GGS_luint inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    p->mProperty_mMaskValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::setter_setMDescriptionForKey (GGS_lstring inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    p->mProperty_mDescription = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::setter_setMFieldSettingMapForKey (GGS_fieldSettingMap inAttributeValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    p->mProperty_mFieldSettingMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_configRegisterMaskMap * GGS_configRegisterMaskMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * result = (cMapElement_configRegisterMaskMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_configRegisterMaskMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_configRegisterMaskMap::cEnumerator_configRegisterMaskMap (const GGS_configRegisterMaskMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element cEnumerator_configRegisterMaskMap::current (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return GGS_configRegisterMaskMap_2E_element (p->mProperty_lkey, p->mProperty_mMaskValue, p->mProperty_mDescription, p->mProperty_mFieldSettingMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_configRegisterMaskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint cEnumerator_configRegisterMaskMap::current_mMaskValue (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return p->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_configRegisterMaskMap::current_mDescription (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return p->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap cEnumerator_configRegisterMaskMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return p->mProperty_mFieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configRegisterMaskMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMaskMap ("configRegisterMaskMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_configRegisterMaskMap::staticTypeDescriptor (void) const {
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

cMapElement_configRegisterMap::cMapElement_configRegisterMap (const GGS_configRegisterMap_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mRegisterAddress (inValue.mProperty_mRegisterAddress),
mProperty_mRegisterWidth (inValue.mProperty_mRegisterWidth),
mProperty_mConfigRegisterMaskMap (inValue.mProperty_mConfigRegisterMaskMap),
mProperty_mIllegalMaskList (inValue.mProperty_mIllegalMaskList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_configRegisterMap::cMapElement_configRegisterMap (const GGS_lstring & inKey,
                                                              const GGS_luint & in_mRegisterAddress,
                                                              const GGS_luint & in_mRegisterWidth,
                                                              const GGS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                              const GGS_illegalMaskList & in_mIllegalMaskList
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegisterAddress (in_mRegisterAddress),
mProperty_mRegisterWidth (in_mRegisterWidth),
mProperty_mConfigRegisterMaskMap (in_mConfigRegisterMaskMap),
mProperty_mIllegalMaskList (in_mIllegalMaskList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_configRegisterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_configRegisterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_configRegisterMap (mProperty_lkey, mProperty_mRegisterAddress, mProperty_mRegisterWidth, mProperty_mConfigRegisterMaskMap, mProperty_mIllegalMaskList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_configRegisterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRegisterAddress" ":") ;
  mProperty_mRegisterAddress.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRegisterWidth" ":") ;
  mProperty_mRegisterWidth.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConfigRegisterMaskMap" ":") ;
  mProperty_mConfigRegisterMaskMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIllegalMaskList" ":") ;
  mProperty_mIllegalMaskList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap::GGS_configRegisterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap::GGS_configRegisterMap (const GGS_configRegisterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap & GGS_configRegisterMap::operator = (const GGS_configRegisterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_configRegisterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_ GGS_configRegisterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configRegisterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_configRegisterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_configRegisterMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mRegisterAddress = p->mProperty_mRegisterAddress ;
      element.mProperty_mRegisterWidth = p->mProperty_mRegisterWidth ;
      element.mProperty_mConfigRegisterMaskMap = p->mProperty_mConfigRegisterMaskMap ;
      element.mProperty_mIllegalMaskList = p->mProperty_mIllegalMaskList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::class_func_mapWithMapToOverride (const GGS_configRegisterMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::enterElement (const GGS_configRegisterMap_2E_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configRegisterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::addAssign_operation (const GGS_lstring & inKey,
                                                 const GGS_luint & inArgument0,
                                                 const GGS_luint & inArgument1,
                                                 const GGS_configRegisterMaskMap & inArgument2,
                                                 const GGS_illegalMaskList & inArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configRegisterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::add_operation (const GGS_configRegisterMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMap result = *this ;
  cEnumerator_configRegisterMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRegisterAddress (HERE), enumerator.current_mRegisterWidth (HERE), enumerator.current_mConfigRegisterMaskMap (HERE), enumerator.current_mIllegalMaskList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_insertKey (GGS_lstring inKey,
                                              GGS_luint inArgument0,
                                              GGS_luint inArgument1,
                                              GGS_configRegisterMaskMap inArgument2,
                                              GGS_illegalMaskList inArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_configRegisterMap_searchKey = "the '%K' configuration register is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::method_searchKey (GGS_lstring inKey,
                                              GGS_luint & outArgument0,
                                              GGS_luint & outArgument1,
                                              GGS_configRegisterMaskMap & outArgument2,
                                              GGS_illegalMaskList & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_configRegisterMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    outArgument0 = p->mProperty_mRegisterAddress ;
    outArgument1 = p->mProperty_mRegisterWidth ;
    outArgument2 = p->mProperty_mConfigRegisterMaskMap ;
    outArgument3 = p->mProperty_mIllegalMaskList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configRegisterMap::getter_mRegisterAddressForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mRegisterAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configRegisterMap::getter_mRegisterWidthForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mRegisterWidth ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMap::getter_mConfigRegisterMaskMapForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GGS_configRegisterMaskMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mConfigRegisterMaskMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_configRegisterMap::getter_mIllegalMaskListForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GGS_illegalMaskList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mIllegalMaskList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMRegisterAddressForKey (GGS_luint inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mRegisterAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMRegisterWidthForKey (GGS_luint inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mRegisterWidth = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMConfigRegisterMaskMapForKey (GGS_configRegisterMaskMap inAttributeValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mConfigRegisterMaskMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMIllegalMaskListForKey (GGS_illegalMaskList inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mIllegalMaskList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_configRegisterMap * GGS_configRegisterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * result = (cMapElement_configRegisterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_configRegisterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_configRegisterMap::cEnumerator_configRegisterMap (const GGS_configRegisterMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element cEnumerator_configRegisterMap::current (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return GGS_configRegisterMap_2E_element (p->mProperty_lkey, p->mProperty_mRegisterAddress, p->mProperty_mRegisterWidth, p->mProperty_mConfigRegisterMaskMap, p->mProperty_mIllegalMaskList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_configRegisterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint cEnumerator_configRegisterMap::current_mRegisterAddress (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint cEnumerator_configRegisterMap::current_mRegisterWidth (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mRegisterWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap cEnumerator_configRegisterMap::current_mConfigRegisterMaskMap (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mConfigRegisterMaskMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList cEnumerator_configRegisterMap::current_mIllegalMaskList (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mIllegalMaskList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configRegisterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap ("configRegisterMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_configRegisterMap::staticTypeDescriptor (void) const {
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_processorType_388 = GGS_processorType::class_func_pic_31__38__5F__36__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 18)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("pic18_80"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_processorType_388 = GGS_processorType::class_func_pic_31__38__5F__38__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 20)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_processorType_388 = GGS_processorType::class_func_midrange (SOURCE_FILE ("piccoloDevice_syntax.galgas", 22)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("baseline"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_processorType_388 = GGS_processorType::class_func_baseline (SOURCE_FILE ("piccoloDevice_syntax.galgas", 24)) ;
          }
        }
        if (kBoolFalse == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
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
          var_mirrorOffsetList_1711.addAssign_operation (var_mirrorStartAddress_1820.readProperty_uint ().substract_operation (var_ramStart_1652.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75)) ;
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
        var_registerAddressList_2275.addAssign_operation (var_registerAddress_2348.readProperty_uint ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 98)) ;
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
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2606.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2606.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 113)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (var_sliceName_2734.readProperty_location (), GGS_string ("a slice of 1 bit is expected for '").add_operation (var_sliceName_2734.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)), fixItArray13  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)) ;
                }
              }
              var_sliceWidth_2606 = GGS_uint (uint32_t (1U)) ;
              var_bitDefinitionString_2537.plusAssign_operation(var_sliceName_2734.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 117)) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              GGS_luint var_sliceSize_3064 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2606.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2606.objectCompare (var_sliceSize_3064.readProperty_uint ())) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 121)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (var_sliceName_2734.readProperty_location (), GGS_string ("a slice of ").add_operation (var_sliceWidth_2606.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GGS_string (" bits is expected for '"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (var_sliceName_2734.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), fixItArray15  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)) ;
                }
              }
              var_sliceWidth_2606 = var_sliceSize_3064.readProperty_uint () ;
              var_sliceBase_2674 = var_sliceBase_2674.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)).substract_operation (var_sliceSize_3064.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
              var_bitDefinitionString_2537.plusAssign_operation(var_sliceName_2734.readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (var_sliceSize_3064.readProperty_uint ().getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)) ;
            } break ;
            default:
              break ;
            }
            {
            var_bitSliceTable_2488.setter_insertKey (var_sliceName_2734, var_sliceIndex_2465.substract_operation (var_sliceWidth_2606, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)), var_sliceWidth_2606, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)) ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
              var_bitDefinitionString_2537.plusAssign_operation(GGS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 132)) ;
            }else{
              repeatFlag_11 = false ;
            }
          }
          var_sliceIndex_2465 = var_sliceIndex_2465.substract_operation (var_sliceWidth_2606, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 134)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
          var_bitDefinitionString_2537.plusAssign_operation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 137)) ;
          var_sliceIndex_2465.minusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 138)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
          var_bitDefinitionString_2537.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 142)) ;
        }else{
          repeatFlag_10 = false ;
        }
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, var_sliceIndex_2465.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (var_registerName_2245.readProperty_location (), GGS_string ("Incorrect bit definition for register '").add_operation (var_registerName_2245.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)), fixItArray17  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)) ;
        }
      }
      var_bitDefinitionString_2537.plusAssign_operation(GGS_string (">"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 147)) ;
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
          var_illegalMaskList_4406.addAssign_operation (var_illegalValue_4508, var_illegalMask_4562, var_illegalDescriptionString_4619  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 170)) ;
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
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = var_settingNameSet_4803.getter_hasKey (var_maskName_4887.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 178)).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (var_maskName_4887.readProperty_location (), GGS_string ("The '").add_operation (var_maskName_4887.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)).add_operation (GGS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)), fixItArray22  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)) ;
            }
          }
          var_settingNameSet_4803.addAssign_operation (var_maskName_4887.readProperty_string ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 181)) ;
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
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).operator_or (GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("pic18_80"))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_24) {
      GGS_uintlist joker_6043_5 ; // Joker input parameter
      GGS_uint joker_6043_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6043_3 ; // Joker input parameter
      GGS_string joker_6043_2 ; // Joker input parameter
      GGS_registerProtection joker_6043_1 ; // Joker input parameter
      var_registerTable_2149.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("BSR"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)), inCompiler COMMA_HERE), joker_6043_5, joker_6043_4, joker_6043_3, joker_6043_2, joker_6043_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)) ;
      GGS_uintlist joker_6119_5 ; // Joker input parameter
      GGS_uint joker_6119_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6119_3 ; // Joker input parameter
      GGS_string joker_6119_2 ; // Joker input parameter
      GGS_registerProtection joker_6119_1 ; // Joker input parameter
      var_registerTable_2149.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSL"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)), inCompiler COMMA_HERE), joker_6119_5, joker_6119_4, joker_6119_3, joker_6119_2, joker_6119_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)) ;
      GGS_uintlist joker_6195_5 ; // Joker input parameter
      GGS_uint joker_6195_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6195_3 ; // Joker input parameter
      GGS_string joker_6195_2 ; // Joker input parameter
      GGS_registerProtection joker_6195_1 ; // Joker input parameter
      var_registerTable_2149.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)), inCompiler COMMA_HERE), joker_6195_5, joker_6195_4, joker_6195_3, joker_6195_2, joker_6195_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)) ;
      GGS_uintlist joker_6271_5 ; // Joker input parameter
      GGS_uint joker_6271_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6271_3 ; // Joker input parameter
      GGS_string joker_6271_2 ; // Joker input parameter
      GGS_registerProtection joker_6271_1 ; // Joker input parameter
      var_registerTable_2149.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSU"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)), inCompiler COMMA_HERE), joker_6271_5, joker_6271_4, joker_6271_3, joker_6271_2, joker_6271_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)) ;
    }
  }
  GGS_string var_sharedBankName_6339 = GGS_string::makeEmptyString () ;
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, var_processorName_427.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
    if (kBoolTrue == test_25) {
      cEnumerator_ramBankTable enumerator_6469 (var_ramBankTable_1521, EnumerationOrder::up) ;
      bool bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6339.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
      if (enumerator_6469.hasCurrentObject () && bool_26) {
        while (enumerator_6469.hasCurrentObject () && bool_26) {
          GGS_uint var_bankAccessibility_6552 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)).left_shift_operation (enumerator_6469.current_mFirstFreeAddress (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)) ;
          cEnumerator_uintlist enumerator_6613 (enumerator_6469.current_mMirrorOffsetList (HERE), EnumerationOrder::up) ;
          while (enumerator_6613.hasCurrentObject ()) {
            var_bankAccessibility_6552 = var_bankAccessibility_6552.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).left_shift_operation (enumerator_6469.current_mFirstFreeAddress (HERE).add_operation (enumerator_6613.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) ;
            enumerator_6613.gotoNextObject () ;
          }
          enumGalgasBool test_27 = kBoolTrue ;
          if (kBoolTrue == test_27) {
            test_27 = GGS_bool (ComparisonKind::equal, GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).left_shift_operation (var_bankCount_1312.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).objectCompare (var_bankAccessibility_6552.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).getter_bigint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)))).boolEnum () ;
            if (kBoolTrue == test_27) {
              var_sharedBankName_6339 = enumerator_6469.current_lkey (HERE).readProperty_string () ;
            }
          }
          enumerator_6469.gotoNextObject () ;
          if (enumerator_6469.hasCurrentObject ()) {
            bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6339.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
          }
        }
      }
    }
  }
  outArgument_outPiccoloDeviceModel = GGS_piccoloDeviceModel::init_21__21__21__21__21__21__21__21__21__21_ (var_deviceName_336, var_processorType_388, var_romSize_964, var_bankCount_1312, var_registerTable_2149, var_ramBankTable_1521, var_eepromSize_990, var_eepromAddress_1013, var_configRegisterMap_4155, var_sharedBankName_6339, inCompiler COMMA_HERE) ;
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

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element::GGS_declarationInRamList_2E_element (void) :
mProperty_mDeclarationInRAM () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element::~ GGS_declarationInRamList_2E_element (void) {
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

GGS_declarationInRamList_2E_element GGS_declarationInRamList_2E_element::class_func_new (const GGS_declarationInRam & in_mDeclarationInRAM,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationInRamList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclarationInRAM = in_mDeclarationInRAM ;
  return result ;
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
//
//     @declarationInRamList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRamList_2E_element ("declarationInRamList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationInRamList_2E_element::staticTypeDescriptor (void) const {
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

GGS_configDefinitionList_2E_element::~ GGS_configDefinitionList_2E_element (void) {
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

GGS_configDefinitionList_2E_element GGS_configDefinitionList_2E_element::class_func_new (const GGS_location & in_mDefinitionLocation,
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
//
//     @configDefinitionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configDefinitionList_2E_element ("configDefinitionList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_configDefinitionList_2E_element::staticTypeDescriptor (void) const {
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

GGS_immediatExpressionList_2E_element::~ GGS_immediatExpressionList_2E_element (void) {
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

GGS_immediatExpressionList_2E_element GGS_immediatExpressionList_2E_element::class_func_new (const GGS_immediatExpression & in_mExpression,
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
//
//     @immediatExpressionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpressionList_2E_element ("immediatExpressionList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatExpressionList_2E_element::staticTypeDescriptor (void) const {
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

GGS_baseline_5F_instructionList_2E_element::GGS_baseline_5F_instructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element::~ GGS_baseline_5F_instructionList_2E_element (void) {
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

GGS_baseline_5F_instructionList_2E_element GGS_baseline_5F_instructionList_2E_element::class_func_new (const GGS_baseline_5F_instruction & in_mInstruction,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
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
//
//     @baseline_instructionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList_2E_element ("baseline_instructionList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instructionList_2E_element::staticTypeDescriptor (void) const {
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

GGS_baseline_5F_partList_2E_element::~ GGS_baseline_5F_partList_2E_element (void) {
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

GGS_baseline_5F_partList_2E_element GGS_baseline_5F_partList_2E_element::class_func_new (const GGS_baseline_5F_conditionExpression & in_mCondition,
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
//
//     @baseline_partList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_partList_2E_element ("baseline_partList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_partList_2E_element::staticTypeDescriptor (void) const {
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

GGS_baseline_5F_intermediate_5F_instructionList_2E_element::GGS_baseline_5F_intermediate_5F_instructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element::~ GGS_baseline_5F_intermediate_5F_instructionList_2E_element (void) {
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

GGS_baseline_5F_intermediate_5F_instructionList_2E_element GGS_baseline_5F_intermediate_5F_instructionList_2E_element::class_func_new (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
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
//
//     @baseline_intermediate_instructionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2E_element ("baseline_intermediate_instructionList.element",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instructionList_2E_element::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element::GGS_baseline_5F_assembly_5F_instructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element::~ GGS_baseline_5F_assembly_5F_instructionList_2E_element (void) {
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

GGS_baseline_5F_assembly_5F_instructionList_2E_element GGS_baseline_5F_assembly_5F_instructionList_2E_element::class_func_new (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
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
//
//     @baseline_assembly_instructionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2E_element ("baseline_assembly_instructionList.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_instructionList_2E_element::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instructionList_2E_element::GGS_midrange_5F_instructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList_2E_element::~ GGS_midrange_5F_instructionList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_instructionList_2E_element GGS_midrange_5F_instructionList_2E_element::init_21_ (const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList_2E_element::GGS_midrange_5F_instructionList_2E_element (const GGS_midrange_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList_2E_element GGS_midrange_5F_instructionList_2E_element::class_func_new (const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_instructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_instructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instructionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instructionList_2E_element ("midrange_instructionList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList_2E_element GGS_midrange_5F_instructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instructionList_2E_element result ;
  const GGS_midrange_5F_instructionList_2E_element * p = (const GGS_midrange_5F_instructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_midrange_5F_partList_2E_element::~ GGS_midrange_5F_partList_2E_element (void) {
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

GGS_midrange_5F_partList_2E_element GGS_midrange_5F_partList_2E_element::class_func_new (const GGS_midrange_5F_conditionExpression & in_mCondition,
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
//
//     @midrange_partList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_partList_2E_element ("midrange_partList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_partList_2E_element::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_intermediate_5F_instructionList_2E_element::GGS_midrange_5F_intermediate_5F_instructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList_2E_element::~ GGS_midrange_5F_intermediate_5F_instructionList_2E_element (void) {
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

GGS_midrange_5F_intermediate_5F_instructionList_2E_element GGS_midrange_5F_intermediate_5F_instructionList_2E_element::class_func_new (const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
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
//
//     @midrange_intermediate_instructionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2E_element ("midrange_intermediate_instructionList.element",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_intermediate_5F_instructionList_2E_element::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_InstructionList_2E_element::GGS_pic_31__38_InstructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element::~ GGS_pic_31__38_InstructionList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element GGS_pic_31__38_InstructionList_2E_element::init_21_ (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element::GGS_pic_31__38_InstructionList_2E_element (const GGS_pic_31__38_PiccoloInstruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element GGS_pic_31__38_InstructionList_2E_element::class_func_new (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_InstructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18InstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18InstructionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2E_element ("pic18InstructionList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_InstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_InstructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_InstructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element GGS_pic_31__38_InstructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList_2E_element result ;
  const GGS_pic_31__38_InstructionList_2E_element * p = (const GGS_pic_31__38_InstructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_InstructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element::GGS_pic_31__38_DoWhilePartList_2E_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element::~ GGS_pic_31__38_DoWhilePartList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element GGS_pic_31__38_DoWhilePartList_2E_element::init_21__21__21_ (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                                       const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                       const GGS_location & in_mEndOfPartLocation,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCondition = in_mCondition ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfPartLocation = in_mEndOfPartLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element::GGS_pic_31__38_DoWhilePartList_2E_element (const GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                                      const GGS_pic_31__38_InstructionList & inOperand1,
                                                                                      const GGS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element GGS_pic_31__38_DoWhilePartList_2E_element::class_func_new (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                                     const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                     const GGS_location & in_mEndOfPartLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCondition = in_mCondition ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfPartLocation = in_mEndOfPartLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_DoWhilePartList_2E_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList_2E_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18DoWhilePartList.element:") ;
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
//
//     @pic18DoWhilePartList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2E_element ("pic18DoWhilePartList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_DoWhilePartList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_DoWhilePartList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_DoWhilePartList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element GGS_pic_31__38_DoWhilePartList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList_2E_element result ;
  const GGS_pic_31__38_DoWhilePartList_2E_element * p = (const GGS_pic_31__38_DoWhilePartList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_DoWhilePartList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18DoWhilePartList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element::GGS_checkpicList_2E_element (void) :
mProperty_mErrorLocation (),
mProperty_mValueList () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element::~ GGS_checkpicList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_checkpicList_2E_element GGS_checkpicList_2E_element::init_21__21_ (const GGS_location & in_mErrorLocation,
                                                                       const GGS_lstringlist & in_mValueList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_checkpicList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mErrorLocation = in_mErrorLocation ;
  result.mProperty_mValueList = in_mValueList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element::GGS_checkpicList_2E_element (const GGS_location & inOperand0,
                                                          const GGS_lstringlist & inOperand1) :
mProperty_mErrorLocation (inOperand0),
mProperty_mValueList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element GGS_checkpicList_2E_element::class_func_new (const GGS_location & in_mErrorLocation,
                                                                         const GGS_lstringlist & in_mValueList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_checkpicList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mErrorLocation = in_mErrorLocation ;
  result.mProperty_mValueList = in_mValueList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_checkpicList_2E_element::isValid (void) const {
  return mProperty_mErrorLocation.isValid () && mProperty_mValueList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList_2E_element::drop (void) {
  mProperty_mErrorLocation.drop () ;
  mProperty_mValueList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @checkpicList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @checkpicList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList_2E_element ("checkpicList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_checkpicList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkpicList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkpicList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkpicList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element GGS_checkpicList_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_checkpicList_2E_element result ;
  const GGS_checkpicList_2E_element * p = (const GGS_checkpicList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkpicList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkpicList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element::GGS_pic_31__38_CaseExpressionList_2E_element (void) :
mProperty_mCaseItem () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element::~ GGS_pic_31__38_CaseExpressionList_2E_element (void) {
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

GGS_pic_31__38_CaseExpressionList_2E_element GGS_pic_31__38_CaseExpressionList_2E_element::class_func_new (const GGS_pic_31__38_AbstractCaseItem & in_mCaseItem,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_CaseExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCaseItem = in_mCaseItem ;
  return result ;
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
//
//     @pic18CaseExpressionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2E_element ("pic18CaseExpressionList.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_CaseExpressionList_2E_element::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_SwitchInstructionCaseList_2E_element::~ GGS_pic_31__38_SwitchInstructionCaseList_2E_element (void) {
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

GGS_pic_31__38_SwitchInstructionCaseList_2E_element GGS_pic_31__38_SwitchInstructionCaseList_2E_element::class_func_new (const GGS_location & in_mStartOfCase,
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
//
//     @pic18SwitchInstructionCaseList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2E_element ("pic18SwitchInstructionCaseList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_SwitchInstructionCaseList_2E_element::staticTypeDescriptor (void) const {
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

GGS_ipic_31__38_SequentialInstructionList_2E_element::GGS_ipic_31__38_SequentialInstructionList_2E_element (void) :
mProperty_mInstruction (),
mProperty_mMin (),
mProperty_mMax () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList_2E_element::~ GGS_ipic_31__38_SequentialInstructionList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList_2E_element GGS_ipic_31__38_SequentialInstructionList_2E_element::init_21__21__21_ (const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                                                             const GGS_uint & in_mMin,
                                                                                                                             const GGS_uint & in_mMax,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  result.mProperty_mMin = in_mMin ;
  result.mProperty_mMax = in_mMax ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList_2E_element::GGS_ipic_31__38_SequentialInstructionList_2E_element (const GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                            const GGS_uint & inOperand1,
                                                                                                            const GGS_uint & inOperand2) :
mProperty_mInstruction (inOperand0),
mProperty_mMin (inOperand1),
mProperty_mMax (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList_2E_element GGS_ipic_31__38_SequentialInstructionList_2E_element::class_func_new (const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                                                           const GGS_uint & in_mMin,
                                                                                                                           const GGS_uint & in_mMax,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  result.mProperty_mMin = in_mMin ;
  result.mProperty_mMax = in_mMax ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ipic_31__38_SequentialInstructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () && mProperty_mMin.isValid () && mProperty_mMax.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
  mProperty_mMin.drop () ;
  mProperty_mMax.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList_2E_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18SequentialInstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMin.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMax.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18SequentialInstructionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2E_element ("ipic18SequentialInstructionList.element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ipic_31__38_SequentialInstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SequentialInstructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SequentialInstructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList_2E_element GGS_ipic_31__38_SequentialInstructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstructionList_2E_element result ;
  const GGS_ipic_31__38_SequentialInstructionList_2E_element * p = (const GGS_ipic_31__38_SequentialInstructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SequentialInstructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_branchOverflowMapDictionary_2E_element::~ GGS_branchOverflowMapDictionary_2E_element (void) {
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

GGS_branchOverflowMapDictionary_2E_element GGS_branchOverflowMapDictionary_2E_element::class_func_new (const GGS_string & in_key,
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
//
//     @branchOverflowMapDictionary.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element ("branchOverflowMapDictionary.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_branchOverflowMapDictionary_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @branchOverflowMapDictionary_2E_element_3F_
//
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
//
//     @branchOverflowMapDictionary.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element_3F_ ("branchOverflowMapDictionary.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_branchOverflowMapDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_codeList_2E_element::~ GGS_codeList_2E_element (void) {
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

GGS_codeList_2E_element GGS_codeList_2E_element::class_func_new (const GGS_string & in_mAssemblyCode,
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
//
//     @codeList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList_2E_element ("codeList.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_codeList_2E_element::staticTypeDescriptor (void) const {
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

GGS_clusterList_2E_element::GGS_clusterList_2E_element (void) :
mProperty_mBlockList () {
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList_2E_element::~ GGS_clusterList_2E_element (void) {
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

GGS_clusterList_2E_element GGS_clusterList_2E_element::class_func_new (const GGS_ipic_31__38_BlockList & in_mBlockList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_clusterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlockList = in_mBlockList ;
  return result ;
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
//
//     @clusterList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_clusterList_2E_element ("clusterList.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_clusterList_2E_element::staticTypeDescriptor (void) const {
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

