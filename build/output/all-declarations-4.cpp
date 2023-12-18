#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak::GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak & GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_FOREVER & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak::GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak (const GALGAS_pic_31__38_Instruction_5F_FOREVER & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FOREVER GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak::bang_pic_31__38_Instruction_5F_FOREVER_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_FOREVER result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
      result = GALGAS_pic_31__38_Instruction_5F_FOREVER ((cPtr_pic_31__38_Instruction_5F_FOREVER *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_FOREVER-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak ("pic18Instruction_FOREVER-weak",
                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FOREVER_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FOREVER-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_if_5F_semi_5F_colon_5F_op::GALGAS_if_5F_semi_5F_colon_5F_op (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_if_5F_semi_5F_colon_5F_op GALGAS_if_5F_semi_5F_colon_5F_op::constructor_CPFSEQ (UNUSED_LOCATION_ARGS) {
  GALGAS_if_5F_semi_5F_colon_5F_op result ;
  result.mEnum = kEnum_CPFSEQ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_if_5F_semi_5F_colon_5F_op GALGAS_if_5F_semi_5F_colon_5F_op::constructor_CPFSGT (UNUSED_LOCATION_ARGS) {
  GALGAS_if_5F_semi_5F_colon_5F_op result ;
  result.mEnum = kEnum_CPFSGT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_if_5F_semi_5F_colon_5F_op GALGAS_if_5F_semi_5F_colon_5F_op::constructor_CPFSLT (UNUSED_LOCATION_ARGS) {
  GALGAS_if_5F_semi_5F_colon_5F_op result ;
  result.mEnum = kEnum_CPFSLT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_if_5F_semi_5F_colon_5F_op GALGAS_if_5F_semi_5F_colon_5F_op::constructor_TSTFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_if_5F_semi_5F_colon_5F_op result ;
  result.mEnum = kEnum_TSTFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_if_5F_semi_5F_colon_5F_op::optional_CPFSEQ () const {
  const bool ok = mEnum == kEnum_CPFSEQ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_if_5F_semi_5F_colon_5F_op::optional_CPFSGT () const {
  const bool ok = mEnum == kEnum_CPFSGT ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_if_5F_semi_5F_colon_5F_op::optional_CPFSLT () const {
  const bool ok = mEnum == kEnum_CPFSLT ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_if_5F_semi_5F_colon_5F_op::optional_TSTFSZ () const {
  const bool ok = mEnum == kEnum_TSTFSZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_if_5F_semi_5F_colon_5F_op [5] = {
  "(not built)",
  "CPFSEQ",
  "CPFSGT",
  "CPFSLT",
  "TSTFSZ"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_if_5F_semi_5F_colon_5F_op::getter_isCPFSEQ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSEQ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_if_5F_semi_5F_colon_5F_op::getter_isCPFSGT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSGT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_if_5F_semi_5F_colon_5F_op::getter_isCPFSLT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSLT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_if_5F_semi_5F_colon_5F_op::getter_isTSTFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_TSTFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_if_5F_semi_5F_colon_5F_op::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @if_semi_colon_op: ") ;
  ioString.addString (gEnumNameArrayFor_if_5F_semi_5F_colon_5F_op [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_if_5F_semi_5F_colon_5F_op::objectCompare (const GALGAS_if_5F_semi_5F_colon_5F_op & inOperand) const {
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
//     @if_semi_colon_op generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_if_5F_semi_5F_colon_5F_op ("if_semi_colon_op",
                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_if_5F_semi_5F_colon_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_if_5F_semi_5F_colon_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_if_5F_semi_5F_colon_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_if_5F_semi_5F_colon_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_if_5F_semi_5F_colon_5F_op GALGAS_if_5F_semi_5F_colon_5F_op::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_if_5F_semi_5F_colon_5F_op result ;
  const GALGAS_if_5F_semi_5F_colon_5F_op * p = (const GALGAS_if_5F_semi_5F_colon_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_if_5F_semi_5F_colon_5F_op *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mEmbeddedInstruction.printNonNullClassInstanceProperties ("mEmbeddedInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::setter_setMEmbeddedInstruction (GALGAS_pic_31__38_PiccoloSimpleInstruction inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
    p->mProperty_mEmbeddedInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloSimpleInstruction GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::readProperty_mEmbeddedInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_PiccoloSimpleInstruction () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
    return p->mProperty_mEmbeddedInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mEmbeddedInstruction (in_mEmbeddedInstruction) {
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_IF_SEMI_COLON generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ("pic18Instruction_IF_SEMI_COLON",
                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::bang_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
      result = GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ((cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_IF_SEMI_COLON-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak ("pic18Instruction_IF_SEMI_COLON-weak",
                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_SEMI_COLON-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak & GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak::bang_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
      result = GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ((cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_IF_FA_SEMI_COLON-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak ("pic18Instruction_IF_FA_SEMI_COLON-weak",
                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_FA_SEMI_COLON-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak & GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak::bang_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
      result = GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ((cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_IF_BitTest-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak ("pic18Instruction_IF_BitTest-weak",
                                                                        & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_BitTest-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak & GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak::bang_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
      result = GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ((cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_IF_IncDec-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak ("pic18Instruction_IF_IncDec-weak",
                                                                       & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_IncDec-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_computed_5F_retlw reference class
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

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSizeExpression.objectCompare (p->mProperty_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImmediateExpressionList.objectCompare (p->mProperty_mImmediateExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRelativeCall.objectCompare (p->mProperty_mUsesRelativeCall) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mSizeExpression,
                                                                                                                        const GALGAS_immediatExpressionList & inAttribute_mImmediateExpressionList,
                                                                                                                        const GALGAS_bool & inAttribute_mUsesRelativeCall
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mImmediateExpressionList.isValid () && inAttribute_mUsesRelativeCall.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (inAttribute_mInstructionLocation, inAttribute_mSizeExpression, inAttribute_mImmediateExpressionList, inAttribute_mUsesRelativeCall COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::setter_setMSizeExpression (GALGAS_immediatExpression inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::setter_setMImmediateExpressionList (GALGAS_immediatExpressionList inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    p->mProperty_mImmediateExpressionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::setter_setMUsesRelativeCall (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    p->mProperty_mUsesRelativeCall = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::readProperty_mImmediateExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpressionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    return p->mProperty_mImmediateExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::readProperty_mUsesRelativeCall (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    return p->mProperty_mUsesRelativeCall ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_computed_retlw class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                    const GALGAS_immediatExpressionList & in_mImmediateExpressionList,
                                                                                                    const GALGAS_bool & in_mUsesRelativeCall
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mImmediateExpressionList (in_mImmediateExpressionList),
mProperty_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_computed_retlw:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mImmediateExpressionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (mProperty_mInstructionLocation, mProperty_mSizeExpression, mProperty_mImmediateExpressionList, mProperty_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_computed_retlw generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ("pic18Instruction_computed_retlw",
                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_retlw", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak::GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak & GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak::GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak::bang_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
      result = GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ((cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_computed_retlw-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak ("pic18Instruction_computed_retlw-weak",
                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_retlw-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_computed_5F_bra reference class
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

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_bra::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSizeExpression.objectCompare (p->mProperty_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabels.objectCompare (p->mProperty_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRelativeCall.objectCompare (p->mProperty_mUsesRelativeCall) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_immediatExpression & inAttribute_mSizeExpression,
                                                                                                                    const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                                    const GALGAS_bool & inAttribute_mUsesRelativeCall
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRelativeCall.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra (inAttribute_mInstructionLocation, inAttribute_mSizeExpression, inAttribute_mTargetLabels, inAttribute_mUsesRelativeCall COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::setter_setMSizeExpression (GALGAS_immediatExpression inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::setter_setMTargetLabels (GALGAS_lstringlist inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    p->mProperty_mTargetLabels = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::setter_setMUsesRelativeCall (GALGAS_bool inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    p->mProperty_mUsesRelativeCall = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::readProperty_mUsesRelativeCall (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    return p->mProperty_mUsesRelativeCall ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_computed_bra class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_bra::cPtr_pic_31__38_Instruction_5F_computed_5F_bra (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                const GALGAS_lstringlist & in_mTargetLabels,
                                                                                                const GALGAS_bool & in_mUsesRelativeCall
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mTargetLabels (in_mTargetLabels),
mProperty_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_computed_bra:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra (mProperty_mInstructionLocation, mProperty_mSizeExpression, mProperty_mTargetLabels, mProperty_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_computed_bra generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ("pic18Instruction_computed_bra",
                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_bra", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak::GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak & GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak::GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak::bang_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
      result = GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ((cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_computed_bra-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak ("pic18Instruction_computed_bra-weak",
                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_bra-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_computed_5F_goto reference class
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

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_goto::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSizeExpression.objectCompare (p->mProperty_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabels.objectCompare (p->mProperty_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRelativeCall.objectCompare (p->mProperty_mUsesRelativeCall) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                      const GALGAS_immediatExpression & inAttribute_mSizeExpression,
                                                                                                                      const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                                      const GALGAS_bool & inAttribute_mUsesRelativeCall
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRelativeCall.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto (inAttribute_mInstructionLocation, inAttribute_mSizeExpression, inAttribute_mTargetLabels, inAttribute_mUsesRelativeCall COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::setter_setMSizeExpression (GALGAS_immediatExpression inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::setter_setMTargetLabels (GALGAS_lstringlist inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    p->mProperty_mTargetLabels = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::setter_setMUsesRelativeCall (GALGAS_bool inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    p->mProperty_mUsesRelativeCall = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::readProperty_mUsesRelativeCall (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    return p->mProperty_mUsesRelativeCall ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_computed_goto class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_goto::cPtr_pic_31__38_Instruction_5F_computed_5F_goto (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                  const GALGAS_lstringlist & in_mTargetLabels,
                                                                                                  const GALGAS_bool & in_mUsesRelativeCall
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mTargetLabels (in_mTargetLabels),
mProperty_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_computed_goto:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto (mProperty_mInstructionLocation, mProperty_mSizeExpression, mProperty_mTargetLabels, mProperty_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_computed_goto generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ("pic18Instruction_computed_goto",
                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_goto", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak::GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak & GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak::GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak::bang_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
      result = GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ((cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_computed_goto-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak ("pic18Instruction_computed_goto-weak",
                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_goto-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_computed_5F_rcall reference class
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

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSizeExpression.objectCompare (p->mProperty_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabels.objectCompare (p->mProperty_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRelativeCall.objectCompare (p->mProperty_mUsesRelativeCall) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mSizeExpression,
                                                                                                                        const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                                        const GALGAS_bool & inAttribute_mUsesRelativeCall
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRelativeCall.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (inAttribute_mInstructionLocation, inAttribute_mSizeExpression, inAttribute_mTargetLabels, inAttribute_mUsesRelativeCall COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::setter_setMSizeExpression (GALGAS_immediatExpression inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::setter_setMTargetLabels (GALGAS_lstringlist inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    p->mProperty_mTargetLabels = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::setter_setMUsesRelativeCall (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    p->mProperty_mUsesRelativeCall = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::readProperty_mUsesRelativeCall (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mUsesRelativeCall ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_computed_rcall class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                    const GALGAS_lstringlist & in_mTargetLabels,
                                                                                                    const GALGAS_bool & in_mUsesRelativeCall
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mTargetLabels (in_mTargetLabels),
mProperty_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_computed_rcall:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (mProperty_mInstructionLocation, mProperty_mSizeExpression, mProperty_mTargetLabels, mProperty_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_computed_rcall generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ("pic18Instruction_computed_rcall",
                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_rcall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak::GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak & GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak::GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak::bang_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
      result = GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ((cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_computed_rcall-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak ("pic18Instruction_computed_rcall-weak",
                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_rcall-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_ConditionExpression_2D_weak::objectCompare (const GALGAS_pic_31__38_ConditionExpression_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_ConditionExpression_2D_weak::GALGAS_pic_31__38_ConditionExpression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression_2D_weak & GALGAS_pic_31__38_ConditionExpression_2D_weak::operator = (const GALGAS_pic_31__38_ConditionExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression_2D_weak::GALGAS_pic_31__38_ConditionExpression_2D_weak (const GALGAS_pic_31__38_ConditionExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression_2D_weak GALGAS_pic_31__38_ConditionExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_ConditionExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_ConditionExpression_2D_weak::bang_pic_31__38_ConditionExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_ConditionExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_ConditionExpression) ;
      result = GALGAS_pic_31__38_ConditionExpression ((cPtr_pic_31__38_ConditionExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18ConditionExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak ("pic18ConditionExpression-weak",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_ConditionExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_ConditionExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_ConditionExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression_2D_weak GALGAS_pic_31__38_ConditionExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_ConditionExpression_2D_weak result ;
  const GALGAS_pic_31__38_ConditionExpression_2D_weak * p = (const GALGAS_pic_31__38_ConditionExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_ConditionExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18ConditionExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_RegisterTestCondition_2D_weak::objectCompare (const GALGAS_pic_31__38_RegisterTestCondition_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_RegisterTestCondition_2D_weak::GALGAS_pic_31__38_RegisterTestCondition_2D_weak (void) :
GALGAS_pic_31__38_ConditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition_2D_weak & GALGAS_pic_31__38_RegisterTestCondition_2D_weak::operator = (const GALGAS_pic_31__38_RegisterTestCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition_2D_weak::GALGAS_pic_31__38_RegisterTestCondition_2D_weak (const GALGAS_pic_31__38_RegisterTestCondition & inSource) :
GALGAS_pic_31__38_ConditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition_2D_weak GALGAS_pic_31__38_RegisterTestCondition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterTestCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition GALGAS_pic_31__38_RegisterTestCondition_2D_weak::bang_pic_31__38_RegisterTestCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RegisterTestCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_RegisterTestCondition) ;
      result = GALGAS_pic_31__38_RegisterTestCondition ((cPtr_pic_31__38_RegisterTestCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18RegisterTestCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition_2D_weak ("pic18RegisterTestCondition-weak",
                                                                 & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterTestCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RegisterTestCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterTestCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition_2D_weak GALGAS_pic_31__38_RegisterTestCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterTestCondition_2D_weak result ;
  const GALGAS_pic_31__38_RegisterTestCondition_2D_weak * p = (const GALGAS_pic_31__38_RegisterTestCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_RegisterTestCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterTestCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison::GALGAS_pic_31__38_RegisterComparison (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparison::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparison::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparison::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparison::constructor_greater (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_greater ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparison::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparison::constructor_lower (UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_lower ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_RegisterComparison::optional_notEqual () const {
  const bool ok = mEnum == kEnum_notEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_RegisterComparison::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_RegisterComparison::optional_greaterOrEqual () const {
  const bool ok = mEnum == kEnum_greaterOrEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_RegisterComparison::optional_greater () const {
  const bool ok = mEnum == kEnum_greater ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_RegisterComparison::optional_lowerOrEqual () const {
  const bool ok = mEnum == kEnum_lowerOrEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_RegisterComparison::optional_lower () const {
  const bool ok = mEnum == kEnum_lower ;
  return ok ;
}

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

GALGAS_bool GALGAS_pic_31__38_RegisterComparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_RegisterComparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_RegisterComparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_RegisterComparison::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greater == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_RegisterComparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_RegisterComparison::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lower == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterComparison::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @pic18RegisterComparison: ") ;
  ioString.addString (gEnumNameArrayFor_pic_31__38_RegisterComparison [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_RegisterComparison::objectCompare (const GALGAS_pic_31__38_RegisterComparison & inOperand) const {
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
//     @pic18RegisterComparison generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ("pic18RegisterComparison",
                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterComparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RegisterComparison::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterComparison (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparison::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparison result ;
  const GALGAS_pic_31__38_RegisterComparison * p = (const GALGAS_pic_31__38_RegisterComparison *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_RegisterComparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak::objectCompare (const GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak::GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak (void) :
GALGAS_pic_31__38_ConditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak & GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak::operator = (const GALGAS_pic_31__38_RegisterComparisonCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak::GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak (const GALGAS_pic_31__38_RegisterComparisonCondition & inSource) :
GALGAS_pic_31__38_ConditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonCondition GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak::bang_pic_31__38_RegisterComparisonCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RegisterComparisonCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_RegisterComparisonCondition) ;
      result = GALGAS_pic_31__38_RegisterComparisonCondition ((cPtr_pic_31__38_RegisterComparisonCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18RegisterComparisonCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak ("pic18RegisterComparisonCondition-weak",
                                                                       & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak result ;
  const GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak * p = (const GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_RegisterComparisonCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak::objectCompare (const GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak::GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak (void) :
GALGAS_pic_31__38_ConditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak & GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak::operator = (const GALGAS_pic_31__38_IncDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak::GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak (const GALGAS_pic_31__38_IncDecRegisterInCondition & inSource) :
GALGAS_pic_31__38_ConditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IncDecRegisterInCondition GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak::bang_pic_31__38_IncDecRegisterInCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_IncDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_IncDecRegisterInCondition) ;
      result = GALGAS_pic_31__38_IncDecRegisterInCondition ((cPtr_pic_31__38_IncDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18IncDecRegisterInCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak ("pic18IncDecRegisterInCondition-weak",
                                                                     & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak result ;
  const GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak * p = (const GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_IncDecRegisterInCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IncDecRegisterInCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_BccInStructuredCondition reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_BccInStructuredCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mConditionLocation.printNonNullClassInstanceProperties ("mConditionLocation") ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_BccInStructuredCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_BccInStructuredCondition * p = (const cPtr_pic_31__38_BccInStructuredCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mConditionLocation.objectCompare (p->mProperty_mConditionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCondition.objectCompare (p->mProperty_mCondition) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_BccInStructuredCondition::objectCompare (const GALGAS_pic_31__38_BccInStructuredCondition & inOperand) const {
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

GALGAS_pic_31__38_BccInStructuredCondition::GALGAS_pic_31__38_BccInStructuredCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BccInStructuredCondition::GALGAS_pic_31__38_BccInStructuredCondition (const cPtr_pic_31__38_BccInStructuredCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BccInStructuredCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BccInStructuredCondition GALGAS_pic_31__38_BccInStructuredCondition::constructor_new (const GALGAS_location & inAttribute_mConditionLocation,
                                                                                                        const GALGAS_conditional_5F_branch & inAttribute_mCondition
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BccInStructuredCondition result ;
  if (inAttribute_mConditionLocation.isValid () && inAttribute_mCondition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_BccInStructuredCondition (inAttribute_mConditionLocation, inAttribute_mCondition COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BccInStructuredCondition::setter_setMConditionLocation (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    p->mProperty_mConditionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BccInStructuredCondition::setter_setMCondition (GALGAS_conditional_5F_branch inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    p->mProperty_mCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_BccInStructuredCondition::readProperty_mConditionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    return p->mProperty_mConditionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_pic_31__38_BccInStructuredCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_conditional_5F_branch () ;
  }else{
    cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18BccInStructuredCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BccInStructuredCondition::cPtr_pic_31__38_BccInStructuredCondition (const GALGAS_location & in_mConditionLocation,
                                                                                    const GALGAS_conditional_5F_branch & in_mCondition
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mConditionLocation (in_mConditionLocation),
mProperty_mCondition (in_mCondition) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_BccInStructuredCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;
}

void cPtr_pic_31__38_BccInStructuredCondition::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("[@pic18BccInStructuredCondition:") ;
  mProperty_mConditionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_BccInStructuredCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_BccInStructuredCondition (mProperty_mConditionLocation, mProperty_mCondition COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18BccInStructuredCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ("pic18BccInStructuredCondition",
                                                            & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BccInStructuredCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BccInStructuredCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BccInStructuredCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BccInStructuredCondition GALGAS_pic_31__38_BccInStructuredCondition::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BccInStructuredCondition result ;
  const GALGAS_pic_31__38_BccInStructuredCondition * p = (const GALGAS_pic_31__38_BccInStructuredCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_BccInStructuredCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BccInStructuredCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_BccInStructuredCondition_2D_weak::objectCompare (const GALGAS_pic_31__38_BccInStructuredCondition_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_BccInStructuredCondition_2D_weak::GALGAS_pic_31__38_BccInStructuredCondition_2D_weak (void) :
GALGAS_pic_31__38_ConditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BccInStructuredCondition_2D_weak & GALGAS_pic_31__38_BccInStructuredCondition_2D_weak::operator = (const GALGAS_pic_31__38_BccInStructuredCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BccInStructuredCondition_2D_weak::GALGAS_pic_31__38_BccInStructuredCondition_2D_weak (const GALGAS_pic_31__38_BccInStructuredCondition & inSource) :
GALGAS_pic_31__38_ConditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BccInStructuredCondition_2D_weak GALGAS_pic_31__38_BccInStructuredCondition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_BccInStructuredCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BccInStructuredCondition GALGAS_pic_31__38_BccInStructuredCondition_2D_weak::bang_pic_31__38_BccInStructuredCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_BccInStructuredCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_BccInStructuredCondition) ;
      result = GALGAS_pic_31__38_BccInStructuredCondition ((cPtr_pic_31__38_BccInStructuredCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18BccInStructuredCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition_2D_weak ("pic18BccInStructuredCondition-weak",
                                                                    & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BccInStructuredCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BccInStructuredCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BccInStructuredCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BccInStructuredCondition_2D_weak GALGAS_pic_31__38_BccInStructuredCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BccInStructuredCondition_2D_weak result ;
  const GALGAS_pic_31__38_BccInStructuredCondition_2D_weak * p = (const GALGAS_pic_31__38_BccInStructuredCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_BccInStructuredCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BccInStructuredCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_NegateCondition reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_NegateCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_NegateCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_NegateCondition * p = (const cPtr_pic_31__38_NegateCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_NegateCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mCondition.objectCompare (p->mProperty_mCondition) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_NegateCondition::objectCompare (const GALGAS_pic_31__38_NegateCondition & inOperand) const {
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

GALGAS_pic_31__38_NegateCondition::GALGAS_pic_31__38_NegateCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition::GALGAS_pic_31__38_NegateCondition (const cPtr_pic_31__38_NegateCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_NegateCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition GALGAS_pic_31__38_NegateCondition::constructor_new (const GALGAS_pic_31__38_ConditionExpression & inAttribute_mCondition
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_NegateCondition result ;
  if (inAttribute_mCondition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_NegateCondition (inAttribute_mCondition COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_NegateCondition::setter_setMCondition (GALGAS_pic_31__38_ConditionExpression inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_NegateCondition * p = (cPtr_pic_31__38_NegateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_NegateCondition) ;
    p->mProperty_mCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_NegateCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_NegateCondition * p = (cPtr_pic_31__38_NegateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_NegateCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18NegateCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_NegateCondition::cPtr_pic_31__38_NegateCondition (const GALGAS_pic_31__38_ConditionExpression & in_mCondition
                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mCondition (in_mCondition) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_NegateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;
}

void cPtr_pic_31__38_NegateCondition::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.addString ("[@pic18NegateCondition:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_NegateCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_NegateCondition (mProperty_mCondition COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18NegateCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ("pic18NegateCondition",
                                                   & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_NegateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_NegateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_NegateCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition GALGAS_pic_31__38_NegateCondition::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_NegateCondition result ;
  const GALGAS_pic_31__38_NegateCondition * p = (const GALGAS_pic_31__38_NegateCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_NegateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18NegateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_NegateCondition_2D_weak::objectCompare (const GALGAS_pic_31__38_NegateCondition_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_NegateCondition_2D_weak::GALGAS_pic_31__38_NegateCondition_2D_weak (void) :
GALGAS_pic_31__38_ConditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition_2D_weak & GALGAS_pic_31__38_NegateCondition_2D_weak::operator = (const GALGAS_pic_31__38_NegateCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition_2D_weak::GALGAS_pic_31__38_NegateCondition_2D_weak (const GALGAS_pic_31__38_NegateCondition & inSource) :
GALGAS_pic_31__38_ConditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition_2D_weak GALGAS_pic_31__38_NegateCondition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_NegateCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition GALGAS_pic_31__38_NegateCondition_2D_weak::bang_pic_31__38_NegateCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_NegateCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_NegateCondition) ;
      result = GALGAS_pic_31__38_NegateCondition ((cPtr_pic_31__38_NegateCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18NegateCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2D_weak ("pic18NegateCondition-weak",
                                                           & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_NegateCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_NegateCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_NegateCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition_2D_weak GALGAS_pic_31__38_NegateCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_NegateCondition_2D_weak result ;
  const GALGAS_pic_31__38_NegateCondition_2D_weak * p = (const GALGAS_pic_31__38_NegateCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_NegateCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18NegateCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_AndCondition reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_AndCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_AndCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_AndCondition * p = (const cPtr_pic_31__38_AndCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_AndCondition::objectCompare (const GALGAS_pic_31__38_AndCondition & inOperand) const {
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

GALGAS_pic_31__38_AndCondition::GALGAS_pic_31__38_AndCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition::GALGAS_pic_31__38_AndCondition (const cPtr_pic_31__38_AndCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_AndCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition GALGAS_pic_31__38_AndCondition::constructor_new (const GALGAS_pic_31__38_ConditionExpression & inAttribute_mLeftExpression,
                                                                                const GALGAS_pic_31__38_ConditionExpression & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AndCondition result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_AndCondition (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_AndCondition::setter_setMLeftExpression (GALGAS_pic_31__38_ConditionExpression inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_AndCondition::setter_setMRightExpression (GALGAS_pic_31__38_ConditionExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_AndCondition::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_AndCondition::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18AndCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_AndCondition::cPtr_pic_31__38_AndCondition (const GALGAS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                                            const GALGAS_pic_31__38_ConditionExpression & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_AndCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;
}

void cPtr_pic_31__38_AndCondition::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.addString ("[@pic18AndCondition:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_AndCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_AndCondition (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18AndCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_AndCondition ("pic18AndCondition",
                                                & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_AndCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_AndCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_AndCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition GALGAS_pic_31__38_AndCondition::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AndCondition result ;
  const GALGAS_pic_31__38_AndCondition * p = (const GALGAS_pic_31__38_AndCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_AndCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AndCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_AndCondition_2D_weak::objectCompare (const GALGAS_pic_31__38_AndCondition_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_AndCondition_2D_weak::GALGAS_pic_31__38_AndCondition_2D_weak (void) :
GALGAS_pic_31__38_ConditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition_2D_weak & GALGAS_pic_31__38_AndCondition_2D_weak::operator = (const GALGAS_pic_31__38_AndCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition_2D_weak::GALGAS_pic_31__38_AndCondition_2D_weak (const GALGAS_pic_31__38_AndCondition & inSource) :
GALGAS_pic_31__38_ConditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition_2D_weak GALGAS_pic_31__38_AndCondition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_AndCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition GALGAS_pic_31__38_AndCondition_2D_weak::bang_pic_31__38_AndCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_AndCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_AndCondition) ;
      result = GALGAS_pic_31__38_AndCondition ((cPtr_pic_31__38_AndCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18AndCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2D_weak ("pic18AndCondition-weak",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_AndCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_AndCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_AndCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition_2D_weak GALGAS_pic_31__38_AndCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AndCondition_2D_weak result ;
  const GALGAS_pic_31__38_AndCondition_2D_weak * p = (const GALGAS_pic_31__38_AndCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_AndCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AndCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak::objectCompare (const GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak::GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak (void) :
GALGAS_pic_31__38_ConditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak & GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak::operator = (const GALGAS_pic_31__38_BitTestInStructuredCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak::GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak (const GALGAS_pic_31__38_BitTestInStructuredCondition & inSource) :
GALGAS_pic_31__38_ConditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestInStructuredCondition GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak::bang_pic_31__38_BitTestInStructuredCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_BitTestInStructuredCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_BitTestInStructuredCondition) ;
      result = GALGAS_pic_31__38_BitTestInStructuredCondition ((cPtr_pic_31__38_BitTestInStructuredCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18BitTestInStructuredCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak ("pic18BitTestInStructuredCondition-weak",
                                                                        & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak result ;
  const GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak * p = (const GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_BitTestInStructuredCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestInStructuredCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_structured_5F_if reference class
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

typeComparisonResult cPtr_pic_31__38_Instruction_5F_structured_5F_if::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIfCondition.objectCompare (p->mProperty_mIfCondition) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenInstructionList.objectCompare (p->mProperty_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfElsePartLocation.objectCompare (p->mProperty_mEndOfElsePartLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_structured_5F_if::objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_structured_5F_if::GALGAS_pic_31__38_Instruction_5F_structured_5F_if (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if::GALGAS_pic_31__38_Instruction_5F_structured_5F_if (const cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                      const GALGAS_pic_31__38_ConditionExpression & inAttribute_mIfCondition,
                                                                                                                      const GALGAS_pic_31__38_InstructionList & inAttribute_mThenInstructionList,
                                                                                                                      const GALGAS_pic_31__38_InstructionList & inAttribute_mElseInstructionList,
                                                                                                                      const GALGAS_location & inAttribute_mEndOfElsePartLocation
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIfCondition.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElsePartLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if (inAttribute_mInstructionLocation, inAttribute_mIfCondition, inAttribute_mThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElsePartLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_structured_5F_if::setter_setMIfCondition (GALGAS_pic_31__38_ConditionExpression inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mIfCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_structured_5F_if::setter_setMThenInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_structured_5F_if::setter_setMElseInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_structured_5F_if::setter_setMEndOfElsePartLocation (GALGAS_location inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mEndOfElsePartLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mIfCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mIfCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mEndOfElsePartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mEndOfElsePartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_structured_if class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_structured_5F_if::cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                                                                  const GALGAS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                                                                  const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                                                                  const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mIfCondition (in_mIfCondition),
mProperty_mThenInstructionList (in_mThenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfElsePartLocation (in_mEndOfElsePartLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_structured_if:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIfCondition.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfElsePartLocation.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_structured_if generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ("pic18Instruction_structured_if",
                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if GALGAS_pic_31__38_Instruction_5F_structured_5F_if::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if result ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if * p = (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak & GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::bang_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
      result = GALGAS_pic_31__38_Instruction_5F_structured_5F_if ((cPtr_pic_31__38_Instruction_5F_structured_5F_if *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_structured_if-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak ("pic18Instruction_structured_if-weak",
                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_structured_if-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_DoWhilePartList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_DoWhilePartList : public cCollectionElement {
  public: GALGAS_pic_31__38_DoWhilePartList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                         const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                         const GALGAS_location & in_mEndOfPartLocation
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_DoWhilePartList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_pic_31__38_DoWhilePartList::cCollectionElement_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                              const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                              const GALGAS_location & in_mEndOfPartLocation
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_DoWhilePartList::cCollectionElement_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_DoWhilePartList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mCondition" ":") ;
  mObject.mProperty_mCondition.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mEndOfPartLocation" ":") ;
  mObject.mProperty_mEndOfPartLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_DoWhilePartList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_DoWhilePartList * operand = (cCollectionElement_pic_31__38_DoWhilePartList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList::GALGAS_pic_31__38_DoWhilePartList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList::GALGAS_pic_31__38_DoWhilePartList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_DoWhilePartList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::constructor_listWithValue (const GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                const GALGAS_location & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_DoWhilePartList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_DoWhilePartList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_DoWhilePartList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                   const GALGAS_location & in_mEndOfPartLocation
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (in_mCondition,
                                                                in_mInstructionList,
                                                                in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::addAssign_operation (const GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                             const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                             const GALGAS_location & inOperand2
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

void GALGAS_pic_31__38_DoWhilePartList::setter_append (const GALGAS_pic_31__38_ConditionExpression inOperand0,
                                                       const GALGAS_pic_31__38_InstructionList inOperand1,
                                                       const GALGAS_location inOperand2,
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

void GALGAS_pic_31__38_DoWhilePartList::setter_insertAtIndex (const GALGAS_pic_31__38_ConditionExpression inOperand0,
                                                              const GALGAS_pic_31__38_InstructionList inOperand1,
                                                              const GALGAS_location inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_DoWhilePartList::setter_removeAtIndex (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                              GALGAS_pic_31__38_InstructionList & outOperand1,
                                                              GALGAS_location & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
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

void GALGAS_pic_31__38_DoWhilePartList::setter_popFirst (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                         GALGAS_pic_31__38_InstructionList & outOperand1,
                                                         GALGAS_location & outOperand2,
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

void GALGAS_pic_31__38_DoWhilePartList::setter_popLast (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                        GALGAS_pic_31__38_InstructionList & outOperand1,
                                                        GALGAS_location & outOperand2,
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

void GALGAS_pic_31__38_DoWhilePartList::method_first (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                      GALGAS_pic_31__38_InstructionList & outOperand1,
                                                      GALGAS_location & outOperand2,
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

void GALGAS_pic_31__38_DoWhilePartList::method_last (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                     GALGAS_pic_31__38_InstructionList & outOperand1,
                                                     GALGAS_location & outOperand2,
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

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::add_operation (const GALGAS_pic_31__38_DoWhilePartList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::plusAssign_operation (const GALGAS_pic_31__38_DoWhilePartList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::setter_setMConditionAtIndex (GALGAS_pic_31__38_ConditionExpression inOperand,
                                                                     GALGAS_uint inIndex,
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

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_DoWhilePartList::getter_mConditionAtIndex (const GALGAS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  GALGAS_pic_31__38_ConditionExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    result = p->mObject.mProperty_mCondition ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                           GALGAS_uint inIndex,
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

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_DoWhilePartList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::setter_setMEndOfPartLocationAtIndex (GALGAS_location inOperand,
                                                                             GALGAS_uint inIndex,
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

GALGAS_location GALGAS_pic_31__38_DoWhilePartList::getter_mEndOfPartLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    result = p->mObject.mProperty_mEndOfPartLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_DoWhilePartList::cEnumerator_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_DoWhilePartList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element cEnumerator_pic_31__38_DoWhilePartList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression cEnumerator_pic_31__38_DoWhilePartList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_DoWhilePartList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_pic_31__38_DoWhilePartList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mEndOfPartLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @pic18DoWhilePartList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ("pic18DoWhilePartList",
                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_DoWhilePartList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_DoWhilePartList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_DoWhilePartList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_DoWhilePartList result ;
  const GALGAS_pic_31__38_DoWhilePartList * p = (const GALGAS_pic_31__38_DoWhilePartList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_DoWhilePartList *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_do_5F_while::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOfRepeatedInstructionList.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructionList") ;
    mProperty_mWhilePartList.printNonNullClassInstanceProperties ("mWhilePartList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_do_5F_while::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRepeatedInstructionList.objectCompare (p->mProperty_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfRepeatedInstructionList.objectCompare (p->mProperty_mEndOfRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhilePartList.objectCompare (p->mProperty_mWhilePartList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_do_5F_while::objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_do_5F_while::GALGAS_pic_31__38_Instruction_5F_do_5F_while (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while::GALGAS_pic_31__38_Instruction_5F_do_5F_while (const cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_pic_31__38_InstructionList & inAttribute_mRepeatedInstructionList,
                                                                                                            const GALGAS_location & inAttribute_mEndOfRepeatedInstructionList,
                                                                                                            const GALGAS_pic_31__38_DoWhilePartList & inAttribute_mWhilePartList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mEndOfRepeatedInstructionList.isValid () && inAttribute_mWhilePartList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_do_5F_while (inAttribute_mInstructionLocation, inAttribute_mRepeatedInstructionList, inAttribute_mEndOfRepeatedInstructionList, inAttribute_mWhilePartList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_do_5F_while::setter_setMRepeatedInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    p->mProperty_mRepeatedInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_do_5F_while::setter_setMEndOfRepeatedInstructionList (GALGAS_location inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    p->mProperty_mEndOfRepeatedInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_do_5F_while::setter_setMWhilePartList (GALGAS_pic_31__38_DoWhilePartList inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    p->mProperty_mWhilePartList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_do_5F_while::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_do_5F_while::readProperty_mEndOfRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    return p->mProperty_mEndOfRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_Instruction_5F_do_5F_while::readProperty_mWhilePartList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_DoWhilePartList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    return p->mProperty_mWhilePartList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_do_while class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_do_5F_while::cPtr_pic_31__38_Instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                                                        const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                        const GALGAS_pic_31__38_DoWhilePartList & in_mWhilePartList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRepeatedInstructionList (in_mRepeatedInstructionList),
mProperty_mEndOfRepeatedInstructionList (in_mEndOfRepeatedInstructionList),
mProperty_mWhilePartList (in_mWhilePartList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

void cPtr_pic_31__38_Instruction_5F_do_5F_while::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_do_while:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_do_while generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ("pic18Instruction_do_while",
                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while result ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while * p = (const GALGAS_pic_31__38_Instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak & GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::bang_pic_31__38_Instruction_5F_do_5F_while_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
      result = GALGAS_pic_31__38_Instruction_5F_do_5F_while ((cPtr_pic_31__38_Instruction_5F_do_5F_while *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_do_while-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak ("pic18Instruction_do_while-weak",
                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_do_while-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_InterruptDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_InterruptDefinitionList : public cCollectionElement {
  public: GALGAS_pic_31__38_InterruptDefinitionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_pic_31__38_InterruptDefinitionList (const GALGAS_lstring & in_mInterruptName,
                                                                 const GALGAS_bool & in_mFastReturn,
                                                                 const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                 const GALGAS_location & in_mEndOfInterruptLocation
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_InterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_pic_31__38_InterruptDefinitionList::cCollectionElement_pic_31__38_InterruptDefinitionList (const GALGAS_lstring & in_mInterruptName,
                                                                                                              const GALGAS_bool & in_mFastReturn,
                                                                                                              const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                              const GALGAS_location & in_mEndOfInterruptLocation
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInterruptName, in_mFastReturn, in_mInstructionList, in_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_InterruptDefinitionList::cCollectionElement_pic_31__38_InterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInterruptName" ":") ;
  mObject.mProperty_mInterruptName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mFastReturn" ":") ;
  mObject.mProperty_mFastReturn.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mEndOfInterruptLocation" ":") ;
  mObject.mProperty_mEndOfInterruptLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_InterruptDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_InterruptDefinitionList * operand = (cCollectionElement_pic_31__38_InterruptDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList::GALGAS_pic_31__38_InterruptDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList::GALGAS_pic_31__38_InterruptDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_InterruptDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_bool & inOperand1,
                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                                                const GALGAS_location & inOperand3
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_pic_31__38_InterruptDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_InterruptDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mInterruptName,
                                                                           const GALGAS_bool & in_mFastReturn,
                                                                           const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                           const GALGAS_location & in_mEndOfInterruptLocation
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

void GALGAS_pic_31__38_InterruptDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_bool & inOperand1,
                                                                     const GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                     const GALGAS_location & inOperand3
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

void GALGAS_pic_31__38_InterruptDefinitionList::setter_append (const GALGAS_lstring inOperand0,
                                                               const GALGAS_bool inOperand1,
                                                               const GALGAS_pic_31__38_InstructionList inOperand2,
                                                               const GALGAS_location inOperand3,
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

void GALGAS_pic_31__38_InterruptDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_bool inOperand1,
                                                                      const GALGAS_pic_31__38_InstructionList inOperand2,
                                                                      const GALGAS_location inOperand3,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_InterruptDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_bool & outOperand1,
                                                                      GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                      GALGAS_location & outOperand3,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
        outOperand0 = p->mObject.mProperty_mInterruptName ;
        outOperand1 = p->mObject.mProperty_mFastReturn ;
        outOperand2 = p->mObject.mProperty_mInstructionList ;
        outOperand3 = p->mObject.mProperty_mEndOfInterruptLocation ;
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

void GALGAS_pic_31__38_InterruptDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_bool & outOperand1,
                                                                 GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                 GALGAS_location & outOperand3,
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

void GALGAS_pic_31__38_InterruptDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_bool & outOperand1,
                                                                GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                GALGAS_location & outOperand3,
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

void GALGAS_pic_31__38_InterruptDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              GALGAS_pic_31__38_InstructionList & outOperand2,
                                                              GALGAS_location & outOperand3,
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

void GALGAS_pic_31__38_InterruptDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             GALGAS_pic_31__38_InstructionList & outOperand2,
                                                             GALGAS_location & outOperand3,
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

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::add_operation (const GALGAS_pic_31__38_InterruptDefinitionList & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InterruptDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InterruptDefinitionList result = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InterruptDefinitionList result = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InterruptDefinitionList result = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::plusAssign_operation (const GALGAS_pic_31__38_InterruptDefinitionList inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_setMInterruptNameAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_pic_31__38_InterruptDefinitionList::getter_mInterruptNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mInterruptName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_setMFastReturnAtIndex (GALGAS_bool inOperand,
                                                                              GALGAS_uint inIndex,
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

GALGAS_bool GALGAS_pic_31__38_InterruptDefinitionList::getter_mFastReturnAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mFastReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                                   GALGAS_uint inIndex,
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

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InterruptDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_setMEndOfInterruptLocationAtIndex (GALGAS_location inOperand,
                                                                                          GALGAS_uint inIndex,
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

GALGAS_location GALGAS_pic_31__38_InterruptDefinitionList::getter_mEndOfInterruptLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_InterruptDefinitionList::cEnumerator_pic_31__38_InterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element cEnumerator_pic_31__38_InterruptDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38_InterruptDefinitionList::current_mInterruptName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mInterruptName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_pic_31__38_InterruptDefinitionList::current_mFastReturn (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mFastReturn ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_InterruptDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_pic_31__38_InterruptDefinitionList::current_mEndOfInterruptLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mEndOfInterruptLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @pic18InterruptDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ("pic18InterruptDefinitionList",
                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_InterruptDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_InterruptDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InterruptDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList result ;
  const GALGAS_pic_31__38_InterruptDefinitionList * p = (const GALGAS_pic_31__38_InterruptDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_InterruptDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InterruptDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_RoutineDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_RoutineDefinitionList : public cCollectionElement {
  public: GALGAS_pic_31__38_RoutineDefinitionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_pic_31__38_RoutineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                               const GALGAS_luint & in_mRequiredBank,
                                                               const GALGAS_luint & in_mReturnedBank,
                                                               const GALGAS_bool & in_mPreservesBank,
                                                               const GALGAS_bool & in_mIsNoReturn,
                                                               const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                               const GALGAS_location & in_mEndOfRoutineLocation
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_RoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_pic_31__38_RoutineDefinitionList::cCollectionElement_pic_31__38_RoutineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                                                                          const GALGAS_luint & in_mRequiredBank,
                                                                                                          const GALGAS_luint & in_mReturnedBank,
                                                                                                          const GALGAS_bool & in_mPreservesBank,
                                                                                                          const GALGAS_bool & in_mIsNoReturn,
                                                                                                          const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                          const GALGAS_location & in_mEndOfRoutineLocation
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_RoutineDefinitionList::cCollectionElement_pic_31__38_RoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRoutineName" ":") ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRequiredBank" ":") ;
  mObject.mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mReturnedBank" ":") ;
  mObject.mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mPreservesBank" ":") ;
  mObject.mProperty_mPreservesBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIsNoReturn" ":") ;
  mObject.mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mEndOfRoutineLocation" ":") ;
  mObject.mProperty_mEndOfRoutineLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_RoutineDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_RoutineDefinitionList * operand = (cCollectionElement_pic_31__38_RoutineDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList::GALGAS_pic_31__38_RoutineDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList::GALGAS_pic_31__38_RoutineDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_RoutineDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_luint & inOperand1,
                                                                                                            const GALGAS_luint & inOperand2,
                                                                                                            const GALGAS_bool & inOperand3,
                                                                                                            const GALGAS_bool & inOperand4,
                                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                                            const GALGAS_location & inOperand6
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_pic_31__38_RoutineDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_RoutineDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mRoutineName,
                                                                         const GALGAS_luint & in_mRequiredBank,
                                                                         const GALGAS_luint & in_mReturnedBank,
                                                                         const GALGAS_bool & in_mPreservesBank,
                                                                         const GALGAS_bool & in_mIsNoReturn,
                                                                         const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                         const GALGAS_location & in_mEndOfRoutineLocation
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

void GALGAS_pic_31__38_RoutineDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_luint & inOperand1,
                                                                   const GALGAS_luint & inOperand2,
                                                                   const GALGAS_bool & inOperand3,
                                                                   const GALGAS_bool & inOperand4,
                                                                   const GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                   const GALGAS_location & inOperand6
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

void GALGAS_pic_31__38_RoutineDefinitionList::setter_append (const GALGAS_lstring inOperand0,
                                                             const GALGAS_luint inOperand1,
                                                             const GALGAS_luint inOperand2,
                                                             const GALGAS_bool inOperand3,
                                                             const GALGAS_bool inOperand4,
                                                             const GALGAS_pic_31__38_InstructionList inOperand5,
                                                             const GALGAS_location inOperand6,
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

void GALGAS_pic_31__38_RoutineDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_luint inOperand1,
                                                                    const GALGAS_luint inOperand2,
                                                                    const GALGAS_bool inOperand3,
                                                                    const GALGAS_bool inOperand4,
                                                                    const GALGAS_pic_31__38_InstructionList inOperand5,
                                                                    const GALGAS_location inOperand6,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_RoutineDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_luint & outOperand1,
                                                                    GALGAS_luint & outOperand2,
                                                                    GALGAS_bool & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    GALGAS_pic_31__38_InstructionList & outOperand5,
                                                                    GALGAS_location & outOperand6,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
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
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_luint & outOperand1,
                                                               GALGAS_luint & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               GALGAS_bool & outOperand4,
                                                               GALGAS_pic_31__38_InstructionList & outOperand5,
                                                               GALGAS_location & outOperand6,
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

void GALGAS_pic_31__38_RoutineDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_luint & outOperand1,
                                                              GALGAS_luint & outOperand2,
                                                              GALGAS_bool & outOperand3,
                                                              GALGAS_bool & outOperand4,
                                                              GALGAS_pic_31__38_InstructionList & outOperand5,
                                                              GALGAS_location & outOperand6,
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

void GALGAS_pic_31__38_RoutineDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_luint & outOperand1,
                                                            GALGAS_luint & outOperand2,
                                                            GALGAS_bool & outOperand3,
                                                            GALGAS_bool & outOperand4,
                                                            GALGAS_pic_31__38_InstructionList & outOperand5,
                                                            GALGAS_location & outOperand6,
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

void GALGAS_pic_31__38_RoutineDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_luint & outOperand1,
                                                           GALGAS_luint & outOperand2,
                                                           GALGAS_bool & outOperand3,
                                                           GALGAS_bool & outOperand4,
                                                           GALGAS_pic_31__38_InstructionList & outOperand5,
                                                           GALGAS_location & outOperand6,
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

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::add_operation (const GALGAS_pic_31__38_RoutineDefinitionList & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RoutineDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RoutineDefinitionList result = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RoutineDefinitionList result = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RoutineDefinitionList result = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::plusAssign_operation (const GALGAS_pic_31__38_RoutineDefinitionList inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMRoutineNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_pic_31__38_RoutineDefinitionList::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMRequiredBankAtIndex (GALGAS_luint inOperand,
                                                                              GALGAS_uint inIndex,
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

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList::getter_mRequiredBankAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mRequiredBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMReturnedBankAtIndex (GALGAS_luint inOperand,
                                                                              GALGAS_uint inIndex,
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

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList::getter_mReturnedBankAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mReturnedBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMPreservesBankAtIndex (GALGAS_bool inOperand,
                                                                               GALGAS_uint inIndex,
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

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList::getter_mPreservesBankAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mPreservesBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMIsNoReturnAtIndex (GALGAS_bool inOperand,
                                                                            GALGAS_uint inIndex,
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

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList::getter_mIsNoReturnAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                                 GALGAS_uint inIndex,
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

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_RoutineDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMEndOfRoutineLocationAtIndex (GALGAS_location inOperand,
                                                                                      GALGAS_uint inIndex,
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

GALGAS_location GALGAS_pic_31__38_RoutineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_RoutineDefinitionList::cEnumerator_pic_31__38_RoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element cEnumerator_pic_31__38_RoutineDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38_RoutineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_pic_31__38_RoutineDefinitionList::current_mRequiredBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_pic_31__38_RoutineDefinitionList::current_mReturnedBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_pic_31__38_RoutineDefinitionList::current_mPreservesBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_pic_31__38_RoutineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_RoutineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_pic_31__38_RoutineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mEndOfRoutineLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @pic18RoutineDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ("pic18RoutineDefinitionList",
                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RoutineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RoutineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RoutineDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList result ;
  const GALGAS_pic_31__38_RoutineDefinitionList * p = (const GALGAS_pic_31__38_RoutineDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_RoutineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RoutineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_MacroDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_MacroDefinitionList : public cCollectionElement {
  public: GALGAS_pic_31__38_MacroDefinitionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_pic_31__38_MacroDefinitionList (const GALGAS_lstring & in_mMacroName,
                                                             const GALGAS_lstringlist & in_mConstantNameList,
                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_MacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_pic_31__38_MacroDefinitionList::cCollectionElement_pic_31__38_MacroDefinitionList (const GALGAS_lstring & in_mMacroName,
                                                                                                      const GALGAS_lstringlist & in_mConstantNameList,
                                                                                                      const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMacroName, in_mConstantNameList, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_MacroDefinitionList::cCollectionElement_pic_31__38_MacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMacroName" ":") ;
  mObject.mProperty_mMacroName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mConstantNameList" ":") ;
  mObject.mProperty_mConstantNameList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_MacroDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_MacroDefinitionList * operand = (cCollectionElement_pic_31__38_MacroDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList::GALGAS_pic_31__38_MacroDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList::GALGAS_pic_31__38_MacroDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_MacroDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstringlist & inOperand1,
                                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_MacroDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_MacroDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_lstring & in_mMacroName,
                                                                       const GALGAS_lstringlist & in_mConstantNameList,
                                                                       const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (in_mMacroName,
                                                                    in_mConstantNameList,
                                                                    in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_lstringlist & inOperand1,
                                                                 const GALGAS_pic_31__38_InstructionList & inOperand2
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

void GALGAS_pic_31__38_MacroDefinitionList::setter_append (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstringlist inOperand1,
                                                           const GALGAS_pic_31__38_InstructionList inOperand2,
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

void GALGAS_pic_31__38_MacroDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_lstringlist inOperand1,
                                                                  const GALGAS_pic_31__38_InstructionList inOperand2,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_MacroDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstringlist & outOperand1,
                                                                  GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
        outOperand0 = p->mObject.mProperty_mMacroName ;
        outOperand1 = p->mObject.mProperty_mConstantNameList ;
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

void GALGAS_pic_31__38_MacroDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstringlist & outOperand1,
                                                             GALGAS_pic_31__38_InstructionList & outOperand2,
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

void GALGAS_pic_31__38_MacroDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
                                                            GALGAS_pic_31__38_InstructionList & outOperand2,
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

void GALGAS_pic_31__38_MacroDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstringlist & outOperand1,
                                                          GALGAS_pic_31__38_InstructionList & outOperand2,
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

void GALGAS_pic_31__38_MacroDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstringlist & outOperand1,
                                                         GALGAS_pic_31__38_InstructionList & outOperand2,
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

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::add_operation (const GALGAS_pic_31__38_MacroDefinitionList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroDefinitionList result = GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroDefinitionList result = GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroDefinitionList result = GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::plusAssign_operation (const GALGAS_pic_31__38_MacroDefinitionList inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::setter_setMMacroNameAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_pic_31__38_MacroDefinitionList::getter_mMacroNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    result = p->mObject.mProperty_mMacroName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::setter_setMConstantNameListAtIndex (GALGAS_lstringlist inOperand,
                                                                                GALGAS_uint inIndex,
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

GALGAS_lstringlist GALGAS_pic_31__38_MacroDefinitionList::getter_mConstantNameListAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    result = p->mObject.mProperty_mConstantNameList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                               GALGAS_uint inIndex,
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

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_MacroDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_MacroDefinitionList::cEnumerator_pic_31__38_MacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element cEnumerator_pic_31__38_MacroDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38_MacroDefinitionList::current_mMacroName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mMacroName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_pic_31__38_MacroDefinitionList::current_mConstantNameList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_MacroDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @pic18MacroDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ("pic18MacroDefinitionList",
                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_MacroDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList result ;
  const GALGAS_pic_31__38_MacroDefinitionList * p = (const GALGAS_pic_31__38_MacroDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_MacroDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_pic_31__38_MacroMap::cMapElement_pic_31__38_MacroMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_lstringlist & in_mConstantNameList,
                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mConstantNameList" ":") ;
  mProperty_mConstantNameList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstructionList" ":") ;
  mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_pic_31__38_MacroMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_pic_31__38_MacroMap * operand = (cMapElement_pic_31__38_MacroMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantNameList.objectCompare (operand->mProperty_mConstantNameList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (operand->mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap::GALGAS_pic_31__38_MacroMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap::GALGAS_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap & GALGAS_pic_31__38_MacroMap::operator = (const GALGAS_pic_31__38_MacroMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap GALGAS_pic_31__38_MacroMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap GALGAS_pic_31__38_MacroMap::constructor_mapWithMapToOverride (const GALGAS_pic_31__38_MacroMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap GALGAS_pic_31__38_MacroMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_lstringlist & inArgument0,
                                                      const GALGAS_pic_31__38_InstructionList & inArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38_MacroMap * p = nullptr ;
  macroMyNew (p, cMapElement_pic_31__38_MacroMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@pic_31__38_MacroMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap GALGAS_pic_31__38_MacroMap::add_operation (const GALGAS_pic_31__38_MacroMap & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroMap result = *this ;
  cEnumerator_pic_31__38_MacroMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mConstantNameList (HERE), enumerator.current_mInstructionList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_lstringlist inArgument0,
                                                   GALGAS_pic_31__38_InstructionList inArgument1,
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

void GALGAS_pic_31__38_MacroMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_lstringlist & outArgument0,
                                                   GALGAS_pic_31__38_InstructionList & outArgument1,
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

GALGAS_lstringlist GALGAS_pic_31__38_MacroMap::getter_mConstantNameListForKey (const GALGAS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) attributes ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    result = p->mProperty_mConstantNameList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_MacroMap::getter_mInstructionListForKey (const GALGAS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) attributes ;
  GALGAS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap::setter_setMConstantNameListForKey (GALGAS_lstringlist inAttributeValue,
                                                                    GALGAS_string inKey,
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

void GALGAS_pic_31__38_MacroMap::setter_setMInstructionListForKey (GALGAS_pic_31__38_InstructionList inAttributeValue,
                                                                   GALGAS_string inKey,
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

cMapElement_pic_31__38_MacroMap * GALGAS_pic_31__38_MacroMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38_MacroMap * result = (cMapElement_pic_31__38_MacroMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_pic_31__38_MacroMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_MacroMap::cEnumerator_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element cEnumerator_pic_31__38_MacroMap::current (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return GALGAS_pic_31__38_MacroMap_2D_element (p->mProperty_lkey, p->mProperty_mConstantNameList, p->mProperty_mInstructionList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38_MacroMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_pic_31__38_MacroMap::current_mConstantNameList (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return p->mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_MacroMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return p->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_MacroMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_lstringlist & outArgument0,
                                                     GALGAS_pic_31__38_InstructionList & outArgument1) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    outArgument0 = p->mProperty_mConstantNameList ;
    outArgument1 = p->mProperty_mInstructionList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18MacroMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroMap ("pic18MacroMap",
                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_MacroMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap GALGAS_pic_31__38_MacroMap::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap result ;
  const GALGAS_pic_31__38_MacroMap * p = (const GALGAS_pic_31__38_MacroMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_MacroMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@routineDeclarationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineDeclarationList : public cCollectionElement {
  public: GALGAS_routineDeclarationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_routineDeclarationList (const GALGAS_lstring & in_mRoutineName,
                                                     const GALGAS_luint & in_mRequiredBank,
                                                     const GALGAS_luint & in_mReturnedBank,
                                                     const GALGAS_bool & in_mPreservesBank,
                                                     const GALGAS_bool & in_mIsNoReturn
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineDeclarationList (const GALGAS_routineDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_routineDeclarationList::cCollectionElement_routineDeclarationList (const GALGAS_lstring & in_mRoutineName,
                                                                                      const GALGAS_luint & in_mRequiredBank,
                                                                                      const GALGAS_luint & in_mReturnedBank,
                                                                                      const GALGAS_bool & in_mPreservesBank,
                                                                                      const GALGAS_bool & in_mIsNoReturn
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineDeclarationList::cCollectionElement_routineDeclarationList (const GALGAS_routineDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRoutineName" ":") ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRequiredBank" ":") ;
  mObject.mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mReturnedBank" ":") ;
  mObject.mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mPreservesBank" ":") ;
  mObject.mProperty_mPreservesBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIsNoReturn" ":") ;
  mObject.mProperty_mIsNoReturn.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_routineDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineDeclarationList * operand = (cCollectionElement_routineDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList::GALGAS_routineDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList::GALGAS_routineDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_luint & inOperand1,
                                                                                        const GALGAS_luint & inOperand2,
                                                                                        const GALGAS_bool & inOperand3,
                                                                                        const GALGAS_bool & inOperand4
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_routineDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mRoutineName,
                                                               const GALGAS_luint & in_mRequiredBank,
                                                               const GALGAS_luint & in_mReturnedBank,
                                                               const GALGAS_bool & in_mPreservesBank,
                                                               const GALGAS_bool & in_mIsNoReturn
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

void GALGAS_routineDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_luint & inOperand1,
                                                         const GALGAS_luint & inOperand2,
                                                         const GALGAS_bool & inOperand3,
                                                         const GALGAS_bool & inOperand4
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

void GALGAS_routineDeclarationList::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_luint inOperand1,
                                                   const GALGAS_luint inOperand2,
                                                   const GALGAS_bool inOperand3,
                                                   const GALGAS_bool inOperand4,
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

void GALGAS_routineDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_luint inOperand1,
                                                          const GALGAS_luint inOperand2,
                                                          const GALGAS_bool inOperand3,
                                                          const GALGAS_bool inOperand4,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_routineDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_routineDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_luint & outOperand1,
                                                          GALGAS_luint & outOperand2,
                                                          GALGAS_bool & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
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

void GALGAS_routineDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_luint & outOperand1,
                                                     GALGAS_luint & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     GALGAS_bool & outOperand4,
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

void GALGAS_routineDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_luint & outOperand1,
                                                    GALGAS_luint & outOperand2,
                                                    GALGAS_bool & outOperand3,
                                                    GALGAS_bool & outOperand4,
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

void GALGAS_routineDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_luint & outOperand1,
                                                  GALGAS_luint & outOperand2,
                                                  GALGAS_bool & outOperand3,
                                                  GALGAS_bool & outOperand4,
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

void GALGAS_routineDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_luint & outOperand1,
                                                 GALGAS_luint & outOperand2,
                                                 GALGAS_bool & outOperand3,
                                                 GALGAS_bool & outOperand4,
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

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::add_operation (const GALGAS_routineDeclarationList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineDeclarationList result = GALGAS_routineDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineDeclarationList result = GALGAS_routineDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineDeclarationList result = GALGAS_routineDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::plusAssign_operation (const GALGAS_routineDeclarationList inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMRoutineNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_routineDeclarationList::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMRequiredBankAtIndex (GALGAS_luint inOperand,
                                                                    GALGAS_uint inIndex,
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

GALGAS_luint GALGAS_routineDeclarationList::getter_mRequiredBankAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mRequiredBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMReturnedBankAtIndex (GALGAS_luint inOperand,
                                                                    GALGAS_uint inIndex,
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

GALGAS_luint GALGAS_routineDeclarationList::getter_mReturnedBankAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mReturnedBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMPreservesBankAtIndex (GALGAS_bool inOperand,
                                                                     GALGAS_uint inIndex,
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

GALGAS_bool GALGAS_routineDeclarationList::getter_mPreservesBankAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mPreservesBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMIsNoReturnAtIndex (GALGAS_bool inOperand,
                                                                  GALGAS_uint inIndex,
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

GALGAS_bool GALGAS_routineDeclarationList::getter_mIsNoReturnAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_routineDeclarationList::cEnumerator_routineDeclarationList (const GALGAS_routineDeclarationList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element cEnumerator_routineDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineDeclarationList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_routineDeclarationList::current_mRequiredBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_routineDeclarationList::current_mReturnedBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineDeclarationList::current_mPreservesBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineDeclarationList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}




//--------------------------------------------------------------------------------------------------
//
//     @routineDeclarationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineDeclarationList ("routineDeclarationList",
                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineDeclarationList result ;
  const GALGAS_routineDeclarationList * p = (const GALGAS_routineDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programKind::GALGAS_programKind (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programKind GALGAS_programKind::constructor_regularProgram (UNUSED_LOCATION_ARGS) {
  GALGAS_programKind result ;
  result.mEnum = kEnum_regularProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programKind GALGAS_programKind::constructor_bootloaderProgram (UNUSED_LOCATION_ARGS) {
  GALGAS_programKind result ;
  result.mEnum = kEnum_bootloaderProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programKind GALGAS_programKind::constructor_userProgram (UNUSED_LOCATION_ARGS) {
  GALGAS_programKind result ;
  result.mEnum = kEnum_userProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_programKind::optional_regularProgram () const {
  const bool ok = mEnum == kEnum_regularProgram ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_programKind::optional_bootloaderProgram () const {
  const bool ok = mEnum == kEnum_bootloaderProgram ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_programKind::optional_userProgram () const {
  const bool ok = mEnum == kEnum_userProgram ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_programKind [4] = {
  "(not built)",
  "regularProgram",
  "bootloaderProgram",
  "userProgram"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_programKind::getter_isRegularProgram (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_regularProgram == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_programKind::getter_isBootloaderProgram (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bootloaderProgram == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_programKind::getter_isUserProgram (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_userProgram == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programKind::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @programKind: ") ;
  ioString.addString (gEnumNameArrayFor_programKind [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_programKind::objectCompare (const GALGAS_programKind & inOperand) const {
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
//     @programKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programKind ("programKind",
                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programKind GALGAS_programKind::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_programKind result ;
  const GALGAS_programKind * p = (const GALGAS_programKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@dataList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_dataList : public cCollectionElement {
  public: GALGAS_dataList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_dataList (const GALGAS_lstring & in_mDataName,
                                       const GALGAS_immediatExpressionList & in_mValueList,
                                       const GALGAS_bool & in_mIsByteList
                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_dataList (const GALGAS_dataList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_dataList::cCollectionElement_dataList (const GALGAS_lstring & in_mDataName,
                                                          const GALGAS_immediatExpressionList & in_mValueList,
                                                          const GALGAS_bool & in_mIsByteList
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDataName, in_mValueList, in_mIsByteList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_dataList::cCollectionElement_dataList (const GALGAS_dataList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDataName" ":") ;
  mObject.mProperty_mDataName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mValueList" ":") ;
  mObject.mProperty_mValueList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIsByteList" ":") ;
  mObject.mProperty_mIsByteList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_dataList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_dataList * operand = (cCollectionElement_dataList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_dataList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList::GALGAS_dataList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList::GALGAS_dataList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_dataList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_immediatExpressionList & inOperand1,
                                                            const GALGAS_bool & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_dataList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_dataList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_dataList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dataList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_lstring & in_mDataName,
                                                 const GALGAS_immediatExpressionList & in_mValueList,
                                                 const GALGAS_bool & in_mIsByteList
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = nullptr ;
  macroMyNew (p, cCollectionElement_dataList (in_mDataName,
                                              in_mValueList,
                                              in_mIsByteList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dataList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                           const GALGAS_immediatExpressionList & inOperand1,
                                           const GALGAS_bool & inOperand2
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

void GALGAS_dataList::setter_append (const GALGAS_lstring inOperand0,
                                     const GALGAS_immediatExpressionList inOperand1,
                                     const GALGAS_bool inOperand2,
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

void GALGAS_dataList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                            const GALGAS_immediatExpressionList inOperand1,
                                            const GALGAS_bool inOperand2,
                                            const GALGAS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_dataList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_dataList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                            GALGAS_immediatExpressionList & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            const GALGAS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_dataList) ;
        outOperand0 = p->mObject.mProperty_mDataName ;
        outOperand1 = p->mObject.mProperty_mValueList ;
        outOperand2 = p->mObject.mProperty_mIsByteList ;
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

void GALGAS_dataList::setter_popFirst (GALGAS_lstring & outOperand0,
                                       GALGAS_immediatExpressionList & outOperand1,
                                       GALGAS_bool & outOperand2,
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

void GALGAS_dataList::setter_popLast (GALGAS_lstring & outOperand0,
                                      GALGAS_immediatExpressionList & outOperand1,
                                      GALGAS_bool & outOperand2,
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

void GALGAS_dataList::method_first (GALGAS_lstring & outOperand0,
                                    GALGAS_immediatExpressionList & outOperand1,
                                    GALGAS_bool & outOperand2,
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

void GALGAS_dataList::method_last (GALGAS_lstring & outOperand0,
                                   GALGAS_immediatExpressionList & outOperand1,
                                   GALGAS_bool & outOperand2,
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

GALGAS_dataList GALGAS_dataList::add_operation (const GALGAS_dataList & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_dataList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::getter_subListWithRange (const GALGAS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_dataList result = GALGAS_dataList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_dataList result = GALGAS_dataList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_dataList result = GALGAS_dataList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dataList::plusAssign_operation (const GALGAS_dataList inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dataList::setter_setMDataNameAtIndex (GALGAS_lstring inOperand,
                                                  GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_dataList::getter_mDataNameAtIndex (const GALGAS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    result = p->mObject.mProperty_mDataName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dataList::setter_setMValueListAtIndex (GALGAS_immediatExpressionList inOperand,
                                                   GALGAS_uint inIndex,
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

GALGAS_immediatExpressionList GALGAS_dataList::getter_mValueListAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  GALGAS_immediatExpressionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dataList::setter_setMIsByteListAtIndex (GALGAS_bool inOperand,
                                                    GALGAS_uint inIndex,
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

GALGAS_bool GALGAS_dataList::getter_mIsByteListAtIndex (const GALGAS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    result = p->mObject.mProperty_mIsByteList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_dataList::cEnumerator_dataList (const GALGAS_dataList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element cEnumerator_dataList::current (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_dataList::current_mDataName (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mDataName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList cEnumerator_dataList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_dataList::current_mIsByteList (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mIsByteList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @dataList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataList ("dataList",
                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dataList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dataList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_dataList result ;
  const GALGAS_dataList * p = (const GALGAS_dataList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dataList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@checkpicList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_checkpicList : public cCollectionElement {
  public: GALGAS_checkpicList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_checkpicList (const GALGAS_location & in_mErrorLocation,
                                           const GALGAS_lstringlist & in_mValueList
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_checkpicList (const GALGAS_checkpicList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_checkpicList::cCollectionElement_checkpicList (const GALGAS_location & in_mErrorLocation,
                                                                  const GALGAS_lstringlist & in_mValueList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mErrorLocation, in_mValueList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_checkpicList::cCollectionElement_checkpicList (const GALGAS_checkpicList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mErrorLocation" ":") ;
  mObject.mProperty_mErrorLocation.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mValueList" ":") ;
  mObject.mProperty_mValueList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_checkpicList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_checkpicList * operand = (cCollectionElement_checkpicList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_checkpicList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList::GALGAS_checkpicList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList::GALGAS_checkpicList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkpicList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                    const GALGAS_lstringlist & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_checkpicList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_checkpicList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_checkpicList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_location & in_mErrorLocation,
                                                     const GALGAS_lstringlist & in_mValueList
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_checkpicList * p = nullptr ;
  macroMyNew (p, cCollectionElement_checkpicList (in_mErrorLocation,
                                                  in_mValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::addAssign_operation (const GALGAS_location & inOperand0,
                                               const GALGAS_lstringlist & inOperand1
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

void GALGAS_checkpicList::setter_append (const GALGAS_location inOperand0,
                                         const GALGAS_lstringlist inOperand1,
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

void GALGAS_checkpicList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                const GALGAS_lstringlist inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_checkpicList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_checkpicList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                const GALGAS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_checkpicList) ;
        outOperand0 = p->mObject.mProperty_mErrorLocation ;
        outOperand1 = p->mObject.mProperty_mValueList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::setter_popFirst (GALGAS_location & outOperand0,
                                           GALGAS_lstringlist & outOperand1,
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

void GALGAS_checkpicList::setter_popLast (GALGAS_location & outOperand0,
                                          GALGAS_lstringlist & outOperand1,
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

void GALGAS_checkpicList::method_first (GALGAS_location & outOperand0,
                                        GALGAS_lstringlist & outOperand1,
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

void GALGAS_checkpicList::method_last (GALGAS_location & outOperand0,
                                       GALGAS_lstringlist & outOperand1,
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

GALGAS_checkpicList GALGAS_checkpicList::add_operation (const GALGAS_checkpicList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_checkpicList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_checkpicList result = GALGAS_checkpicList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_checkpicList result = GALGAS_checkpicList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_checkpicList result = GALGAS_checkpicList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::plusAssign_operation (const GALGAS_checkpicList inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::setter_setMErrorLocationAtIndex (GALGAS_location inOperand,
                                                           GALGAS_uint inIndex,
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

GALGAS_location GALGAS_checkpicList::getter_mErrorLocationAtIndex (const GALGAS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    result = p->mObject.mProperty_mErrorLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::setter_setMValueListAtIndex (GALGAS_lstringlist inOperand,
                                                       GALGAS_uint inIndex,
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

GALGAS_lstringlist GALGAS_checkpicList::getter_mValueListAtIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_checkpicList::cEnumerator_checkpicList (const GALGAS_checkpicList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element cEnumerator_checkpicList::current (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_checkpicList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject.mProperty_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_checkpicList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject.mProperty_mValueList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @checkpicList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkpicList ("checkpicList",
                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkpicList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkpicList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkpicList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkpicList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_checkpicList result ;
  const GALGAS_checkpicList * p = (const GALGAS_checkpicList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_checkpicList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkpicList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@pic18RegisterComparison mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_pic_31__38_RegisterComparison & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparison temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      result_outResult = GALGAS_string ("!=") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      result_outResult = GALGAS_string ("==") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      result_outResult = GALGAS_string (">=") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      result_outResult = GALGAS_string (">") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      result_outResult = GALGAS_string ("<=") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      result_outResult = GALGAS_string ("<") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@conditional_branch condition'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_condition (const GALGAS_conditional_5F_branch & inObject,
                                         Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_conditional_5F_branch temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      result_outResult = GALGAS_string ("Z") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      result_outResult = GALGAS_string ("NZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      result_outResult = GALGAS_string ("N") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      result_outResult = GALGAS_string ("NN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      result_outResult = GALGAS_string ("C") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      result_outResult = GALGAS_string ("NC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      result_outResult = GALGAS_string ("OV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      result_outResult = GALGAS_string ("NOV") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@pic18InstructionWithNoOperandKind assemblyCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_assemblyCode (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                            Compiler *
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_InstructionWithNoOperandKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT:
    {
      result_outResult = GALGAS_string ("CLRWDT") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW:
    {
      result_outResult = GALGAS_string ("DAW") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP:
    {
      result_outResult = GALGAS_string ("NOP") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP:
    {
      result_outResult = GALGAS_string ("POP") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH:
    {
      result_outResult = GALGAS_string ("PUSH") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET:
    {
      result_outResult = GALGAS_string ("RESET") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP:
    {
      result_outResult = GALGAS_string ("SLEEP") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@FA_instruction_base_code mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_FA_5F_instruction_5F_base_5F_code & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_FA_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      result_outResult = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      result_outResult = GALGAS_string ("CPFSEQ") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      result_outResult = GALGAS_string ("CPFSGT") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      result_outResult = GALGAS_string ("CPFSLT") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      result_outResult = GALGAS_string ("MOVWF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      result_outResult = GALGAS_string ("MULWF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      result_outResult = GALGAS_string ("NEGF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      result_outResult = GALGAS_string ("SETF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      result_outResult = GALGAS_string ("TSTFSZ") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@bit_oriented_op mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_bit_5F_oriented_5F_op & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      result_outResult = GALGAS_string ("BCF") ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      result_outResult = GALGAS_string ("BSF") ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BTG:
    {
      result_outResult = GALGAS_string ("BTG") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@conditional_branch mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_conditional_5F_branch & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_conditional_5F_branch temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      result_outResult = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      result_outResult = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      result_outResult = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      result_outResult = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      result_outResult = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      result_outResult = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      result_outResult = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      result_outResult = GALGAS_string ("BNOV") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@literal_instruction_opcode mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_literal_5F_instruction_5F_opcode & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      result_outResult = GALGAS_string ("ADDLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      result_outResult = GALGAS_string ("ANDLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      result_outResult = GALGAS_string ("IORLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      result_outResult = GALGAS_string ("MOVLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MULLW:
    {
      result_outResult = GALGAS_string ("MULLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      result_outResult = GALGAS_string ("SUBLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      result_outResult = GALGAS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@tableAccessOption mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_tableAccessOption & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_tableAccessOption temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      result_outResult = GALGAS_string ("*") ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      result_outResult = GALGAS_string ("*+") ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      result_outResult = GALGAS_string ("*-") ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      result_outResult = GALGAS_string ("+*") ;
    }
    break ;
  }
//---
  return result_outResult ;
}






//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument_interruptDefinitionList,
                                                                         GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_routineDefinitionList,
                                                                         GALGAS_pic_31__38_MacroDefinitionList & ioArgument_ioMacroDefinitionList,
                                                                         GALGAS_lstringlist & ioArgument_unusedRoutineList,
                                                                         GALGAS_lstringlist & ioArgument_inlinedRoutineList,
                                                                         GALGAS_ramDefinitionList & ioArgument_ramDefinitionList,
                                                                         GALGAS_lstringlist & ioArgument_unusedRegisterList,
                                                                         GALGAS_configDefinitionList & ioArgument_configDefinitionList,
                                                                         GALGAS_constantDefinitionList & ioArgument_constantDefinitionList,
                                                                         GALGAS_checkpicList & ioArgument_ioCheckpicList,
                                                                         GALGAS_dataList & ioArgument_dataList,
                                                                         GALGAS_bool & ioArgument_needsComputedGoto_32_,
                                                                         GALGAS_bool & ioArgument_needsComputedGoto_34_,
                                                                         C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 45)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_unusedRegister_1261 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        ioArgument_unusedRegisterList.addAssign_operation (var_unusedRegister_1261  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 49)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GALGAS_lstring var_unusedRoutine_1428 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        ioArgument_unusedRoutineList.addAssign_operation (var_unusedRoutine_1428  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 58)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        GALGAS_lstring var_inlinedRoutine_1578 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        ioArgument_inlinedRoutineList.addAssign_operation (var_inlinedRoutine_1578  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 66)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas", 91)) ;
      GALGAS_lstring var_includedFilePath_2223 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
      cGrammar_pic_31__38__5F_include_5F_grammar::_performSourceFileParsing_ (inCompiler, var_includedFilePath_2223, ioArgument_interruptDefinitionList, ioArgument_routineDefinitionList, ioArgument_ioMacroDefinitionList, ioArgument_unusedRoutineList, ioArgument_inlinedRoutineList, ioArgument_ramDefinitionList, ioArgument_unusedRegisterList, ioArgument_configDefinitionList, ioArgument_constantDefinitionList, ioArgument_ioCheckpicList, ioArgument_dataList, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 93)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      GALGAS_lstring var_macroName_2696 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      GALGAS_lstringlist var_constantNameList_2735 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 112)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        GALGAS_lstring var_constantName_2792 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        var_constantNameList_2735.addAssign_operation (var_constantName_2792  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 115)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      GALGAS_labelMap var_labelMap_2907 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("pic18_syntax.galgas", 121)) ;
      GALGAS_pic_31__38_InstructionList var_instructionList_2977 ;
      nt_instruction_5F_list_ (var_instructionList_2977, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_, var_labelMap_2907, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
      ioArgument_ioMacroDefinitionList.addAssign_operation (var_macroName_2696, var_constantNameList_2735, var_instructionList_2977  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 128)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 45)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas", 91)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 45)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas", 91)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GALGAS_checkpicList & ioArgument_ioList,
                                                                                           C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  GALGAS_location var_loc_3313 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 140)) ;
  GALGAS_lstringlist var_valueList_3340 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 141)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_s_3420 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    var_valueList_3340.addAssign_operation (var_s_3420  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 144)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioList.addAssign_operation (var_loc_3313, var_valueList_3340  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 148)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GALGAS_dataList & ioArgument_ioDataList,
                                                                                       C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    appendFixItActions (fixItArray0, kFixItReplace, GALGAS_string ("data16")) ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 156)), GALGAS_string ("obsolete keyword"), fixItArray0  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 156)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_dataName_3745 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  GALGAS_immediatExpressionList var_valueList_3790 = GALGAS_immediatExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 162)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_immediatExpression var_expression_3866 ;
    nt_immediate_5F_expression_ (var_expression_3866, inCompiler) ;
    var_valueList_3790.addAssign_operation (var_expression_3866, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 165))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 165)) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 167)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
  ioArgument_ioDataList.addAssign_operation (var_dataName_3745, var_valueList_3790, GALGAS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_parse (inCompiler) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 167)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 167)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GALGAS_dataList & ioArgument_ioDataList,
                                                                                       C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  GALGAS_lstring var_dataName_4140 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  GALGAS_immediatExpressionList var_valueList_4185 = GALGAS_immediatExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 179)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_immediatExpression var_expression_4261 ;
    nt_immediate_5F_expression_ (var_expression_4261, inCompiler) ;
    var_valueList_4185.addAssign_operation (var_expression_4261, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 182))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 182)) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
  ioArgument_ioDataList.addAssign_operation (var_dataName_4140, var_valueList_4185, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_parse (inCompiler) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GALGAS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                                                                        GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                        GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                        GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                        C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 198)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_9 (inCompiler)) {
    case 2: {
      GALGAS_pic_31__38_PiccoloSimpleInstruction var_instruction_4742 ;
      nt_simple_5F_instruction_ (var_instruction_4742, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_4742  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 202)) ;
    } break ;
    case 3: {
      GALGAS_pic_31__38_PiccoloInstruction var_instruction_4841 ;
      nt_structured_5F_instruction_ (var_instruction_4841, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_4841  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 209)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                                                            GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                            GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                            C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  GALGAS_lstring var_interruptName_5230 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 221)) ;
  GALGAS_bool var_isFast_5256 ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
    var_isFast_5256 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 226)) ;
    var_isFast_5256 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  GALGAS_labelMap var_labelMap_5353 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("pic18_syntax.galgas", 230)) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_5397 ;
  nt_instruction_5F_list_ (var_instructionList_5397, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5353, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
  ioArgument_ioInterruptDefinitionList.addAssign_operation (var_interruptName_5230, var_isFast_5256, var_instructionList_5397, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 237))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 237)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 221)) ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 226)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 221)) ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 226)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                          GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                          GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  GALGAS_bool var_noreturn_5793 ;
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
    var_noreturn_5793 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 250)) ;
    var_noreturn_5793 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  GALGAS_lstring var_routineName_5919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 254)) ;
  GALGAS_luint var_requiredBank_5971 ;
  GALGAS_luint var_returnedBank_5997 ;
  GALGAS_bool var_preservesBank_6022 ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
    var_requiredBank_5971 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 259)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 259)) ;
    var_returnedBank_5997 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 260)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 260)) ;
    var_preservesBank_6022 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 266)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_noreturn_5793.boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 268)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 268)) ;
        }
      }
      var_preservesBank_6022 = GALGAS_bool (true) ;
      var_requiredBank_5971 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 271)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 271)) ;
      var_returnedBank_5997 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 272)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 272)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      var_requiredBank_5971 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 275)) ;
      var_preservesBank_6022 = GALGAS_bool (false) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
        var_returnedBank_5997 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 278)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 278)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        var_returnedBank_5997 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 281)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_noreturn_5793.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 283)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 283)) ;
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      var_returnedBank_5997 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 288)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_noreturn_5793.boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 290)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 290)) ;
        }
      }
      var_preservesBank_6022 = GALGAS_bool (false) ;
      var_requiredBank_5971 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 293)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 293)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  GALGAS_labelMap var_labelMap_7208 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("pic18_syntax.galgas", 297)) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_7274 ;
  nt_instruction_5F_list_ (var_instructionList_7274, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7208, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
  ioArgument_ioRoutineDefinitionList.addAssign_operation (var_routineName_5919, var_requiredBank_5971, var_returnedBank_5997, var_preservesBank_6022, var_noreturn_5793, var_instructionList_7274, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 304))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 304)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 250)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 254)) ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 266)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 275)) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 281)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 288)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 250)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 254)) ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 266)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 275)) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 281)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 288)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GALGAS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 311)) ;
  GALGAS_pic_31__38_ConditionExpression var_condition_7652 ;
  nt_condition_5F_factor_ (var_condition_7652, inCompiler) ;
  outArgument_outCondition = GALGAS_pic_31__38_NegateCondition::constructor_new (var_condition_7652  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 313)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 311)) ;
  nt_condition_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 311)) ;
  nt_condition_5F_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GALGAS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_ (GALGAS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    GALGAS_bool var_isIncrement_8037 ;
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 330)) ;
      var_isIncrement_8037 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 332)) ;
      var_isIncrement_8037 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression_8172 ;
    nt_register_5F_parsing_ (var_registerExpression_8172, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_8205 ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_8205 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      var_W_5F_isDestination_8205 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString_8349 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
    GALGAS_string var_condition_8381 = var_conditionString_8349.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 342)) ;
    GALGAS_bool var_branchIfZero_8448 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_condition_8381.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_branchIfZero_8448 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_condition_8381.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_branchIfZero_8448 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_8349.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_8349.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 349)).add_operation (GALGAS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 349)), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 349)) ;
        var_branchIfZero_8448.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GALGAS_pic_31__38_IncDecRegisterInCondition::constructor_new (var_registerExpression_8172, var_isIncrement_8037, var_W_5F_isDestination_8205, var_branchIfZero_8448  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 353)) ;
  } break ;
  case 2: {
    GALGAS_registerExpression var_registerExpression_8905 ;
    nt_register_5F_parsing_ (var_registerExpression_8905, inCompiler) ;
    GALGAS_pic_31__38_RegisterComparison var_comparison_8957 ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      var_comparison_8957 = GALGAS_pic_31__38_RegisterComparison::constructor_notEqual (SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      var_comparison_8957 = GALGAS_pic_31__38_RegisterComparison::constructor_equal (SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      var_comparison_8957 = GALGAS_pic_31__38_RegisterComparison::constructor_lowerOrEqual (SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      var_comparison_8957 = GALGAS_pic_31__38_RegisterComparison::constructor_greaterOrEqual (SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      var_comparison_8957 = GALGAS_pic_31__38_RegisterComparison::constructor_lower (SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      var_comparison_8957 = GALGAS_pic_31__38_RegisterComparison::constructor_greater (SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outCondition = GALGAS_pic_31__38_RegisterComparisonCondition::constructor_new (var_registerExpression_8905, var_comparison_8957  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 374)) ;
  } break ;
  case 3: {
    GALGAS_registerExpression var_registerExpression_9563 ;
    nt_register_5F_parsing_ (var_registerExpression_9563, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 379)) ;
    GALGAS_bitNumberExpression var_bitNumberExpression_9620 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_9620, inCompiler) ;
    outArgument_outCondition = GALGAS_pic_31__38_BitTestInStructuredCondition::constructor_new (var_registerExpression_9563, var_bitNumberExpression_9620  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 381)) ;
  } break ;
  case 4: {
    GALGAS_registerExpression var_registerName_9793 ;
    nt_register_5F_parsing_ (var_registerName_9793, inCompiler) ;
    GALGAS_lstring var_conditionString_9837 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
    GALGAS_string var_condition_9869 = var_conditionString_9837.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 388)) ;
    GALGAS_bool var_branchIfZero_9936 ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, var_condition_9869.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_branchIfZero_9936 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_condition_9869.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_branchIfZero_9936 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_conditionString_9837.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_9837.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 395)).add_operation (GALGAS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 395)), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 395)) ;
        var_branchIfZero_9936.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GALGAS_pic_31__38_RegisterTestCondition::constructor_new (var_registerName_9793, var_branchIfZero_9936  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 399)) ;
  } break ;
  case 5: {
    GALGAS_conditional_5F_branch var_conditional_5F_branch_10329 ;
    GALGAS_lstring var_conditionString_10379 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
    GALGAS_string var_condition_10411 = var_conditionString_10379.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 403)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsEqual, var_condition_10411.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        var_conditional_5F_branch_10329 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("pic18_syntax.galgas", 405)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, var_condition_10411.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_conditional_5F_branch_10329 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("pic18_syntax.galgas", 407)) ;
        }
      }
      if (kBoolFalse == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, var_condition_10411.objectCompare (GALGAS_string ("NN"))).boolEnum () ;
          if (kBoolTrue == test_8) {
            var_conditional_5F_branch_10329 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("pic18_syntax.galgas", 409)) ;
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsEqual, var_condition_10411.objectCompare (GALGAS_string ("N"))).boolEnum () ;
            if (kBoolTrue == test_9) {
              var_conditional_5F_branch_10329 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("pic18_syntax.galgas", 411)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_condition_10411.objectCompare (GALGAS_string ("C"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_conditional_5F_branch_10329 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("pic18_syntax.galgas", 413)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsEqual, var_condition_10411.objectCompare (GALGAS_string ("NC"))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  var_conditional_5F_branch_10329 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("pic18_syntax.galgas", 415)) ;
                }
              }
              if (kBoolFalse == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsEqual, var_condition_10411.objectCompare (GALGAS_string ("OV"))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    var_conditional_5F_branch_10329 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("pic18_syntax.galgas", 417)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  enumGalgasBool test_13 = kBoolTrue ;
                  if (kBoolTrue == test_13) {
                    test_13 = GALGAS_bool (kIsEqual, var_condition_10411.objectCompare (GALGAS_string ("NOV"))).boolEnum () ;
                    if (kBoolTrue == test_13) {
                      var_conditional_5F_branch_10329 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("pic18_syntax.galgas", 419)) ;
                    }
                  }
                  if (kBoolFalse == test_13) {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (var_conditionString_10379.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_10379.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 421)).add_operation (GALGAS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 421)), fixItArray14  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 421)) ;
                    var_conditional_5F_branch_10329.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    outArgument_outCondition = GALGAS_pic_31__38_BccInStructuredCondition::constructor_new (var_conditionString_10379.readProperty_location (), var_conditional_5F_branch_10329  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 425)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 330)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 332)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 379)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 330)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 332)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 379)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GALGAS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                             C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 433)) ;
  nt_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 437)) ;
      GALGAS_pic_31__38_ConditionExpression var_c_11659 ;
      nt_condition_5F_term_ (var_c_11659, inCompiler) ;
      GALGAS_pic_31__38_ConditionExpression var_rc_11695 = GALGAS_pic_31__38_NegateCondition::constructor_new (var_c_11659  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 439)) ;
      GALGAS_pic_31__38_ConditionExpression var_lc_11767 = GALGAS_pic_31__38_NegateCondition::constructor_new (outArgument_outCondition  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 440)) ;
      outArgument_outCondition = GALGAS_pic_31__38_NegateCondition::constructor_new (GALGAS_pic_31__38_AndCondition::constructor_new (var_lc_11767, var_rc_11695  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 441))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 441)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 443)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 433)) ;
  nt_condition_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 437)) ;
      nt_condition_5F_term_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 443)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 433)) ;
  nt_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 437)) ;
      nt_condition_5F_term_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 443)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GALGAS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                       C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 453)) ;
      GALGAS_pic_31__38_ConditionExpression var_c_12153 ;
      nt_condition_5F_factor_ (var_c_12153, inCompiler) ;
      outArgument_outCondition = GALGAS_pic_31__38_AndCondition::constructor_new (outArgument_outCondition, var_c_12153  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 455)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 453)) ;
      nt_condition_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 453)) ;
      nt_condition_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
  outArgument_outBlockTermination = GALGAS_exitBlockTerminationForBlockInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 464))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 464)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GALGAS_lstring var_nextBlockName_12656 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
  outArgument_outBlockTermination = GALGAS_gotoTerminationForBlockInstruction::constructor_new (var_nextBlockName_12656  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 472)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GALGAS_location var_location_12923 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 479)) ;
  GALGAS_pic_31__38_ConditionExpression var_condition_13006 ;
  nt_condition_5F_expression_ (var_condition_13006, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 481)) ;
  GALGAS_abstractBlockTerminationForBlockInstruction var_terminationIfTrue_13096 ;
  nt_block_5F_termination_ (var_terminationIfTrue_13096, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 483)) ;
  GALGAS_abstractBlockTerminationForBlockInstruction var_terminationIfFalse_13194 ;
  nt_block_5F_termination_ (var_terminationIfFalse_13194, inCompiler) ;
  outArgument_outBlockTermination = GALGAS_testTerminationForBlockInstruction::constructor_new (var_condition_13006, var_terminationIfTrue_13096, var_terminationIfFalse_13194, var_location_12923  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 485)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 481)) ;
  nt_block_5F_termination_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 483)) ;
  nt_block_5F_termination_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 481)) ;
  nt_block_5F_termination_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 483)) ;
  nt_block_5F_termination_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument_outInstruction,
                                                                                               GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                               GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                               GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                               C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 497)) ;
    GALGAS_lstring var_switchLabel_13602 ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
      var_switchLabel_13602 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 500)) ;
    } break ;
    case 2: {
      var_switchLabel_13602 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_switchLabel_13602, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 503)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_13757 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 505)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    GALGAS_pic_31__38_SwitchInstructionCaseList var_caseList_13842 = GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 507)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 509)) ;
      GALGAS_lstring var_caseLabel_13899 ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
        var_caseLabel_13899 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 512)) ;
      } break ;
      case 2: {
        var_caseLabel_13899 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 514)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_switchLabel_13602.readProperty_string ().objectCompare (var_caseLabel_13899.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string temp_2 ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_switchLabel_13602.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = var_switchLabel_13602.readProperty_string () ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GALGAS_string ("empty") ;
          }
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_caseLabel_13899.readProperty_location (), GALGAS_string ("'case' label does not match 'switch' label, it should be ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 517)), fixItArray4  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 517)) ;
        }
      }
      GALGAS_location var_caseLocation_14260 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 520)) ;
      GALGAS_pic_31__38_CaseExpressionList var_caseExpressionList_14300 = GALGAS_pic_31__38_CaseExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 521)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_pic_31__38__5F_syntax_26 (inCompiler)) {
        case 1: {
          GALGAS_immediatExpression var_caseExpression_14443 ;
          nt_immediate_5F_expression_ (var_caseExpression_14443, inCompiler) ;
          var_caseExpressionList_14300.addAssign_operation (GALGAS_pic_31__38_SimpleConstantCaseItem::constructor_new (var_caseExpression_14443, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 525))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 525))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 525)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 527)) ;
          GALGAS_immediatExpression var_minExpression_14643 ;
          nt_immediate_5F_expression_ (var_minExpression_14643, inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 529)) ;
          GALGAS_immediatExpression var_maxExpression_14729 ;
          nt_immediate_5F_expression_ (var_maxExpression_14729, inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
          var_caseExpressionList_14300.addAssign_operation (GALGAS_pic_31__38_IntervalCaseItem::constructor_new (var_minExpression_14643, var_maxExpression_14729, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 532))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 532))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 532)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 535)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 537)) ;
      GALGAS_pic_31__38_InstructionList var_instructionList_14983 ;
      nt_instruction_5F_list_ (var_instructionList_14983, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_caseList_13842.addAssign_operation (var_caseLocation_14260, var_caseExpressionList_14300, var_instructionList_14983  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 543)) ;
      if (select_pic_31__38__5F_syntax_23 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    GALGAS_pic_31__38_InstructionList var_elseInstructionList_15199 ;
    GALGAS_location var_elseLocation_15237 ;
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLocation_15237 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 549)) ;
      var_elseInstructionList_15199 = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 550)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 552)) ;
      GALGAS_lstring var_elseLabel_15397 ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
        var_elseLabel_15397 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 555)) ;
      } break ;
      case 2: {
        var_elseLabel_15397 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 557)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_switchLabel_13602.readProperty_string ().objectCompare (var_elseLabel_15397.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_switchLabel_13602.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = var_switchLabel_13602.readProperty_string () ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string ("empty") ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_elseLabel_15397.readProperty_location (), GALGAS_string ("'else' label does not match 'switch' label, it should be ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 560)), fixItArray9  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 560)) ;
        }
      }
      var_elseLocation_15237 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 563)) ;
      nt_instruction_5F_list_ (var_elseInstructionList_15199, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_switch::constructor_new (var_instructionLocation_13757, var_caseList_13842, var_elseLocation_15237, var_elseInstructionList_15199  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 570)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 575)) ;
    GALGAS_lstring var_endSwitchLabel_16089 ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
      var_endSwitchLabel_16089 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 578)) ;
    } break ;
    case 2: {
      var_endSwitchLabel_16089 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 580)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsNotEqual, var_switchLabel_13602.readProperty_string ().objectCompare (var_endSwitchLabel_16089.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string temp_11 ;
        const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_switchLabel_13602.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          temp_11 = var_switchLabel_13602.readProperty_string () ;
        }else if (kBoolFalse == test_12) {
          temp_11 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_switchLabel_13602.readProperty_location (), GALGAS_string ("'end' label does not match 'switch' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 583)), fixItArray13  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 583)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    GALGAS_location var_instructionLocation_16468 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 588)) ;
    GALGAS_lstring var_startBlockName_16536 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    GALGAS_pic_31__38_BlockInstructionBlockList var_blockList_16567 = GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 591)) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      GALGAS_lstring var_blockName_16666 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 594)) ;
      GALGAS_pic_31__38_InstructionList var_instructionList_16746 ;
      nt_instruction_5F_list_ (var_instructionList_16746, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      GALGAS_location var_endOfBlock_16875 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 601)) ;
      GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination_16979 ;
      nt_block_5F_termination_ (var_blockTermination_16979, inCompiler) ;
      var_blockList_16567.addAssign_operation (var_blockName_16666, var_instructionList_16746, var_blockTermination_16979, var_endOfBlock_16875  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 603)) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_block::constructor_new (var_instructionLocation_16468, var_startBlockName_16536, var_blockList_16567, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 610))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 606)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 613)) ;
    GALGAS_lstring var_doLabel_17277 ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
      var_doLabel_17277 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 616)) ;
    } break ;
    case 2: {
      var_doLabel_17277 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_17277, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 619)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_17416 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 621)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    GALGAS_lstring var_constantName_17483 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 624)) ;
    GALGAS_immediatExpression var_lowBoundExpression_17556 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_17556, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 626)) ;
    GALGAS_immediatExpression var_highBoundExpression_17637 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_17637, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 628)) ;
    GALGAS_pic_31__38_InstructionList var_instructionList_17721 ;
    nt_instruction_5F_list_ (var_instructionList_17721, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_repetitionStatique::constructor_new (var_instructionLocation_17416, var_constantName_17483, var_lowBoundExpression_17556, var_highBoundExpression_17637, var_instructionList_17721, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 640))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 634)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 642)) ;
    GALGAS_lstring var_endDoLabel_18057 ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
      var_endDoLabel_18057 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 645)) ;
    } break ;
    case 2: {
      var_endDoLabel_18057 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 647)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (kIsNotEqual, var_doLabel_17277.readProperty_string ().objectCompare (var_endDoLabel_18057.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_string temp_16 ;
        const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_doLabel_17277.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          temp_16 = var_doLabel_17277.readProperty_string () ;
        }else if (kBoolFalse == test_17) {
          temp_16 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (var_endDoLabel_18057.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 650)), fixItArray18  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 650)) ;
      }
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    GALGAS_luint var_bankIndex_18415 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (var_bankIndex_18415.readProperty_location (), var_bankIndex_18415.readProperty_uint ()  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 656)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_checknobank::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 659))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 659)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
      TC_Array <C_FixItDescription> fixItArray19 ;
      appendFixItActions (fixItArray19, kFixItReplace, GALGAS_string ("ldata16ptr")) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 663)), GALGAS_string ("obsolete keyword"), fixItArray19  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 663)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 665)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_18776 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 667)) ;
    GALGAS_lstring var_dataName_18835 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    GALGAS_luint var_dataIndex_18878 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::constructor_new (var_instructionLocation_18776, var_dataName_18835, var_dataIndex_18878  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 672)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    GALGAS_location var_instructionLocation_19035 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 675)) ;
    GALGAS_lstring var_dataName_19094 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    GALGAS_luint var_dataIndex_19137 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::constructor_new (var_instructionLocation_19035, var_dataName_19094, var_dataIndex_19137  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 680)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    GALGAS_location var_instructionLocation_19291 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 683)) ;
    GALGAS_immediatExpression var_expression_19380 ;
    nt_immediate_5F_expression_ (var_expression_19380, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_LTBLPTR::constructor_new (var_instructionLocation_19291, var_expression_19380  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 685)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    GALGAS_location var_instructionLocation_19516 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 688)) ;
    GALGAS_luint var_bank_19579 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 689)) ;
    GALGAS_bool var_warningOnUselessBanksel_19598 ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19598 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 695)) ;
      var_warningOnUselessBanksel_19598 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_banksel::constructor_new (var_instructionLocation_19516, var_bank_19579, var_warningOnUselessBanksel_19598  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 698)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    GALGAS_location var_instructionLocation_19888 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 701)) ;
    GALGAS_registerExpression var_register_19973 ;
    nt_register_5F_parsing_ (var_register_19973, inCompiler) ;
    GALGAS_bool var_warningOnUselessBanksel_19996 ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19996 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 708)) ;
      var_warningOnUselessBanksel_19996 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::constructor_new (var_instructionLocation_19888, var_register_19973, var_warningOnUselessBanksel_19996  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 711)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_nobanksel::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 714))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 714)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    GALGAS_location var_instructionLocation_20390 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 717)) ;
    GALGAS_registerExpression var_register_20475 ;
    nt_register_5F_parsing_ (var_register_20475, inCompiler) ;
    GALGAS_pic_31__38_InstructionList var_instructionList_20540 ;
    nt_instruction_5F_list_ (var_instructionList_20540, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (var_instructionLocation_20390, var_register_20475, var_instructionList_20540, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 729))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 725)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    GALGAS_location var_instructionLocation_20830 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 733)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 734)) ;
    GALGAS_immediatExpression var_sizeExpression_20907 ;
    nt_immediate_5F_expression_ (var_sizeExpression_20907, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      GALGAS_immediatExpressionList var_argumentList_20965 = GALGAS_immediatExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 739)) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        GALGAS_immediatExpression var_expression_21064 ;
        nt_immediate_5F_expression_ (var_expression_21064, inCompiler) ;
        var_argumentList_20965.addAssign_operation (var_expression_21064, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 742))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 742)) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 744)) ;
        }else{
          repeatFlag_20 = false ;
        }
      }
      outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::constructor_new (var_instructionLocation_20830, var_sizeExpression_20907, var_argumentList_20965, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 746)) ;
      ioArgument_ioNeedsComputedGoto_32_ = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      GALGAS_lstringlist var_argumentList_21377 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 754)) ;
      bool repeatFlag_21 = true ;
      while (repeatFlag_21) {
        GALGAS_lstring var_targetRoutine_21464 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        var_argumentList_21377.addAssign_operation (var_targetRoutine_21464  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 757)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 759)) ;
        }else{
          repeatFlag_21 = false ;
        }
      }
      outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::constructor_new (var_instructionLocation_20830, var_sizeExpression_20907, var_argumentList_21377, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 761)) ;
      ioArgument_ioNeedsComputedGoto_32_ = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      GALGAS_lstringlist var_argumentList_21788 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 769)) ;
      bool repeatFlag_22 = true ;
      while (repeatFlag_22) {
        GALGAS_lstring var_targetRoutine_21875 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        var_argumentList_21788.addAssign_operation (var_targetRoutine_21875  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 772)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 774)) ;
        }else{
          repeatFlag_22 = false ;
        }
      }
      outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::constructor_new (var_instructionLocation_20830, var_sizeExpression_20907, var_argumentList_21788, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 776)) ;
      ioArgument_ioNeedsComputedGoto_34_ = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      GALGAS_lstringlist var_argumentList_22201 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 784)) ;
      bool repeatFlag_23 = true ;
      while (repeatFlag_23) {
        GALGAS_lstring var_targetRoutine_22288 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        var_argumentList_22201.addAssign_operation (var_targetRoutine_22288  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 787)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 789)) ;
        }else{
          repeatFlag_23 = false ;
        }
      }
      outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::constructor_new (var_instructionLocation_20830, var_sizeExpression_20907, var_argumentList_22201, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 791)) ;
      ioArgument_ioNeedsComputedGoto_34_ = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 799)) ;
    GALGAS_lstring var_foreverLabel_22628 ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
      var_foreverLabel_22628 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 802)) ;
    } break ;
    case 2: {
      var_foreverLabel_22628 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_22628, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 805)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_22787 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 807)) ;
    GALGAS_pic_31__38_InstructionList var_instructionList_22858 ;
    nt_instruction_5F_list_ (var_instructionList_22858, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 813)) ;
    GALGAS_lstring var_endForeverLabel_22978 ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
      var_endForeverLabel_22978 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 816)) ;
    } break ;
    case 2: {
      var_endForeverLabel_22978 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 818)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = GALGAS_bool (kIsNotEqual, var_foreverLabel_22628.readProperty_string ().objectCompare (var_endForeverLabel_22978.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_24) {
        GALGAS_string temp_25 ;
        const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, var_foreverLabel_22628.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_26) {
          temp_25 = var_foreverLabel_22628.readProperty_string () ;
        }else if (kBoolFalse == test_26) {
          temp_25 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (var_endForeverLabel_22978.readProperty_location (), GALGAS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_25, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 821)), fixItArray27  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 821)) ;
      }
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (var_instructionLocation_22787, var_instructionList_22858, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 827))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 824)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    GALGAS_location var_instructionLocation_23498 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 831)) ;
    GALGAS_registerExpression var_registerName_23563 ;
    nt_register_5F_parsing_ (var_registerName_23563, inCompiler) ;
    GALGAS_if_5F_semi_5F_colon_5F_op var_opCode_23602 ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      var_opCode_23602 = GALGAS_if_5F_semi_5F_colon_5F_op::constructor_CPFSEQ (SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      var_opCode_23602 = GALGAS_if_5F_semi_5F_colon_5F_op::constructor_CPFSGT (SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      var_opCode_23602 = GALGAS_if_5F_semi_5F_colon_5F_op::constructor_CPFSLT (SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_conditionString_23836 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
      GALGAS_string var_condition_23870 = var_conditionString_23836.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 842)) ;
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_condition_23870.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_28) {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (var_conditionString_23836.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_condition_23870, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 844)).add_operation (GALGAS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 844)), fixItArray29  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 844)) ;
        }
      }
      var_opCode_23602 = GALGAS_if_5F_semi_5F_colon_5F_op::constructor_TSTFSZ (SOURCE_FILE ("pic18_syntax.galgas", 846)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 848)) ;
    GALGAS_pic_31__38_PiccoloSimpleInstruction var_instruction_24172 ;
    nt_simple_5F_instruction_ (var_instruction_24172, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::constructor_new (var_instructionLocation_23498, var_instruction_24172, var_opCode_23602, var_registerName_23563  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 850)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    GALGAS_location var_instructionLocation_24360 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 857)) ;
    GALGAS_registerExpression var_registerName_24425 ;
    GALGAS_bitNumberExpression var_bitNumber_24467 ;
    GALGAS_bool var_skipIfSet_24491 ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 862)) ;
      nt_register_5F_parsing_ (var_registerName_24425, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 864)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24467, inCompiler) ;
      var_skipIfSet_24491 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerName_24425, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 869)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24467, inCompiler) ;
      var_skipIfSet_24491 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 873)) ;
    GALGAS_pic_31__38_PiccoloSimpleInstruction var_instruction_24827 ;
    nt_simple_5F_instruction_ (var_instruction_24827, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::constructor_new (var_instructionLocation_24360, var_instruction_24827, var_skipIfSet_24491, var_registerName_24425, var_bitNumber_24467  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 875)) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    GALGAS_location var_instructionLocation_25034 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 884)) ;
    GALGAS_bool var_increment_25085 ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 887)) ;
      var_increment_25085 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 889)) ;
      var_increment_25085 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerName_25214 ;
    nt_register_5F_parsing_ (var_registerName_25214, inCompiler) ;
    GALGAS_bool var_w_5F_isTarget_25241 ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_25241 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      var_w_5F_isTarget_25241 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_bool var_skipIfZero_25353 ;
    GALGAS_lstring var_conditionString_25395 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    GALGAS_string var_condition_25427 = var_conditionString_25395.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 900)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = GALGAS_bool (kIsEqual, var_condition_25427.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_30) {
        var_skipIfZero_25353 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_30) {
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = GALGAS_bool (kIsEqual, var_condition_25427.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_31) {
          var_skipIfZero_25353 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_31) {
        TC_Array <C_FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (var_conditionString_25395.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_condition_25427, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 906)).add_operation (GALGAS_string ("' condition; it should be 'z' or 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 906)), fixItArray32  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 906)) ;
        var_skipIfZero_25353.drop () ; // Release error dropped variable
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 908)) ;
    GALGAS_pic_31__38_PiccoloSimpleInstruction var_instruction_25784 ;
    nt_simple_5F_instruction_ (var_instruction_25784, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::constructor_new (var_instructionLocation_25034, var_instruction_25784, var_increment_25085, var_skipIfZero_25353, var_registerName_25214, var_w_5F_isTarget_25241  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 910)) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 918)) ;
    GALGAS_lstring var_ifLabel_26003 ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
      var_ifLabel_26003 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 921)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 921)) ;
    } break ;
    case 2: {
      var_ifLabel_26003 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_26003, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 924)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_ (var_ifLabel_26003, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 932)) ;
    GALGAS_lstring var_endIfLabel_26307 ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
      var_endIfLabel_26307 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 935)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 935)) ;
    } break ;
    case 2: {
      var_endIfLabel_26307 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 937)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_33 = kBoolTrue ;
    if (kBoolTrue == test_33) {
      test_33 = GALGAS_bool (kIsNotEqual, var_ifLabel_26003.readProperty_string ().objectCompare (var_endIfLabel_26307.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_33) {
        GALGAS_string temp_34 ;
        const enumGalgasBool test_35 = GALGAS_bool (kIsNotEqual, var_ifLabel_26003.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_35) {
          temp_34 = var_ifLabel_26003.readProperty_string () ;
        }else if (kBoolFalse == test_35) {
          temp_34 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (var_endIfLabel_26307.readProperty_location (), GALGAS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_34, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 940)), fixItArray36  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 940)) ;
      }
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 944)) ;
    GALGAS_lstring var_doLabel_26649 ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
      var_doLabel_26649 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 947)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 947)) ;
    } break ;
    case 2: {
      var_doLabel_26649 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_26649, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 950)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_26798 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 952)) ;
    GALGAS_pic_31__38_InstructionList var_repeatedInstructionList_26869 ;
    nt_instruction_5F_list_ (var_repeatedInstructionList_26869, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GALGAS_location var_endOfRepeatedInstructionList_26978 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 958)) ;
    GALGAS_pic_31__38_DoWhilePartList var_whilePartList_27032 = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 959)) ;
    bool repeatFlag_37 = true ;
    while (repeatFlag_37) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 961)) ;
      GALGAS_lstring var_whileLabel_27125 ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
        var_whileLabel_27125 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 964)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 964)) ;
      } break ;
      case 2: {
        var_whileLabel_27125 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 966)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_38 = kBoolTrue ;
      if (kBoolTrue == test_38) {
        test_38 = GALGAS_bool (kIsNotEqual, var_doLabel_26649.readProperty_string ().objectCompare (var_whileLabel_27125.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_string temp_39 ;
          const enumGalgasBool test_40 = GALGAS_bool (kIsNotEqual, var_doLabel_26649.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_40) {
            temp_39 = var_doLabel_26649.readProperty_string () ;
          }else if (kBoolFalse == test_40) {
            temp_39 = GALGAS_string ("empty") ;
          }
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (var_whileLabel_27125.readProperty_location (), GALGAS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_39, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 969)), fixItArray41  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 969)) ;
        }
      }
      GALGAS_pic_31__38_ConditionExpression var_whileCondition_27490 ;
      nt_condition_5F_expression_ (var_whileCondition_27490, inCompiler) ;
      GALGAS_pic_31__38_InstructionList var_instructionList_27543 ;
      nt_instruction_5F_list_ (var_instructionList_27543, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_27032.addAssign_operation (var_whileCondition_27490, var_instructionList_27543, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 978))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 978)) ;
      if (select_pic_31__38__5F_syntax_50 (inCompiler) == 2) {
      }else{
        repeatFlag_37 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 981)) ;
    GALGAS_lstring var_endDoLabel_27759 ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
      var_endDoLabel_27759 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 984)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 984)) ;
    } break ;
    case 2: {
      var_endDoLabel_27759 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 986)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_42 = kBoolTrue ;
    if (kBoolTrue == test_42) {
      test_42 = GALGAS_bool (kIsNotEqual, var_doLabel_26649.readProperty_string ().objectCompare (var_endDoLabel_27759.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_42) {
        GALGAS_string temp_43 ;
        const enumGalgasBool test_44 = GALGAS_bool (kIsNotEqual, var_doLabel_26649.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_44) {
          temp_43 = var_doLabel_26649.readProperty_string () ;
        }else if (kBoolFalse == test_44) {
          temp_43 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray45 ;
        inCompiler->emitSemanticError (var_endDoLabel_27759.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_43, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 989)), fixItArray45  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 989)) ;
      }
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (var_instructionLocation_26798, var_repeatedInstructionList_26869, var_endOfRepeatedInstructionList_26978, var_whilePartList_27032  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 992)) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    GALGAS_location var_instructionLocation_28280 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1000)) ;
    GALGAS_luint var_occurrenceFactor_28343 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_MNOP::constructor_new (var_instructionLocation_28280, var_occurrenceFactor_28343  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1002)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    GALGAS_location var_instructionLocation_28477 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1005)) ;
    GALGAS_luint var_occurrenceFactor_28540 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_NOPBRA::constructor_new (var_instructionLocation_28477, var_occurrenceFactor_28540  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1007)) ;
  } break ;
  case 22: {
    GALGAS_conditional_5F_branch var_condition_28682 ;
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
      var_condition_28682 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
      var_condition_28682 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
      var_condition_28682 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
      var_condition_28682 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
      var_condition_28682 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
      var_condition_28682 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
      var_condition_28682 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
      var_condition_28682 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_29182 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1027)) ;
    GALGAS_lstring var_targetLabelName_29250 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMPCC::constructor_new (var_instructionLocation_29182, var_targetLabelName_29250, var_condition_28682, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1029)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    GALGAS_location var_instructionLocation_29454 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1036)) ;
    GALGAS_conditional_5F_branch var_conditional_5F_branch_29519 ;
    GALGAS_lstring var_conditionString_29569 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    GALGAS_string var_condition_29601 = var_conditionString_29569.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 1039)) ;
    enumGalgasBool test_46 = kBoolTrue ;
    if (kBoolTrue == test_46) {
      test_46 = GALGAS_bool (kIsEqual, var_condition_29601.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_46) {
        var_conditional_5F_branch_29519 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("pic18_syntax.galgas", 1041)) ;
      }
    }
    if (kBoolFalse == test_46) {
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = GALGAS_bool (kIsEqual, var_condition_29601.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_47) {
          var_conditional_5F_branch_29519 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("pic18_syntax.galgas", 1043)) ;
        }
      }
      if (kBoolFalse == test_47) {
        enumGalgasBool test_48 = kBoolTrue ;
        if (kBoolTrue == test_48) {
          test_48 = GALGAS_bool (kIsEqual, var_condition_29601.objectCompare (GALGAS_string ("NN"))).boolEnum () ;
          if (kBoolTrue == test_48) {
            var_conditional_5F_branch_29519 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("pic18_syntax.galgas", 1045)) ;
          }
        }
        if (kBoolFalse == test_48) {
          enumGalgasBool test_49 = kBoolTrue ;
          if (kBoolTrue == test_49) {
            test_49 = GALGAS_bool (kIsEqual, var_condition_29601.objectCompare (GALGAS_string ("N"))).boolEnum () ;
            if (kBoolTrue == test_49) {
              var_conditional_5F_branch_29519 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("pic18_syntax.galgas", 1047)) ;
            }
          }
          if (kBoolFalse == test_49) {
            enumGalgasBool test_50 = kBoolTrue ;
            if (kBoolTrue == test_50) {
              test_50 = GALGAS_bool (kIsEqual, var_condition_29601.objectCompare (GALGAS_string ("C"))).boolEnum () ;
              if (kBoolTrue == test_50) {
                var_conditional_5F_branch_29519 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("pic18_syntax.galgas", 1049)) ;
              }
            }
            if (kBoolFalse == test_50) {
              enumGalgasBool test_51 = kBoolTrue ;
              if (kBoolTrue == test_51) {
                test_51 = GALGAS_bool (kIsEqual, var_condition_29601.objectCompare (GALGAS_string ("NC"))).boolEnum () ;
                if (kBoolTrue == test_51) {
                  var_conditional_5F_branch_29519 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("pic18_syntax.galgas", 1051)) ;
                }
              }
              if (kBoolFalse == test_51) {
                enumGalgasBool test_52 = kBoolTrue ;
                if (kBoolTrue == test_52) {
                  test_52 = GALGAS_bool (kIsEqual, var_condition_29601.objectCompare (GALGAS_string ("OV"))).boolEnum () ;
                  if (kBoolTrue == test_52) {
                    var_conditional_5F_branch_29519 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("pic18_syntax.galgas", 1053)) ;
                  }
                }
                if (kBoolFalse == test_52) {
                  enumGalgasBool test_53 = kBoolTrue ;
                  if (kBoolTrue == test_53) {
                    test_53 = GALGAS_bool (kIsEqual, var_condition_29601.objectCompare (GALGAS_string ("NOV"))).boolEnum () ;
                    if (kBoolTrue == test_53) {
                      var_conditional_5F_branch_29519 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("pic18_syntax.galgas", 1055)) ;
                    }
                  }
                  if (kBoolFalse == test_53) {
                    TC_Array <C_FixItDescription> fixItArray54 ;
                    inCompiler->emitSemanticError (var_conditionString_29569.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_29569.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1057)).add_operation (GALGAS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1057)), fixItArray54  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1057)) ;
                    var_conditional_5F_branch_29519.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    GALGAS_lstring var_targetLabelName_30548 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMPCC::constructor_new (var_instructionLocation_29454, var_targetLabelName_30548, var_conditional_5F_branch_29519, GALGAS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1062)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    GALGAS_location var_instructionLocation_30762 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1069)) ;
    GALGAS_lstring var_targetLabelName_30830 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMP::constructor_new (var_instructionLocation_30762, var_targetLabelName_30830, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas", 1074))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1071)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    GALGAS_location var_instructionLocation_31045 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1077)) ;
    GALGAS_lstring var_targetLabelName_31113 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMP::constructor_new (var_instructionLocation_31045, var_targetLabelName_31113, GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("pic18_syntax.galgas", 1082))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1079)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    GALGAS_location var_instructionLocation_31313 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1085)) ;
    GALGAS_lstring var_targetLabelName_31381 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMP::constructor_new (var_instructionLocation_31313, var_targetLabelName_31381, GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("pic18_syntax.galgas", 1090))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1087)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    GALGAS_lstring var_macroName_31601 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    GALGAS_immediatExpressionList var_immediatExpressionList_31651 = GALGAS_immediatExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 1096)) ;
    bool repeatFlag_55 = true ;
    while (repeatFlag_55) {
      GALGAS_immediatExpression var_constantExpression_31744 ;
      nt_immediate_5F_expression_ (var_constantExpression_31744, inCompiler) ;
      var_immediatExpressionList_31651.addAssign_operation (var_constantExpression_31744, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1099))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1099)) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1101)) ;
      }else{
        repeatFlag_55 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_macro::constructor_new (var_macroName_31601.readProperty_location (), var_macroName_31601, var_immediatExpressionList_31651  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1104)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 497)) ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 509)) ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 514)) ;
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
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 527)) ;
          nt_immediate_5F_expression_parse (inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 529)) ;
          nt_immediate_5F_expression_parse (inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 535)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 537)) ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 552)) ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 557)) ;
      } break ;
      default:
        break ;
      }
      nt_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 575)) ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 580)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 594)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      nt_block_5F_termination_parse (inCompiler) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 613)) ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 624)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 626)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 628)) ;
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 642)) ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 647)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 665)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 689)) ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 695)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 708)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 734)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_immediate_5F_expression_parse (inCompiler) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 744)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 759)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 774)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 789)) ;
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
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 799)) ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 813)) ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 818)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 848)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 862)) ;
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 864)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 869)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 873)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 887)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 889)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 908)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 918)) ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 932)) ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 937)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 944)) ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_parse (inCompiler) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 961)) ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 966)) ;
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
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 981)) ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 986)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
  } break ;
  case 22: {
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    bool repeatFlag_8 = true ;
    while (repeatFlag_8) {
      nt_immediate_5F_expression_parse (inCompiler) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1101)) ;
      }else{
        repeatFlag_8 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 497)) ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 509)) ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 514)) ;
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
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 527)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 529)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 535)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 537)) ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 552)) ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 557)) ;
      } break ;
      default:
        break ;
      }
      nt_instruction_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 575)) ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 580)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 594)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      nt_block_5F_termination_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 613)) ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 624)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 626)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 628)) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 642)) ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 647)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 665)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 689)) ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 695)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 708)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 734)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_immediate_5F_expression_indexing (inCompiler) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 744)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 759)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 774)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 789)) ;
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
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 799)) ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 813)) ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 818)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 848)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 862)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 864)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 869)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 873)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 887)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 889)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 908)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 918)) ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 932)) ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 937)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 944)) ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 961)) ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 966)) ;
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
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 981)) ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 986)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
  } break ;
  case 22: {
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    bool repeatFlag_8 = true ;
    while (repeatFlag_8) {
      nt_immediate_5F_expression_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1101)) ;
      }else{
        repeatFlag_8 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_ (const GALGAS_lstring constinArgument_ifLabel,
                                                                                                     GALGAS_pic_31__38_PiccoloInstruction & outArgument_outInstruction,
                                                                                                     GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                     GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                     GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                                     C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_32258 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1121)) ;
  GALGAS_pic_31__38_ConditionExpression var_structured_5F_if_5F_condition_32325 ;
  nt_condition_5F_expression_ (var_structured_5F_if_5F_condition_32325, inCompiler) ;
  GALGAS_pic_31__38_InstructionList var_thenInstructionList_32379 ;
  nt_instruction_5F_list_ (var_thenInstructionList_32379, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GALGAS_pic_31__38_InstructionList var_elseInstructionList_32498 ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
    var_elseInstructionList_32498 = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 1130)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1132)) ;
    GALGAS_lstring var_elsifIfLabel_32620 ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_32620 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1135)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1135)) ;
    } break ;
    case 2: {
      var_elsifIfLabel_32620 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1137)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_32620.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_32620.readProperty_location (), GALGAS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1140)), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1140)) ;
      }
    }
    GALGAS_pic_31__38_PiccoloInstruction var_elsifPartInstruction_33001 ;
    nt_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_33001, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_32498 = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 1149)) ;
    var_elseInstructionList_32498.addAssign_operation (var_elsifPartInstruction_33001  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1150)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1152)) ;
    GALGAS_lstring var_elsifLabel_33240 ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
      var_elsifLabel_33240 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1155)), inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1155)) ;
    } break ;
    case 2: {
      var_elsifLabel_33240 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1157)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifLabel_33240.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elsifLabel_33240.readProperty_location (), GALGAS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1160)), fixItArray7  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1160)) ;
      }
    }
    nt_instruction_5F_list_ (var_elseInstructionList_32498, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElsePartLocation_33701 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1169)) ;
  outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (var_instructionLocation_32258, var_structured_5F_if_5F_condition_32325, var_thenInstructionList_32379, var_elseInstructionList_32498, var_endOfElsePartLocation_33701  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1132)) ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1137)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1152)) ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1157)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1132)) ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1137)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1152)) ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1157)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument_outInstruction,
                                                                                           C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST var_baseCode_34117 ;
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("pic18_syntax.galgas", 1185)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("pic18_syntax.galgas", 1188)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ANDWF (SOURCE_FILE ("pic18_syntax.galgas", 1191)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_COMF (SOURCE_FILE ("pic18_syntax.galgas", 1194)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_DECF (SOURCE_FILE ("pic18_syntax.galgas", 1197)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_INCF (SOURCE_FILE ("pic18_syntax.galgas", 1200)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_IORWF (SOURCE_FILE ("pic18_syntax.galgas", 1203)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1206)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_RLCF (SOURCE_FILE ("pic18_syntax.galgas", 1209)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_RLNCF (SOURCE_FILE ("pic18_syntax.galgas", 1212)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_RRCF (SOURCE_FILE ("pic18_syntax.galgas", 1215)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_RRNCF (SOURCE_FILE ("pic18_syntax.galgas", 1218)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_SUBFWB (SOURCE_FILE ("pic18_syntax.galgas", 1221)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_SUBWF (SOURCE_FILE ("pic18_syntax.galgas", 1224)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_SUBWFB (SOURCE_FILE ("pic18_syntax.galgas", 1227)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_SWAPF (SOURCE_FILE ("pic18_syntax.galgas", 1230)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
      var_baseCode_34117 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_XORWF (SOURCE_FILE ("pic18_syntax.galgas", 1233)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_34915 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1235)) ;
    GALGAS_registerExpression var_registerName_34971 ;
    nt_register_5F_parsing_ (var_registerName_34971, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_35014 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_35014, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FDA::constructor_new (var_instructionLocation_34915, var_baseCode_34117, var_registerName_34971, var_W_5F_isDestination_35014  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1238)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_baseCode_34117.objectCompare (GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1245)))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_35014.operator_not (SOURCE_FILE ("pic18_syntax.galgas", 1245)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_34915, GALGAS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1246)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    GALGAS_location var_instructionLocation_35513 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1251)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1253)) ;
    GALGAS_registerExpression var_registerName_35585 ;
    nt_register_5F_parsing_ (var_registerName_35585, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FDA::constructor_new (var_instructionLocation_35513, GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1257)), var_registerName_35585, GALGAS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1255)) ;
  } break ;
  case 3: {
    GALGAS_FA_5F_instruction_5F_base_5F_code var_FAinstruction_35788 ;
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
      var_FAinstruction_35788 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("pic18_syntax.galgas", 1265)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
      var_FAinstruction_35788 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("pic18_syntax.galgas", 1268)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
      var_FAinstruction_35788 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_MULWF (SOURCE_FILE ("pic18_syntax.galgas", 1271)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
      var_FAinstruction_35788 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_NEGF (SOURCE_FILE ("pic18_syntax.galgas", 1274)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
      var_FAinstruction_35788 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("pic18_syntax.galgas", 1277)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_36206 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1279)) ;
    GALGAS_registerExpression var_registerName_36271 ;
    nt_register_5F_parsing_ (var_registerName_36271, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FA::constructor_new (var_instructionLocation_36206, var_FAinstruction_35788, var_registerName_36271  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1281)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    GALGAS_location var_instructionLocation_36437 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1287)) ;
    GALGAS_registerExpression var_sourceRegisterName_36502 ;
    nt_register_5F_parsing_ (var_sourceRegisterName_36502, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1289)) ;
    GALGAS_registerExpression var_destinationRegisterName_36557 ;
    nt_register_5F_parsing_ (var_destinationRegisterName_36557, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_MOVFF::constructor_new (var_instructionLocation_36437, var_sourceRegisterName_36502, var_destinationRegisterName_36557  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1291)) ;
  } break ;
  case 5: {
    GALGAS_bit_5F_oriented_5F_op var_bitOrientedOp_36748 ;
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
      var_bitOrientedOp_36748 = GALGAS_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
      var_bitOrientedOp_36748 = GALGAS_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
      var_bitOrientedOp_36748 = GALGAS_bit_5F_oriented_5F_op::constructor_BTG (SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_36969 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1304)) ;
    GALGAS_registerExpression var_registerName_37054 ;
    nt_register_5F_parsing_ (var_registerName_37054, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1306)) ;
    GALGAS_bitNumberExpression var_bitNumber_37126 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumber_37126, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FBA::constructor_new (var_instructionLocation_36969, var_bitOrientedOp_36748, var_registerName_37054, var_bitNumber_37126  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1308)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    GALGAS_location var_instructionLocation_37310 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1316)) ;
    GALGAS_lstring var_targetLabelName_37378 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JSR::constructor_new (var_instructionLocation_37310, var_targetLabelName_37378, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas", 1321))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1318)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    GALGAS_location var_instructionLocation_37592 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1324)) ;
    GALGAS_lstring var_targetLabelName_37660 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JSR::constructor_new (var_instructionLocation_37592, var_targetLabelName_37660, GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("pic18_syntax.galgas", 1329))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1326)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    GALGAS_location var_instructionLocation_37871 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1332)) ;
    GALGAS_lstring var_targetLabelName_37939 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JSR::constructor_new (var_instructionLocation_37871, var_targetLabelName_37939, GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("pic18_syntax.galgas", 1337))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1334)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1340)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_CLRWDT (SOURCE_FILE ("pic18_syntax.galgas", 1340))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1340)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1343)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_DAW (SOURCE_FILE ("pic18_syntax.galgas", 1343))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1343)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1346)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_NOP (SOURCE_FILE ("pic18_syntax.galgas", 1346))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1346)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1349)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_POP (SOURCE_FILE ("pic18_syntax.galgas", 1349))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1349)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1352)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_PUSH (SOURCE_FILE ("pic18_syntax.galgas", 1352))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1352)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1355)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_RESET (SOURCE_FILE ("pic18_syntax.galgas", 1355))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1355)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1358)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_SLEEP (SOURCE_FILE ("pic18_syntax.galgas", 1358))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1358)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    GALGAS_location var_instructionLocation_39096 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1361)) ;
    GALGAS_immediatExpression var_expression_39185 ;
    nt_immediate_5F_expression_ (var_expression_39185, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_fnop::constructor_new (var_instructionLocation_39096, var_expression_39185  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1363)) ;
  } break ;
  case 17: {
    GALGAS_literal_5F_instruction_5F_opcode var_literalInstruction_39334 ;
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
      var_literalInstruction_39334 = GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
      var_literalInstruction_39334 = GALGAS_literal_5F_instruction_5F_opcode::constructor_ANDLW (SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
      var_literalInstruction_39334 = GALGAS_literal_5F_instruction_5F_opcode::constructor_IORLW (SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
      var_literalInstruction_39334 = GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
      var_literalInstruction_39334 = GALGAS_literal_5F_instruction_5F_opcode::constructor_MULLW (SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
      var_literalInstruction_39334 = GALGAS_literal_5F_instruction_5F_opcode::constructor_SUBLW (SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
      var_literalInstruction_39334 = GALGAS_literal_5F_instruction_5F_opcode::constructor_XORLW (SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_39936 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1383)) ;
    GALGAS_immediatExpression var_expression_40025 ;
    nt_immediate_5F_expression_ (var_expression_40025, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_literalOperation::constructor_new (var_instructionLocation_39936, var_literalInstruction_39334, var_expression_40025  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1385)) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    GALGAS_location var_instructionLocation_40205 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1391)) ;
    GALGAS_luint var_FSRindex_40268 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1393)) ;
    GALGAS_immediatExpression var_expression_40317 ;
    nt_immediate_5F_expression_ (var_expression_40317, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_LFSR::constructor_new (var_instructionLocation_40205, var_FSRindex_40268, var_expression_40317  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1395)) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    GALGAS_location var_instructionLocation_40458 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1398)) ;
    GALGAS_tableAccessOption var_accessOption_40522 ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
      var_accessOption_40522 = GALGAS_tableAccessOption::constructor_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas", 1402)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
      var_accessOption_40522 = GALGAS_tableAccessOption::constructor_postIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1405)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
      var_accessOption_40522 = GALGAS_tableAccessOption::constructor_postDecrement (SOURCE_FILE ("pic18_syntax.galgas", 1408)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
      var_accessOption_40522 = GALGAS_tableAccessOption::constructor_preIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1411)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_TBLRD::constructor_new (var_instructionLocation_40458, var_accessOption_40522  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1413)) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    GALGAS_location var_instructionLocation_40959 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1416)) ;
    GALGAS_tableAccessOption var_accessOption_41023 ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
      var_accessOption_41023 = GALGAS_tableAccessOption::constructor_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas", 1420)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
      var_accessOption_41023 = GALGAS_tableAccessOption::constructor_postIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1423)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
      var_accessOption_41023 = GALGAS_tableAccessOption::constructor_postDecrement (SOURCE_FILE ("pic18_syntax.galgas", 1426)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
      var_accessOption_41023 = GALGAS_tableAccessOption::constructor_preIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1429)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_TBLWT::constructor_new (var_instructionLocation_40959, var_accessOption_41023  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1431)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1253)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 3: {
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1289)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 5: {
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1306)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 17: {
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1393)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1253)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1289)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1306)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 17: {
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1393)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 23)) ;
  GALGAS_lstring var_programName_757 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 24)) ;
  GALGAS_lstring var_deviceNameOrBootloaderReference_784 ;
  GALGAS_programKind var_programKind_835 ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
    var_programKind_835 = GALGAS_programKind::constructor_regularProgram (SOURCE_FILE ("pic18_start_symbol.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 30)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 31)) ;
    var_programKind_835 = GALGAS_programKind::constructor_bootloaderProgram (SOURCE_FILE ("pic18_start_symbol.galgas", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 34)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 35)) ;
    var_programKind_835 = GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_start_symbol.galgas", 36)) ;
  } break ;
  default:
    break ;
  }
  var_deviceNameOrBootloaderReference_784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 39)) ;
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_1140 = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 40)) ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_1213 = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 41)) ;
  GALGAS_pic_31__38_MacroDefinitionList var_macroDefinitionList_1308 = GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 42)) ;
  GALGAS_lstringlist var_unusedRoutineList_1339 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 43)) ;
  GALGAS_ramDefinitionList var_ramDefinitionList_1389 = GALGAS_ramDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 44)) ;
  GALGAS_lstringlist var_unusedRegisterList_1445 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 45)) ;
  GALGAS_configDefinitionList var_configDefinitionList_1496 = GALGAS_configDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 46)) ;
  GALGAS_constantDefinitionList var_constantDefinitionList_1558 = GALGAS_constantDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 47)) ;
  GALGAS_dataList var_dataList_1624 = GALGAS_dataList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 48)) ;
  GALGAS_checkpicList var_checkpicList_1662 = GALGAS_checkpicList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 49)) ;
  GALGAS_lstringlist var_inlinedRoutineList_1708 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 50)) ;
  GALGAS_bool var_needsComputedGoto_32__1765 = GALGAS_bool (false) ;
  GALGAS_bool var_needsComputedGoto_34__1804 = GALGAS_bool (false) ;
  nt_body_ (var_interruptDefinitionList_1140, var_routineDefinitionList_1213, var_macroDefinitionList_1308, var_unusedRoutineList_1339, var_inlinedRoutineList_1708, var_ramDefinitionList_1389, var_unusedRegisterList_1445, var_configDefinitionList_1496, var_constantDefinitionList_1558, var_checkpicList_1662, var_dataList_1624, var_needsComputedGoto_32__1765, var_needsComputedGoto_34__1804, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 67)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("pic18_start_symbol.galgas", 69)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_AST var_piccoloModel_2234 = GALGAS_pic_31__38_AST::constructor_new (var_programName_757, var_programKind_835, var_deviceNameOrBootloaderReference_784, var_configDefinitionList_1496, var_ramDefinitionList_1389, var_unusedRegisterList_1445, var_checkpicList_1662, var_dataList_1624, var_interruptDefinitionList_1140, var_constantDefinitionList_1558, var_routineDefinitionList_1213, var_macroDefinitionList_1308, var_unusedRoutineList_1339, var_inlinedRoutineList_1708, var_needsComputedGoto_32__1765, var_needsComputedGoto_34__1804, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 70)) ;
      {
      routine_pic_31__38__5F_analyze (var_piccoloModel_2234, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 89)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_hexDestinationFile_2795 = GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 91)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas", 91)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 91)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_hexDestinationFile_2795.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas", 92)).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_2795, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 93)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_3006 = GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 95)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas", 95)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 95)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_asmDestinationFile_3006.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas", 96)).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_3006, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 97)) ;
        }
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                                                   GALGAS_string & outArgument_outDeviceName,
                                                                                                                                   GALGAS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                                                   GALGAS_ramBankTable & outArgument_outRamBank,
                                                                                                                                   GALGAS_registerTable & outArgument_outRegisterTable,
                                                                                                                                   GALGAS_bootloaderReservedRAMmap & outArgument_outBootloaderReservedRAMmap,
                                                                                                                                   GALGAS_routineDeclarationList & outArgument_outBootloaderRoutineDeclarationList,
                                                                                                                                   GALGAS_routineDeclarationList & outArgument_outUserRoutineDeclarationList,
                                                                                                                                   GALGAS_luint & outArgument_outBootloaderReservedROMsize,
                                                                                                                                   C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outDeviceName.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release 'out' argument
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outUserRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedROMsize.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 111)) ;
  GALGAS_lstring var_programName_3669 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 112)) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3669.readProperty_location (), GALGAS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 113)) ;
  outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
  outArgument_outRamBank.drop () ; // Release error dropped variable
  outArgument_outRegisterTable.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release error dropped variable
  outArgument_outDeviceName.drop () ; // Release error dropped variable
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outUserRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedROMsize.drop () ; // Release error dropped variable
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 121)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 122)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 124)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 125)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 128)) ;
  nt_body_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 24)) ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 30)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 34)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 39)) ;
  nt_body_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 24)) ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 30)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 34)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 39)) ;
  nt_body_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 67)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas", 32)) ;
  GALGAS_lstring var_programName_768 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 33)) ;
  GALGAS_lstring var_deviceName_813 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 35)) ;
  GALGAS_midrange_5F_interruptDefinitionList var_interruptDefinitionList_836 = GALGAS_midrange_5F_interruptDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 36)) ;
  GALGAS_midrange_5F_routineDefinitionList var_routineDefinitionList_913 = GALGAS_midrange_5F_routineDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 37)) ;
  GALGAS_ramDefinitionList var_ramDefinitionList_986 = GALGAS_ramDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 38)) ;
  GALGAS_lstringlist var_unusedRegisterList_1042 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 39)) ;
  GALGAS_lstringlist var_unusedRoutineList_1093 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 40)) ;
  GALGAS_configDefinitionList var_configDefinitionList_1143 = GALGAS_configDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 41)) ;
  GALGAS_constantDefinitionList var_constantDefinitionList_1205 = GALGAS_constantDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 42)) ;
  GALGAS_bool var_needsComputedGoto_32__1277 = GALGAS_bool (false) ;
  GALGAS_bool var_needsComputedGoto_34__1316 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 47)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_unusedRegister_1428 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 50)) ;
        var_unusedRegisterList_1042.addAssign_operation (var_unusedRegister_1428  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 51)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 53)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GALGAS_lstring var_unusedRoutine_1595 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 59)) ;
        var_unusedRoutineList_1093.addAssign_operation (var_unusedRoutine_1595  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 60)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 62)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_ (var_configDefinitionList_1143, inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_ (var_ramDefinitionList_986, inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_ (var_constantDefinitionList_1205, inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_ (var_interruptDefinitionList_836, var_needsComputedGoto_32__1277, var_needsComputedGoto_34__1316, inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_ (var_routineDefinitionList_913, var_needsComputedGoto_32__1277, var_needsComputedGoto_34__1316, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 81)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_syntax.galgas", 83)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_midrange_5F_model var_piccoloModel_2184 = GALGAS_midrange_5F_model::constructor_new (var_programName_768, var_deviceName_813, var_configDefinitionList_1143, var_ramDefinitionList_986, var_unusedRegisterList_1042, var_interruptDefinitionList_836, var_constantDefinitionList_1205, var_routineDefinitionList_913, var_unusedRoutineList_1093, var_needsComputedGoto_32__1277, var_needsComputedGoto_34__1316, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 84)) ;
      {
      routine_midrange_5F_analyze (var_piccoloModel_2184, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 98)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    GALGAS_string var_hexDestinationFile_2628 = GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 100)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas", 100)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 100)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_hexDestinationFile_2628.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas", 101)).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_2628, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 102)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_2839 = GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 104)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas", 104)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 104)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_asmDestinationFile_2839.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas", 105)).boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_2839, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 106)) ;
        }
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                           GALGAS_string & outArgument_outDeviceName,
                                                                                                           GALGAS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                           GALGAS_ramBankTable & outArgument_outRamBank,
                                                                                                           GALGAS_registerTable & outArgument_outRegisterTable,
                                                                                                           GALGAS_bootloaderReservedRAMmap & outArgument_outBootloaderReservedRAMmap,
                                                                                                           GALGAS_routineDeclarationList & outArgument_outBootloaderRoutineDeclarationList,
                                                                                                           GALGAS_routineDeclarationList & outArgument_outUserRoutineDeclarationList,
                                                                                                           GALGAS_luint & outArgument_outBootloaderReservedROMsize,
                                                                                                           C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outDeviceName.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release 'out' argument
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outUserRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedROMsize.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas", 120)) ;
  GALGAS_lstring var_programName_3505 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 121)) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3505.readProperty_location (), GALGAS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 122)) ;
  outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
  outArgument_outRamBank.drop () ; // Release error dropped variable
  outArgument_outRegisterTable.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release error dropped variable
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outUserRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outDeviceName.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedROMsize.drop () ; // Release error dropped variable
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 128)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas", 132)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 134)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 136)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 140)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 142)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 144)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 47)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 50)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 53)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 59)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 62)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 47)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 50)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 53)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 59)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 62)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GALGAS_midrange_5F_instructionList & outArgument_outInstructionList,
                                                                                              GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                              GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                              GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_midrange_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 168)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_3 (inCompiler)) {
    case 2: {
      GALGAS_midrange_5F_instruction var_instruction_4644 ;
      nt_midrange_5F_simple_5F_instruction_ (var_instruction_4644, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_4644  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 172)) ;
    } break ;
    case 3: {
      GALGAS_midrange_5F_instruction var_instruction_4752 ;
      nt_midrange_5F_structured_5F_instruction_ (var_instruction_4752, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_4752  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_midrange_5F_simple_5F_instruction_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_midrange_5F_structured_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_midrange_5F_simple_5F_instruction_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_midrange_5F_structured_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GALGAS_midrange_5F_interruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                                                                  GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                  GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                  C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 189)) ;
  GALGAS_location var_interruptionLocation_5141 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 190)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 191)) ;
  GALGAS_lstring var_firstSaveRegister_5224 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 193)) ;
  GALGAS_lstring var_secondSaveRegister_5277 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 194)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 195)) ;
  GALGAS_labelMap var_labelMap_5318 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("midrange_syntax.galgas", 196)) ;
  GALGAS_midrange_5F_instructionList var_instructionList_5371 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_5371, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5318, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 202)) ;
  ioArgument_ioInterruptDefinitionList.addAssign_operation (var_interruptionLocation_5141, var_instructionList_5371, var_firstSaveRegister_5224, var_secondSaveRegister_5277, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 208))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 203)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 189)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 191)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 193)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 194)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 195)) ;
  nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 202)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 189)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 191)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 193)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 194)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 195)) ;
  nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 202)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GALGAS_midrange_5F_routineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                                GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                C_Lexique_piccolo_5F_lexique * inCompiler) {
  GALGAS_bool var_noreturn_5824 ;
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_noreturn_5824 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas", 222)) ;
    var_noreturn_5824 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 225)) ;
  GALGAS_lstring var_routineName_5950 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 226)) ;
  GALGAS_luint var_page_6012 ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_page_6012 = GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 230)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas", 232)) ;
    var_page_6012 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_luint var_requiredBank_6137 ;
  GALGAS_luint var_returnedBank_6163 ;
  GALGAS_bool var_preservesBank_6188 ;
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
    var_requiredBank_6137 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 240)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 240)) ;
    var_returnedBank_6163 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 241)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 241)) ;
    var_preservesBank_6188 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 244)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 245)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas", 247)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_noreturn_5824.boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 249)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 249)) ;
        }
      }
      var_preservesBank_6188 = GALGAS_bool (true) ;
      var_requiredBank_6137 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 252)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 252)) ;
      var_returnedBank_6163 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 253)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 253)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas", 255)) ;
      var_requiredBank_6137 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 256)) ;
      var_preservesBank_6188 = GALGAS_bool (false) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_returnedBank_6163 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 259)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 259)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 261)) ;
        var_returnedBank_6163 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 262)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_noreturn_5824.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 264)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 264)) ;
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 268)) ;
      var_returnedBank_6163 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 269)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_noreturn_5824.boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 271)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 271)) ;
        }
      }
      var_preservesBank_6188 = GALGAS_bool (false) ;
      var_requiredBank_6137 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 274)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 274)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 277)) ;
  GALGAS_labelMap var_labelMap_7374 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("midrange_syntax.galgas", 278)) ;
  GALGAS_midrange_5F_instructionList var_instructionList_7427 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_7427, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7374, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 284)) ;
  ioArgument_ioRoutineDefinitionList.addAssign_operation (var_routineName_5950, var_page_6012, var_requiredBank_6137, var_returnedBank_6163, var_preservesBank_6188, var_noreturn_5824, var_instructionList_7427, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 293))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 285)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas", 222)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 225)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 226)) ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas", 232)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 244)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 245)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas", 247)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas", 255)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 256)) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 261)) ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 262)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 268)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 269)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 277)) ;
  nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 284)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas", 222)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 225)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 226)) ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas", 232)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 244)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 245)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas", 247)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas", 255)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 256)) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 261)) ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 262)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 268)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 269)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 277)) ;
  nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 284)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GALGAS_midrange_5F_instruction & outArgument_outInstruction,
                                                                                                    GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                    GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                    GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                                    C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_midrange_5F_syntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 305)) ;
    GALGAS_lstring var_doLabel_7947 ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
      var_doLabel_7947 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 308)) ;
    } break ;
    case 2: {
      var_doLabel_7947 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 310)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_7947, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 311)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_8086 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 313)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 314)) ;
    GALGAS_lstring var_constantName_8153 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 315)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 316)) ;
    GALGAS_immediatExpression var_lowBoundExpression_8226 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_8226, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 318)) ;
    GALGAS_immediatExpression var_highBoundExpression_8307 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_8307, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 320)) ;
    GALGAS_midrange_5F_instructionList var_instructionList_8404 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_8404, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::constructor_new (var_instructionLocation_8086, var_constantName_8153, var_lowBoundExpression_8226, var_highBoundExpression_8307, var_instructionList_8404, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 332))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 326)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 333)) ;
    GALGAS_lstring var_endDoLabel_8734 ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
      var_endDoLabel_8734 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 336)) ;
    } break ;
    case 2: {
      var_endDoLabel_8734 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_doLabel_7947.readProperty_string ().objectCompare (var_endDoLabel_8734.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_doLabel_7947.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = var_doLabel_7947.readProperty_string () ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_endDoLabel_8734.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 341)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 341)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 345)) ;
    GALGAS_luint var_bankIndex_9092 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 346)) ;
    outArgument_outInstruction = GALGAS_midrangeInstruction_5F_checkbank::constructor_new (var_bankIndex_9092.readProperty_location (), var_bankIndex_9092.readProperty_uint ()  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 347)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 349)) ;
    outArgument_outInstruction = GALGAS_midrangeInstruction_5F_checknobank::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 350))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 350)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 352)) ;
    GALGAS_location var_instructionLocation_9336 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 353)) ;
    GALGAS_registerExpression var_register_9421 ;
    nt_register_5F_parsing_ (var_register_9421, inCompiler) ;
    GALGAS_bool var_warningOnUselessBanksel_9444 ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_9444 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 359)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 360)) ;
      var_warningOnUselessBanksel_9444 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_banksel_5F_register::constructor_new (var_instructionLocation_9336, var_register_9421, var_warningOnUselessBanksel_9444  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 363)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 365)) ;
    GALGAS_location var_instructionLocation_9750 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 366)) ;
    GALGAS_luint var_bank_9813 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 367)) ;
    GALGAS_bool var_warningOnUselessBanksel_9832 ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_9832 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 373)) ;
      var_warningOnUselessBanksel_9832 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_banksel::constructor_new (var_instructionLocation_9750, var_bank_9813, var_warningOnUselessBanksel_9832  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 376)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 378)) ;
    GALGAS_location var_instructionLocation_10126 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 379)) ;
    GALGAS_registerExpression var_register_10211 ;
    nt_register_5F_parsing_ (var_register_10211, inCompiler) ;
    GALGAS_midrange_5F_instructionList var_instructionList_10263 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_10263, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 386)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_savebank::constructor_new (var_instructionLocation_10126, var_register_10211, var_instructionList_10263, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 391))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 387)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 393)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_nobanksel::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 394))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 394)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas", 396)) ;
    GALGAS_lstring var_foreverLabel_10645 ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
      var_foreverLabel_10645 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 399)) ;
    } break ;
    case 2: {
      var_foreverLabel_10645 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 401)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_10645, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 402)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_10814 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 404)) ;
    GALGAS_midrange_5F_instructionList var_instructionList_10894 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_10894, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 410)) ;
    GALGAS_lstring var_endForeverLabel_11014 ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_endForeverLabel_11014 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 413)) ;
    } break ;
    case 2: {
      var_endForeverLabel_11014 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 415)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_foreverLabel_10645.readProperty_string ().objectCompare (var_endForeverLabel_11014.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_foreverLabel_10645.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = var_foreverLabel_10645.readProperty_string () ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_endForeverLabel_11014.readProperty_location (), GALGAS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 418)), fixItArray7  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 418)) ;
      }
    }
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_FOREVER::constructor_new (var_instructionLocation_10814, var_instructionList_10894, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 424))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 421)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 426)) ;
    GALGAS_location var_instructionLocation_11533 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 427)) ;
    GALGAS_registerExpression var_registerExpression_11598 ;
    GALGAS_bitNumberExpression var_bitNumberExpression_11646 ;
    GALGAS_bool var_skipIfSet_11680 ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 432)) ;
      nt_register_5F_parsing_ (var_registerExpression_11598, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 434)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11646, inCompiler) ;
      var_skipIfSet_11680 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerExpression_11598, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 439)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11646, inCompiler) ;
      var_skipIfSet_11680 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 443)) ;
    GALGAS_midrange_5F_instruction var_instruction_12030 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_12030, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::constructor_new (var_instructionLocation_11533, var_instruction_12030, var_skipIfSet_11680, var_registerExpression_11598, var_bitNumberExpression_11646  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 445)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 452)) ;
    GALGAS_location var_instructionLocation_12252 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 453)) ;
    GALGAS_bool var_increment_12303 ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 456)) ;
      var_increment_12303 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 458)) ;
      var_increment_12303 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression_12432 ;
    nt_register_5F_parsing_ (var_registerExpression_12432, inCompiler) ;
    GALGAS_bool var_w_5F_isTarget_12465 ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_12465 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      var_w_5F_isTarget_12465 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString_12594 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 467)) ;
    GALGAS_string var_condition_12626 = var_conditionString_12594.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("midrange_syntax.galgas", 468)) ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsNotEqual, var_condition_12626.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_conditionString_12594.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_condition_12626, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 470)).add_operation (GALGAS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 470)), fixItArray9  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 470)) ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 472)) ;
    GALGAS_midrange_5F_instruction var_instruction_12851 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_12851, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::constructor_new (var_instructionLocation_12252, var_instruction_12851, var_increment_12303, var_registerExpression_12432, var_w_5F_isTarget_12465  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 474)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 482)) ;
    GALGAS_lstring var_ifLabel_13067 ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
      var_ifLabel_13067 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 485)) ;
    } break ;
    case 2: {
      var_ifLabel_13067 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 487)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_13067, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 488)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_ (var_ifLabel_13067, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 496)) ;
    GALGAS_lstring var_endIfLabel_13380 ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
      var_endIfLabel_13380 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 499)) ;
    } break ;
    case 2: {
      var_endIfLabel_13380 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 501)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsNotEqual, var_ifLabel_13067.readProperty_string ().objectCompare (var_endIfLabel_13380.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string temp_11 ;
        const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_ifLabel_13067.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          temp_11 = var_ifLabel_13067.readProperty_string () ;
        }else if (kBoolFalse == test_12) {
          temp_11 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_endIfLabel_13380.readProperty_location (), GALGAS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 504)), fixItArray13  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 504)) ;
      }
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 508)) ;
    GALGAS_lstring var_doLabel_13722 ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
      var_doLabel_13722 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 511)) ;
    } break ;
    case 2: {
      var_doLabel_13722 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 513)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_13722, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 514)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_13871 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 516)) ;
    GALGAS_midrange_5F_instructionList var_repeatedInstructionList_13951 ;
    nt_midrange_5F_instruction_5F_list_ (var_repeatedInstructionList_13951, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GALGAS_location var_endOfRepeatedInstructionList_14070 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 522)) ;
    GALGAS_midrange_5F_partList var_whilePartList_14124 = GALGAS_midrange_5F_partList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 523)) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas", 525)) ;
      GALGAS_lstring var_whileLabel_14214 ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
        var_whileLabel_14214 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 528)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 528)) ;
      } break ;
      case 2: {
        var_whileLabel_14214 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 530)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, var_doLabel_13722.readProperty_string ().objectCompare (var_whileLabel_14214.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_doLabel_13722.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = var_doLabel_13722.readProperty_string () ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string ("empty") ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (var_whileLabel_14214.readProperty_location (), GALGAS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 533)), fixItArray18  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 533)) ;
        }
      }
      GALGAS_midrange_5F_conditionExpression var_whileCondition_14588 ;
      nt_midrange_5F_condition_5F_expression_ (var_whileCondition_14588, inCompiler) ;
      GALGAS_midrange_5F_instructionList var_instructionList_14650 ;
      nt_midrange_5F_instruction_5F_list_ (var_instructionList_14650, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_14124.addAssign_operation (var_whileCondition_14588, var_instructionList_14650, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 542))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 542)) ;
      if (select_midrange_5F_syntax_22 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 545)) ;
    GALGAS_lstring var_endDoLabel_14864 ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
      var_endDoLabel_14864 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 548)) ;
    } break ;
    case 2: {
      var_endDoLabel_14864 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 550)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (kIsNotEqual, var_doLabel_13722.readProperty_string ().objectCompare (var_endDoLabel_14864.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_string temp_20 ;
        const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, var_doLabel_13722.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_21) {
          temp_20 = var_doLabel_13722.readProperty_string () ;
        }else if (kBoolFalse == test_21) {
          temp_20 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (var_endDoLabel_14864.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 553)), fixItArray22  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 553)) ;
      }
    }
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_do_5F_while::constructor_new (var_instructionLocation_13871, var_repeatedInstructionList_13951, var_endOfRepeatedInstructionList_14070, var_whilePartList_14124  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 556)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 562)) ;
    GALGAS_location var_instructionLocation_15384 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 563)) ;
    GALGAS_luint var_occurrenceFactor_15447 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 564)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_MNOP::constructor_new (var_instructionLocation_15384, var_occurrenceFactor_15447  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 565)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas", 567)) ;
    GALGAS_location var_instructionLocation_15592 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 568)) ;
    GALGAS_lstring var_targetLabelName_15660 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 569)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_JSR::constructor_new (var_instructionLocation_15592, var_targetLabelName_15660  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 570)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas", 574)) ;
    GALGAS_location var_instructionLocation_15815 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 575)) ;
    GALGAS_lstring var_targetLabelName_15883 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 576)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_JUMP::constructor_new (var_instructionLocation_15815, var_targetLabelName_15883  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 577)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 305)) ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 310)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 314)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 315)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 316)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 318)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 320)) ;
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 333)) ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 345)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 346)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 349)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 352)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 359)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 360)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 365)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 367)) ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 373)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 378)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 386)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 393)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas", 396)) ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 401)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 410)) ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 415)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 426)) ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 432)) ;
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 434)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 439)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 443)) ;
    nt_midrange_5F_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 452)) ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 456)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 458)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 467)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 472)) ;
    nt_midrange_5F_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 482)) ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 487)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 496)) ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 501)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 508)) ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 513)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas", 525)) ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 530)) ;
      } break ;
      default:
        break ;
      }
      nt_midrange_5F_condition_5F_expression_parse (inCompiler) ;
      nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
      if (select_midrange_5F_syntax_22 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 545)) ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 550)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 562)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 564)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas", 567)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 569)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas", 574)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 576)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 305)) ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 310)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 314)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 315)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 316)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 318)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 320)) ;
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 333)) ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 345)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 346)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 349)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 352)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 359)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 360)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 365)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 367)) ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 373)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 378)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 386)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 393)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas", 396)) ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 401)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 410)) ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 415)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 426)) ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 432)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 434)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 439)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 443)) ;
    nt_midrange_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 452)) ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 456)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 458)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 467)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 472)) ;
    nt_midrange_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 482)) ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 487)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 496)) ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 501)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 508)) ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 513)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas", 525)) ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 530)) ;
      } break ;
      default:
        break ;
      }
      nt_midrange_5F_condition_5F_expression_indexing (inCompiler) ;
      nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
      if (select_midrange_5F_syntax_22 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 545)) ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 550)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 562)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 564)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas", 567)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 569)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas", 574)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 576)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (const GALGAS_lstring constinArgument_ifLabel,
                                                                                                          GALGAS_midrange_5F_instruction & outArgument_outInstruction,
                                                                                                          GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                          GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                          GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_16282 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 593)) ;
  GALGAS_midrange_5F_conditionExpression var_structured_5F_if_5F_condition_16358 ;
  nt_midrange_5F_condition_5F_expression_ (var_structured_5F_if_5F_condition_16358, inCompiler) ;
  GALGAS_midrange_5F_instructionList var_thenInstructionList_16421 ;
  nt_midrange_5F_instruction_5F_list_ (var_thenInstructionList_16421, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GALGAS_midrange_5F_instructionList var_elseInstructionList_16544 ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
    var_elseInstructionList_16544 = GALGAS_midrange_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 602)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas", 604)) ;
    GALGAS_lstring var_elsifIfLabel_16670 ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_16670 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 607)) ;
    } break ;
    case 2: {
      var_elsifIfLabel_16670 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 609)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_16670.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_16670.readProperty_location (), GALGAS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 612)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 612)) ;
      }
    }
    GALGAS_midrange_5F_instruction var_elsifPartInstruction_17060 ;
    nt_midrange_5F_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_17060, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_16544 = GALGAS_midrange_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 621)) ;
    var_elseInstructionList_16544.addAssign_operation (var_elsifPartInstruction_17060  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 622)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas", 624)) ;
    GALGAS_lstring var_elseLabel_17303 ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLabel_17303 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 627)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 627)) ;
    } break ;
    case 2: {
      var_elseLabel_17303 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 629)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elseLabel_17303.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elseLabel_17303.readProperty_location (), GALGAS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 632)), fixItArray7  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 632)) ;
      }
    }
    nt_midrange_5F_instruction_5F_list_ (var_elseInstructionList_16544, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElsePartLocation_17768 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 641)) ;
  outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_structured_5F_if::constructor_new (var_instructionLocation_16282, var_structured_5F_if_5F_condition_16358, var_thenInstructionList_16421, var_elseInstructionList_16544, var_endOfElsePartLocation_17768  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 642)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_parse (inCompiler) ;
  nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas", 604)) ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 609)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas", 624)) ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 629)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_indexing (inCompiler) ;
  nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas", 604)) ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 609)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas", 624)) ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 629)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GALGAS_midrange_5F_instruction & outArgument_outInstruction,
                                                                                                C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_midrange_5F_syntax_28 (inCompiler)) {
  case 1: {
    GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_18187 ;
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 656)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_ADDWF (SOURCE_FILE ("midrange_syntax.galgas", 657)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 659)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_ANDWF (SOURCE_FILE ("midrange_syntax.galgas", 660)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 662)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_COMF (SOURCE_FILE ("midrange_syntax.galgas", 663)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 665)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECF (SOURCE_FILE ("midrange_syntax.galgas", 666)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 668)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCF (SOURCE_FILE ("midrange_syntax.galgas", 669)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 671)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_IORWF (SOURCE_FILE ("midrange_syntax.galgas", 672)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 674)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_syntax.galgas", 675)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 677)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_RLF (SOURCE_FILE ("midrange_syntax.galgas", 678)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 680)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_RRF (SOURCE_FILE ("midrange_syntax.galgas", 681)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 683)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SUBWF (SOURCE_FILE ("midrange_syntax.galgas", 684)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 686)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_syntax.galgas", 687)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 689)) ;
      var_baseCode_18187 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_XORWF (SOURCE_FILE ("midrange_syntax.galgas", 690)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_18740 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 692)) ;
    GALGAS_registerExpression var_registerExpression_18805 ;
    nt_register_5F_parsing_ (var_registerExpression_18805, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_18854 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_18854, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_FD::constructor_new (var_instructionLocation_18740, var_baseCode_18187, var_registerExpression_18805, var_W_5F_isDestination_18854  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 695)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_baseCode_18187.objectCompare (GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_syntax.galgas", 702)))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_18854.operator_not (SOURCE_FILE ("midrange_syntax.galgas", 702)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_18740, GALGAS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 703)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 707)) ;
    GALGAS_location var_instructionLocation_19363 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 708)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 709)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 710)) ;
    GALGAS_registerExpression var_registerName_19435 ;
    nt_register_5F_parsing_ (var_registerName_19435, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_FD::constructor_new (var_instructionLocation_19363, GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_syntax.galgas", 714)), var_registerName_19435, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 712)) ;
  } break ;
  case 3: {
    GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code var_FAinstruction_19649 ;
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 721)) ;
      var_FAinstruction_19649 = GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_syntax.galgas", 722)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 724)) ;
      var_FAinstruction_19649 = GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_syntax.galgas", 725)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_19859 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 727)) ;
    GALGAS_registerExpression var_registerExpression_19924 ;
    nt_register_5F_parsing_ (var_registerExpression_19924, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_F::constructor_new (var_instructionLocation_19859, var_FAinstruction_19649, var_registerExpression_19924  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 729)) ;
  } break ;
  case 4: {
    GALGAS_midrange_5F_bit_5F_oriented_5F_op var_bitOrientedOp_20109 ;
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
      var_bitOrientedOp_20109 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
      var_bitOrientedOp_20109 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_20289 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 740)) ;
    GALGAS_registerExpression var_registerExpression_20354 ;
    nt_register_5F_parsing_ (var_registerExpression_20354, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 742)) ;
    GALGAS_bitNumberExpression var_bitNumberExpression_20411 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_20411, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_FB::constructor_new (var_instructionLocation_20289, var_bitOrientedOp_20109, var_registerExpression_20354, var_bitNumberExpression_20411  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 744)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas", 750)) ;
    GALGAS_location var_instructionLocation_20620 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 751)) ;
    GALGAS_lstring var_targetLabelName_20688 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 752)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_GOTO::constructor_new (var_instructionLocation_20620, var_targetLabelName_20688  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 753)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas", 757)) ;
    GALGAS_location var_instructionLocation_20865 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 758)) ;
    GALGAS_lstring var_targetLabelName_20933 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 759)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_CALL::constructor_new (var_instructionLocation_20865, var_targetLabelName_20933  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 760)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 764)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_CLRW::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 765))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 765)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 767)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_CLRWDT::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 768))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 768)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 770)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_NOP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 771))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 771)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("midrange_syntax.galgas", 773)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_SLEEP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 774))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 774)) ;
  } break ;
  case 11: {
    GALGAS_midrange_5F_literal_5F_instruction_5F_opcode var_literalInstruction_21482 ;
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
      var_literalInstruction_21482 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
      var_literalInstruction_21482 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_ANDLW (SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
      var_literalInstruction_21482 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_IORLW (SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
      var_literalInstruction_21482 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
      var_literalInstruction_21482 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_SUBLW (SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
      var_literalInstruction_21482 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_XORLW (SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_22059 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 790)) ;
    GALGAS_immediatExpression var_expression_22128 ;
    nt_immediate_5F_expression_ (var_expression_22128, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_literalOperation::constructor_new (var_instructionLocation_22059, var_literalInstruction_21482, var_expression_22128  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 792)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 656)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 659)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 662)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 665)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 668)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 671)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 674)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 677)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 680)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 683)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 686)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 689)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 707)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 709)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 710)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 3: {
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 721)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 724)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 742)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas", 750)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 752)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas", 757)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 759)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 764)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 767)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 770)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("midrange_syntax.galgas", 773)) ;
  } break ;
  case 11: {
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 656)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 659)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 662)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 665)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 668)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 671)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 674)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 677)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 680)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 683)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 686)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 689)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 707)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 709)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 710)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 721)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 724)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 742)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas", 750)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 752)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas", 757)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 759)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 764)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 767)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 770)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("midrange_syntax.galgas", 773)) ;
  } break ;
  case 11: {
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GALGAS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 803)) ;
  GALGAS_midrange_5F_conditionExpression var_condition_22465 ;
  nt_midrange_5F_condition_5F_factor_ (var_condition_22465, inCompiler) ;
  outArgument_outCondition = GALGAS_midrange_5F_negateCondition::constructor_new (var_condition_22465  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 805)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 803)) ;
  nt_midrange_5F_condition_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 803)) ;
  nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GALGAS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_midrange_5F_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GALGAS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  switch (select_midrange_5F_syntax_33 (inCompiler)) {
  case 1: {
    GALGAS_bool var_isIncrement_22889 ;
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 822)) ;
      var_isIncrement_22889 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 824)) ;
      var_isIncrement_22889 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression_23024 ;
    nt_register_5F_parsing_ (var_registerExpression_23024, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_23057 ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_23057 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      var_W_5F_isDestination_23057 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString_23201 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 833)) ;
    GALGAS_string var_condition_23233 = var_conditionString_23201.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("midrange_syntax.galgas", 834)) ;
    GALGAS_bool var_branchIfZero_23300 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_condition_23233.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_branchIfZero_23300 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_condition_23233.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_branchIfZero_23300 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_23201.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_23201.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 841)).add_operation (GALGAS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 841)), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 841)) ;
        var_branchIfZero_23300.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GALGAS_midrange_5F_incDecRegisterInCondition::constructor_new (var_registerExpression_23024, var_isIncrement_22889, var_W_5F_isDestination_23057, var_branchIfZero_23300  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 845)) ;
  } break ;
  case 2: {
    GALGAS_registerExpression var_registerExpression_23761 ;
    nt_register_5F_parsing_ (var_registerExpression_23761, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 852)) ;
    GALGAS_bitNumberExpression var_bitNumberExpression_23818 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_23818, inCompiler) ;
    outArgument_outCondition = GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (var_registerExpression_23761, var_bitNumberExpression_23818  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 854)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_33 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 822)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 824)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 833)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 852)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_33 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 822)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 824)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 833)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 852)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GALGAS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                                   C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 865)) ;
  nt_midrange_5F_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 869)) ;
      GALGAS_midrange_5F_conditionExpression var_c_24227 ;
      nt_midrange_5F_condition_5F_term_ (var_c_24227, inCompiler) ;
      GALGAS_midrange_5F_conditionExpression var_rc_24267 = GALGAS_midrange_5F_negateCondition::constructor_new (var_c_24227  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 871)) ;
      GALGAS_midrange_5F_conditionExpression var_lc_24347 = GALGAS_midrange_5F_negateCondition::constructor_new (outArgument_outCondition  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 872)) ;
      outArgument_outCondition = GALGAS_midrange_5F_negateCondition::constructor_new (GALGAS_midrange_5F_andCondition::constructor_new (var_lc_24347, var_rc_24267  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 873))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 873)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 875)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 865)) ;
  nt_midrange_5F_condition_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 869)) ;
      nt_midrange_5F_condition_5F_term_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 875)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 865)) ;
  nt_midrange_5F_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 869)) ;
      nt_midrange_5F_condition_5F_term_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 875)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GALGAS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                             C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_midrange_5F_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 885)) ;
      GALGAS_midrange_5F_conditionExpression var_c_24750 ;
      nt_midrange_5F_condition_5F_factor_ (var_c_24750, inCompiler) ;
      outArgument_outCondition = GALGAS_midrange_5F_andCondition::constructor_new (outArgument_outCondition, var_c_24750  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 887)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 885)) ;
      nt_midrange_5F_condition_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 885)) ;
      nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

