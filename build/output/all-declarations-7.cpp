#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                      const GALGAS_ipic_31__38_SequentialInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                                      const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                      const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    result = p->mProperty_mSkipIfSet ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMBitNumber (GALGAS_uint inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_BitTestSkip class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                  const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                  const GALGAS_bool & in_mSkipIfSet,
                                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GALGAS_uint & in_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "[@ipic18_skip_instruction_BitTestSkip:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_skip_instruction_BitTestSkip type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ("ipic18_skip_instruction_BitTestSkip",
                                                                           & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak & GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::operator = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      result = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::getter_mSkipIfSet (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      result = objectPtr->mProperty_mSkipIfSet ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::getter_mRegisterDescription (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      result = objectPtr->mProperty_mRegisterDescription ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::getter_mBitNumber (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      result = objectPtr->mProperty_mBitNumber ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::setter_setMSkipIfSet (const GALGAS_bool inValue,
                                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      objectPtr->mProperty_mSkipIfSet = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::setter_setMRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue,
                                                                                                        C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      objectPtr->mProperty_mRegisterDescription = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::setter_setMBitNumber (const GALGAS_uint inValue,
                                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      objectPtr->mProperty_mBitNumber = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_skip_instruction_BitTestSkip-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak ("ipic18_skip_instruction_BitTestSkip-weak",
                                                                                   & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_BitTestSkip-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSEQ (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CPFSEQ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSGT (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CPFSGT ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSLT (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CPFSLT ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_TSTFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_TSTFSZ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::optional_CPFSEQ () const {
  const bool ok = mEnum == kEnum_CPFSEQ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::optional_CPFSGT () const {
  const bool ok = mEnum == kEnum_CPFSGT ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::optional_CPFSLT () const {
  const bool ok = mEnum == kEnum_CPFSLT ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::optional_TSTFSZ () const {
  const bool ok = mEnum == kEnum_TSTFSZ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code [5] = {
  "(not built)",
  "CPFSEQ",
  "CPFSGT",
  "CPFSLT",
  "TSTFSZ"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSEQ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSEQ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSGT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSGT == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSLT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSLT == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isTSTFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_TSTFSZ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::description (C_String & ioString,
                                                                                             const int32_t /* inIndentation */) const {
  ioString << "<enum @ipic18_compare_register_instruction_base_code: " << gEnumNameArrayFor_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::objectCompare (const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_compare_register_instruction_base_code type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ("ipic18_compare_register_instruction_base_code",
                                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code * p = (const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_compare_register_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCompareInstruction.objectCompare (p->mProperty_mCompareInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * inSourcePtr) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                      const GALGAS_ipic_31__38_SequentialInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                                                      const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inAttribute_mCompareInstruction,
                                                                                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mCompareInstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mCompareInstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::getter_mCompareInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    result = p->mProperty_mCompareInstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::setter_setMCompareInstruction (GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    p->mProperty_mCompareInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_compare_register class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                  const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                                  const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mCompareInstruction (in_mCompareInstruction),
mProperty_mRegisterDescription (in_mRegisterDescription) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "[@ipic18_skip_instruction_compare_register:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCompareInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mCompareInstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_skip_instruction_compare_register type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ("ipic18_skip_instruction_compare_register",
                                                                                   & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_compare_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak & GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::operator = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
      result = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::getter_mCompareInstruction (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
      result = objectPtr->mProperty_mCompareInstruction ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::getter_mRegisterDescription (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
      result = objectPtr->mProperty_mRegisterDescription ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::setter_setMCompareInstruction (const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code inValue,
                                                                                                               C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
      objectPtr->mProperty_mCompareInstruction = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::setter_setMRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue,
                                                                                                                C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
      objectPtr->mProperty_mRegisterDescription = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_skip_instruction_compare_register-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak ("ipic18_skip_instruction_compare_register-weak",
                                                                                           & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_compare_register-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DECFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = kEnum_DECFSZ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DCFSNZ (UNUSED_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = kEnum_DCFSNZ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INCFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = kEnum_INCFSZ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INFSNZ (UNUSED_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = kEnum_INFSNZ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::optional_DECFSZ () const {
  const bool ok = mEnum == kEnum_DECFSZ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::optional_DCFSNZ () const {
  const bool ok = mEnum == kEnum_DCFSNZ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::optional_INCFSZ () const {
  const bool ok = mEnum == kEnum_INCFSZ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::optional_INFSNZ () const {
  const bool ok = mEnum == kEnum_INFSNZ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_skip_5F_instruction_5F_FDA_5F_base_5F_code [5] = {
  "(not built)",
  "DECFSZ",
  "DCFSNZ",
  "INCFSZ",
  "INFSNZ"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECFSZ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isDCFSNZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DCFSNZ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCFSZ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isINFSNZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INFSNZ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::description (C_String & ioString,
                                                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @skip_instruction_FDA_base_code: " << gEnumNameArrayFor_skip_5F_instruction_5F_FDA_5F_base_5F_code [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::objectCompare (const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@skip_instruction_FDA_base_code type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ("skip_instruction_FDA_base_code",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code * p = (const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("skip_instruction_FDA_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction_5F_FDA_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FDA_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                      const GALGAS_ipic_31__38_SequentialInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                      const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inAttribute_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                      const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mInstruction_5F_FDA_5F_base_5F_code, inAttribute_mRegisterDescription, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    result = p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_FDA class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                  const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                  const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (in_mInstruction_5F_FDA_5F_base_5F_code),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@ipic18_skip_instruction_FDA:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_skip_instruction_FDA type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ("ipic18_skip_instruction_FDA",
                                                                   & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak & GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::operator = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      result = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::getter_mInstruction_5F_FDA_5F_base_5F_code (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      result = objectPtr->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::getter_mRegisterDescription (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      result = objectPtr->mProperty_mRegisterDescription ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::getter_m_5F_W_5F_isDestination (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      result = objectPtr->mProperty_m_5F_W_5F_isDestination ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::setter_setMInstruction_5F_FDA_5F_base_5F_code (const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code inValue,
                                                                                                               C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      objectPtr->mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::setter_setMRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue,
                                                                                                C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      objectPtr->mProperty_mRegisterDescription = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::setter_setM_5F_W_5F_isDestination (const GALGAS_bool inValue,
                                                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * objectPtr = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      objectPtr->mProperty_m_5F_W_5F_isDestination = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_skip_instruction_FDA-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak ("ipic18_skip_instruction_FDA-weak",
                                                                           & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_FDA-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_symbolTableForBlockOptimization::cMapElement_symbolTableForBlockOptimization (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_uint & in_mDefinitionBlockIndex
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDefinitionBlockIndex (in_mDefinitionBlockIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_symbolTableForBlockOptimization::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionBlockIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_symbolTableForBlockOptimization::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_symbolTableForBlockOptimization (mProperty_lkey, mProperty_mDefinitionBlockIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_symbolTableForBlockOptimization::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefinitionBlockIndex" ":" ;
  mProperty_mDefinitionBlockIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_symbolTableForBlockOptimization::compare (const cCollectionElement * inOperand) const {
  cMapElement_symbolTableForBlockOptimization * operand = (cMapElement_symbolTableForBlockOptimization *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefinitionBlockIndex.objectCompare (operand->mProperty_mDefinitionBlockIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization::GALGAS_symbolTableForBlockOptimization (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization::GALGAS_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization & GALGAS_symbolTableForBlockOptimization::operator = (const GALGAS_symbolTableForBlockOptimization & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization GALGAS_symbolTableForBlockOptimization::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization GALGAS_symbolTableForBlockOptimization::constructor_mapWithMapToOverride (const GALGAS_symbolTableForBlockOptimization & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization GALGAS_symbolTableForBlockOptimization::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForBlockOptimization result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_uint & inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForBlockOptimization * p = NULL ;
  macroMyNew (p, cMapElement_symbolTableForBlockOptimization (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForBlockOptimization insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_uint inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForBlockOptimization * p = NULL ;
  macroMyNew (p, cMapElement_symbolTableForBlockOptimization (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_symbolTableForBlockOptimization_searchKey = "the '%K' label is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization::method_searchKey (GALGAS_lstring inKey,
                                                               GALGAS_uint & outArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_symbolTableForBlockOptimization_searchKey
                                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
    outArgument0 = p->mProperty_mDefinitionBlockIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_symbolTableForBlockOptimization::getter_mDefinitionBlockIndexForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
    result = p->mProperty_mDefinitionBlockIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization::setter_setMDefinitionBlockIndexForKey (GALGAS_uint inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForBlockOptimization * p = (cMapElement_symbolTableForBlockOptimization *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
    p->mProperty_mDefinitionBlockIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_symbolTableForBlockOptimization * GALGAS_symbolTableForBlockOptimization::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForBlockOptimization * result = (cMapElement_symbolTableForBlockOptimization *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForBlockOptimization) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForBlockOptimization::cEnumerator_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element cEnumerator_symbolTableForBlockOptimization::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
  return GALGAS_symbolTableForBlockOptimization_2D_element (p->mProperty_lkey, p->mProperty_mDefinitionBlockIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_symbolTableForBlockOptimization::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_symbolTableForBlockOptimization::current_mDefinitionBlockIndex (LOCATION_ARGS) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
  return p->mProperty_mDefinitionBlockIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForBlockOptimization::optional_searchKey (const GALGAS_string & inKey,
                                                                 GALGAS_uint & outArgument0) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
    outArgument0 = p->mProperty_mDefinitionBlockIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@symbolTableForBlockOptimization type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ("symbolTableForBlockOptimization",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForBlockOptimization::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForBlockOptimization::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForBlockOptimization (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization GALGAS_symbolTableForBlockOptimization::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization result ;
  const GALGAS_symbolTableForBlockOptimization * p = (const GALGAS_symbolTableForBlockOptimization *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForBlockOptimization *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_symbolTableForClusterOrdering::cMapElement_symbolTableForClusterOrdering (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_uint & in_mCluster
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mCluster (in_mCluster) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_symbolTableForClusterOrdering::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCluster.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_symbolTableForClusterOrdering::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_symbolTableForClusterOrdering (mProperty_lkey, mProperty_mCluster COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_symbolTableForClusterOrdering::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCluster" ":" ;
  mProperty_mCluster.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_symbolTableForClusterOrdering::compare (const cCollectionElement * inOperand) const {
  cMapElement_symbolTableForClusterOrdering * operand = (cMapElement_symbolTableForClusterOrdering *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mCluster.objectCompare (operand->mProperty_mCluster) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering::GALGAS_symbolTableForClusterOrdering (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering::GALGAS_symbolTableForClusterOrdering (const GALGAS_symbolTableForClusterOrdering & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering & GALGAS_symbolTableForClusterOrdering::operator = (const GALGAS_symbolTableForClusterOrdering & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering GALGAS_symbolTableForClusterOrdering::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering GALGAS_symbolTableForClusterOrdering::constructor_mapWithMapToOverride (const GALGAS_symbolTableForClusterOrdering & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering GALGAS_symbolTableForClusterOrdering::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForClusterOrdering result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering::addAssign_operation (const GALGAS_lstring & inKey,
                                                                const GALGAS_uint & inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * p = NULL ;
  macroMyNew (p, cMapElement_symbolTableForClusterOrdering (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForClusterOrdering insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering::setter_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_uint inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * p = NULL ;
  macroMyNew (p, cMapElement_symbolTableForClusterOrdering (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_symbolTableForClusterOrdering_searchKey = "the '%K' label is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering::method_searchKey (GALGAS_lstring inKey,
                                                             GALGAS_uint & outArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_symbolTableForClusterOrdering_searchKey
                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    outArgument0 = p->mProperty_mCluster ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_symbolTableForClusterOrdering::getter_mClusterForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    result = p->mProperty_mCluster ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering::setter_setMClusterForKey (GALGAS_uint inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForClusterOrdering * p = (cMapElement_symbolTableForClusterOrdering *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    p->mProperty_mCluster = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_symbolTableForClusterOrdering * GALGAS_symbolTableForClusterOrdering::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * result = (cMapElement_symbolTableForClusterOrdering *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForClusterOrdering) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForClusterOrdering::cEnumerator_symbolTableForClusterOrdering (const GALGAS_symbolTableForClusterOrdering & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element cEnumerator_symbolTableForClusterOrdering::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
  return GALGAS_symbolTableForClusterOrdering_2D_element (p->mProperty_lkey, p->mProperty_mCluster) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_symbolTableForClusterOrdering::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_symbolTableForClusterOrdering::current_mCluster (LOCATION_ARGS) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
  return p->mProperty_mCluster ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForClusterOrdering::optional_searchKey (const GALGAS_string & inKey,
                                                               GALGAS_uint & outArgument0) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    outArgument0 = p->mProperty_mCluster ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@symbolTableForClusterOrdering type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ("symbolTableForClusterOrdering",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForClusterOrdering::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForClusterOrdering::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForClusterOrdering (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering GALGAS_symbolTableForClusterOrdering::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering result ;
  const GALGAS_symbolTableForClusterOrdering * p = (const GALGAS_symbolTableForClusterOrdering *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForClusterOrdering *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow> gExtensionMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_instructionRelativeBranchOverflow (const int32_t inClassIndex,
                                                             extensionMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow inMethod) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                            const GALGAS_uint constin_inAddress,
                                                            const GALGAS_string constin_inBlockLabel,
                                                            const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                            GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.count ()) {
      f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.count ()) {
           f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioOverflowMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                 const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                 const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                 const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                 GALGAS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (void) {
  enterExtensionMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                          extensionMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (void) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow,
                                                                                                freeExtensionMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow> gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_terminatorRelativeBranchOverflow (const int32_t inClassIndex,
                                                            extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const GALGAS_uint constin_inAddress,
                                                           const GALGAS_string constin_inBlockLabel,
                                                           const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           const GALGAS_string constin_inNextBlockLabel,
                                                           GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.count ()) {
           f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioOverflowMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                  const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                  const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                  const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                  const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                  GALGAS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (void) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow,
                                                                                                 freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution> gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_performTerminatorRelativeBranchResolution (const int32_t inClassIndex,
                                                                     extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                    const GALGAS_uint constin_inAddress,
                                                                    const GALGAS_string constin_inBlockLabel,
                                                                    const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    const GALGAS_string constin_inNextBlockLabel,
                                                                    GALGAS_uint & io_ioConversionCount,
                                                                    GALGAS_string & io_ioListFileContents,
                                                                    GALGAS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  out_outModifiedTerminator.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.count ()) {
           f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioConversionCount, io_ioListFileContents, out_outModifiedTerminator, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                           const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                           const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                           const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                           const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                           GALGAS_uint & /* ioArgument_ioConversionCount */,
                                                                                                           GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                           GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractBlockTerminator * object = inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractBlockTerminator) ;
  const GALGAS_ipic_31__38_AbstractBlockTerminator temp_0 = object ;
  outArgument_outModifiedTerminator = temp_0 ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (void) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution,
                                                                                                          freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution) ;

//----------------------------------------------------------------------------------------------------------------------

cMapElement_symbolTableForRelativesResolution::cMapElement_symbolTableForRelativesResolution (const GALGAS_lstring & inKey,
                                                                                              const GALGAS_uint & in_mLabelAddress
                                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelAddress (in_mLabelAddress) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_symbolTableForRelativesResolution::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelAddress.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_symbolTableForRelativesResolution::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_symbolTableForRelativesResolution (mProperty_lkey, mProperty_mLabelAddress COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_symbolTableForRelativesResolution::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelAddress" ":" ;
  mProperty_mLabelAddress.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_symbolTableForRelativesResolution::compare (const cCollectionElement * inOperand) const {
  cMapElement_symbolTableForRelativesResolution * operand = (cMapElement_symbolTableForRelativesResolution *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabelAddress.objectCompare (operand->mProperty_mLabelAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution::GALGAS_symbolTableForRelativesResolution (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution::GALGAS_symbolTableForRelativesResolution (const GALGAS_symbolTableForRelativesResolution & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution & GALGAS_symbolTableForRelativesResolution::operator = (const GALGAS_symbolTableForRelativesResolution & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution GALGAS_symbolTableForRelativesResolution::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution GALGAS_symbolTableForRelativesResolution::constructor_mapWithMapToOverride (const GALGAS_symbolTableForRelativesResolution & inMapToOverride
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution GALGAS_symbolTableForRelativesResolution::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForRelativesResolution result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution::addAssign_operation (const GALGAS_lstring & inKey,
                                                                    const GALGAS_uint & inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * p = NULL ;
  macroMyNew (p, cMapElement_symbolTableForRelativesResolution (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForRelativesResolution insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution::setter_insertKey (GALGAS_lstring inKey,
                                                                 GALGAS_uint inArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * p = NULL ;
  macroMyNew (p, cMapElement_symbolTableForRelativesResolution (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_symbolTableForRelativesResolution_searchKey = "the '%K' label is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution::method_searchKey (GALGAS_lstring inKey,
                                                                 GALGAS_uint & outArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) performSearch (inKey,
                                                                                                                                   inCompiler,
                                                                                                                                   kSearchErrorMessage_symbolTableForRelativesResolution_searchKey
                                                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    outArgument0 = p->mProperty_mLabelAddress ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_symbolTableForRelativesResolution::getter_mLabelAddressForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    result = p->mProperty_mLabelAddress ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution::setter_setMLabelAddressForKey (GALGAS_uint inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForRelativesResolution * p = (cMapElement_symbolTableForRelativesResolution *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    p->mProperty_mLabelAddress = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_symbolTableForRelativesResolution * GALGAS_symbolTableForRelativesResolution::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                             const GALGAS_string & inKey
                                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * result = (cMapElement_symbolTableForRelativesResolution *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForRelativesResolution) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForRelativesResolution::cEnumerator_symbolTableForRelativesResolution (const GALGAS_symbolTableForRelativesResolution & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element cEnumerator_symbolTableForRelativesResolution::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
  return GALGAS_symbolTableForRelativesResolution_2D_element (p->mProperty_lkey, p->mProperty_mLabelAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_symbolTableForRelativesResolution::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_symbolTableForRelativesResolution::current_mLabelAddress (LOCATION_ARGS) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
  return p->mProperty_mLabelAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForRelativesResolution::optional_searchKey (const GALGAS_string & inKey,
                                                                   GALGAS_uint & outArgument0) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    outArgument0 = p->mProperty_mLabelAddress ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@symbolTableForRelativesResolution type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ("symbolTableForRelativesResolution",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForRelativesResolution::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForRelativesResolution::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForRelativesResolution (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution GALGAS_symbolTableForRelativesResolution::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution result ;
  const GALGAS_symbolTableForRelativesResolution * p = (const GALGAS_symbolTableForRelativesResolution *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForRelativesResolution *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@codeList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_codeList : public cCollectionElement {
  public: GALGAS_codeList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_codeList (const GALGAS_string & in_mAssemblyCode,
                                       const GALGAS_uintlist & in_mBinaryCode
                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_codeList (const GALGAS_codeList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_codeList::cCollectionElement_codeList (const GALGAS_string & in_mAssemblyCode,
                                                          const GALGAS_uintlist & in_mBinaryCode
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAssemblyCode, in_mBinaryCode) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_codeList::cCollectionElement_codeList (const GALGAS_codeList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAssemblyCode, inElement.mProperty_mBinaryCode) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_codeList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_codeList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_codeList (mObject.mProperty_mAssemblyCode, mObject.mProperty_mBinaryCode COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_codeList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssemblyCode" ":" ;
  mObject.mProperty_mAssemblyCode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBinaryCode" ":" ;
  mObject.mProperty_mBinaryCode.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_codeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_codeList * operand = (cCollectionElement_codeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_codeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList::GALGAS_codeList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList::GALGAS_codeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_codeList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                            const GALGAS_uintlist & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_codeList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_codeList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_codeList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_string & in_mAssemblyCode,
                                                 const GALGAS_uintlist & in_mBinaryCode
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = NULL ;
  macroMyNew (p, cCollectionElement_codeList (in_mAssemblyCode,
                                              in_mBinaryCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::addAssign_operation (const GALGAS_string & inOperand0,
                                           const GALGAS_uintlist & inOperand1
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_codeList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_append (GALGAS_codeList_2D_element inElement,
                                     C_Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_codeList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                            const GALGAS_uintlist inOperand1,
                                            const GALGAS_uint inInsertionIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_codeList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                            GALGAS_uintlist & outOperand1,
                                            const GALGAS_uint inRemoveIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_codeList) ;
        outOperand0 = p->mObject.mProperty_mAssemblyCode ;
        outOperand1 = p->mObject.mProperty_mBinaryCode ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_popFirst (GALGAS_string & outOperand0,
                                       GALGAS_uintlist & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_popLast (GALGAS_string & outOperand0,
                                      GALGAS_uintlist & outOperand1,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::method_first (GALGAS_string & outOperand0,
                                    GALGAS_uintlist & outOperand1,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::method_last (GALGAS_string & outOperand0,
                                   GALGAS_uintlist & outOperand1,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::add_operation (const GALGAS_codeList & inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_codeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_codeList result = GALGAS_codeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_codeList result = GALGAS_codeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_codeList result = GALGAS_codeList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::plusAssign_operation (const GALGAS_codeList inOperand,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_setMAssemblyCodeAtIndex (GALGAS_string inOperand,
                                                      GALGAS_uint inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssemblyCode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_codeList::getter_mAssemblyCodeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    result = p->mObject.mProperty_mAssemblyCode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_setMBinaryCodeAtIndex (GALGAS_uintlist inOperand,
                                                    GALGAS_uint inIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBinaryCode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_codeList::getter_mBinaryCodeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  GALGAS_uintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    result = p->mObject.mProperty_mBinaryCode ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_codeList::cEnumerator_codeList (const GALGAS_codeList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element cEnumerator_codeList::current (LOCATION_ARGS) const {
  const cCollectionElement_codeList * p = (const cCollectionElement_codeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_codeList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_codeList::current_mAssemblyCode (LOCATION_ARGS) const {
  const cCollectionElement_codeList * p = (const cCollectionElement_codeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_codeList) ;
  return p->mObject.mProperty_mAssemblyCode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_codeList::current_mBinaryCode (LOCATION_ARGS) const {
  const cCollectionElement_codeList * p = (const cCollectionElement_codeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_codeList) ;
  return p->mObject.mProperty_mBinaryCode ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@codeList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_codeList ("codeList",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_codeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_codeList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_codeList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_codeList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_codeList result ;
  const GALGAS_codeList * p = (const GALGAS_codeList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_codeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("codeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_pic_31__38__5F_dataAddressMap::cMapElement_pic_31__38__5F_dataAddressMap (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_uint & in_mDataAddress
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDataAddress (in_mDataAddress) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_pic_31__38__5F_dataAddressMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDataAddress.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_pic_31__38__5F_dataAddressMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_pic_31__38__5F_dataAddressMap (mProperty_lkey, mProperty_mDataAddress COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_pic_31__38__5F_dataAddressMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDataAddress" ":" ;
  mProperty_mDataAddress.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_pic_31__38__5F_dataAddressMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_pic_31__38__5F_dataAddressMap * operand = (cMapElement_pic_31__38__5F_dataAddressMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mDataAddress.objectCompare (operand->mProperty_mDataAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap::GALGAS_pic_31__38__5F_dataAddressMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap::GALGAS_pic_31__38__5F_dataAddressMap (const GALGAS_pic_31__38__5F_dataAddressMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap & GALGAS_pic_31__38__5F_dataAddressMap::operator = (const GALGAS_pic_31__38__5F_dataAddressMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap GALGAS_pic_31__38__5F_dataAddressMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap GALGAS_pic_31__38__5F_dataAddressMap::constructor_mapWithMapToOverride (const GALGAS_pic_31__38__5F_dataAddressMap & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap GALGAS_pic_31__38__5F_dataAddressMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38__5F_dataAddressMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                const GALGAS_uint & inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * p = NULL ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataAddressMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@pic_31__38__5F_dataAddressMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap::setter_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_uint inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * p = NULL ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataAddressMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey = "the '%K' data is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap::method_searchKey (GALGAS_lstring inKey,
                                                             GALGAS_uint & outArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey
                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    outArgument0 = p->mProperty_mDataAddress ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_pic_31__38__5F_dataAddressMap::getter_mDataAddressForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    result = p->mProperty_mDataAddress ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap::setter_setMDataAddressForKey (GALGAS_uint inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38__5F_dataAddressMap * p = (cMapElement_pic_31__38__5F_dataAddressMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    p->mProperty_mDataAddress = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_pic_31__38__5F_dataAddressMap * GALGAS_pic_31__38__5F_dataAddressMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * result = (cMapElement_pic_31__38__5F_dataAddressMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_pic_31__38__5F_dataAddressMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38__5F_dataAddressMap::cEnumerator_pic_31__38__5F_dataAddressMap (const GALGAS_pic_31__38__5F_dataAddressMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element cEnumerator_pic_31__38__5F_dataAddressMap::current (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
  return GALGAS_pic_31__38__5F_dataAddressMap_2D_element (p->mProperty_lkey, p->mProperty_mDataAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38__5F_dataAddressMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_pic_31__38__5F_dataAddressMap::current_mDataAddress (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
  return p->mProperty_mDataAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38__5F_dataAddressMap::optional_searchKey (const GALGAS_string & inKey,
                                                               GALGAS_uint & outArgument0) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    outArgument0 = p->mProperty_mDataAddress ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18_dataAddressMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ("pic18_dataAddressMap",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataAddressMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataAddressMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataAddressMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap GALGAS_pic_31__38__5F_dataAddressMap::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap result ;
  const GALGAS_pic_31__38__5F_dataAddressMap * p = (const GALGAS_pic_31__38__5F_dataAddressMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38__5F_dataAddressMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SequentialInstruction generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_SequentialInstruction_generateCode> gExtensionMethodTable_ipic_31__38_SequentialInstruction_generateCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_ipic_31__38_SequentialInstruction_generateCode inMethod) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_generateCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_SequentialInstruction_generateCode (void) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_generateCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_generateCode (NULL,
                                                                           freeExtensionMethod_ipic_31__38_SequentialInstruction_generateCode) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                       const GALGAS_uint constin_inAddress,
                                       const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                       const GALGAS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                       GALGAS_codeList & out_outCode,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCode.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_SequentialInstruction_generateCode f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_SequentialInstruction_generateCode.count ()) {
      f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_generateCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_ipic_31__38_SequentialInstruction_generateCode.count ()) {
          f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_generateCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_ipic_31__38_SequentialInstruction_generateCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inSymbolTable, constin_inDataMap, out_outCode, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode> gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateTerminatorCode (const int32_t inClassIndex,
                                                  extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode (void) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode (NULL,
                                                                                       freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                 const GALGAS_uint constin_inAddress,
                                                 const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const GALGAS_string constin_inNextBlockLabel,
                                                 GALGAS_codeList & out_outCode,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCode.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.count ()) {
          f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inSymbolTable, constin_inNextBlockLabel, out_outCode, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator> gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isEqualToTerminator (const int32_t inClassIndex,
                                               enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator inGetter) {
  gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator (void) {
  gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator (NULL,
                                                                                    freeExtensionGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                     const GALGAS_ipic_31__38_AbstractBlockTerminator in_inTerminator,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator f = NULL ;
    if (classIndex < gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.count ()) {
      f = gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.count ()) {
           f = gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inTerminator, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay> gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_terminatorDisplay (const int32_t inClassIndex,
                                             enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay inGetter) {
  gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay (void) {
  gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay (NULL,
                                                                                  freeExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                     const GALGAS_string in_inNextBlockLabel,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay f = NULL ;
    if (classIndex < gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.count ()) {
      f = gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.count ()) {
           f = gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inNextBlockLabel, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize> gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_terminatorSize (const int32_t inClassIndex,
                                          enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize inGetter) {
  gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize (void) {
  gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize (NULL,
                                                                               freeExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint callExtensionGetter_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                const GALGAS_string in_inNextBlockLabel,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize f = NULL ;
    if (classIndex < gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.count ()) {
      f = gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.count ()) {
           f = gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inNextBlockLabel, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18SequentialInstruction instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionSize> gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionSize ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_instructionSize (const int32_t inClassIndex,
                                           enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionSize inGetter) {
  gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionSize.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint callExtensionGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionSize f = NULL ;
    if (classIndex < gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionSize.count ()) {
      f = gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionSize (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionSize.count ()) {
           f = gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionSize (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionSize.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_SequentialInstruction_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_SequentialInstruction_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                        extensionGetter_ipic_31__38_SequentialInstruction_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_ipic_31__38_SequentialInstruction_instructionSize (void) {
  gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionSize.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_SequentialInstruction_instructionSize (defineExtensionGetter_ipic_31__38_SequentialInstruction_instructionSize,
                                                                              freeExtensionGetter_ipic_31__38_SequentialInstruction_instructionSize) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution> gExtensionMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_performInstructionRelativeBranchResolution (const int32_t inClassIndex,
                                                                      extensionMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution inMethod) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                     const GALGAS_uint constin_inAddress,
                                                                     const GALGAS_string constin_inBlockLabel,
                                                                     const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                     GALGAS_uint & io_ioConversionCount,
                                                                     GALGAS_string & io_ioListFileContents,
                                                                     GALGAS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  out_outModifiedInstruction.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.count ()) {
      f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.count ()) {
           f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioConversionCount, io_ioListFileContents, out_outModifiedInstruction, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                          const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                          const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                          const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                          GALGAS_uint & /* ioArgument_ioConversionCount */,
                                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_SequentialInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_SequentialInstruction) ;
  const GALGAS_ipic_31__38_SequentialInstruction temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                                   extensionMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (void) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution,
                                                                                                         freeExtensionMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18SequentialInstruction instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionDisplay> gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_instructionDisplay (const int32_t inClassIndex,
                                              enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionDisplay inGetter) {
  gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_ipic_31__38_SequentialInstruction_instructionDisplay (void) {
  gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_SequentialInstruction_instructionDisplay (NULL,
                                                                                 freeExtensionGetter_ipic_31__38_SequentialInstruction_instructionDisplay) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist callExtensionGetter_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_stringlist result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionDisplay f = NULL ;
    if (classIndex < gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.count ()) {
      f = gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.count ()) {
           f = gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@pic18InstructionWithNoOperandKind mnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                        C_Compiler * /* inCompiler */
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




//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines> gExtensionMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_addUsedRoutines (const int32_t inClassIndex,
                                           extensionMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines inMethod) {
  gExtensionMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_pic_31__38_PiccoloInstruction_addUsedRoutines (void) {
  gExtensionMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_PiccoloInstruction_addUsedRoutines (NULL,
                                                                          freeExtensionMethod_pic_31__38_PiccoloInstruction_addUsedRoutines) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const GALGAS_pic_31__38_MacroMap constin_inMacroMap,
                                          GALGAS_stringset & io_ioUsedRoutines,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines f = NULL ;
    if (classIndex < gExtensionMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.count ()) {
      f = gExtensionMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.count ()) {
          f = gExtensionMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inMacroMap, io_ioUsedRoutines, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_declaredRoutineMap::cMapElement_declaredRoutineMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_luint & in_mRequiredBank,
                                                                const GALGAS_luint & in_mReturnedBank,
                                                                const GALGAS_bool & in_mPreservesBank,
                                                                const GALGAS_bool & in_mIsNoReturn,
                                                                const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRequiredBank (in_mRequiredBank),
mProperty_mReturnedBank (in_mReturnedBank),
mProperty_mPreservesBank (in_mPreservesBank),
mProperty_mIsNoReturn (in_mIsNoReturn),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_declaredRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_declaredRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_declaredRoutineMap (mProperty_lkey, mProperty_mRequiredBank, mProperty_mReturnedBank, mProperty_mPreservesBank, mProperty_mIsNoReturn, mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_declaredRoutineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRequiredBank" ":" ;
  mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedBank" ":" ;
  mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPreservesBank" ":" ;
  mProperty_mPreservesBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsNoReturn" ":" ;
  mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_declaredRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_declaredRoutineMap * operand = (cMapElement_declaredRoutineMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRequiredBank.objectCompare (operand->mProperty_mRequiredBank) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnedBank.objectCompare (operand->mProperty_mReturnedBank) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPreservesBank.objectCompare (operand->mProperty_mPreservesBank) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsNoReturn.objectCompare (operand->mProperty_mIsNoReturn) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (operand->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap::GALGAS_declaredRoutineMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap::GALGAS_declaredRoutineMap (const GALGAS_declaredRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap & GALGAS_declaredRoutineMap::operator = (const GALGAS_declaredRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap GALGAS_declaredRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap GALGAS_declaredRoutineMap::constructor_mapWithMapToOverride (const GALGAS_declaredRoutineMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap GALGAS_declaredRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_declaredRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_luint & inArgument0,
                                                     const GALGAS_luint & inArgument1,
                                                     const GALGAS_bool & inArgument2,
                                                     const GALGAS_bool & inArgument3,
                                                     const GALGAS_pic_31__38_InstructionList & inArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_declaredRoutineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_luint inArgument0,
                                                  GALGAS_luint inArgument1,
                                                  GALGAS_bool inArgument2,
                                                  GALGAS_bool inArgument3,
                                                  GALGAS_pic_31__38_InstructionList inArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_declaredRoutineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_declaredRoutineMap_searchKey = "the '%K' routine is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_luint & outArgument0,
                                                  GALGAS_luint & outArgument1,
                                                  GALGAS_bool & outArgument2,
                                                  GALGAS_bool & outArgument3,
                                                  GALGAS_pic_31__38_InstructionList & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_declaredRoutineMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_declaredRoutineMap::getter_mRequiredBankForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mRequiredBank ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_declaredRoutineMap::getter_mReturnedBankForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mReturnedBank ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_declaredRoutineMap::getter_mPreservesBankForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mPreservesBank ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_declaredRoutineMap::getter_mIsNoReturnForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mIsNoReturn ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_declaredRoutineMap::getter_mInstructionListForKey (const GALGAS_string & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMRequiredBankForKey (GALGAS_luint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mRequiredBank = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMReturnedBankForKey (GALGAS_luint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mReturnedBank = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMPreservesBankForKey (GALGAS_bool inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mPreservesBank = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMIsNoReturnForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mIsNoReturn = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMInstructionListForKey (GALGAS_pic_31__38_InstructionList inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mInstructionList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_declaredRoutineMap * GALGAS_declaredRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * result = (cMapElement_declaredRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_declaredRoutineMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_declaredRoutineMap::cEnumerator_declaredRoutineMap (const GALGAS_declaredRoutineMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element cEnumerator_declaredRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return GALGAS_declaredRoutineMap_2D_element (p->mProperty_lkey, p->mProperty_mRequiredBank, p->mProperty_mReturnedBank, p->mProperty_mPreservesBank, p->mProperty_mIsNoReturn, p->mProperty_mInstructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_declaredRoutineMap::current_mRequiredBank (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mRequiredBank ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_declaredRoutineMap::current_mReturnedBank (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mReturnedBank ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_declaredRoutineMap::current_mPreservesBank (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mPreservesBank ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_declaredRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mIsNoReturn ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_declaredRoutineMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_declaredRoutineMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_luint & outArgument0,
                                                    GALGAS_luint & outArgument1,
                                                    GALGAS_bool & outArgument2,
                                                    GALGAS_bool & outArgument3,
                                                    GALGAS_pic_31__38_InstructionList & outArgument4) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    outArgument0 = p->mProperty_mRequiredBank ;
    outArgument1 = p->mProperty_mReturnedBank ;
    outArgument2 = p->mProperty_mPreservesBank ;
    outArgument3 = p->mProperty_mIsNoReturn ;
    outArgument4 = p->mProperty_mInstructionList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@declaredRoutineMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredRoutineMap ("declaredRoutineMap",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap GALGAS_declaredRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap result ;
  const GALGAS_declaredRoutineMap * p = (const GALGAS_declaredRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@pic18PiccoloInstruction performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_pic_31__38_PiccoloInstruction_performInlining> gExtensionMethodTable_pic_31__38_PiccoloInstruction_performInlining ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_performInlining (const int32_t inClassIndex,
                                           extensionMethodSignature_pic_31__38_PiccoloInstruction_performInlining inMethod) {
  gExtensionMethodTable_pic_31__38_PiccoloInstruction_performInlining.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const GALGAS_stringset constin_inInlinedRoutineSet,
                                          const GALGAS_declaredRoutineMap constin_inDeclaredRoutineMap,
                                          const GALGAS_stringset constin_inCurrentlyInlinedRoutineSet,
                                          GALGAS_pic_31__38_InstructionList & io_ioInstructionList,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_pic_31__38_PiccoloInstruction_performInlining f = NULL ;
    if (classIndex < gExtensionMethodTable_pic_31__38_PiccoloInstruction_performInlining.count ()) {
      f = gExtensionMethodTable_pic_31__38_PiccoloInstruction_performInlining (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_pic_31__38_PiccoloInstruction_performInlining.count ()) {
           f = gExtensionMethodTable_pic_31__38_PiccoloInstruction_performInlining (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_pic_31__38_PiccoloInstruction_performInlining.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inInlinedRoutineSet, constin_inDeclaredRoutineMap, constin_inCurrentlyInlinedRoutineSet, io_ioInstructionList, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_PiccoloInstruction_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_stringset /* constinArgument_inInlinedRoutineSet */,
                                                                           const GALGAS_declaredRoutineMap /* constinArgument_inDeclaredRoutineMap */,
                                                                           const GALGAS_stringset /* constinArgument_inCurrentlyInlinedRoutineSet */,
                                                                           GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_PiccoloInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_PiccoloInstruction) ;
  const GALGAS_pic_31__38_PiccoloInstruction temp_0 = object ;
  ioArgument_ioInstructionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 22)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_PiccoloInstruction_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction.mSlotID,
                                        extensionMethod_pic_31__38_PiccoloInstruction_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_pic_31__38_PiccoloInstruction_performInlining (void) {
  gExtensionMethodTable_pic_31__38_PiccoloInstruction_performInlining.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_PiccoloInstruction_performInlining (defineExtensionMethod_pic_31__38_PiccoloInstruction_performInlining,
                                                                          freeExtensionMethod_pic_31__38_PiccoloInstruction_performInlining) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction> gExtensionMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeSimpleInstruction (const int32_t inClassIndex,
                                                    extensionMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction inMethod) {
  gExtensionMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction (void) {
  gExtensionMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction (NULL,
                                                                                         freeExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                   const GALGAS_uint constin_inAccessBankSplitOffset,
                                                   const GALGAS_routineMap constin_inRoutineMap,
                                                   const GALGAS_registerTable constin_inRegisterTable,
                                                   const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                                   const GALGAS_constantMap constin_inConstantMap,
                                                   GALGAS_uint & io_ioCurrentBank,
                                                   const GALGAS_bool constin_inShouldPreserveBSR,
                                                   GALGAS_stringset & io_ioUsedRegisters,
                                                   GALGAS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstruction.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction f = NULL ;
    if (classIndex < gExtensionMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.count ()) {
      f = gExtensionMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.count ()) {
          f = gExtensionMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, constin_inRoutineMap, constin_inRegisterTable, constin_inDataMap, constin_inConstantMap, io_ioCurrentBank, constin_inShouldPreserveBSR, io_ioUsedRegisters, out_outInstruction, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_pic_31__38_PiccoloInstruction_analyze> gExtensionMethodTable_pic_31__38_PiccoloInstruction_analyze ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_pic_31__38_PiccoloInstruction_analyze inMethod) {
  gExtensionMethodTable_pic_31__38_PiccoloInstruction_analyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_pic_31__38_PiccoloInstruction_analyze (void) {
  gExtensionMethodTable_pic_31__38_PiccoloInstruction_analyze.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_PiccoloInstruction_analyze (NULL,
                                                                  freeExtensionMethod_pic_31__38_PiccoloInstruction_analyze) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                  const GALGAS_uint constin_inAccessBankSplitOffset,
                                  GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                  const GALGAS_routineMap constin_inRoutineMap,
                                  const GALGAS_registerTable constin_inRegisterTable,
                                  const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                  const GALGAS_constantMap constin_inConstantMap,
                                  const GALGAS_pic_31__38_MacroMap constin_inMacroMap,
                                  GALGAS_uint & io_ioLocalLabelIndex,
                                  GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                  GALGAS_lstring & io_ioBlockLabel,
                                  GALGAS_string & io_ioListFileContents,
                                  GALGAS_uint & io_ioCurrentBank,
                                  const GALGAS_bool constin_inShouldPreserveBSR,
                                  const GALGAS_routineKind constin_inRoutineKind,
                                  GALGAS_stringset & io_ioUsedRegisters,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_pic_31__38_PiccoloInstruction_analyze f = NULL ;
    if (classIndex < gExtensionMethodTable_pic_31__38_PiccoloInstruction_analyze.count ()) {
      f = gExtensionMethodTable_pic_31__38_PiccoloInstruction_analyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_pic_31__38_PiccoloInstruction_analyze.count ()) {
          f = gExtensionMethodTable_pic_31__38_PiccoloInstruction_analyze (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_pic_31__38_PiccoloInstruction_analyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, io_ioGeneratedBlockList, constin_inRoutineMap, constin_inRegisterTable, constin_inDataMap, constin_inConstantMap, constin_inMacroMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioBlockLabel, io_ioListFileContents, io_ioCurrentBank, constin_inShouldPreserveBSR, constin_inRoutineKind, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_blockInstructionBlockMap::cMapElement_blockInstructionBlockMap (const GALGAS_lstring & inKey,
                                                                            const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                            const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                            const GALGAS_location & in_mEndOfBlock
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mBlockTerminaisonForBlockInstruction (in_mBlockTerminaisonForBlockInstruction),
mProperty_mEndOfBlock (in_mEndOfBlock) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_blockInstructionBlockMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInstructionList.isValid () && mProperty_mBlockTerminaisonForBlockInstruction.isValid () && mProperty_mEndOfBlock.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockInstructionBlockMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_blockInstructionBlockMap (mProperty_lkey, mProperty_mInstructionList, mProperty_mBlockTerminaisonForBlockInstruction, mProperty_mEndOfBlock COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_blockInstructionBlockMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBlockTerminaisonForBlockInstruction" ":" ;
  mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBlock" ":" ;
  mProperty_mEndOfBlock.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_blockInstructionBlockMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_blockInstructionBlockMap * operand = (cMapElement_blockInstructionBlockMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (operand->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlockTerminaisonForBlockInstruction.objectCompare (operand->mProperty_mBlockTerminaisonForBlockInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfBlock.objectCompare (operand->mProperty_mEndOfBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap::GALGAS_blockInstructionBlockMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap::GALGAS_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap & GALGAS_blockInstructionBlockMap::operator = (const GALGAS_blockInstructionBlockMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap GALGAS_blockInstructionBlockMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap GALGAS_blockInstructionBlockMap::constructor_mapWithMapToOverride (const GALGAS_blockInstructionBlockMap & inMapToOverride
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap GALGAS_blockInstructionBlockMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_blockInstructionBlockMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                           const GALGAS_pic_31__38_InstructionList & inArgument0,
                                                           const GALGAS_abstractBlockTerminationForBlockInstruction & inArgument1,
                                                           const GALGAS_location & inArgument2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * p = NULL ;
  macroMyNew (p, cMapElement_blockInstructionBlockMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockInstructionBlockMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::setter_insertKey (GALGAS_lstring inKey,
                                                        GALGAS_pic_31__38_InstructionList inArgument0,
                                                        GALGAS_abstractBlockTerminationForBlockInstruction inArgument1,
                                                        GALGAS_location inArgument2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * p = NULL ;
  macroMyNew (p, cMapElement_blockInstructionBlockMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockInstructionBlockMap_searchKey = "the '%K' block is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::method_searchKey (GALGAS_lstring inKey,
                                                        GALGAS_pic_31__38_InstructionList & outArgument0,
                                                        GALGAS_abstractBlockTerminationForBlockInstruction & outArgument1,
                                                        GALGAS_location & outArgument2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) performSearch (inKey,
                                                                                                                 inCompiler,
                                                                                                                 kSearchErrorMessage_blockInstructionBlockMap_searchKey
                                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_blockInstructionBlockMap::getter_mInstructionListForKey (const GALGAS_string & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) attributes ;
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_blockInstructionBlockMap::getter_mBlockTerminaisonForBlockInstructionForKey (const GALGAS_string & inKey,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) attributes ;
  GALGAS_abstractBlockTerminationForBlockInstruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    result = p->mProperty_mBlockTerminaisonForBlockInstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_blockInstructionBlockMap::getter_mEndOfBlockForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    result = p->mProperty_mEndOfBlock ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::setter_setMInstructionListForKey (GALGAS_pic_31__38_InstructionList inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    p->mProperty_mInstructionList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::setter_setMBlockTerminaisonForBlockInstructionForKey (GALGAS_abstractBlockTerminationForBlockInstruction inAttributeValue,
                                                                                            GALGAS_string inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    p->mProperty_mBlockTerminaisonForBlockInstruction = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::setter_setMEndOfBlockForKey (GALGAS_location inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    p->mProperty_mEndOfBlock = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_blockInstructionBlockMap * GALGAS_blockInstructionBlockMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * result = (cMapElement_blockInstructionBlockMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockInstructionBlockMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_blockInstructionBlockMap::cEnumerator_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element cEnumerator_blockInstructionBlockMap::current (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return GALGAS_blockInstructionBlockMap_2D_element (p->mProperty_lkey, p->mProperty_mInstructionList, p->mProperty_mBlockTerminaisonForBlockInstruction, p->mProperty_mEndOfBlock) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_blockInstructionBlockMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_blockInstructionBlockMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return p->mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction cEnumerator_blockInstructionBlockMap::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return p->mProperty_mBlockTerminaisonForBlockInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_blockInstructionBlockMap::current_mEndOfBlock (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return p->mProperty_mEndOfBlock ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_blockInstructionBlockMap::optional_searchKey (const GALGAS_string & inKey,
                                                          GALGAS_pic_31__38_InstructionList & outArgument0,
                                                          GALGAS_abstractBlockTerminationForBlockInstruction & outArgument1,
                                                          GALGAS_location & outArgument2) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    outArgument0 = p->mProperty_mInstructionList ;
    outArgument1 = p->mProperty_mBlockTerminaisonForBlockInstruction ;
    outArgument2 = p->mProperty_mEndOfBlock ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@blockInstructionBlockMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInstructionBlockMap ("blockInstructionBlockMap",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInstructionBlockMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInstructionBlockMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInstructionBlockMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap GALGAS_blockInstructionBlockMap::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap result ;
  const GALGAS_blockInstructionBlockMap * p = (const GALGAS_blockInstructionBlockMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockInstructionBlockMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_blockInitialBankSelectionMap::cMapElement_blockInitialBankSelectionMap (const GALGAS_lstring & inKey,
                                                                                    const GALGAS_uint & in_mInitialBankSelection,
                                                                                    const GALGAS_string & in_mSourceBlock
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitialBankSelection (in_mInitialBankSelection),
mProperty_mSourceBlock (in_mSourceBlock) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_blockInitialBankSelectionMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialBankSelection.isValid () && mProperty_mSourceBlock.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockInitialBankSelectionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_blockInitialBankSelectionMap (mProperty_lkey, mProperty_mInitialBankSelection, mProperty_mSourceBlock COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_blockInitialBankSelectionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialBankSelection" ":" ;
  mProperty_mInitialBankSelection.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceBlock" ":" ;
  mProperty_mSourceBlock.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_blockInitialBankSelectionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_blockInitialBankSelectionMap * operand = (cMapElement_blockInitialBankSelectionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInitialBankSelection.objectCompare (operand->mProperty_mInitialBankSelection) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceBlock.objectCompare (operand->mProperty_mSourceBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap::GALGAS_blockInitialBankSelectionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap::GALGAS_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap & GALGAS_blockInitialBankSelectionMap::operator = (const GALGAS_blockInitialBankSelectionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap GALGAS_blockInitialBankSelectionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap GALGAS_blockInitialBankSelectionMap::constructor_mapWithMapToOverride (const GALGAS_blockInitialBankSelectionMap & inMapToOverride
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap GALGAS_blockInitialBankSelectionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_blockInitialBankSelectionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                               const GALGAS_uint & inArgument0,
                                                               const GALGAS_string & inArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * p = NULL ;
  macroMyNew (p, cMapElement_blockInitialBankSelectionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockInitialBankSelectionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::setter_insertKey (GALGAS_lstring inKey,
                                                            GALGAS_uint inArgument0,
                                                            GALGAS_string inArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * p = NULL ;
  macroMyNew (p, cMapElement_blockInitialBankSelectionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared (internal error)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockInitialBankSelectionMap_searchKey = "the '%K' block is not declared (internal error)" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::method_searchKey (GALGAS_lstring inKey,
                                                            GALGAS_uint & outArgument0,
                                                            GALGAS_string & outArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_blockInitialBankSelectionMap_searchKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    outArgument0 = p->mProperty_mInitialBankSelection ;
    outArgument1 = p->mProperty_mSourceBlock ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_blockInitialBankSelectionMap::getter_mInitialBankSelectionForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    result = p->mProperty_mInitialBankSelection ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_blockInitialBankSelectionMap::getter_mSourceBlockForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    result = p->mProperty_mSourceBlock ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::setter_setMInitialBankSelectionForKey (GALGAS_uint inAttributeValue,
                                                                                 GALGAS_string inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInitialBankSelectionMap * p = (cMapElement_blockInitialBankSelectionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    p->mProperty_mInitialBankSelection = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::setter_setMSourceBlockForKey (GALGAS_string inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInitialBankSelectionMap * p = (cMapElement_blockInitialBankSelectionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    p->mProperty_mSourceBlock = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_blockInitialBankSelectionMap * GALGAS_blockInitialBankSelectionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * result = (cMapElement_blockInitialBankSelectionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockInitialBankSelectionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_blockInitialBankSelectionMap::cEnumerator_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element cEnumerator_blockInitialBankSelectionMap::current (LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
  return GALGAS_blockInitialBankSelectionMap_2D_element (p->mProperty_lkey, p->mProperty_mInitialBankSelection, p->mProperty_mSourceBlock) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_blockInitialBankSelectionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_blockInitialBankSelectionMap::current_mInitialBankSelection (LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
  return p->mProperty_mInitialBankSelection ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_blockInitialBankSelectionMap::current_mSourceBlock (LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
  return p->mProperty_mSourceBlock ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_blockInitialBankSelectionMap::optional_searchKey (const GALGAS_string & inKey,
                                                              GALGAS_uint & outArgument0,
                                                              GALGAS_string & outArgument1) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    outArgument0 = p->mProperty_mInitialBankSelection ;
    outArgument1 = p->mProperty_mSourceBlock ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@blockInitialBankSelectionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ("blockInitialBankSelectionMap",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInitialBankSelectionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInitialBankSelectionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInitialBankSelectionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap GALGAS_blockInitialBankSelectionMap::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap result ;
  const GALGAS_blockInitialBankSelectionMap * p = (const GALGAS_blockInitialBankSelectionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockInitialBankSelectionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks> gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_addVisitedBlocks (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks inMethod) {
  gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractBlockTerminationForBlockInstruction_addVisitedBlocks (void) {
  gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractBlockTerminationForBlockInstruction_addVisitedBlocks (NULL,
                                                                                         freeExtensionMethod_abstractBlockTerminationForBlockInstruction_addVisitedBlocks) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                           GALGAS_stringset & io_ioVisitedBlockSet,
                                           const GALGAS_blockInstructionBlockMap constin_inBlockMap,
                                           const GALGAS_string constin_inCurrentBlockName,
                                           const GALGAS_uint constin_inInitialBlockSetting,
                                           GALGAS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           GALGAS_bool & io_ioContinuesInSequence,
                                           GALGAS_bool & io_ioContinueAccessibilityExploration,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBlockTerminationForBlockInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.count ()) {
      f = gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.count ()) {
          f = gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioVisitedBlockSet, constin_inBlockMap, constin_inCurrentBlockName, constin_inInitialBlockSetting, io_ioBlockInitialBankSelectionMap, io_ioContinuesInSequence, io_ioContinueAccessibilityExploration, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction generateBlock'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock> gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateBlock (const int32_t inClassIndex,
                                         extensionMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock inMethod) {
  gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractBlockTerminationForBlockInstruction_generateBlock (void) {
  gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractBlockTerminationForBlockInstruction_generateBlock (NULL,
                                                                                      freeExtensionMethod_abstractBlockTerminationForBlockInstruction_generateBlock) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                        const GALGAS_uint constin_inAccessBankSplitOffset,
                                        const GALGAS_uint constin_inCurrentBank,
                                        const GALGAS_registerTable constin_inRegisterTable,
                                        const GALGAS_constantMap constin_inConstantMap,
                                        GALGAS_uint & io_ioLocalLabelIndex,
                                        GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        GALGAS_stringset & io_ioUsedRegisters,
                                        const GALGAS_string constin_inLabelForBlock,
                                        GALGAS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outTerminator.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBlockTerminationForBlockInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.count ()) {
      f = gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.count ()) {
          f = gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedBlockList, io_ioUsedRegisters, constin_inLabelForBlock, out_outTerminator, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18ConditionExpression analyzeCondition'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_pic_31__38_ConditionExpression_analyzeCondition> gExtensionMethodTable_pic_31__38_ConditionExpression_analyzeCondition ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeCondition (const int32_t inClassIndex,
                                            extensionMethodSignature_pic_31__38_ConditionExpression_analyzeCondition inMethod) {
  gExtensionMethodTable_pic_31__38_ConditionExpression_analyzeCondition.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_pic_31__38_ConditionExpression_analyzeCondition (void) {
  gExtensionMethodTable_pic_31__38_ConditionExpression_analyzeCondition.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_ConditionExpression_analyzeCondition (NULL,
                                                                            freeExtensionMethod_pic_31__38_ConditionExpression_analyzeCondition) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                           const GALGAS_uint constin_inAccessBankSplitOffset,
                                           const GALGAS_uint constin_inCurrentBank,
                                           const GALGAS_registerTable constin_inRegisterTable,
                                           const GALGAS_constantMap constin_inConstantMap,
                                           GALGAS_uint & io_ioLocalLabelIndex,
                                           GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const GALGAS_lstring constin_inConditionTrueLabel,
                                           const GALGAS_lstring constin_inConditionFalseLabel,
                                           GALGAS_stringset & io_ioUsedRegisters,
                                           GALGAS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCurrentBlockTerminator.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_ConditionExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_pic_31__38_ConditionExpression_analyzeCondition f = NULL ;
    if (classIndex < gExtensionMethodTable_pic_31__38_ConditionExpression_analyzeCondition.count ()) {
      f = gExtensionMethodTable_pic_31__38_ConditionExpression_analyzeCondition (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_pic_31__38_ConditionExpression_analyzeCondition.count ()) {
          f = gExtensionMethodTable_pic_31__38_ConditionExpression_analyzeCondition (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_pic_31__38_ConditionExpression_analyzeCondition.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedBlockList, constin_inConditionTrueLabel, constin_inConditionFalseLabel, io_ioUsedRegisters, out_outCurrentBlockTerminator, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator optimizeTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator> gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeTerminator (const int32_t inClassIndex,
                                              extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_optimizeTerminator (void) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_optimizeTerminator (NULL,
                                                                                   freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_optimizeTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                             const GALGAS_string constin_inBlockLabel,
                                             GALGAS_bool & io_ioOptimizationDone,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outOptimizedTerminator.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.count ()) {
          f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTerminator, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators> gExtensionMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getOptimizedTerminators (const int32_t inClassIndex,
                                                   extensionMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptimizedTerminators (const cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                  const GALGAS_string constin_inBlockLabel,
                                                  GALGAS_bool & io_ioOptimizationDone,
                                                  GALGAS_string & io_ioListFileContents,
                                                  GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  GALGAS_bool & out_outIdenticalTerminators,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  out_outOptimizedTrueTerminator.drop () ;
  out_outOptimizedFalseTerminator.drop () ;
  out_outIdenticalTerminators.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.count ()) {
           f = gExtensionMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTrueTerminator, out_outOptimizedFalseTerminator, out_outIdenticalTerminators, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (const cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                                                             const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                             const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                             const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                             const GALGAS_string constinArgument_inBlockLabel,
                                                                                             GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                             GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedTrueTerminator,
                                                                                             GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedFalseTerminator,
                                                                                             GALGAS_bool & outArgument_outIdenticalTerminators,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedTrueTerminator_7332 ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = object ;
  callExtensionMethod_optimizeTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.getter_mSingleInstructionTerminatorIfConditionTrue (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedTrueTerminator_7332, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 169)) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator temp_1 ;
  if (var_optimizedTrueTerminator_7332.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedTrueTerminator_7332.ptr ())) {
      temp_1 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_7332.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedTrueTerminator_7332.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 178)) ;
    }
  }
  outArgument_outOptimizedTrueTerminator = temp_1 ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedFalseTerminator_7704 ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_2 = object ;
  callExtensionMethod_optimizeTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.getter_mSingleInstructionTerminatorIfConditionFalse (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedFalseTerminator_7704, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 180)) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
  if (var_optimizedFalseTerminator_7704.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedFalseTerminator_7704.ptr ())) {
      temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedFalseTerminator_7704.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedFalseTerminator_7704.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 189)) ;
    }
  }
  outArgument_outOptimizedFalseTerminator = temp_3 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 191)).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outIdenticalTerminators = GALGAS_bool (true) ;
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 193)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_ipic_31__38_RetlwTerminator temp_6 ;
        if (outArgument_outOptimizedTrueTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
            temp_6 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 194)) ;
          }
        }
        GALGAS_ipic_31__38_RetlwTerminator var_t_8163 = temp_6 ;
        GALGAS_ipic_31__38_RetlwTerminator temp_7 ;
        if (outArgument_outOptimizedFalseTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
            temp_7 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 195)) ;
          }
        }
        GALGAS_ipic_31__38_RetlwTerminator var_f_8254 = temp_7 ;
        outArgument_outIdenticalTerminators = GALGAS_bool (kIsEqual, var_t_8163.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 196)).objectCompare (var_f_8254.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 196)))) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 197)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_ipic_31__38_JumpTerminator temp_9 ;
          if (outArgument_outOptimizedTrueTerminator.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
              temp_9 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 198)) ;
            }
          }
          GALGAS_ipic_31__38_JumpTerminator var_t_8544 = temp_9 ;
          GALGAS_ipic_31__38_JumpTerminator temp_10 ;
          if (outArgument_outOptimizedFalseTerminator.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
              temp_10 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 199)) ;
            }
          }
          GALGAS_ipic_31__38_JumpTerminator var_f_8633 = temp_10 ;
          outArgument_outIdenticalTerminators = GALGAS_bool (kIsEqual, var_t_8544.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 200)).objectCompare (var_f_8633.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 200)))) ;
        }
      }
      if (kBoolFalse == test_8) {
        outArgument_outIdenticalTerminators = GALGAS_bool (false) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (void) {
  enterExtensionMethod_getOptimizedTerminators (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                extensionMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (void) {
  gExtensionMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators,
                                                                                            freeExtensionMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels> gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterTerminatorReferencedLabels (const int32_t inClassIndex,
                                                           extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels (void) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels (NULL,
                                                                                                freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                          GALGAS_stringset & io_ioReferencedBlockSet,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.count ()) {
          f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction enterInstructionReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels> gExtensionMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInstructionReferencedLabels (const int32_t inClassIndex,
                                                            extensionMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels inMethod) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                           const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                           GALGAS_stringset & io_ioReferencedBlockSet,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.count ()) {
      f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.count ()) {
           f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                                const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                                GALGAS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                         extensionMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (void) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels,
                                                                                               freeExtensionMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction optimizeInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction> gExtensionMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeInstruction (const int32_t inClassIndex,
                                               extensionMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction inMethod) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                              const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                              const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                              const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                              const GALGAS_lstring constin_inBlockLabel,
                                              GALGAS_bool & out_outOptimizationDone,
                                              GALGAS_string & io_ioListFileContents,
                                              GALGAS_ipic_31__38_SequentialInstruction & out_outOptimizedInstruction,
                                              GALGAS_bool & out_outNOPsubstitution,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  out_outOptimizationDone.drop () ;
  out_outOptimizedInstruction.drop () ;
  out_outNOPsubstitution.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.count ()) {
      f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.count ()) {
           f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, out_outOptimizationDone, io_ioListFileContents, out_outOptimizedInstruction, out_outNOPsubstitution, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_SequentialInstruction_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                   const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                   const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                   const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                   const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                   GALGAS_bool & outArgument_outOptimizationDone,
                                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                   GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                   GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_SequentialInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_SequentialInstruction) ;
  const GALGAS_ipic_31__38_SequentialInstruction temp_0 = object ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_SequentialInstruction_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                            extensionMethod_ipic_31__38_SequentialInstruction_optimizeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_SequentialInstruction_optimizeInstruction (void) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_optimizeInstruction (defineExtensionMethod_ipic_31__38_SequentialInstruction_optimizeInstruction,
                                                                                  freeExtensionMethod_ipic_31__38_SequentialInstruction_optimizeInstruction) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionReferencedLabels (const GALGAS_ipic_31__38_SequentialInstructionList inObject,
                                                       const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                       const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                       GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_SequentialInstructionList temp_0 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_35899 (temp_0, kENUMERATION_UP) ;
  while (enumerator_35899.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_35899.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 943)) ;
    enumerator_35899.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct::GALGAS_optimizeFlagStruct (void) :
mProperty_mRemoveEmptyRoutine (),
mProperty_mJSRtoRETLWreplacedByMOVLW (),
mProperty_mJSRfollowedByRETreplacedByJUMP (),
mProperty_mMOVLWfollowedByRETreplacedByRETLW (),
mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (),
mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (),
mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct::~ GALGAS_optimizeFlagStruct (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct::GALGAS_optimizeFlagStruct (const GALGAS_bool & inOperand0,
                                                      const GALGAS_bool & inOperand1,
                                                      const GALGAS_bool & inOperand2,
                                                      const GALGAS_bool & inOperand3,
                                                      const GALGAS_bool & inOperand4,
                                                      const GALGAS_bool & inOperand5,
                                                      const GALGAS_bool & inOperand6) :
mProperty_mRemoveEmptyRoutine (inOperand0),
mProperty_mJSRtoRETLWreplacedByMOVLW (inOperand1),
mProperty_mJSRfollowedByRETreplacedByJUMP (inOperand2),
mProperty_mMOVLWfollowedByRETreplacedByRETLW (inOperand3),
mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (inOperand4),
mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (inOperand5),
mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (inOperand6) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct GALGAS_optimizeFlagStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optimizeFlagStruct (GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct GALGAS_optimizeFlagStruct::constructor_new (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_bool & inOperand1,
                                                                      const GALGAS_bool & inOperand2,
                                                                      const GALGAS_bool & inOperand3,
                                                                      const GALGAS_bool & inOperand4,
                                                                      const GALGAS_bool & inOperand5,
                                                                      const GALGAS_bool & inOperand6 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optimizeFlagStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_optimizeFlagStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optimizeFlagStruct::objectCompare (const GALGAS_optimizeFlagStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRemoveEmptyRoutine.objectCompare (inOperand.mProperty_mRemoveEmptyRoutine) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRtoRETLWreplacedByMOVLW.objectCompare (inOperand.mProperty_mJSRtoRETLWreplacedByMOVLW) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRfollowedByRETreplacedByJUMP.objectCompare (inOperand.mProperty_mJSRfollowedByRETreplacedByJUMP) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMOVLWfollowedByRETreplacedByRETLW.objectCompare (inOperand.mProperty_mMOVLWfollowedByRETreplacedByRETLW) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.objectCompare (inOperand.mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.objectCompare (inOperand.mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.objectCompare (inOperand.mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optimizeFlagStruct::isValid (void) const {
  return mProperty_mRemoveEmptyRoutine.isValid () && mProperty_mJSRtoRETLWreplacedByMOVLW.isValid () && mProperty_mJSRfollowedByRETreplacedByJUMP.isValid () && mProperty_mMOVLWfollowedByRETreplacedByRETLW.isValid () && mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.isValid () && mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.isValid () && mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optimizeFlagStruct::drop (void) {
  mProperty_mRemoveEmptyRoutine.drop () ;
  mProperty_mJSRtoRETLWreplacedByMOVLW.drop () ;
  mProperty_mJSRfollowedByRETreplacedByJUMP.drop () ;
  mProperty_mMOVLWfollowedByRETreplacedByRETLW.drop () ;
  mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.drop () ;
  mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.drop () ;
  mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optimizeFlagStruct::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @optimizeFlagStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRemoveEmptyRoutine.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mJSRtoRETLWreplacedByMOVLW.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mJSRfollowedByRETreplacedByJUMP.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMOVLWfollowedByRETreplacedByRETLW.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mRemoveEmptyRoutine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRemoveEmptyRoutine ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRtoRETLWreplacedByMOVLW (UNUSED_LOCATION_ARGS) const {
  return mProperty_mJSRtoRETLWreplacedByMOVLW ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRfollowedByRETreplacedByJUMP (UNUSED_LOCATION_ARGS) const {
  return mProperty_mJSRfollowedByRETreplacedByJUMP ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mMOVLWfollowedByRETreplacedByRETLW (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMOVLWfollowedByRETreplacedByRETLW ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRtoOneInstructionRoutineReplacedByInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (UNUSED_LOCATION_ARGS) const {
  return mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@optimizeFlagStruct type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optimizeFlagStruct ("optimizeFlagStruct",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optimizeFlagStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optimizeFlagStruct ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optimizeFlagStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optimizeFlagStruct (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct GALGAS_optimizeFlagStruct::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optimizeFlagStruct result ;
  const GALGAS_optimizeFlagStruct * p = (const GALGAS_optimizeFlagStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optimizeFlagStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optimizeFlagStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@bool flagValue'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_flagValue (const GALGAS_bool & inObject,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_bool temp_0 = inObject ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("enabled") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("disabled") ;
  }
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//'@blockInvocationGraph' graph
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph::GALGAS_blockInvocationGraph (void) :
AC_GALGAS_graph () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph GALGAS_blockInvocationGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_blockInvocationGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::setter_addNode (GALGAS_lstring inKey,
                                                  GALGAS_string inArgument_0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_stringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' label is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_topologicalSort (GALGAS_stringlist & outSortedList,
                                                          GALGAS_lstringlist & outSortedKeyList,
                                                          GALGAS_stringlist & outUnsortedList,
                                                          GALGAS_lstringlist & outUnsortedKeyList,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_depthFirstTopologicalSort (GALGAS_stringlist & outSortedList,
                                                                    GALGAS_lstringlist & outSortedKeyList,
                                                                    GALGAS_stringlist & outUnsortedList,
                                                                    GALGAS_lstringlist & outUnsortedKeyList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph GALGAS_blockInvocationGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_blockInvocationGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_circularities (GALGAS_stringlist & outInfoList,
                                                        GALGAS_lstringlist & outKeyList
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_nodesWithNoSuccessor (GALGAS_stringlist & outInfoList,
                                                               GALGAS_lstringlist & outKeyList
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_nodesWithNoPredecessor (GALGAS_stringlist & outInfoList,
                                                                 GALGAS_lstringlist & outKeyList
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph GALGAS_blockInvocationGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                   const GALGAS_stringset & inKeysToExclude,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_blockInvocationGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_blockInvocationGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                            const GALGAS_stringset & inNodesToExclude,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_blockInvocationGraph resultingGraph ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//@blockInvocationGraph type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInvocationGraph ("blockInvocationGraph",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInvocationGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInvocationGraph ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInvocationGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInvocationGraph (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph GALGAS_blockInvocationGraph::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_blockInvocationGraph result ;
  const GALGAS_blockInvocationGraph * p = (const GALGAS_blockInvocationGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockInvocationGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInvocationGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildInstructionInvocationGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph> gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildInstructionInvocationGraph (const int32_t inClassIndex,
                                                           extensionMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph inMethod) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          const GALGAS_lstring constin_inBlockLabel,
                                                          GALGAS_string & io_ioGraphVizString,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.count ()) {
      f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.count ()) {
           f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inBlockLabel, io_ioGraphVizString, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                               const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                               GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (void) {
  enterExtensionMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                        extensionMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (void) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (defineExtensionMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph,
                                                                                              freeExtensionMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph> gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildTerminatorInvocationGraph (const int32_t inClassIndex,
                                                          extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph (void) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph (NULL,
                                                                                               freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const GALGAS_lstring constin_inBlockLabel,
                                                         GALGAS_string & io_ioGraphVizString,
                                                         const GALGAS_bool constin_inDottedArrow,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.count ()) {
          f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inBlockLabel, io_ioGraphVizString, constin_inDottedArrow, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator needToInsertJumpInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction> gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_needToInsertJumpInstruction (const int32_t inClassIndex,
                                                       enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction inGetter) {
  gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction (void) {
  gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction (NULL,
                                                                                            freeExtensionGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                             const GALGAS_string in_inNextBlockLabel,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction f = NULL ;
    if (classIndex < gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.count ()) {
      f = gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.count ()) {
           f = gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inNextBlockLabel, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph> gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildTerminatorOrderedGraph (const int32_t inClassIndex,
                                                       extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                      const GALGAS_lstring constin_inBlockLabel,
                                                      GALGAS_blockInvocationGraph & io_ioGraph,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.count ()) {
           f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inBlockLabel, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                             const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                             GALGAS_blockInvocationGraph & /* ioArgument_ioGraph */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (void) {
  enterExtensionMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator.mSlotID,
                                                    extensionMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (void) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (defineExtensionMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph,
                                                                                            freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@clusterList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_clusterList : public cCollectionElement {
  public: GALGAS_clusterList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_clusterList (const GALGAS_ipic_31__38_BlockList & in_mBlockList
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_clusterList (const GALGAS_clusterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_clusterList::cCollectionElement_clusterList (const GALGAS_ipic_31__38_BlockList & in_mBlockList
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBlockList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_clusterList::cCollectionElement_clusterList (const GALGAS_clusterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBlockList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_clusterList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_clusterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_clusterList (mObject.mProperty_mBlockList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_clusterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBlockList" ":" ;
  mObject.mProperty_mBlockList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_clusterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_clusterList * operand = (cCollectionElement_clusterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_clusterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList::GALGAS_clusterList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList::GALGAS_clusterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_clusterList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::constructor_listWithValue (const GALGAS_ipic_31__38_BlockList & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_clusterList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_clusterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_clusterList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_ipic_31__38_BlockList & in_mBlockList
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_clusterList * p = NULL ;
  macroMyNew (p, cCollectionElement_clusterList (in_mBlockList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::addAssign_operation (const GALGAS_ipic_31__38_BlockList & inOperand0
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_clusterList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_append (GALGAS_clusterList_2D_element inElement,
                                        C_Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_clusterList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_insertAtIndex (const GALGAS_ipic_31__38_BlockList inOperand0,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_clusterList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_removeAtIndex (GALGAS_ipic_31__38_BlockList & outOperand0,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_clusterList) ;
        outOperand0 = p->mObject.mProperty_mBlockList ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_popFirst (GALGAS_ipic_31__38_BlockList & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_popLast (GALGAS_ipic_31__38_BlockList & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::method_first (GALGAS_ipic_31__38_BlockList & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::method_last (GALGAS_ipic_31__38_BlockList & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::add_operation (const GALGAS_clusterList & inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_clusterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_clusterList result = GALGAS_clusterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_clusterList result = GALGAS_clusterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_clusterList result = GALGAS_clusterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::plusAssign_operation (const GALGAS_clusterList inOperand,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_setMBlockListAtIndex (GALGAS_ipic_31__38_BlockList inOperand,
                                                      GALGAS_uint inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBlockList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_clusterList::getter_mBlockListAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  GALGAS_ipic_31__38_BlockList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    result = p->mObject.mProperty_mBlockList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_clusterList::cEnumerator_clusterList (const GALGAS_clusterList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element cEnumerator_clusterList::current (LOCATION_ARGS) const {
  const cCollectionElement_clusterList * p = (const cCollectionElement_clusterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_clusterList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList cEnumerator_clusterList::current_mBlockList (LOCATION_ARGS) const {
  const cCollectionElement_clusterList * p = (const cCollectionElement_clusterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_clusterList) ;
  return p->mObject.mProperty_mBlockList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@clusterList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_clusterList ("clusterList",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_clusterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_clusterList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_clusterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_clusterList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_clusterList result ;
  const GALGAS_clusterList * p = (const GALGAS_clusterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_clusterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("clusterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_neededConversionForClusterOrder::cMapElement_neededConversionForClusterOrder (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_uint & in_mConversions
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConversions (in_mConversions) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_neededConversionForClusterOrder::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConversions.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_neededConversionForClusterOrder::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_neededConversionForClusterOrder (mProperty_lkey, mProperty_mConversions COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_neededConversionForClusterOrder::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConversions" ":" ;
  mProperty_mConversions.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_neededConversionForClusterOrder::compare (const cCollectionElement * inOperand) const {
  cMapElement_neededConversionForClusterOrder * operand = (cMapElement_neededConversionForClusterOrder *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mConversions.objectCompare (operand->mProperty_mConversions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder::GALGAS_neededConversionForClusterOrder (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder::GALGAS_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder & GALGAS_neededConversionForClusterOrder::operator = (const GALGAS_neededConversionForClusterOrder & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder GALGAS_neededConversionForClusterOrder::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder GALGAS_neededConversionForClusterOrder::constructor_mapWithMapToOverride (const GALGAS_neededConversionForClusterOrder & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder GALGAS_neededConversionForClusterOrder::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_neededConversionForClusterOrder result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_uint & inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * p = NULL ;
  macroMyNew (p, cMapElement_neededConversionForClusterOrder (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@neededConversionForClusterOrder insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_uint inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * p = NULL ;
  macroMyNew (p, cMapElement_neededConversionForClusterOrder (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_neededConversionForClusterOrder_searchKey = "the '%K' key is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder::method_searchKey (GALGAS_lstring inKey,
                                                               GALGAS_uint & outArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_neededConversionForClusterOrder_searchKey
                                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    outArgument0 = p->mProperty_mConversions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_neededConversionForClusterOrder::getter_mConversionsForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    result = p->mProperty_mConversions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder::setter_setMConversionsForKey (GALGAS_uint inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_neededConversionForClusterOrder * p = (cMapElement_neededConversionForClusterOrder *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    p->mProperty_mConversions = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_neededConversionForClusterOrder * GALGAS_neededConversionForClusterOrder::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * result = (cMapElement_neededConversionForClusterOrder *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_neededConversionForClusterOrder) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_neededConversionForClusterOrder::cEnumerator_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element cEnumerator_neededConversionForClusterOrder::current (LOCATION_ARGS) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
  return GALGAS_neededConversionForClusterOrder_2D_element (p->mProperty_lkey, p->mProperty_mConversions) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_neededConversionForClusterOrder::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_neededConversionForClusterOrder::current_mConversions (LOCATION_ARGS) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
  return p->mProperty_mConversions ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_neededConversionForClusterOrder::optional_searchKey (const GALGAS_string & inKey,
                                                                 GALGAS_uint & outArgument0) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    outArgument0 = p->mProperty_mConversions ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@neededConversionForClusterOrder type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_neededConversionForClusterOrder ("neededConversionForClusterOrder",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_neededConversionForClusterOrder::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_neededConversionForClusterOrder::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_neededConversionForClusterOrder (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder GALGAS_neededConversionForClusterOrder::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder result ;
  const GALGAS_neededConversionForClusterOrder * p = (const GALGAS_neededConversionForClusterOrder *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_neededConversionForClusterOrder *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_generatedCodeMap::cMapElement_generatedCodeMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_codeList & in_mCode,
                                                            const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mCode (in_mCode),
mProperty_mInstruction (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_generatedCodeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCode.isValid () && mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_generatedCodeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_generatedCodeMap (mProperty_lkey, mProperty_mCode, mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_generatedCodeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCode" ":" ;
  mProperty_mCode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_generatedCodeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_generatedCodeMap * operand = (cMapElement_generatedCodeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mCode.objectCompare (operand->mProperty_mCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (operand->mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap::GALGAS_generatedCodeMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap::GALGAS_generatedCodeMap (const GALGAS_generatedCodeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap & GALGAS_generatedCodeMap::operator = (const GALGAS_generatedCodeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap GALGAS_generatedCodeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_generatedCodeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap GALGAS_generatedCodeMap::constructor_mapWithMapToOverride (const GALGAS_generatedCodeMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_generatedCodeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap GALGAS_generatedCodeMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_generatedCodeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_codeList & inArgument0,
                                                   const GALGAS_ipic_31__38_SequentialInstruction & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * p = NULL ;
  macroMyNew (p, cMapElement_generatedCodeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@generatedCodeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_codeList inArgument0,
                                                GALGAS_ipic_31__38_SequentialInstruction inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * p = NULL ;
  macroMyNew (p, cMapElement_generatedCodeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_generatedCodeMap_searchKey = "the '%K' entry is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_codeList & outArgument0,
                                                GALGAS_ipic_31__38_SequentialInstruction & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_generatedCodeMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    outArgument0 = p->mProperty_mCode ;
    outArgument1 = p->mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_generatedCodeMap::getter_mCodeForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) attributes ;
  GALGAS_codeList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    result = p->mProperty_mCode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_generatedCodeMap::getter_mInstructionForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) attributes ;
  GALGAS_ipic_31__38_SequentialInstruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::setter_setMCodeForKey (GALGAS_codeList inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_generatedCodeMap * p = (cMapElement_generatedCodeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    p->mProperty_mCode = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::setter_setMInstructionForKey (GALGAS_ipic_31__38_SequentialInstruction inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_generatedCodeMap * p = (cMapElement_generatedCodeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    p->mProperty_mInstruction = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_generatedCodeMap * GALGAS_generatedCodeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * result = (cMapElement_generatedCodeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_generatedCodeMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_generatedCodeMap::cEnumerator_generatedCodeMap (const GALGAS_generatedCodeMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element cEnumerator_generatedCodeMap::current (LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
  return GALGAS_generatedCodeMap_2D_element (p->mProperty_lkey, p->mProperty_mCode, p->mProperty_mInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_generatedCodeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList cEnumerator_generatedCodeMap::current_mCode (LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
  return p->mProperty_mCode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction cEnumerator_generatedCodeMap::current_mInstruction (LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
  return p->mProperty_mInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_generatedCodeMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_codeList & outArgument0,
                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument1) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    outArgument0 = p->mProperty_mCode ;
    outArgument1 = p->mProperty_mInstruction ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@generatedCodeMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generatedCodeMap ("generatedCodeMap",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generatedCodeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generatedCodeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generatedCodeMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap GALGAS_generatedCodeMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_generatedCodeMap result ;
  const GALGAS_generatedCodeMap * p = (const GALGAS_generatedCodeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generatedCodeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@uint x4string'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_x_34_string (const GALGAS_uint & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GALGAS_uint ((uint32_t) 4096U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 13)) ;
  const GALGAS_uint temp_1 = inObject ;
  result_outResult.plusAssign_operation(temp_1.divide_operation (GALGAS_uint ((uint32_t) 256U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)) ;
  const GALGAS_uint temp_2 = inObject ;
  result_outResult.plusAssign_operation(temp_2.divide_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 15)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)) ;
  const GALGAS_uint temp_3 = inObject ;
  result_outResult.plusAssign_operation(temp_3.operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)) ;
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@uint x6string'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_x_36_string (const GALGAS_uint & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GALGAS_uint ((uint32_t) 65536U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 22)) ;
  const GALGAS_uint temp_1 = inObject ;
  result_outResult.plusAssign_operation(temp_1.divide_operation (GALGAS_uint ((uint32_t) 4096U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)) ;
  const GALGAS_uint temp_2 = inObject ;
  result_outResult.plusAssign_operation(temp_2.divide_operation (GALGAS_uint ((uint32_t) 256U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)) ;
  const GALGAS_uint temp_3 = inObject ;
  result_outResult.plusAssign_operation(temp_3.divide_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)) ;
  const GALGAS_uint temp_4 = inObject ;
  result_outResult.plusAssign_operation(temp_4.operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)) ;
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------

cMapElement_blockMapForStackComputation::cMapElement_blockMapForStackComputation (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_ipic_31__38_Block & in_mBlock
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mBlock (in_mBlock) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_blockMapForStackComputation::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBlock.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockMapForStackComputation::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_blockMapForStackComputation (mProperty_lkey, mProperty_mBlock COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_blockMapForStackComputation::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBlock" ":" ;
  mProperty_mBlock.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_blockMapForStackComputation::compare (const cCollectionElement * inOperand) const {
  cMapElement_blockMapForStackComputation * operand = (cMapElement_blockMapForStackComputation *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mBlock.objectCompare (operand->mProperty_mBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation::GALGAS_blockMapForStackComputation (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation::GALGAS_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation & GALGAS_blockMapForStackComputation::operator = (const GALGAS_blockMapForStackComputation & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation GALGAS_blockMapForStackComputation::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation GALGAS_blockMapForStackComputation::constructor_mapWithMapToOverride (const GALGAS_blockMapForStackComputation & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation GALGAS_blockMapForStackComputation::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_blockMapForStackComputation result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_ipic_31__38_Block & inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * p = NULL ;
  macroMyNew (p, cMapElement_blockMapForStackComputation (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockMapForStackComputation insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_ipic_31__38_Block inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * p = NULL ;
  macroMyNew (p, cMapElement_blockMapForStackComputation (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockMapForStackComputation_searchKey = "the '%K' block is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation::method_searchKey (GALGAS_lstring inKey,
                                                           GALGAS_ipic_31__38_Block & outArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) performSearch (inKey,
                                                                                                                       inCompiler,
                                                                                                                       kSearchErrorMessage_blockMapForStackComputation_searchKey
                                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    outArgument0 = p->mProperty_mBlock ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block GALGAS_blockMapForStackComputation::getter_mBlockForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) attributes ;
  GALGAS_ipic_31__38_Block result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    result = p->mProperty_mBlock ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation::setter_setMBlockForKey (GALGAS_ipic_31__38_Block inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockMapForStackComputation * p = (cMapElement_blockMapForStackComputation *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    p->mProperty_mBlock = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_blockMapForStackComputation * GALGAS_blockMapForStackComputation::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * result = (cMapElement_blockMapForStackComputation *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockMapForStackComputation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_blockMapForStackComputation::cEnumerator_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element cEnumerator_blockMapForStackComputation::current (LOCATION_ARGS) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
  return GALGAS_blockMapForStackComputation_2D_element (p->mProperty_lkey, p->mProperty_mBlock) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_blockMapForStackComputation::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block cEnumerator_blockMapForStackComputation::current_mBlock (LOCATION_ARGS) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
  return p->mProperty_mBlock ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_blockMapForStackComputation::optional_searchKey (const GALGAS_string & inKey,
                                                             GALGAS_ipic_31__38_Block & outArgument0) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    outArgument0 = p->mProperty_mBlock ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@blockMapForStackComputation type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockMapForStackComputation ("blockMapForStackComputation",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockMapForStackComputation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockMapForStackComputation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockMapForStackComputation (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation GALGAS_blockMapForStackComputation::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation result ;
  const GALGAS_blockMapForStackComputation * p = (const GALGAS_blockMapForStackComputation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockMapForStackComputation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_routineCallMap::cMapElement_routineCallMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_stringset & in_mCalledRoutineSet,
                                                        const GALGAS_uint & in_mTerminatorStackNeeds
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mCalledRoutineSet (in_mCalledRoutineSet),
mProperty_mTerminatorStackNeeds (in_mTerminatorStackNeeds) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_routineCallMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCalledRoutineSet.isValid () && mProperty_mTerminatorStackNeeds.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineCallMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineCallMap (mProperty_lkey, mProperty_mCalledRoutineSet, mProperty_mTerminatorStackNeeds COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_routineCallMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCalledRoutineSet" ":" ;
  mProperty_mCalledRoutineSet.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminatorStackNeeds" ":" ;
  mProperty_mTerminatorStackNeeds.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_routineCallMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineCallMap * operand = (cMapElement_routineCallMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mCalledRoutineSet.objectCompare (operand->mProperty_mCalledRoutineSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminatorStackNeeds.objectCompare (operand->mProperty_mTerminatorStackNeeds) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap::GALGAS_routineCallMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap::GALGAS_routineCallMap (const GALGAS_routineCallMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap & GALGAS_routineCallMap::operator = (const GALGAS_routineCallMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap GALGAS_routineCallMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineCallMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap GALGAS_routineCallMap::constructor_mapWithMapToOverride (const GALGAS_routineCallMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_routineCallMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap GALGAS_routineCallMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_routineCallMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_stringset & inArgument0,
                                                 const GALGAS_uint & inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * p = NULL ;
  macroMyNew (p, cMapElement_routineCallMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineCallMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_stringset inArgument0,
                                              GALGAS_uint inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * p = NULL ;
  macroMyNew (p, cMapElement_routineCallMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_routineCallMap::getter_mCalledRoutineSetForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) attributes ;
  GALGAS_stringset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    result = p->mProperty_mCalledRoutineSet ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_routineCallMap::getter_mTerminatorStackNeedsForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    result = p->mProperty_mTerminatorStackNeeds ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap::setter_setMCalledRoutineSetForKey (GALGAS_stringset inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineCallMap * p = (cMapElement_routineCallMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    p->mProperty_mCalledRoutineSet = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap::setter_setMTerminatorStackNeedsForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineCallMap * p = (cMapElement_routineCallMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    p->mProperty_mTerminatorStackNeeds = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_routineCallMap * GALGAS_routineCallMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * result = (cMapElement_routineCallMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineCallMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineCallMap::cEnumerator_routineCallMap (const GALGAS_routineCallMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element cEnumerator_routineCallMap::current (LOCATION_ARGS) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineCallMap) ;
  return GALGAS_routineCallMap_2D_element (p->mProperty_lkey, p->mProperty_mCalledRoutineSet, p->mProperty_mTerminatorStackNeeds) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineCallMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset cEnumerator_routineCallMap::current_mCalledRoutineSet (LOCATION_ARGS) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineCallMap) ;
  return p->mProperty_mCalledRoutineSet ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_routineCallMap::current_mTerminatorStackNeeds (LOCATION_ARGS) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineCallMap) ;
  return p->mProperty_mTerminatorStackNeeds ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineCallMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_stringset & outArgument0,
                                                GALGAS_uint & outArgument1) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    outArgument0 = p->mProperty_mCalledRoutineSet ;
    outArgument1 = p->mProperty_mTerminatorStackNeeds ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineCallMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineCallMap ("routineCallMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineCallMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineCallMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineCallMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap GALGAS_routineCallMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineCallMap result ;
  const GALGAS_routineCallMap * p = (const GALGAS_routineCallMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineCallMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_routineStackRequirementMap::cMapElement_routineStackRequirementMap (const GALGAS_lstring & inKey,
                                                                                const GALGAS_uint & in_mLevels
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLevels (in_mLevels) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_routineStackRequirementMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLevels.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineStackRequirementMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineStackRequirementMap (mProperty_lkey, mProperty_mLevels COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_routineStackRequirementMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLevels" ":" ;
  mProperty_mLevels.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_routineStackRequirementMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineStackRequirementMap * operand = (cMapElement_routineStackRequirementMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLevels.objectCompare (operand->mProperty_mLevels) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap::GALGAS_routineStackRequirementMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap::GALGAS_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap & GALGAS_routineStackRequirementMap::operator = (const GALGAS_routineStackRequirementMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap GALGAS_routineStackRequirementMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap GALGAS_routineStackRequirementMap::constructor_mapWithMapToOverride (const GALGAS_routineStackRequirementMap & inMapToOverride
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap GALGAS_routineStackRequirementMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_routineStackRequirementMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                             const GALGAS_uint & inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * p = NULL ;
  macroMyNew (p, cMapElement_routineStackRequirementMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineStackRequirementMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap::setter_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_uint inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * p = NULL ;
  macroMyNew (p, cMapElement_routineStackRequirementMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_routineStackRequirementMap_searchKey = "the '%K' entry is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap::method_searchKey (GALGAS_lstring inKey,
                                                          GALGAS_uint & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_routineStackRequirementMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    outArgument0 = p->mProperty_mLevels ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_routineStackRequirementMap::getter_mLevelsForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    result = p->mProperty_mLevels ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap::setter_setMLevelsForKey (GALGAS_uint inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineStackRequirementMap * p = (cMapElement_routineStackRequirementMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    p->mProperty_mLevels = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_routineStackRequirementMap * GALGAS_routineStackRequirementMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * result = (cMapElement_routineStackRequirementMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineStackRequirementMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineStackRequirementMap::cEnumerator_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element cEnumerator_routineStackRequirementMap::current (LOCATION_ARGS) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
  return GALGAS_routineStackRequirementMap_2D_element (p->mProperty_lkey, p->mProperty_mLevels) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineStackRequirementMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_routineStackRequirementMap::current_mLevels (LOCATION_ARGS) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
  return p->mProperty_mLevels ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineStackRequirementMap::optional_searchKey (const GALGAS_string & inKey,
                                                            GALGAS_uint & outArgument0) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    outArgument0 = p->mProperty_mLevels ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineStackRequirementMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineStackRequirementMap ("routineStackRequirementMap",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineStackRequirementMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineStackRequirementMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineStackRequirementMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap GALGAS_routineStackRequirementMap::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap result ;
  const GALGAS_routineStackRequirementMap * p = (const GALGAS_routineStackRequirementMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineStackRequirementMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator exploreAccessibleBlocksForStackComputations'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations> gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_exploreAccessibleBlocksForStackComputations (const int32_t inClassIndex,
                                                                       extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations (void) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations (NULL,
                                                                                                            freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                      GALGAS_stringset & io_ioBlockToExploreSet,
                                                                      GALGAS_stringset & io_ioExploredBlockSet,
                                                                      GALGAS_uint & out_outStackNeeds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outStackNeeds.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.count ()) {
          f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioBlockToExploreSet, io_ioExploredBlockSet, out_outStackNeeds, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildCalledRoutineSetForStackComputations'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations> gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildCalledRoutineSetForStackComputations (const int32_t inClassIndex,
                                                                     extensionMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations inMethod) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                    GALGAS_stringset & io_ioRoutineCalledSet,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.count ()) {
      f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.count ()) {
           f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRoutineCalledSet, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                         GALGAS_stringset & /* ioArgument_ioRoutineCalledSet */,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (void) {
  enterExtensionMethod_buildCalledRoutineSetForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                                  extensionMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (void) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (defineExtensionMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations,
                                                                                                        freeExtensionMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations) ;

//----------------------------------------------------------------------------------------------------------------------

cMapElement_blockDurationMap::cMapElement_blockDurationMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mMinDuration,
                                                            const GALGAS_uint & in_mMaxDuration
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mMinDuration (in_mMinDuration),
mProperty_mMaxDuration (in_mMaxDuration) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_blockDurationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMinDuration.isValid () && mProperty_mMaxDuration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockDurationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_blockDurationMap (mProperty_lkey, mProperty_mMinDuration, mProperty_mMaxDuration COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_blockDurationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMinDuration" ":" ;
  mProperty_mMinDuration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMaxDuration" ":" ;
  mProperty_mMaxDuration.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_blockDurationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_blockDurationMap * operand = (cMapElement_blockDurationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mMinDuration.objectCompare (operand->mProperty_mMinDuration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMaxDuration.objectCompare (operand->mProperty_mMaxDuration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap::GALGAS_blockDurationMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap::GALGAS_blockDurationMap (const GALGAS_blockDurationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap & GALGAS_blockDurationMap::operator = (const GALGAS_blockDurationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap GALGAS_blockDurationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_blockDurationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap GALGAS_blockDurationMap::constructor_mapWithMapToOverride (const GALGAS_blockDurationMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_blockDurationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap GALGAS_blockDurationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_blockDurationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & inArgument0,
                                                   const GALGAS_uint & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * p = NULL ;
  macroMyNew (p, cMapElement_blockDurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockDurationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_uint inArgument0,
                                                GALGAS_uint inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * p = NULL ;
  macroMyNew (p, cMapElement_blockDurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockDurationMap_searchKey = "the '%K' entry is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_uint & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_blockDurationMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    outArgument0 = p->mProperty_mMinDuration ;
    outArgument1 = p->mProperty_mMaxDuration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_blockDurationMap::getter_mMinDurationForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    result = p->mProperty_mMinDuration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_blockDurationMap::getter_mMaxDurationForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    result = p->mProperty_mMaxDuration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::setter_setMMinDurationForKey (GALGAS_uint inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockDurationMap * p = (cMapElement_blockDurationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    p->mProperty_mMinDuration = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::setter_setMMaxDurationForKey (GALGAS_uint inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockDurationMap * p = (cMapElement_blockDurationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    p->mProperty_mMaxDuration = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_blockDurationMap * GALGAS_blockDurationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * result = (cMapElement_blockDurationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockDurationMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_blockDurationMap::cEnumerator_blockDurationMap (const GALGAS_blockDurationMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element cEnumerator_blockDurationMap::current (LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockDurationMap) ;
  return GALGAS_blockDurationMap_2D_element (p->mProperty_lkey, p->mProperty_mMinDuration, p->mProperty_mMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_blockDurationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_blockDurationMap::current_mMinDuration (LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockDurationMap) ;
  return p->mProperty_mMinDuration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_blockDurationMap::current_mMaxDuration (LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockDurationMap) ;
  return p->mProperty_mMaxDuration ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_blockDurationMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_uint & outArgument0,
                                                  GALGAS_uint & outArgument1) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    outArgument0 = p->mProperty_mMinDuration ;
    outArgument1 = p->mProperty_mMaxDuration ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@blockDurationMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockDurationMap ("blockDurationMap",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockDurationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockDurationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockDurationMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap GALGAS_blockDurationMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_blockDurationMap result ;
  const GALGAS_blockDurationMap * p = (const GALGAS_blockDurationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockDurationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration> gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_terminatorMinMaxDuration (const int32_t inClassIndex,
                                                    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration inMethod) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration (void) {
  gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration (NULL,
                                                                                         freeExtensionMethod_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const GALGAS_blockDurationMap constin_inExploredBlockMap,
                                                   const GALGAS_string constin_inNextLabel,
                                                   GALGAS_uint & out_outMin,
                                                   GALGAS_uint & out_outMax,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outMin.drop () ;
  out_outMax.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.count ()) {
      f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.count ()) {
          f = gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inExploredBlockMap, constin_inNextLabel, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SingleInstructionTerminator duration'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_SingleInstructionTerminator_duration> gExtensionMethodTable_ipic_31__38_SingleInstructionTerminator_duration ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_duration (const int32_t inClassIndex,
                                    extensionMethodSignature_ipic_31__38_SingleInstructionTerminator_duration inMethod) {
  gExtensionMethodTable_ipic_31__38_SingleInstructionTerminator_duration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_SingleInstructionTerminator_duration (void) {
  gExtensionMethodTable_ipic_31__38_SingleInstructionTerminator_duration.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SingleInstructionTerminator_duration (NULL,
                                                                             freeExtensionMethod_ipic_31__38_SingleInstructionTerminator_duration) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                   const GALGAS_blockDurationMap constin_inExploredBlockMap,
                                   const GALGAS_string constin_inNextLabel,
                                   GALGAS_uint & out_outMin,
                                   GALGAS_uint & out_outMax,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outMin.drop () ;
  out_outMax.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SingleInstructionTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_SingleInstructionTerminator_duration f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_SingleInstructionTerminator_duration.count ()) {
      f = gExtensionMethodTable_ipic_31__38_SingleInstructionTerminator_duration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_ipic_31__38_SingleInstructionTerminator_duration.count ()) {
          f = gExtensionMethodTable_ipic_31__38_SingleInstructionTerminator_duration (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_ipic_31__38_SingleInstructionTerminator_duration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inExploredBlockMap, constin_inNextLabel, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_ipic_31__38_SequentialInstruction_minMaxDuration> gExtensionMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_minMaxDuration (const int32_t inClassIndex,
                                          extensionMethodSignature_ipic_31__38_SequentialInstruction_minMaxDuration inMethod) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         GALGAS_blockDurationMap in_inExploredBlockMap,
                                         GALGAS_uint & out_outMin,
                                         GALGAS_uint & out_outMax,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  out_outMin.drop () ;
  out_outMax.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_ipic_31__38_SequentialInstruction_minMaxDuration f = NULL ;
    if (classIndex < gExtensionMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.count ()) {
      f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.count ()) {
           f = gExtensionMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, in_inExploredBlockMap, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_SequentialInstruction_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                              GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                              GALGAS_uint & outArgument_outMin,
                                                                              GALGAS_uint & outArgument_outMax,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 1U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 1U) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_SequentialInstruction_minMaxDuration (void) {
  enterExtensionMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                       extensionMethod_ipic_31__38_SequentialInstruction_minMaxDuration) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_ipic_31__38_SequentialInstruction_minMaxDuration (void) {
  gExtensionMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_minMaxDuration (defineExtensionMethod_ipic_31__38_SequentialInstruction_minMaxDuration,
                                                                             freeExtensionMethod_ipic_31__38_SequentialInstruction_minMaxDuration) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@declarationInRam handleDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_declarationInRam_handleDeclaration> gExtensionMethodTable_declarationInRam_handleDeclaration ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_handleDeclaration (const int32_t inClassIndex,
                                             extensionMethodSignature_declarationInRam_handleDeclaration inMethod) {
  gExtensionMethodTable_declarationInRam_handleDeclaration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_declarationInRam_handleDeclaration (void) {
  gExtensionMethodTable_declarationInRam_handleDeclaration.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_declarationInRam_handleDeclaration (NULL,
                                                               freeExtensionMethod_declarationInRam_handleDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_handleDeclaration (const cPtr_declarationInRam * inObject,
                                            const GALGAS_constantMap constin_inConstantMap,
                                            GALGAS_stringset & io_ioUsedRegisters,
                                            GALGAS_ramBankTable & io_ioRamBank,
                                            GALGAS_registerTable & io_ioRegisterTable,
                                            const GALGAS_lstring constin_inCurrentRamBank,
                                            GALGAS_declaredByteMap & io_ioDeclaredByteMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_declarationInRam) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_declarationInRam_handleDeclaration f = NULL ;
    if (classIndex < gExtensionMethodTable_declarationInRam_handleDeclaration.count ()) {
      f = gExtensionMethodTable_declarationInRam_handleDeclaration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_declarationInRam_handleDeclaration.count ()) {
          f = gExtensionMethodTable_declarationInRam_handleDeclaration (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_declarationInRam_handleDeclaration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inConstantMap, io_ioUsedRegisters, io_ioRamBank, io_ioRegisterTable, constin_inCurrentRamBank, io_ioDeclaredByteMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

cTokenFor_piccoloDevice_5F_lexique::cTokenFor_piccoloDevice_5F_lexique (void) :
mLexicalAttribute_charValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_piccoloDevice_5F_lexique::C_Lexique_piccoloDevice_5F_lexique (C_Compiler * inCallerCompiler,
                                                                        const C_String & inSourceFileName
                                                                        COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_piccoloDevice_5F_lexique::C_Lexique_piccoloDevice_5F_lexique (C_Compiler * inCallerCompiler,
                                                                        const C_String & inSourceString,
                                                                        const C_String & inStringForError
                                                                        COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------
//                 I N D E X I N G    D I R E C T O R Y                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_piccoloDevice_5F_lexique::indexingDirectory (void) const {
  return "" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_piccoloDevice_5F_lexique_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge = "hex number too large" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_piccoloDevice_5F_lexique_internalError = "internal error" ;

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                     
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_identifier = "an identifier" ;

//--- Syntax error message for terminal '$integer$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_integer = "a 32-bit unsigned number" ;

//--- Syntax error message for terminal '$string$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_comment = "a comment" ;

//--- Syntax error message for terminal '$controller$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_controller = "the 'controller' keyword" ;

//--- Syntax error message for terminal '$processor$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_processor = "the 'processor' keyword" ;

//--- Syntax error message for terminal '$romsize$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_romsize = "the 'romsize' keyword" ;

//--- Syntax error message for terminal '$eepromsize$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_eepromsize = "the 'eepromsize' keyword" ;

//--- Syntax error message for terminal '$bank$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_bank = "the 'bank' keyword" ;

//--- Syntax error message for terminal '$unusedregister$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_unusedregister = "the 'unusedregister' keyword" ;

//--- Syntax error message for terminal '$mirrorat$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_mirrorat = "the 'mirrorat' keyword" ;

//--- Syntax error message for terminal '$ram$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_ram = "the 'ram' keyword" ;

//--- Syntax error message for terminal '$register$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_register = "the 'register' keyword" ;

//--- Syntax error message for terminal '$at$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_at = "the 'at' keyword" ;

//--- Syntax error message for terminal '$to$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_to = "the 'to' keyword" ;

//--- Syntax error message for terminal '$configuration$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_configuration = "the 'configuration' keyword" ;

//--- Syntax error message for terminal '$width$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_width = "the 'width' keyword" ;

//--- Syntax error message for terminal '$description$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_description = "the 'description' keyword" ;

//--- Syntax error message for terminal '$mask$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_mask = "the 'mask' keyword" ;

//--- Syntax error message for terminal '$illegal$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_illegal = "the 'illegal' keyword" ;

//--- Syntax error message for terminal '$message$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_message = "the 'message' keyword" ;

//--- Syntax error message for terminal '$setting$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique_setting = "the 'setting' keyword" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__2D_ = "the '-' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_piccoloDevice_5F_lexique__7D_ = "the '}' delimitor" ;

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_piccoloDevice_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 34)) {
    static const char * syntaxErrorMessageArray [34] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_identifier,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_integer,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_string,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_comment,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_controller,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_processor,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_romsize,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_eepromsize,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_bank,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_unusedregister,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_mirrorat,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_ram,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_register,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_at,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_to,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_configuration,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_width,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_description,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_mask,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_illegal,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_message,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique_setting,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__3C_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__3E_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__2C_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__2D_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__2F_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__3B_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__3A_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__5B_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__5D_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__7B_,
        gSyntaxErrorMessage_piccoloDevice_5F_lexique__7D_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//----------------------------------------------------------------------------------------------------------------------

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$at$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_at [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bank$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_bank [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$configuration$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_configuration [] = {
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
  TO_UNICODE (0)
} ;

//--- Unicode string for '$controller$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_controller [] = {
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
  TO_UNICODE (0)
} ;

//--- Unicode string for '$description$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_description [] = {
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
  TO_UNICODE (0)
} ;

//--- Unicode string for '$eepromsize$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_eepromsize [] = {
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
  TO_UNICODE (0)
} ;

//--- Unicode string for '$illegal$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_illegal [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mask$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_mask [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$message$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_message [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mirrorat$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_mirrorat [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$processor$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_processor [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ram$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_ram [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$register$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_register [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$romsize$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_romsize [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$setting$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_setting [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$to$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_to [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$unusedregister$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_unusedregister [] = {
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
  TO_UNICODE (0)
} ;

//--- Unicode string for '$width$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_width [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'controlKeyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccoloDevice_5F_lexique_controlKeyWordList = 18 ;

static const C_unicode_lexique_table_entry ktable_for_piccoloDevice_5F_lexique_controlKeyWordList [ktable_size_piccoloDevice_5F_lexique_controlKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_at, 2, C_Lexique_piccoloDevice_5F_lexique::kToken_at),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_to, 2, C_Lexique_piccoloDevice_5F_lexique::kToken_to),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_ram, 3, C_Lexique_piccoloDevice_5F_lexique::kToken_ram),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_bank, 4, C_Lexique_piccoloDevice_5F_lexique::kToken_bank),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_mask, 4, C_Lexique_piccoloDevice_5F_lexique::kToken_mask),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_width, 5, C_Lexique_piccoloDevice_5F_lexique::kToken_width),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_illegal, 7, C_Lexique_piccoloDevice_5F_lexique::kToken_illegal),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_message, 7, C_Lexique_piccoloDevice_5F_lexique::kToken_message),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_romsize, 7, C_Lexique_piccoloDevice_5F_lexique::kToken_romsize),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_setting, 7, C_Lexique_piccoloDevice_5F_lexique::kToken_setting),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_mirrorat, 8, C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_register, 8, C_Lexique_piccoloDevice_5F_lexique::kToken_register),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_processor, 9, C_Lexique_piccoloDevice_5F_lexique::kToken_processor),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_controller, 10, C_Lexique_piccoloDevice_5F_lexique::kToken_controller),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_eepromsize, 10, C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_description, 11, C_Lexique_piccoloDevice_5F_lexique::kToken_description),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_configuration, 13, C_Lexique_piccoloDevice_5F_lexique::kToken_configuration),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_unusedregister, 14, C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister)
} ;

int16_t C_Lexique_piccoloDevice_5F_lexique::search_into_controlKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccoloDevice_5F_lexique_controlKeyWordList, ktable_size_piccoloDevice_5F_lexique_controlKeyWordList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccoloDevice_5F_lexique_delimitorsList = 11 ;

static const C_unicode_lexique_table_entry ktable_for_piccoloDevice_5F_lexique_delimitorsList [ktable_size_piccoloDevice_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__2C_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__2D_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__2F_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3A_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3B_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3C_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3E_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__5B_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__5D_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__7B_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__7D_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_)
} ;

int16_t C_Lexique_piccoloDevice_5F_lexique::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccoloDevice_5F_lexique_delimitorsList, ktable_size_piccoloDevice_5F_lexique_delimitorsList) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_piccoloDevice_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_piccoloDevice_5F_lexique * ptr = (const cTokenFor_piccoloDevice_5F_lexique *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_controller:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("controller") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_processor:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("processor") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_romsize:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("romsize") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_eepromsize:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("eepromsize") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bank:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bank") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_unusedregister:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("unusedregister") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mirrorat:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mirrorat") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ram:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("ram") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_register:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("register") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_at:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("at") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_to:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("to") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_configuration:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("configuration") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_width:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("width") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_description:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("description") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mask:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mask") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_illegal:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("illegal") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_message:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("message") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_setting:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("setting") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Unicode test functions                                                             
//----------------------------------------------------------------------------------------------------------------------
 
//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_piccoloDevice_5F_lexique::parseLexicalToken (void) {
  cTokenFor_piccoloDevice_5F_lexique token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_charValue = TO_UNICODE (0) ;
    token.mLexicalAttribute_identifierString.setLengthToZero () ;
    token.mLexicalAttribute_tokenString.setLengthToZero () ;
    token.mLexicalAttribute_uint_33__32_value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    try{
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_controlKeyWordList (token.mLexicalAttribute_identifierString) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_identifier ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__30_x, 2, true)) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__7D_, 1, true)) {
        token.mTokenCode = kToken__7D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__7B_, 1, true)) {
        token.mTokenCode = kToken__7B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__5D_, 1, true)) {
        token.mTokenCode = kToken__5D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__5B_, 1, true)) {
        token.mTokenCode = kToken__5B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3E_, 1, true)) {
        token.mTokenCode = kToken__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3C_, 1, true)) {
        token.mTokenCode = kToken__3C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3B_, 1, true)) {
        token.mTokenCode = kToken__3B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3A_, 1, true)) {
        token.mTokenCode = kToken__3A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__2F_, 1, true)) {
        token.mTokenCode = kToken__2F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__2D_, 1, true)) {
        token.mTokenCode = kToken__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__2C_, 1, true)) {
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
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
            }else{
              lexicalError (gLexicalMessage_piccoloDevice_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE ('~'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_piccoloDevice_5F_lexique::enterToken (cTokenFor_piccoloDevice_5F_lexique & ioToken) {
  cTokenFor_piccoloDevice_5F_lexique * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_piccoloDevice_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
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

//----------------------------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//----------------------------------------------------------------------------------------------------------------------

utf32 C_Lexique_piccoloDevice_5F_lexique::attributeValue_charValue (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_piccoloDevice_5F_lexique::attributeValue_identifierString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_piccoloDevice_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_piccoloDevice_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar C_Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_charValue (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_identifierString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_piccoloDevice_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("controller") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("processor") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("romsize") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("eepromsize") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bank") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unusedregister") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mirrorat") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("ram") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("register") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("at") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("to") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("configuration") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("width") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("description") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mask") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("illegal") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("message") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("setting") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_piccoloDevice_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("piccoloDevice_lexique:controlKeyWordList") ;
  ioList.appendObject ("piccoloDevice_lexique:delimitorsList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_piccoloDevice_5F_lexique (const C_String & inIdentifier,
                                                               bool & ioFound,
                                                               TC_UniqueArray <C_String> & ioList) {
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

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_piccoloDevice_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_piccoloDevice_5F_lexique, getKeywordsForIdentifier_piccoloDevice_5F_lexique) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_piccoloDevice_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
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

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_piccoloDevice_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_declaredByteMap::cMapElement_declaredByteMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_declaredByteMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_declaredByteMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_declaredByteMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_declaredByteMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_declaredByteMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_declaredByteMap * operand = (cMapElement_declaredByteMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap::GALGAS_declaredByteMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap::GALGAS_declaredByteMap (const GALGAS_declaredByteMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap & GALGAS_declaredByteMap::operator = (const GALGAS_declaredByteMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap GALGAS_declaredByteMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_declaredByteMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap GALGAS_declaredByteMap::constructor_mapWithMapToOverride (const GALGAS_declaredByteMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_declaredByteMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap GALGAS_declaredByteMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_declaredByteMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * p = NULL ;
  macroMyNew (p, cMapElement_declaredByteMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredByteMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * p = NULL ;
  macroMyNew (p, cMapElement_declaredByteMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' byte is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_declaredByteMap_searchKey = "the '%K' byte is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap::method_searchKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_declaredByteMap * p = (const cMapElement_declaredByteMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_declaredByteMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_declaredByteMap) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_declaredByteMap * GALGAS_declaredByteMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * result = (cMapElement_declaredByteMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_declaredByteMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_declaredByteMap::cEnumerator_declaredByteMap (const GALGAS_declaredByteMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element cEnumerator_declaredByteMap::current (LOCATION_ARGS) const {
  const cMapElement_declaredByteMap * p = (const cMapElement_declaredByteMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredByteMap) ;
  return GALGAS_declaredByteMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_declaredByteMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_declaredByteMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_declaredByteMap * p = (const cMapElement_declaredByteMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_declaredByteMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@declaredByteMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredByteMap ("declaredByteMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declaredByteMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declaredByteMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredByteMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap GALGAS_declaredByteMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_declaredByteMap result ;
  const GALGAS_declaredByteMap * p = (const GALGAS_declaredByteMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declaredByteMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_registerTable::cMapElement_registerTable (const GALGAS_lstring & inKey,
                                                      const GALGAS_uintlist & in_mRegisterAddressList,
                                                      const GALGAS_uint & in_mSize,
                                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                                      const GALGAS_string & in_mBitDefinitionString,
                                                      const GALGAS_registerProtection & in_mProtection
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegisterAddressList (in_mRegisterAddressList),
mProperty_mSize (in_mSize),
mProperty_mBitSliceTable (in_mBitSliceTable),
mProperty_mBitDefinitionString (in_mBitDefinitionString),
mProperty_mProtection (in_mProtection) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_registerTable::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddressList.isValid () && mProperty_mSize.isValid () && mProperty_mBitSliceTable.isValid () && mProperty_mBitDefinitionString.isValid () && mProperty_mProtection.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_registerTable::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_registerTable (mProperty_lkey, mProperty_mRegisterAddressList, mProperty_mSize, mProperty_mBitSliceTable, mProperty_mBitDefinitionString, mProperty_mProtection COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_registerTable::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterAddressList" ":" ;
  mProperty_mRegisterAddressList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSize" ":" ;
  mProperty_mSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitSliceTable" ":" ;
  mProperty_mBitSliceTable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitDefinitionString" ":" ;
  mProperty_mBitDefinitionString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProtection" ":" ;
  mProperty_mProtection.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_registerTable::compare (const cCollectionElement * inOperand) const {
  cMapElement_registerTable * operand = (cMapElement_registerTable *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterAddressList.objectCompare (operand->mProperty_mRegisterAddressList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSize.objectCompare (operand->mProperty_mSize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitSliceTable.objectCompare (operand->mProperty_mBitSliceTable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitDefinitionString.objectCompare (operand->mProperty_mBitDefinitionString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProtection.objectCompare (operand->mProperty_mProtection) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable::GALGAS_registerTable (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable::GALGAS_registerTable (const GALGAS_registerTable & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable & GALGAS_registerTable::operator = (const GALGAS_registerTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable GALGAS_registerTable::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_registerTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable GALGAS_registerTable::constructor_mapWithMapToOverride (const GALGAS_registerTable & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_registerTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable GALGAS_registerTable::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_registerTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_uintlist & inArgument0,
                                                const GALGAS_uint & inArgument1,
                                                const GALGAS_bitSliceTable & inArgument2,
                                                const GALGAS_string & inArgument3,
                                                const GALGAS_registerProtection & inArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * p = NULL ;
  macroMyNew (p, cMapElement_registerTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@registerTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_uintlist inArgument0,
                                             GALGAS_uint inArgument1,
                                             GALGAS_bitSliceTable inArgument2,
                                             GALGAS_string inArgument3,
                                             GALGAS_registerProtection inArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * p = NULL ;
  macroMyNew (p, cMapElement_registerTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_registerTable_searchKey = "the '%K' register is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_uintlist & outArgument0,
                                             GALGAS_uint & outArgument1,
                                             GALGAS_bitSliceTable & outArgument2,
                                             GALGAS_string & outArgument3,
                                             GALGAS_registerProtection & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_registerTable_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_registerTable::getter_mRegisterAddressListForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_uintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mRegisterAddressList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_registerTable::getter_mSizeForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mSize ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_registerTable::getter_mBitSliceTableForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_bitSliceTable result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mBitSliceTable ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_registerTable::getter_mBitDefinitionStringForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mBitDefinitionString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_registerTable::getter_mProtectionForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_registerProtection result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mProtection ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMRegisterAddressListForKey (GALGAS_uintlist inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mRegisterAddressList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMSizeForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mSize = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMBitSliceTableForKey (GALGAS_bitSliceTable inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mBitSliceTable = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMBitDefinitionStringForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mBitDefinitionString = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMProtectionForKey (GALGAS_registerProtection inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mProtection = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_registerTable * GALGAS_registerTable::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * result = (cMapElement_registerTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_registerTable) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_registerTable::cEnumerator_registerTable (const GALGAS_registerTable & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element cEnumerator_registerTable::current (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return GALGAS_registerTable_2D_element (p->mProperty_lkey, p->mProperty_mRegisterAddressList, p->mProperty_mSize, p->mProperty_mBitSliceTable, p->mProperty_mBitDefinitionString, p->mProperty_mProtection) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_registerTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_registerTable::current_mRegisterAddressList (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mRegisterAddressList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_registerTable::current_mSize (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mSize ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable cEnumerator_registerTable::current_mBitSliceTable (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mBitSliceTable ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_registerTable::current_mBitDefinitionString (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mBitDefinitionString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerProtection cEnumerator_registerTable::current_mProtection (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mProtection ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_registerTable::optional_searchKey (const GALGAS_string & inKey,
                                               GALGAS_uintlist & outArgument0,
                                               GALGAS_uint & outArgument1,
                                               GALGAS_bitSliceTable & outArgument2,
                                               GALGAS_string & outArgument3,
                                               GALGAS_registerProtection & outArgument4) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    outArgument0 = p->mProperty_mRegisterAddressList ;
    outArgument1 = p->mProperty_mSize ;
    outArgument2 = p->mProperty_mBitSliceTable ;
    outArgument3 = p->mProperty_mBitDefinitionString ;
    outArgument4 = p->mProperty_mProtection ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@registerTable type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerTable ("registerTable",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerTable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerTable (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable GALGAS_registerTable::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerTable result ;
  const GALGAS_registerTable * p = (const GALGAS_registerTable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerTable checkPrivateAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkPrivateAccess (const GALGAS_registerTable inObject,
                                         const GALGAS_lstring constinArgument_inKey,
                                         const GALGAS_bool constinArgument_inWriteAccess,
                                         const GALGAS_registerProtection constinArgument_inRegisterProtection,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRegisterProtection.enumValue ()) {
  case GALGAS_registerProtection::kNotBuilt:
    break ;
  case GALGAS_registerProtection::kEnum_publicRegister:
    {
    }
    break ;
  case GALGAS_registerProtection::kEnum_protectedRegister:
    {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        GALGAS_bool test_1 = constinArgument_inWriteAccess ;
        if (kBoolTrue == test_1.boolEnum ()) {
          const GALGAS_registerTable temp_2 = inObject ;
          test_1 = temp_2.getter_hasKey (constinArgument_inKey.getter_string (SOURCE_FILE ("piccoloDevice_semantics.galgas", 32)) COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 32)) ;
        }
        test_0 = test_1.boolEnum () ;
        if (kBoolTrue == test_0) {
          const GALGAS_registerTable temp_3 = inObject ;
          GALGAS_location var_declarationLocation_982 = temp_3.getter_locationForKey (constinArgument_inKey.getter_string (SOURCE_FILE ("piccoloDevice_semantics.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 33)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsNotEqual, var_declarationLocation_982.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 34)).objectCompare (constinArgument_inKey.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 34)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inKey.getter_location (SOURCE_FILE ("piccoloDevice_semantics.galgas", 35)), GALGAS_string ("register is protected, write is reserved to instructions in declaration file"), fixItArray5  COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 35)) ;
            }
          }
        }
      }
    }
    break ;
  case GALGAS_registerProtection::kEnum_privateRegister:
    {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_registerTable temp_7 = inObject ;
        test_6 = temp_7.getter_hasKey (constinArgument_inKey.getter_string (SOURCE_FILE ("piccoloDevice_semantics.galgas", 39)) COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 39)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_registerTable temp_8 = inObject ;
          GALGAS_location var_declarationLocation_1286 = temp_8.getter_locationForKey (constinArgument_inKey.getter_string (SOURCE_FILE ("piccoloDevice_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 40)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsNotEqual, var_declarationLocation_1286.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 41)).objectCompare (constinArgument_inKey.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 41)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (constinArgument_inKey.getter_location (SOURCE_FILE ("piccoloDevice_semantics.galgas", 42)), GALGAS_string ("register is private to declaration file"), fixItArray10  COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 42)) ;
            }
          }
        }
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------

cMapElement_ramBankTable::cMapElement_ramBankTable (const GALGAS_lstring & inKey,
                                                    const GALGAS_uint & in_mFirstAddress,
                                                    const GALGAS_uint & in_mFirstFreeAddress,
                                                    const GALGAS_uint & in_mLastAddressPlusOne,
                                                    const GALGAS_uintlist & in_mMirrorOffsetList
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFirstAddress (in_mFirstAddress),
mProperty_mFirstFreeAddress (in_mFirstFreeAddress),
mProperty_mLastAddressPlusOne (in_mLastAddressPlusOne),
mProperty_mMirrorOffsetList (in_mMirrorOffsetList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_ramBankTable::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFirstAddress.isValid () && mProperty_mFirstFreeAddress.isValid () && mProperty_mLastAddressPlusOne.isValid () && mProperty_mMirrorOffsetList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_ramBankTable::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_ramBankTable (mProperty_lkey, mProperty_mFirstAddress, mProperty_mFirstFreeAddress, mProperty_mLastAddressPlusOne, mProperty_mMirrorOffsetList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_ramBankTable::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFirstAddress" ":" ;
  mProperty_mFirstAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFirstFreeAddress" ":" ;
  mProperty_mFirstFreeAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLastAddressPlusOne" ":" ;
  mProperty_mLastAddressPlusOne.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMirrorOffsetList" ":" ;
  mProperty_mMirrorOffsetList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_ramBankTable::compare (const cCollectionElement * inOperand) const {
  cMapElement_ramBankTable * operand = (cMapElement_ramBankTable *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFirstAddress.objectCompare (operand->mProperty_mFirstAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFirstFreeAddress.objectCompare (operand->mProperty_mFirstFreeAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLastAddressPlusOne.objectCompare (operand->mProperty_mLastAddressPlusOne) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMirrorOffsetList.objectCompare (operand->mProperty_mMirrorOffsetList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable::GALGAS_ramBankTable (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable::GALGAS_ramBankTable (const GALGAS_ramBankTable & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable & GALGAS_ramBankTable::operator = (const GALGAS_ramBankTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable GALGAS_ramBankTable::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_ramBankTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable GALGAS_ramBankTable::constructor_mapWithMapToOverride (const GALGAS_ramBankTable & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_ramBankTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable GALGAS_ramBankTable::getter_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_ramBankTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_uint & inArgument0,
                                               const GALGAS_uint & inArgument1,
                                               const GALGAS_uint & inArgument2,
                                               const GALGAS_uintlist & inArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * p = NULL ;
  macroMyNew (p, cMapElement_ramBankTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ramBankTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_insertKey (GALGAS_lstring inKey,
                                            GALGAS_uint inArgument0,
                                            GALGAS_uint inArgument1,
                                            GALGAS_uint inArgument2,
                                            GALGAS_uintlist inArgument3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * p = NULL ;
  macroMyNew (p, cMapElement_ramBankTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' bank ram is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_ramBankTable_searchKey = "the '%K' bank ram is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::method_searchKey (GALGAS_lstring inKey,
                                            GALGAS_uint & outArgument0,
                                            GALGAS_uint & outArgument1,
                                            GALGAS_uint & outArgument2,
                                            GALGAS_uintlist & outArgument3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_ramBankTable_searchKey
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ramBankTable::getter_mFirstAddressForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mFirstAddress ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ramBankTable::getter_mFirstFreeAddressForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mFirstFreeAddress ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ramBankTable::getter_mLastAddressPlusOneForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mLastAddressPlusOne ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_ramBankTable::getter_mMirrorOffsetListForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GALGAS_uintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mMirrorOffsetList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_setMFirstAddressForKey (GALGAS_uint inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mFirstAddress = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_setMFirstFreeAddressForKey (GALGAS_uint inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mFirstFreeAddress = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_setMLastAddressPlusOneForKey (GALGAS_uint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mLastAddressPlusOne = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_setMMirrorOffsetListForKey (GALGAS_uintlist inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mMirrorOffsetList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_ramBankTable * GALGAS_ramBankTable::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * result = (cMapElement_ramBankTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_ramBankTable) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_ramBankTable::cEnumerator_ramBankTable (const GALGAS_ramBankTable & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element cEnumerator_ramBankTable::current (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return GALGAS_ramBankTable_2D_element (p->mProperty_lkey, p->mProperty_mFirstAddress, p->mProperty_mFirstFreeAddress, p->mProperty_mLastAddressPlusOne, p->mProperty_mMirrorOffsetList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_ramBankTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ramBankTable::current_mFirstAddress (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mFirstAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ramBankTable::current_mFirstFreeAddress (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mFirstFreeAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ramBankTable::current_mLastAddressPlusOne (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mLastAddressPlusOne ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_ramBankTable::current_mMirrorOffsetList (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mMirrorOffsetList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ramBankTable::optional_searchKey (const GALGAS_string & inKey,
                                              GALGAS_uint & outArgument0,
                                              GALGAS_uint & outArgument1,
                                              GALGAS_uint & outArgument2,
                                              GALGAS_uintlist & outArgument3) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    outArgument0 = p->mProperty_mFirstAddress ;
    outArgument1 = p->mProperty_mFirstFreeAddress ;
    outArgument2 = p->mProperty_mLastAddressPlusOne ;
    outArgument3 = p->mProperty_mMirrorOffsetList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ramBankTable type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ramBankTable ("ramBankTable",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ramBankTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ramBankTable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramBankTable (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable GALGAS_ramBankTable::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ramBankTable result ;
  const GALGAS_ramBankTable * p = (const GALGAS_ramBankTable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ramBankTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_processorType::GALGAS_processorType (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::constructor_pic_31__38__5F__36__30_ (UNUSED_LOCATION_ARGS) {
  GALGAS_processorType result ;
  result.mEnum = kEnum_pic_31__38__5F__36__30_ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::constructor_pic_31__38__5F__38__30_ (UNUSED_LOCATION_ARGS) {
  GALGAS_processorType result ;
  result.mEnum = kEnum_pic_31__38__5F__38__30_ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::constructor_midrange (UNUSED_LOCATION_ARGS) {
  GALGAS_processorType result ;
  result.mEnum = kEnum_midrange ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::constructor_baseline (UNUSED_LOCATION_ARGS) {
  GALGAS_processorType result ;
  result.mEnum = kEnum_baseline ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_processorType::optional_pic_31__38__5F__36__30_ () const {
  const bool ok = mEnum == kEnum_pic_31__38__5F__36__30_ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_processorType::optional_pic_31__38__5F__38__30_ () const {
  const bool ok = mEnum == kEnum_pic_31__38__5F__38__30_ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_processorType::optional_midrange () const {
  const bool ok = mEnum == kEnum_midrange ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_processorType::optional_baseline () const {
  const bool ok = mEnum == kEnum_baseline ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_processorType [5] = {
  "(not built)",
  "pic18_60",
  "pic18_80",
  "midrange",
  "baseline"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_processorType::getter_isPic_31__38__5F__36__30_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_pic_31__38__5F__36__30_ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_processorType::getter_isPic_31__38__5F__38__30_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_pic_31__38__5F__38__30_ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_processorType::getter_isMidrange (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_midrange == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_processorType::getter_isBaseline (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseline == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_processorType::description (C_String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @processorType: " << gEnumNameArrayFor_processorType [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_processorType::objectCompare (const GALGAS_processorType & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@processorType type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_processorType ("processorType",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_processorType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_processorType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_processorType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_processorType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_processorType result ;
  const GALGAS_processorType * p = (const GALGAS_processorType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_processorType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("processorType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@illegalMaskList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_illegalMaskList : public cCollectionElement {
  public: GALGAS_illegalMaskList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_illegalMaskList (const GALGAS_luint & in_mIllegalValue,
                                              const GALGAS_luint & in_mIllegalMask,
                                              const GALGAS_lstring & in_mDescription
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_illegalMaskList (const GALGAS_illegalMaskList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_illegalMaskList::cCollectionElement_illegalMaskList (const GALGAS_luint & in_mIllegalValue,
                                                                        const GALGAS_luint & in_mIllegalMask,
                                                                        const GALGAS_lstring & in_mDescription
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIllegalValue, in_mIllegalMask, in_mDescription) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_illegalMaskList::cCollectionElement_illegalMaskList (const GALGAS_illegalMaskList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mIllegalValue, inElement.mProperty_mIllegalMask, inElement.mProperty_mDescription) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_illegalMaskList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_illegalMaskList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_illegalMaskList (mObject.mProperty_mIllegalValue, mObject.mProperty_mIllegalMask, mObject.mProperty_mDescription COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_illegalMaskList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIllegalValue" ":" ;
  mObject.mProperty_mIllegalValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIllegalMask" ":" ;
  mObject.mProperty_mIllegalMask.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDescription" ":" ;
  mObject.mProperty_mDescription.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_illegalMaskList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_illegalMaskList * operand = (cCollectionElement_illegalMaskList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_illegalMaskList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList::GALGAS_illegalMaskList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList::GALGAS_illegalMaskList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_illegalMaskList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::constructor_listWithValue (const GALGAS_luint & inOperand0,
                                                                          const GALGAS_luint & inOperand1,
                                                                          const GALGAS_lstring & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_illegalMaskList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_illegalMaskList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_illegalMaskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_luint & in_mIllegalValue,
                                                        const GALGAS_luint & in_mIllegalMask,
                                                        const GALGAS_lstring & in_mDescription
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = NULL ;
  macroMyNew (p, cCollectionElement_illegalMaskList (in_mIllegalValue,
                                                     in_mIllegalMask,
                                                     in_mDescription COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::addAssign_operation (const GALGAS_luint & inOperand0,
                                                  const GALGAS_luint & inOperand1,
                                                  const GALGAS_lstring & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_illegalMaskList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_append (GALGAS_illegalMaskList_2D_element inElement,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_illegalMaskList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_insertAtIndex (const GALGAS_luint inOperand0,
                                                   const GALGAS_luint inOperand1,
                                                   const GALGAS_lstring inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_illegalMaskList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_removeAtIndex (GALGAS_luint & outOperand0,
                                                   GALGAS_luint & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
        outOperand0 = p->mObject.mProperty_mIllegalValue ;
        outOperand1 = p->mObject.mProperty_mIllegalMask ;
        outOperand2 = p->mObject.mProperty_mDescription ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_popFirst (GALGAS_luint & outOperand0,
                                              GALGAS_luint & outOperand1,
                                              GALGAS_lstring & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_popLast (GALGAS_luint & outOperand0,
                                             GALGAS_luint & outOperand1,
                                             GALGAS_lstring & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::method_first (GALGAS_luint & outOperand0,
                                           GALGAS_luint & outOperand1,
                                           GALGAS_lstring & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::method_last (GALGAS_luint & outOperand0,
                                          GALGAS_luint & outOperand1,
                                          GALGAS_lstring & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::add_operation (const GALGAS_illegalMaskList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_illegalMaskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_illegalMaskList result = GALGAS_illegalMaskList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_illegalMaskList result = GALGAS_illegalMaskList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_illegalMaskList result = GALGAS_illegalMaskList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::plusAssign_operation (const GALGAS_illegalMaskList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_setMIllegalValueAtIndex (GALGAS_luint inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIllegalValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_illegalMaskList::getter_mIllegalValueAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    result = p->mObject.mProperty_mIllegalValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_setMIllegalMaskAtIndex (GALGAS_luint inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIllegalMask = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_illegalMaskList::getter_mIllegalMaskAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    result = p->mObject.mProperty_mIllegalMask ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_setMDescriptionAtIndex (GALGAS_lstring inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDescription = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_illegalMaskList::getter_mDescriptionAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    result = p->mObject.mProperty_mDescription ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_illegalMaskList::cEnumerator_illegalMaskList (const GALGAS_illegalMaskList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element cEnumerator_illegalMaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_illegalMaskList::current_mIllegalValue (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject.mProperty_mIllegalValue ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_illegalMaskList::current_mIllegalMask (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject.mProperty_mIllegalMask ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_illegalMaskList::current_mDescription (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject.mProperty_mDescription ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@illegalMaskList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_illegalMaskList ("illegalMaskList",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_illegalMaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_illegalMaskList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_illegalMaskList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_illegalMaskList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_illegalMaskList result ;
  const GALGAS_illegalMaskList * p = (const GALGAS_illegalMaskList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_illegalMaskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("illegalMaskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_configRegisterMaskMap::cMapElement_configRegisterMaskMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_luint & in_mMaskValue,
                                                                      const GALGAS_lstring & in_mDescription,
                                                                      const GALGAS_fieldSettingMap & in_mFieldSettingMap
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mMaskValue (in_mMaskValue),
mProperty_mDescription (in_mDescription),
mProperty_mFieldSettingMap (in_mFieldSettingMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_configRegisterMaskMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMaskValue.isValid () && mProperty_mDescription.isValid () && mProperty_mFieldSettingMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_configRegisterMaskMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_configRegisterMaskMap (mProperty_lkey, mProperty_mMaskValue, mProperty_mDescription, mProperty_mFieldSettingMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_configRegisterMaskMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMaskValue" ":" ;
  mProperty_mMaskValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDescription" ":" ;
  mProperty_mDescription.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldSettingMap" ":" ;
  mProperty_mFieldSettingMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_configRegisterMaskMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_configRegisterMaskMap * operand = (cMapElement_configRegisterMaskMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mMaskValue.objectCompare (operand->mProperty_mMaskValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDescription.objectCompare (operand->mProperty_mDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldSettingMap.objectCompare (operand->mProperty_mFieldSettingMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap::GALGAS_configRegisterMaskMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap::GALGAS_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap & GALGAS_configRegisterMaskMap::operator = (const GALGAS_configRegisterMaskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMaskMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMaskMap::constructor_mapWithMapToOverride (const GALGAS_configRegisterMaskMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMaskMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_configRegisterMaskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_luint & inArgument0,
                                                        const GALGAS_lstring & inArgument1,
                                                        const GALGAS_fieldSettingMap & inArgument2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * p = NULL ;
  macroMyNew (p, cMapElement_configRegisterMaskMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configRegisterMaskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_luint inArgument0,
                                                     GALGAS_lstring inArgument1,
                                                     GALGAS_fieldSettingMap inArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * p = NULL ;
  macroMyNew (p, cMapElement_configRegisterMaskMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register mask is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_configRegisterMaskMap_searchKey = "the '%K' configuration register mask is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_luint & outArgument0,
                                                     GALGAS_lstring & outArgument1,
                                                     GALGAS_fieldSettingMap & outArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_configRegisterMaskMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_configRegisterMaskMap::getter_mMaskValueForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) attributes ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    result = p->mProperty_mMaskValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configRegisterMaskMap::getter_mDescriptionForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    result = p->mProperty_mDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_configRegisterMaskMap::getter_mFieldSettingMapForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) attributes ;
  GALGAS_fieldSettingMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    result = p->mProperty_mFieldSettingMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::setter_setMMaskValueForKey (GALGAS_luint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    p->mProperty_mMaskValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::setter_setMDescriptionForKey (GALGAS_lstring inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    p->mProperty_mDescription = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::setter_setMFieldSettingMapForKey (GALGAS_fieldSettingMap inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    p->mProperty_mFieldSettingMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_configRegisterMaskMap * GALGAS_configRegisterMaskMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * result = (cMapElement_configRegisterMaskMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_configRegisterMaskMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_configRegisterMaskMap::cEnumerator_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element cEnumerator_configRegisterMaskMap::current (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return GALGAS_configRegisterMaskMap_2D_element (p->mProperty_lkey, p->mProperty_mMaskValue, p->mProperty_mDescription, p->mProperty_mFieldSettingMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configRegisterMaskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_configRegisterMaskMap::current_mMaskValue (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return p->mProperty_mMaskValue ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configRegisterMaskMap::current_mDescription (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return p->mProperty_mDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap cEnumerator_configRegisterMaskMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return p->mProperty_mFieldSettingMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_configRegisterMaskMap::optional_searchKey (const GALGAS_string & inKey,
                                                       GALGAS_luint & outArgument0,
                                                       GALGAS_lstring & outArgument1,
                                                       GALGAS_fieldSettingMap & outArgument2) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    outArgument0 = p->mProperty_mMaskValue ;
    outArgument1 = p->mProperty_mDescription ;
    outArgument2 = p->mProperty_mFieldSettingMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@configRegisterMaskMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMaskMap ("configRegisterMaskMap",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configRegisterMaskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configRegisterMaskMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMaskMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMaskMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap result ;
  const GALGAS_configRegisterMaskMap * p = (const GALGAS_configRegisterMaskMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configRegisterMaskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_configRegisterMap::cMapElement_configRegisterMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_luint & in_mRegisterAddress,
                                                              const GALGAS_luint & in_mRegisterWidth,
                                                              const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                              const GALGAS_illegalMaskList & in_mIllegalMaskList
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegisterAddress (in_mRegisterAddress),
mProperty_mRegisterWidth (in_mRegisterWidth),
mProperty_mConfigRegisterMaskMap (in_mConfigRegisterMaskMap),
mProperty_mIllegalMaskList (in_mIllegalMaskList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_configRegisterMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterWidth.isValid () && mProperty_mConfigRegisterMaskMap.isValid () && mProperty_mIllegalMaskList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_configRegisterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_configRegisterMap (mProperty_lkey, mProperty_mRegisterAddress, mProperty_mRegisterWidth, mProperty_mConfigRegisterMaskMap, mProperty_mIllegalMaskList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_configRegisterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterAddress" ":" ;
  mProperty_mRegisterAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterWidth" ":" ;
  mProperty_mRegisterWidth.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConfigRegisterMaskMap" ":" ;
  mProperty_mConfigRegisterMaskMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIllegalMaskList" ":" ;
  mProperty_mIllegalMaskList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_configRegisterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_configRegisterMap * operand = (cMapElement_configRegisterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterAddress.objectCompare (operand->mProperty_mRegisterAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterWidth.objectCompare (operand->mProperty_mRegisterWidth) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConfigRegisterMaskMap.objectCompare (operand->mProperty_mConfigRegisterMaskMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIllegalMaskList.objectCompare (operand->mProperty_mIllegalMaskList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap::GALGAS_configRegisterMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap::GALGAS_configRegisterMap (const GALGAS_configRegisterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap & GALGAS_configRegisterMap::operator = (const GALGAS_configRegisterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap GALGAS_configRegisterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_configRegisterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap GALGAS_configRegisterMap::constructor_mapWithMapToOverride (const GALGAS_configRegisterMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap GALGAS_configRegisterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_configRegisterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_luint & inArgument0,
                                                    const GALGAS_luint & inArgument1,
                                                    const GALGAS_configRegisterMaskMap & inArgument2,
                                                    const GALGAS_illegalMaskList & inArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * p = NULL ;
  macroMyNew (p, cMapElement_configRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configRegisterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_luint inArgument0,
                                                 GALGAS_luint inArgument1,
                                                 GALGAS_configRegisterMaskMap inArgument2,
                                                 GALGAS_illegalMaskList inArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * p = NULL ;
  macroMyNew (p, cMapElement_configRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_configRegisterMap_searchKey = "the '%K' configuration register is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_luint & outArgument0,
                                                 GALGAS_luint & outArgument1,
                                                 GALGAS_configRegisterMaskMap & outArgument2,
                                                 GALGAS_illegalMaskList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_configRegisterMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_configRegisterMap::getter_mRegisterAddressForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mRegisterAddress ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_configRegisterMap::getter_mRegisterWidthForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mRegisterWidth ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMap::getter_mConfigRegisterMaskMapForKey (const GALGAS_string & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GALGAS_configRegisterMaskMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mConfigRegisterMaskMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_configRegisterMap::getter_mIllegalMaskListForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GALGAS_illegalMaskList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mIllegalMaskList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_setMRegisterAddressForKey (GALGAS_luint inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mRegisterAddress = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_setMRegisterWidthForKey (GALGAS_luint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mRegisterWidth = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_setMConfigRegisterMaskMapForKey (GALGAS_configRegisterMaskMap inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mConfigRegisterMaskMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_setMIllegalMaskListForKey (GALGAS_illegalMaskList inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mIllegalMaskList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_configRegisterMap * GALGAS_configRegisterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * result = (cMapElement_configRegisterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_configRegisterMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_configRegisterMap::cEnumerator_configRegisterMap (const GALGAS_configRegisterMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element cEnumerator_configRegisterMap::current (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return GALGAS_configRegisterMap_2D_element (p->mProperty_lkey, p->mProperty_mRegisterAddress, p->mProperty_mRegisterWidth, p->mProperty_mConfigRegisterMaskMap, p->mProperty_mIllegalMaskList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configRegisterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_configRegisterMap::current_mRegisterAddress (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mRegisterAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_configRegisterMap::current_mRegisterWidth (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mRegisterWidth ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap cEnumerator_configRegisterMap::current_mConfigRegisterMaskMap (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mConfigRegisterMaskMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList cEnumerator_configRegisterMap::current_mIllegalMaskList (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mIllegalMaskList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_configRegisterMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_luint & outArgument0,
                                                   GALGAS_luint & outArgument1,
                                                   GALGAS_configRegisterMaskMap & outArgument2,
                                                   GALGAS_illegalMaskList & outArgument3) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    outArgument0 = p->mProperty_mRegisterAddress ;
    outArgument1 = p->mProperty_mRegisterWidth ;
    outArgument2 = p->mProperty_mConfigRegisterMaskMap ;
    outArgument3 = p->mProperty_mIllegalMaskList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@configRegisterMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMap ("configRegisterMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configRegisterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configRegisterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap GALGAS_configRegisterMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMap result ;
  const GALGAS_configRegisterMap * p = (const GALGAS_configRegisterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configRegisterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                        C_Lexique_piccoloDevice_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  GALGAS_lstring var_deviceName_346 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  GALGAS_processorType var_processorType_397 ;
  GALGAS_lstring var_processorName_437 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_processorName_437.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 17)).objectCompare (GALGAS_string ("pic18_60"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_processorType_397 = GALGAS_processorType::constructor_pic_31__38__5F__36__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 18)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, var_processorName_437.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 19)).objectCompare (GALGAS_string ("pic18_80"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_processorType_397 = GALGAS_processorType::constructor_pic_31__38__5F__38__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 20)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_processorName_437.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 21)).objectCompare (GALGAS_string ("mid-range"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_processorType_397 = GALGAS_processorType::constructor_midrange (SOURCE_FILE ("piccoloDevice_syntax.galgas", 22)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_processorName_437.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 23)).objectCompare (GALGAS_string ("baseline"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_processorType_397 = GALGAS_processorType::constructor_baseline (SOURCE_FILE ("piccoloDevice_syntax.galgas", 24)) ;
          }
        }
        if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)), GALGAS_string ("The '").add_operation (var_processorName_437.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)).add_operation (GALGAS_string ("' processor is not handled"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)), fixItArray4  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)) ;
          var_processorType_397.drop () ; // Release error dropped variable
        }
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  GALGAS_luint var_romSize_977 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  GALGAS_uint var_eepromSize_1002 ;
  GALGAS_uint var_eepromAddress_1024 ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
    var_eepromSize_1002 = GALGAS_uint ((uint32_t) 0U) ;
    var_eepromAddress_1024 = GALGAS_uint ((uint32_t) 0U) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    GALGAS_luint var_l_5F_eepromSize_1136 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    var_eepromSize_1002 = var_l_5F_eepromSize_1136.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    GALGAS_luint var_l_5F_eepromAddress_1225 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    var_eepromAddress_1024 = var_l_5F_eepromAddress_1225.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 43)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  GALGAS_luint var_bankCount_1326 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_piccoloDevice_5F_syntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      GALGAS_luint var_unusedRegisterStart_1417 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        GALGAS_luint var_unusedRegisterEnd_1491 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  GALGAS_ramBankTable var_ramBankTable_1532 = GALGAS_ramBankTable::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 60)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    switch (select_piccoloDevice_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      GALGAS_lstring var_ramName_1625 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      GALGAS_luint var_ramStart_1669 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      GALGAS_luint var_ramEnd_1712 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      GALGAS_uintlist var_mirrorOffsetList_1737 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("piccoloDevice_syntax.galgas", 69)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_7 = true ;
        while (repeatFlag_7) {
          GALGAS_luint var_mirrorStartAddress_1858 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          var_mirrorOffsetList_1737.addAssign_operation (var_mirrorStartAddress_1858.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 75)).substract_operation (var_ramStart_1669.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75)) ;
          switch (select_piccoloDevice_5F_syntax_5 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          } break ;
          default:
            repeatFlag_7 = false ;
            break ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
      {
      var_ramBankTable_1532.setter_insertKey (var_ramName_1625, var_ramStart_1669.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 83)), var_ramStart_1669.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 84)), var_ramEnd_1712.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 85)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 85)), var_mirrorOffsetList_1737, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 81)) ;
      }
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  GALGAS_registerTable var_registerTable_2192 = GALGAS_registerTable::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 89)) ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    switch (select_piccoloDevice_5F_syntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      GALGAS_lstring var_registerName_2296 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      GALGAS_uintlist var_registerAddressList_2333 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("piccoloDevice_syntax.galgas", 95)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GALGAS_luint var_registerAddress_2412 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        var_registerAddressList_2333.addAssign_operation (var_registerAddress_2412.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 98))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 98)) ;
        switch (select_piccoloDevice_5F_syntax_7 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        } break ;
        default:
          repeatFlag_9 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      GALGAS_uint var_sliceIndex_2522 = GALGAS_uint ((uint32_t) 8U) ;
      GALGAS_bitSliceTable var_bitSliceTable_2548 = GALGAS_bitSliceTable::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 104)) ;
      GALGAS_string var_bitDefinitionString_2607 = GALGAS_string (" <") ;
      bool repeatFlag_10 = true ;
      while (repeatFlag_10) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          GALGAS_uint var_sliceWidth_2663 = GALGAS_uint ((uint32_t) 0U) ;
          bool repeatFlag_11 = true ;
          while (repeatFlag_11) {
            GALGAS_uint var_sliceBase_2726 = var_sliceIndex_2522 ;
            GALGAS_lstring var_sliceName_2787 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_sliceWidth_2663.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_sliceWidth_2663.objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 113)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (var_sliceName_2787.getter_location (SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)), GALGAS_string ("a slice of 1 bit is expected for '").add_operation (var_sliceName_2787.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)), fixItArray13  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)) ;
                }
              }
              var_sliceWidth_2663 = GALGAS_uint ((uint32_t) 1U) ;
              var_bitDefinitionString_2607.plusAssign_operation(var_sliceName_2787.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 117)) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              GALGAS_luint var_sliceSize_3120 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = GALGAS_bool (kIsNotEqual, var_sliceWidth_2663.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_sliceWidth_2663.objectCompare (var_sliceSize_3120.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 121)))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 121)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (var_sliceName_2787.getter_location (SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), GALGAS_string ("a slice of ").add_operation (var_sliceWidth_2663.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GALGAS_string (" bits is expected for '"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (var_sliceName_2787.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), fixItArray15  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)) ;
                }
              }
              var_sliceWidth_2663 = var_sliceSize_3120.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 124)) ;
              var_sliceBase_2726 = var_sliceBase_2726.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)).substract_operation (var_sliceSize_3120.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)) ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
              var_bitDefinitionString_2607.plusAssign_operation(var_sliceName_2787.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (var_sliceSize_3120.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)) ;
            } break ;
            default:
              break ;
            }
            {
            var_bitSliceTable_2548.setter_insertKey (var_sliceName_2787, var_sliceIndex_2522.substract_operation (var_sliceWidth_2663, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)), var_sliceWidth_2663, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)) ;
            }
            switch (select_piccoloDevice_5F_syntax_10 (inCompiler)) {
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
              var_bitDefinitionString_2607.plusAssign_operation(GALGAS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 132)) ;
            } break ;
            default:
              repeatFlag_11 = false ;
              break ;
            }
          }
          var_sliceIndex_2522 = var_sliceIndex_2522.substract_operation (var_sliceWidth_2663, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 134)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
          var_bitDefinitionString_2607.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 137)) ;
          var_sliceIndex_2522.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 138)) ;
        } break ;
        default:
          break ;
        }
        switch (select_piccoloDevice_5F_syntax_8 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
          var_bitDefinitionString_2607.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 142)) ;
        } break ;
        default:
          repeatFlag_10 = false ;
          break ;
        }
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsNotEqual, var_sliceIndex_2522.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_16) {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (var_registerName_2296.getter_location (SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)), GALGAS_string ("Incorrect bit definition for register '").add_operation (var_registerName_2296.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)), fixItArray17  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)) ;
        }
      }
      var_bitDefinitionString_2607.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 147)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      {
      var_registerTable_2192.setter_insertKey (var_registerName_2296, var_registerAddressList_2333, GALGAS_uint ((uint32_t) 1U), var_bitSliceTable_2548, var_bitDefinitionString_2607, GALGAS_registerProtection::constructor_publicRegister (SOURCE_FILE ("piccoloDevice_syntax.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 149)) ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_8 = false ;
      break ;
    }
  }
  GALGAS_configRegisterMap var_configRegisterMap_4227 = GALGAS_configRegisterMap::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 152)) ;
  bool repeatFlag_18 = true ;
  while (repeatFlag_18) {
    switch (select_piccoloDevice_5F_syntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      GALGAS_lstring var_configRegisterName_4346 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      GALGAS_luint var_configRegisterAddress_4404 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      GALGAS_luint var_configRegisterWidth_4463 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      GALGAS_illegalMaskList var_illegalMaskList_4487 = GALGAS_illegalMaskList::constructor_emptyList (SOURCE_FILE ("piccoloDevice_syntax.galgas", 161)) ;
      bool repeatFlag_19 = true ;
      while (repeatFlag_19) {
        switch (select_piccoloDevice_5F_syntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          GALGAS_luint var_illegalValue_4596 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          GALGAS_luint var_illegalMask_4650 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          GALGAS_lstring var_illegalDescriptionString_4721 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
          var_illegalMaskList_4487.addAssign_operation (var_illegalValue_4596, var_illegalMask_4650, var_illegalDescriptionString_4721  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 170)) ;
        } break ;
        default:
          repeatFlag_19 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      GALGAS_configRegisterMaskMap var_configRegisterMaskMap_4845 = GALGAS_configRegisterMaskMap::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 173)) ;
      GALGAS_stringset var_settingNameSet_4903 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("piccoloDevice_syntax.galgas", 174)) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        switch (select_piccoloDevice_5F_syntax_14 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_maskName_4990 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = var_settingNameSet_4903.getter_hasKey (var_maskName_4990.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 178)) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 178)).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (var_maskName_4990.getter_location (SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)), GALGAS_string ("The '").add_operation (var_maskName_4990.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)).add_operation (GALGAS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)), fixItArray22  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)) ;
            }
          }
          var_settingNameSet_4903.addAssign_operation (var_maskName_4990.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 181))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 181)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          GALGAS_luint var_maskValue_5227 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          GALGAS_lstring var_maskDescriptionString_5299 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          GALGAS_fieldSettingMap var_fieldSettingMap_5325 = GALGAS_fieldSettingMap::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 186)) ;
          bool repeatFlag_23 = true ;
          while (repeatFlag_23) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            GALGAS_luint var_value_5422 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            GALGAS_luint var_mask_5473 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            GALGAS_lstring var_descriptionString_5545 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            {
            var_fieldSettingMap_5325.setter_insertKey (var_descriptionString_5545, var_value_5422.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 194)), var_mask_5473.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 194)) ;
            }
            switch (select_piccoloDevice_5F_syntax_15 (inCompiler)) {
            case 2: {
            } break ;
            default:
              repeatFlag_23 = false ;
              break ;
            }
          }
          {
          var_configRegisterMaskMap_4845.setter_insertKey (var_maskName_4990, var_maskValue_5227, var_maskDescriptionString_5299, var_fieldSettingMap_5325, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 197)) ;
          }
        } break ;
        default:
          repeatFlag_20 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
      {
      var_configRegisterMap_4227.setter_insertKey (var_configRegisterName_4346, var_configRegisterAddress_4404, var_configRegisterWidth_4463, var_configRegisterMaskMap_4845, var_illegalMaskList_4487, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 200)) ;
      }
    } break ;
    default:
      repeatFlag_18 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (kIsEqual, var_processorName_437.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 210)).objectCompare (GALGAS_string ("pic18_60"))).operator_or (GALGAS_bool (kIsEqual, var_processorName_437.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 210)).objectCompare (GALGAS_string ("pic18_80"))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_24) {
      GALGAS_uintlist joker_6164_5 ; // Joker input parameter
      GALGAS_uint joker_6164_4 ; // Joker input parameter
      GALGAS_bitSliceTable joker_6164_3 ; // Joker input parameter
      GALGAS_string joker_6164_2 ; // Joker input parameter
      GALGAS_registerProtection joker_6164_1 ; // Joker input parameter
      var_registerTable_2192.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)), joker_6164_5, joker_6164_4, joker_6164_3, joker_6164_2, joker_6164_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)) ;
      GALGAS_uintlist joker_6240_5 ; // Joker input parameter
      GALGAS_uint joker_6240_4 ; // Joker input parameter
      GALGAS_bitSliceTable joker_6240_3 ; // Joker input parameter
      GALGAS_string joker_6240_2 ; // Joker input parameter
      GALGAS_registerProtection joker_6240_1 ; // Joker input parameter
      var_registerTable_2192.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("TOSL"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)), joker_6240_5, joker_6240_4, joker_6240_3, joker_6240_2, joker_6240_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)) ;
      GALGAS_uintlist joker_6316_5 ; // Joker input parameter
      GALGAS_uint joker_6316_4 ; // Joker input parameter
      GALGAS_bitSliceTable joker_6316_3 ; // Joker input parameter
      GALGAS_string joker_6316_2 ; // Joker input parameter
      GALGAS_registerProtection joker_6316_1 ; // Joker input parameter
      var_registerTable_2192.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("TOSH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)), joker_6316_5, joker_6316_4, joker_6316_3, joker_6316_2, joker_6316_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)) ;
      GALGAS_uintlist joker_6392_5 ; // Joker input parameter
      GALGAS_uint joker_6392_4 ; // Joker input parameter
      GALGAS_bitSliceTable joker_6392_3 ; // Joker input parameter
      GALGAS_string joker_6392_2 ; // Joker input parameter
      GALGAS_registerProtection joker_6392_1 ; // Joker input parameter
      var_registerTable_2192.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("TOSU"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)), joker_6392_5, joker_6392_4, joker_6392_3, joker_6392_2, joker_6392_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)) ;
    }
  }
  GALGAS_string var_sharedBankName_6469 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (kIsEqual, var_processorName_437.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 218)).objectCompare (GALGAS_string ("mid-range"))).boolEnum () ;
    if (kBoolTrue == test_25) {
      cEnumerator_ramBankTable enumerator_6578 (var_ramBankTable_1532, kENUMERATION_UP) ;
      bool bool_26 = GALGAS_bool (kIsEqual, var_sharedBankName_6469.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      if (enumerator_6578.hasCurrentObject () && bool_26) {
        while (enumerator_6578.hasCurrentObject () && bool_26) {
          GALGAS_uint var_bankAccessibility_6639 = GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_6578.current_mFirstFreeAddress (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)) ;
          cEnumerator_uintlist enumerator_6706 (enumerator_6578.current_mMirrorOffsetList (HERE), kENUMERATION_UP) ;
          while (enumerator_6706.hasCurrentObject ()) {
            var_bankAccessibility_6639 = var_bankAccessibility_6639.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_6578.current_mFirstFreeAddress (HERE).add_operation (enumerator_6706.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) ;
            enumerator_6706.gotoNextObject () ;
          }
          enumGalgasBool test_27 = kBoolTrue ;
          if (kBoolTrue == test_27) {
            test_27 = GALGAS_bool (kIsEqual, GALGAS_uint ((uint32_t) 1U).left_shift_operation (var_bankCount_1326.getter_uint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).objectCompare (var_bankAccessibility_6639.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)))).boolEnum () ;
            if (kBoolTrue == test_27) {
              var_sharedBankName_6469 = enumerator_6578.current_lkey (HERE).getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 225)) ;
            }
          }
          enumerator_6578.gotoNextObject () ;
          if (enumerator_6578.hasCurrentObject ()) {
            bool_26 = GALGAS_bool (kIsEqual, var_sharedBankName_6469.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
          }
        }
      }
    }
  }
  outArgument_outPiccoloDeviceModel = GALGAS_piccoloDeviceModel::constructor_new (var_deviceName_346, var_processorType_397, var_romSize_977, var_bankCount_1326, var_registerTable_2192, var_ramBankTable_1532, var_eepromSize_1002, var_eepromAddress_1024, var_configRegisterMap_4227, var_sharedBankName_6469  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccoloDevice_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_piccoloDevice_5F_syntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_piccoloDevice_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          switch (select_piccoloDevice_5F_syntax_5 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_piccoloDevice_5F_syntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        switch (select_piccoloDevice_5F_syntax_7 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          bool repeatFlag_6 = true ;
          while (repeatFlag_6) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
            } break ;
            default:
              break ;
            }
            switch (select_piccoloDevice_5F_syntax_10 (inCompiler)) {
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
            } break ;
            default:
              repeatFlag_6 = false ;
              break ;
            }
          }
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
        } break ;
        default:
          break ;
        }
        switch (select_piccoloDevice_5F_syntax_8 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    switch (select_piccoloDevice_5F_syntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        switch (select_piccoloDevice_5F_syntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
        } break ;
        default:
          repeatFlag_8 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        switch (select_piccoloDevice_5F_syntax_14 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          bool repeatFlag_10 = true ;
          while (repeatFlag_10) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            switch (select_piccoloDevice_5F_syntax_15 (inCompiler)) {
            case 2: {
            } break ;
            default:
              repeatFlag_10 = false ;
              break ;
            }
          }
        } break ;
        default:
          repeatFlag_9 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
    } break ;
    default:
      repeatFlag_7 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
  inCompiler->resetTemplateString () ;
}

