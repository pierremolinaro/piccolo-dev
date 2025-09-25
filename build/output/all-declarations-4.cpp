#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_block_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_block_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_block_2E_weak::GGS_pic_31__38_Instruction_5F_block_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block_2E_weak & GGS_pic_31__38_Instruction_5F_block_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_block & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @pic_31__38_AbstractCaseItem reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_AbstractCaseItem::objectCompare (const GGS_pic_31__38_AbstractCaseItem & inOperand) const {
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

GGS_pic_31__38_AbstractCaseItem::GGS_pic_31__38_AbstractCaseItem (void) :
AC_GALGAS_reference_class () {
}


void cPtr_pic_31__38_AbstractCaseItem::
pic_31__38_AbstractCaseItem_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem::GGS_pic_31__38_AbstractCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_AbstractCaseItem) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18AbstractCaseItem class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_AbstractCaseItem::cPtr_pic_31__38_AbstractCaseItem (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_AbstractCaseItem::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18AbstractCaseItem generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ("pic18AbstractCaseItem",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_AbstractCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_AbstractCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_AbstractCaseItem (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem GGS_pic_31__38_AbstractCaseItem::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_AbstractCaseItem result ;
  const GGS_pic_31__38_AbstractCaseItem * p = (const GGS_pic_31__38_AbstractCaseItem *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_AbstractCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AbstractCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_AbstractCaseItem_2E_weak::objectCompare (const GGS_pic_31__38_AbstractCaseItem_2E_weak & inOperand) const {
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

GGS_pic_31__38_AbstractCaseItem_2E_weak::GGS_pic_31__38_AbstractCaseItem_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem_2E_weak & GGS_pic_31__38_AbstractCaseItem_2E_weak::operator = (const GGS_pic_31__38_AbstractCaseItem & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem_2E_weak::GGS_pic_31__38_AbstractCaseItem_2E_weak (const GGS_pic_31__38_AbstractCaseItem & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem_2E_weak GGS_pic_31__38_AbstractCaseItem_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_AbstractCaseItem_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem GGS_pic_31__38_AbstractCaseItem_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_AbstractCaseItem result ;
  if (isValid ()) {
    const cPtr_pic_31__38_AbstractCaseItem * p = (cPtr_pic_31__38_AbstractCaseItem *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_AbstractCaseItem (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem GGS_pic_31__38_AbstractCaseItem_2E_weak::bang_pic_31__38_AbstractCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_AbstractCaseItem result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_AbstractCaseItem) ;
      result = GGS_pic_31__38_AbstractCaseItem ((cPtr_pic_31__38_AbstractCaseItem *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18AbstractCaseItem.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2E_weak ("pic18AbstractCaseItem.weak",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_AbstractCaseItem_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_AbstractCaseItem_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_AbstractCaseItem_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem_2E_weak GGS_pic_31__38_AbstractCaseItem_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_AbstractCaseItem_2E_weak result ;
  const GGS_pic_31__38_AbstractCaseItem_2E_weak * p = (const GGS_pic_31__38_AbstractCaseItem_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_AbstractCaseItem_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AbstractCaseItem.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

ComparisonResult GGS_pic_31__38_Instruction_5F_FDA_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_FDA_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FDA_2E_weak::GGS_pic_31__38_Instruction_5F_FDA_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_2E_weak & GGS_pic_31__38_Instruction_5F_FDA_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_FDA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum FA_instruction_base_code
//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code::GGS_FA_5F_instruction_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSEQ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_CPFSGT (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSGT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_CPFSLT (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSLT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_MULWF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MULWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_NEGF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_NEGF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_SETF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SETF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_TSTFSZ ;
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

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isCPFSEQ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSEQ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isCPFSGT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSGT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isCPFSLT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSLT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isMULWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MULWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isNEGF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_NEGF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isSETF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SETF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isTSTFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_TSTFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_FA_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @FA_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_FA_5F_instruction_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @FA_instruction_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ("FA_instruction_base_code",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_FA_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_FA_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_FA_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  const GGS_FA_5F_instruction_5F_base_5F_code * p = (const GGS_FA_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_FA_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("FA_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FA_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_FA_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FA_2E_weak::GGS_pic_31__38_Instruction_5F_FA_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA_2E_weak & GGS_pic_31__38_Instruction_5F_FA_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_FA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak & GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_MOVFF & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_pic_31__38_Instruction_5F_FBA_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_FBA_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FBA_2E_weak::GGS_pic_31__38_Instruction_5F_FBA_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA_2E_weak & GGS_pic_31__38_Instruction_5F_FBA_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_FBA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum jumpInstructionKind
//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind::GGS_jumpInstructionKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_jumpInstructionKind::class_func_ipicRelative (UNUSED_LOCATION_ARGS) {
  GGS_jumpInstructionKind result ;
  result.mEnum = Enumeration::enum_ipicRelative ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_jumpInstructionKind::class_func_relative (UNUSED_LOCATION_ARGS) {
  GGS_jumpInstructionKind result ;
  result.mEnum = Enumeration::enum_relative ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_jumpInstructionKind::class_func_absolute (UNUSED_LOCATION_ARGS) {
  GGS_jumpInstructionKind result ;
  result.mEnum = Enumeration::enum_absolute ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_jumpInstructionKind [4] = {
  "(not built)",
  "ipicRelative",
  "relative",
  "absolute"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jumpInstructionKind::getter_isIpicRelative (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ipicRelative == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jumpInstructionKind::getter_isRelative (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_relative == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jumpInstructionKind::getter_isAbsolute (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_absolute == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jumpInstructionKind::description (String & ioString,
                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @jumpInstructionKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_jumpInstructionKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_jumpInstructionKind::objectCompare (const GGS_jumpInstructionKind & inOperand) const {
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
//     @jumpInstructionKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jumpInstructionKind ("jumpInstructionKind",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_jumpInstructionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_jumpInstructionKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_jumpInstructionKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_jumpInstructionKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_jumpInstructionKind::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_jumpInstructionKind result ;
  const GGS_jumpInstructionKind * p = (const GGS_jumpInstructionKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_jumpInstructionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("jumpInstructionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_JSR_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_JSR_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_JSR_2E_weak::GGS_pic_31__38_Instruction_5F_JSR_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR_2E_weak & GGS_pic_31__38_Instruction_5F_JSR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_Instruction_5F_macro_2E_weak::GGS_pic_31__38_Instruction_5F_macro_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro_2E_weak & GGS_pic_31__38_Instruction_5F_macro_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_macro & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::GGS_pic_31__38_Instruction_5F_JUMP_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP_2E_weak & GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak & GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_JUMPCC & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_Instruction_5F_withNoOperand GGS_pic_31__38_Instruction_5F_withNoOperand::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                         const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_withNoOperand result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_withNoOperand (in_mInstructionLocation, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_withNoOperand::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak & GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_withNoOperand & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_Instruction_5F_literalOperation GGS_pic_31__38_Instruction_5F_literalOperation::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                               const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                               const GGS_immediatExpression & in_mImmediatExpression,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_literalOperation (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak & GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_Instruction_5F_fnop GGS_pic_31__38_Instruction_5F_fnop::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_immediatExpression & in_mImmediatExpression,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_fnop result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_fnop (in_mInstructionLocation, in_mImmediatExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_fnop::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_pic_31__38_Instruction_5F_fnop_2E_weak::GGS_pic_31__38_Instruction_5F_fnop_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop_2E_weak & GGS_pic_31__38_Instruction_5F_fnop_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_fnop & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_LFSR::classDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ("pic18Instruction_LFSR",
                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_LFSR::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_MNOP::classDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ("pic18Instruction_MNOP",
                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_MNOP::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_NOPBRA::classDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ("pic18Instruction_NOPBRA",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_NOPBRA::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ("pic18RegisterComparison",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RegisterComparison::staticTypeDescriptor (void) const {
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

class cCollectionElement_pic_31__38_DoWhilePartList : public cCollectionElement {
  public: GGS_pic_31__38_DoWhilePartList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_DoWhilePartList (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                         const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                         const GGS_location & in_mEndOfPartLocation
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @pic_31__38_DoWhilePartList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList::GGS_pic_31__38_DoWhilePartList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList::GGS_pic_31__38_DoWhilePartList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    const GGS_pic_31__38_DoWhilePartList_2E_element element (p->mObject.mProperty_mCondition, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfPartLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                const GGS_location & in_mEndOfPartLocation
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (in_mCondition, in_mInstructionList, in_mEndOfPartLocation COMMA_THERE)) ;
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

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_pic_31__38_InterruptDefinitionList : public cCollectionElement {
  public: GGS_pic_31__38_InterruptDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_InterruptDefinitionList (const GGS_lstring & in_mInterruptName,
                                                                 const GGS_bool & in_mFastReturn,
                                                                 const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                 const GGS_location & in_mEndOfInterruptLocation
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @pic_31__38_InterruptDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList::GGS_pic_31__38_InterruptDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList::GGS_pic_31__38_InterruptDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    const GGS_pic_31__38_InterruptDefinitionList_2E_element element (p->mObject.mProperty_mInterruptName, p->mObject.mProperty_mFastReturn, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfInterruptLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GGS_lstring & in_mInterruptName,
                                                                        const GGS_bool & in_mFastReturn,
                                                                        const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                        const GGS_location & in_mEndOfInterruptLocation
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (in_mInterruptName, in_mFastReturn, in_mInstructionList, in_mEndOfInterruptLocation COMMA_THERE)) ;
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

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @pic_31__38_RoutineDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList::GGS_pic_31__38_RoutineDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList::GGS_pic_31__38_RoutineDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    const GGS_pic_31__38_RoutineDefinitionList_2E_element element (p->mObject.mProperty_mRoutineName, p->mObject.mProperty_mRequiredBank, p->mObject.mProperty_mReturnedBank, p->mObject.mProperty_mPreservesBank, p->mObject.mProperty_mIsNoReturn, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfRoutineLocation) ;
    mArray.appendObject (element) ;
  }
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
  macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation COMMA_THERE)) ;
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

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RoutineDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_pic_31__38_MacroDefinitionList : public cCollectionElement {
  public: GGS_pic_31__38_MacroDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_MacroDefinitionList (const GGS_lstring & in_mMacroName,
                                                             const GGS_lstringlist & in_mConstantNameList,
                                                             const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @pic_31__38_MacroDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList::GGS_pic_31__38_MacroDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList::GGS_pic_31__38_MacroDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    const GGS_pic_31__38_MacroDefinitionList_2E_element element (p->mObject.mProperty_mMacroName, p->mObject.mProperty_mConstantNameList, p->mObject.mProperty_mInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_lstring & in_mMacroName,
                                                                    const GGS_lstringlist & in_mConstantNameList,
                                                                    const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (in_mMacroName, in_mConstantNameList, in_mInstructionList COMMA_THERE)) ;
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

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::class_func_emptyMap (LOCATION_ARGS) {
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

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @routineDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList::GGS_routineDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList::GGS_routineDeclarationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    const GGS_routineDeclarationList_2E_element element (p->mObject.mProperty_mRoutineName, p->mObject.mProperty_mRequiredBank, p->mObject.mProperty_mReturnedBank, p->mObject.mProperty_mPreservesBank, p->mObject.mProperty_mIsNoReturn) ;
    mArray.appendObject (element) ;
  }
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
  macroMyNew (p, cCollectionElement_routineDeclarationList (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn COMMA_THERE)) ;
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

GGS_routineDeclarationList GGS_routineDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_routineDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_dataList : public cCollectionElement {
  public: GGS_dataList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_dataList (const GGS_lstring & in_mDataName,
                                       const GGS_immediatExpressionList & in_mValueList,
                                       const GGS_bool & in_mIsByteList
                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_dataList (const GGS_dataList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @dataList
//--------------------------------------------------------------------------------------------------

GGS_dataList::GGS_dataList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList::GGS_dataList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_dataList * p = (cCollectionElement_dataList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    const GGS_dataList_2E_element element (p->mObject.mProperty_mDataName, p->mObject.mProperty_mValueList, p->mObject.mProperty_mIsByteList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                              const GGS_lstring & in_mDataName,
                                              const GGS_immediatExpressionList & in_mValueList,
                                              const GGS_bool & in_mIsByteList
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = nullptr ;
  macroMyNew (p, cCollectionElement_dataList (in_mDataName, in_mValueList, in_mIsByteList COMMA_THERE)) ;
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

GGS_dataList GGS_dataList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_dataList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

