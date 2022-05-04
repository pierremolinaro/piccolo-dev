#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_NegateCondition_2D_weak::objectCompare (const GALGAS_pic_31__38_NegateCondition_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_NegateCondition_2D_weak::GALGAS_pic_31__38_NegateCondition_2D_weak (void) :
GALGAS_pic_31__38_ConditionExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition_2D_weak & GALGAS_pic_31__38_NegateCondition_2D_weak::operator = (const GALGAS_pic_31__38_NegateCondition & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition_2D_weak::GALGAS_pic_31__38_NegateCondition_2D_weak (const GALGAS_pic_31__38_NegateCondition & inSource) :
GALGAS_pic_31__38_ConditionExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition_2D_weak GALGAS_pic_31__38_NegateCondition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_NegateCondition_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition GALGAS_pic_31__38_NegateCondition_2D_weak::bang_pic_31__38_NegateCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_NegateCondition result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_NegateCondition) ;
      result = GALGAS_pic_31__38_NegateCondition ((cPtr_pic_31__38_NegateCondition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18NegateCondition-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2D_weak ("pic18NegateCondition-weak",
                                                           & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_NegateCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_NegateCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_NegateCondition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_NegateCondition_2D_weak GALGAS_pic_31__38_NegateCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_NegateCondition_2D_weak result ;
  const GALGAS_pic_31__38_NegateCondition_2D_weak * p = (const GALGAS_pic_31__38_NegateCondition_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_NegateCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18NegateCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_AndCondition reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition::GALGAS_pic_31__38_AndCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition::GALGAS_pic_31__38_AndCondition (const cPtr_pic_31__38_AndCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_AndCondition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition GALGAS_pic_31__38_AndCondition::constructor_new (const GALGAS_pic_31__38_ConditionExpression & inAttribute_mLeftExpression,
                                                                                const GALGAS_pic_31__38_ConditionExpression & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AndCondition result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_AndCondition (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_AndCondition::setter_setMLeftExpression (GALGAS_pic_31__38_ConditionExpression inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_AndCondition::setter_setMRightExpression (GALGAS_pic_31__38_ConditionExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_AndCondition::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_AndCondition::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18AndCondition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_AndCondition::cPtr_pic_31__38_AndCondition (const GALGAS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                                            const GALGAS_pic_31__38_ConditionExpression & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_AndCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;
}

void cPtr_pic_31__38_AndCondition::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@pic18AndCondition:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_AndCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_AndCondition (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18AndCondition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_AndCondition ("pic18AndCondition",
                                                & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_AndCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_AndCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_AndCondition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition GALGAS_pic_31__38_AndCondition::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AndCondition result ;
  const GALGAS_pic_31__38_AndCondition * p = (const GALGAS_pic_31__38_AndCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_AndCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AndCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_AndCondition_2D_weak::objectCompare (const GALGAS_pic_31__38_AndCondition_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_AndCondition_2D_weak::GALGAS_pic_31__38_AndCondition_2D_weak (void) :
GALGAS_pic_31__38_ConditionExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition_2D_weak & GALGAS_pic_31__38_AndCondition_2D_weak::operator = (const GALGAS_pic_31__38_AndCondition & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition_2D_weak::GALGAS_pic_31__38_AndCondition_2D_weak (const GALGAS_pic_31__38_AndCondition & inSource) :
GALGAS_pic_31__38_ConditionExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition_2D_weak GALGAS_pic_31__38_AndCondition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_AndCondition_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition GALGAS_pic_31__38_AndCondition_2D_weak::bang_pic_31__38_AndCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_AndCondition result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_AndCondition) ;
      result = GALGAS_pic_31__38_AndCondition ((cPtr_pic_31__38_AndCondition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18AndCondition-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2D_weak ("pic18AndCondition-weak",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_AndCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_AndCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_AndCondition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AndCondition_2D_weak GALGAS_pic_31__38_AndCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AndCondition_2D_weak result ;
  const GALGAS_pic_31__38_AndCondition_2D_weak * p = (const GALGAS_pic_31__38_AndCondition_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_AndCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AndCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_structured_5F_if reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if::GALGAS_pic_31__38_Instruction_5F_structured_5F_if (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if::GALGAS_pic_31__38_Instruction_5F_structured_5F_if (const cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_structured_5F_if::setter_setMIfCondition (GALGAS_pic_31__38_ConditionExpression inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mIfCondition = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_structured_5F_if::setter_setMThenInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_structured_5F_if::setter_setMElseInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_structured_5F_if::setter_setMEndOfElsePartLocation (GALGAS_location inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    p->mProperty_mEndOfElsePartLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mIfCondition (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mIfCondition ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mThenInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mElseInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mEndOfElsePartLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mEndOfElsePartLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_structured_if class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_structured_if:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIfCondition.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfElsePartLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_structured_if type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ("pic18Instruction_structured_if",
                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if GALGAS_pic_31__38_Instruction_5F_structured_5F_if::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if result ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if * p = (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak & GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::bang_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
      result = GALGAS_pic_31__38_Instruction_5F_structured_5F_if ((cPtr_pic_31__38_Instruction_5F_structured_5F_if *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_structured_if-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak ("pic18Instruction_structured_if-weak",
                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_structured_if-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_DoWhilePartList' list
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_DoWhilePartList::cCollectionElement_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                              const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                              const GALGAS_location & in_mEndOfPartLocation
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_DoWhilePartList::cCollectionElement_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_DoWhilePartList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCondition, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfPartLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_DoWhilePartList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_DoWhilePartList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_pic_31__38_DoWhilePartList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_pic_31__38_DoWhilePartList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCondition" ":" ;
  mObject.mProperty_mCondition.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfPartLocation" ":" ;
  mObject.mProperty_mEndOfPartLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_DoWhilePartList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_DoWhilePartList * operand = (cCollectionElement_pic_31__38_DoWhilePartList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList::GALGAS_pic_31__38_DoWhilePartList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList::GALGAS_pic_31__38_DoWhilePartList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_DoWhilePartList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                   const GALGAS_location & in_mEndOfPartLocation
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = NULL ;
  macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (in_mCondition,
                                                                in_mInstructionList,
                                                                in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::addAssign_operation (const GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                             const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                             const GALGAS_location & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_DoWhilePartList::setter_append (GALGAS_pic_31__38_DoWhilePartList_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (inElement COMMA_THERE)) ;
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

void GALGAS_pic_31__38_DoWhilePartList::setter_insertAtIndex (const GALGAS_pic_31__38_ConditionExpression inOperand0,
                                                              const GALGAS_pic_31__38_InstructionList inOperand1,
                                                              const GALGAS_location inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::setter_removeAtIndex (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                              GALGAS_pic_31__38_InstructionList & outOperand1,
                                                              GALGAS_location & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::setter_popFirst (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                         GALGAS_pic_31__38_InstructionList & outOperand1,
                                                         GALGAS_location & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::setter_popLast (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                        GALGAS_pic_31__38_InstructionList & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::method_first (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                      GALGAS_pic_31__38_InstructionList & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::method_last (GALGAS_pic_31__38_ConditionExpression & outOperand0,
                                                     GALGAS_pic_31__38_InstructionList & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::add_operation (const GALGAS_pic_31__38_DoWhilePartList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::plusAssign_operation (const GALGAS_pic_31__38_DoWhilePartList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::setter_setMConditionAtIndex (GALGAS_pic_31__38_ConditionExpression inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCondition = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_DoWhilePartList::getter_mConditionAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  GALGAS_pic_31__38_ConditionExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    result = p->mObject.mProperty_mCondition ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_DoWhilePartList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList::setter_setMEndOfPartLocationAtIndex (GALGAS_location inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfPartLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_DoWhilePartList::getter_mEndOfPartLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    result = p->mObject.mProperty_mEndOfPartLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_DoWhilePartList::cEnumerator_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_DoWhilePartList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element cEnumerator_pic_31__38_DoWhilePartList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression cEnumerator_pic_31__38_DoWhilePartList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_DoWhilePartList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_pic_31__38_DoWhilePartList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_DoWhilePartList * p = (const cCollectionElement_pic_31__38_DoWhilePartList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
  return p->mObject.mProperty_mEndOfPartLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@pic18DoWhilePartList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ("pic18DoWhilePartList",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_DoWhilePartList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_DoWhilePartList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_DoWhilePartList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_DoWhilePartList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_DoWhilePartList result ;
  const GALGAS_pic_31__38_DoWhilePartList * p = (const GALGAS_pic_31__38_DoWhilePartList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_DoWhilePartList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18DoWhilePartList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_do_5F_while reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while::GALGAS_pic_31__38_Instruction_5F_do_5F_while (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                                        GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while::GALGAS_pic_31__38_Instruction_5F_do_5F_while (const cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_do_5F_while::setter_setMRepeatedInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    p->mProperty_mRepeatedInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_do_5F_while::setter_setMEndOfRepeatedInstructionList (GALGAS_location inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    p->mProperty_mEndOfRepeatedInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_do_5F_while::setter_setMWhilePartList (GALGAS_pic_31__38_DoWhilePartList inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    p->mProperty_mWhilePartList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_do_5F_while::readProperty_mRepeatedInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_do_5F_while::readProperty_mEndOfRepeatedInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    return p->mProperty_mEndOfRepeatedInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_Instruction_5F_do_5F_while::readProperty_mWhilePartList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_DoWhilePartList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    return p->mProperty_mWhilePartList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_do_while class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

void cPtr_pic_31__38_Instruction_5F_do_5F_while::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_do_while:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_do_while type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ("pic18Instruction_do_while",
                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while result ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while * p = (const GALGAS_pic_31__38_Instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak & GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::bang_pic_31__38_Instruction_5F_do_5F_while_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
      result = GALGAS_pic_31__38_Instruction_5F_do_5F_while ((cPtr_pic_31__38_Instruction_5F_do_5F_while *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_do_while-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak ("pic18Instruction_do_while-weak",
                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_do_while-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_InterruptDefinitionList' list
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_InterruptDefinitionList::cCollectionElement_pic_31__38_InterruptDefinitionList (const GALGAS_lstring & in_mInterruptName,
                                                                                                              const GALGAS_bool & in_mFastReturn,
                                                                                                              const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                              const GALGAS_location & in_mEndOfInterruptLocation
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInterruptName, in_mFastReturn, in_mInstructionList, in_mEndOfInterruptLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_InterruptDefinitionList::cCollectionElement_pic_31__38_InterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInterruptName, inElement.mProperty_mFastReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInterruptLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_InterruptDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_InterruptDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_pic_31__38_InterruptDefinitionList (mObject.mProperty_mInterruptName, mObject.mProperty_mFastReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInterruptLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_pic_31__38_InterruptDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptName" ":" ;
  mObject.mProperty_mInterruptName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFastReturn" ":" ;
  mObject.mProperty_mFastReturn.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInterruptLocation" ":" ;
  mObject.mProperty_mEndOfInterruptLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_InterruptDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_InterruptDefinitionList * operand = (cCollectionElement_pic_31__38_InterruptDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList::GALGAS_pic_31__38_InterruptDefinitionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList::GALGAS_pic_31__38_InterruptDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_InterruptDefinitionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mInterruptName,
                                                                           const GALGAS_bool & in_mFastReturn,
                                                                           const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                           const GALGAS_location & in_mEndOfInterruptLocation
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (in_mInterruptName,
                                                                        in_mFastReturn,
                                                                        in_mInstructionList,
                                                                        in_mEndOfInterruptLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_bool & inOperand1,
                                                                     const GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                     const GALGAS_location & inOperand3
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_InterruptDefinitionList::setter_append (GALGAS_pic_31__38_InterruptDefinitionList_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (inElement COMMA_THERE)) ;
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

void GALGAS_pic_31__38_InterruptDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_bool inOperand1,
                                                                      const GALGAS_pic_31__38_InstructionList inOperand2,
                                                                      const GALGAS_location inOperand3,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_bool & outOperand1,
                                                                      GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                      GALGAS_location & outOperand3,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_bool & outOperand1,
                                                                 GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                 GALGAS_location & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_bool & outOperand1,
                                                                GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                GALGAS_location & outOperand3,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              GALGAS_pic_31__38_InstructionList & outOperand2,
                                                              GALGAS_location & outOperand3,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             GALGAS_pic_31__38_InstructionList & outOperand2,
                                                             GALGAS_location & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::add_operation (const GALGAS_pic_31__38_InterruptDefinitionList & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InterruptDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InterruptDefinitionList result = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InterruptDefinitionList result = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InterruptDefinitionList result = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::plusAssign_operation (const GALGAS_pic_31__38_InterruptDefinitionList inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_setMInterruptNameAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInterruptName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_InterruptDefinitionList::getter_mInterruptNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mInterruptName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_setMFastReturnAtIndex (GALGAS_bool inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFastReturn = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_InterruptDefinitionList::getter_mFastReturnAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mFastReturn ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InterruptDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList::setter_setMEndOfInterruptLocationAtIndex (GALGAS_location inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInterruptLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_InterruptDefinitionList::getter_mEndOfInterruptLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    result = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_InterruptDefinitionList::cEnumerator_pic_31__38_InterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element cEnumerator_pic_31__38_InterruptDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38_InterruptDefinitionList::current_mInterruptName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mInterruptName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_pic_31__38_InterruptDefinitionList::current_mFastReturn (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mFastReturn ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_InterruptDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_pic_31__38_InterruptDefinitionList::current_mEndOfInterruptLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_InterruptDefinitionList * p = (const cCollectionElement_pic_31__38_InterruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
  return p->mObject.mProperty_mEndOfInterruptLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@pic18InterruptDefinitionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ("pic18InterruptDefinitionList",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_InterruptDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_InterruptDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InterruptDefinitionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_InterruptDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList result ;
  const GALGAS_pic_31__38_InterruptDefinitionList * p = (const GALGAS_pic_31__38_InterruptDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_InterruptDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InterruptDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_RoutineDefinitionList' list
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_RoutineDefinitionList::cCollectionElement_pic_31__38_RoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mRequiredBank, inElement.mProperty_mReturnedBank, inElement.mProperty_mPreservesBank, inElement.mProperty_mIsNoReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_RoutineDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_RoutineDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_pic_31__38_RoutineDefinitionList (mObject.mProperty_mRoutineName, mObject.mProperty_mRequiredBank, mObject.mProperty_mReturnedBank, mObject.mProperty_mPreservesBank, mObject.mProperty_mIsNoReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_pic_31__38_RoutineDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineName" ":" ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRequiredBank" ":" ;
  mObject.mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedBank" ":" ;
  mObject.mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPreservesBank" ":" ;
  mObject.mProperty_mPreservesBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsNoReturn" ":" ;
  mObject.mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfRoutineLocation" ":" ;
  mObject.mProperty_mEndOfRoutineLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_RoutineDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_RoutineDefinitionList * operand = (cCollectionElement_pic_31__38_RoutineDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList::GALGAS_pic_31__38_RoutineDefinitionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList::GALGAS_pic_31__38_RoutineDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_RoutineDefinitionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mRoutineName,
                                                                         const GALGAS_luint & in_mRequiredBank,
                                                                         const GALGAS_luint & in_mReturnedBank,
                                                                         const GALGAS_bool & in_mPreservesBank,
                                                                         const GALGAS_bool & in_mIsNoReturn,
                                                                         const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                         const GALGAS_location & in_mEndOfRoutineLocation
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_luint & inOperand1,
                                                                   const GALGAS_luint & inOperand2,
                                                                   const GALGAS_bool & inOperand3,
                                                                   const GALGAS_bool & inOperand4,
                                                                   const GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                   const GALGAS_location & inOperand6
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_RoutineDefinitionList::setter_append (GALGAS_pic_31__38_RoutineDefinitionList_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (inElement COMMA_THERE)) ;
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

void GALGAS_pic_31__38_RoutineDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_luint inOperand1,
                                                                    const GALGAS_luint inOperand2,
                                                                    const GALGAS_bool inOperand3,
                                                                    const GALGAS_bool inOperand4,
                                                                    const GALGAS_pic_31__38_InstructionList inOperand5,
                                                                    const GALGAS_location inOperand6,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_luint & outOperand1,
                                                                    GALGAS_luint & outOperand2,
                                                                    GALGAS_bool & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    GALGAS_pic_31__38_InstructionList & outOperand5,
                                                                    GALGAS_location & outOperand6,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_luint & outOperand1,
                                                               GALGAS_luint & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               GALGAS_bool & outOperand4,
                                                               GALGAS_pic_31__38_InstructionList & outOperand5,
                                                               GALGAS_location & outOperand6,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_luint & outOperand1,
                                                              GALGAS_luint & outOperand2,
                                                              GALGAS_bool & outOperand3,
                                                              GALGAS_bool & outOperand4,
                                                              GALGAS_pic_31__38_InstructionList & outOperand5,
                                                              GALGAS_location & outOperand6,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_luint & outOperand1,
                                                            GALGAS_luint & outOperand2,
                                                            GALGAS_bool & outOperand3,
                                                            GALGAS_bool & outOperand4,
                                                            GALGAS_pic_31__38_InstructionList & outOperand5,
                                                            GALGAS_location & outOperand6,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_luint & outOperand1,
                                                           GALGAS_luint & outOperand2,
                                                           GALGAS_bool & outOperand3,
                                                           GALGAS_bool & outOperand4,
                                                           GALGAS_pic_31__38_InstructionList & outOperand5,
                                                           GALGAS_location & outOperand6,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::add_operation (const GALGAS_pic_31__38_RoutineDefinitionList & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RoutineDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RoutineDefinitionList result = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RoutineDefinitionList result = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RoutineDefinitionList result = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::plusAssign_operation (const GALGAS_pic_31__38_RoutineDefinitionList inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMRoutineNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_RoutineDefinitionList::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMRequiredBankAtIndex (GALGAS_luint inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRequiredBank = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList::getter_mRequiredBankAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mRequiredBank ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMReturnedBankAtIndex (GALGAS_luint inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReturnedBank = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList::getter_mReturnedBankAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mReturnedBank ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMPreservesBankAtIndex (GALGAS_bool inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPreservesBank = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList::getter_mPreservesBankAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mPreservesBank ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMIsNoReturnAtIndex (GALGAS_bool inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsNoReturn = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList::getter_mIsNoReturnAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_RoutineDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList::setter_setMEndOfRoutineLocationAtIndex (GALGAS_location inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfRoutineLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_RoutineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    result = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_RoutineDefinitionList::cEnumerator_pic_31__38_RoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element cEnumerator_pic_31__38_RoutineDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38_RoutineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_pic_31__38_RoutineDefinitionList::current_mRequiredBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mRequiredBank ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_pic_31__38_RoutineDefinitionList::current_mReturnedBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mReturnedBank ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_pic_31__38_RoutineDefinitionList::current_mPreservesBank (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mPreservesBank ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_pic_31__38_RoutineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_RoutineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_pic_31__38_RoutineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_RoutineDefinitionList * p = (const cCollectionElement_pic_31__38_RoutineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
  return p->mObject.mProperty_mEndOfRoutineLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@pic18RoutineDefinitionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ("pic18RoutineDefinitionList",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RoutineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RoutineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RoutineDefinitionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_RoutineDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList result ;
  const GALGAS_pic_31__38_RoutineDefinitionList * p = (const GALGAS_pic_31__38_RoutineDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_RoutineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RoutineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_MacroDefinitionList' list
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_MacroDefinitionList::cCollectionElement_pic_31__38_MacroDefinitionList (const GALGAS_lstring & in_mMacroName,
                                                                                                      const GALGAS_lstringlist & in_mConstantNameList,
                                                                                                      const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMacroName, in_mConstantNameList, in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_MacroDefinitionList::cCollectionElement_pic_31__38_MacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMacroName, inElement.mProperty_mConstantNameList, inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_MacroDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_MacroDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_pic_31__38_MacroDefinitionList (mObject.mProperty_mMacroName, mObject.mProperty_mConstantNameList, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_pic_31__38_MacroDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMacroName" ":" ;
  mObject.mProperty_mMacroName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantNameList" ":" ;
  mObject.mProperty_mConstantNameList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_MacroDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_MacroDefinitionList * operand = (cCollectionElement_pic_31__38_MacroDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList::GALGAS_pic_31__38_MacroDefinitionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList::GALGAS_pic_31__38_MacroDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_MacroDefinitionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_lstring & in_mMacroName,
                                                                       const GALGAS_lstringlist & in_mConstantNameList,
                                                                       const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (in_mMacroName,
                                                                    in_mConstantNameList,
                                                                    in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_lstringlist & inOperand1,
                                                                 const GALGAS_pic_31__38_InstructionList & inOperand2
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_MacroDefinitionList::setter_append (GALGAS_pic_31__38_MacroDefinitionList_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (inElement COMMA_THERE)) ;
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

void GALGAS_pic_31__38_MacroDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_lstringlist inOperand1,
                                                                  const GALGAS_pic_31__38_InstructionList inOperand2,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstringlist & outOperand1,
                                                                  GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstringlist & outOperand1,
                                                             GALGAS_pic_31__38_InstructionList & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
                                                            GALGAS_pic_31__38_InstructionList & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstringlist & outOperand1,
                                                          GALGAS_pic_31__38_InstructionList & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstringlist & outOperand1,
                                                         GALGAS_pic_31__38_InstructionList & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::add_operation (const GALGAS_pic_31__38_MacroDefinitionList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroDefinitionList result = GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroDefinitionList result = GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroDefinitionList result = GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::plusAssign_operation (const GALGAS_pic_31__38_MacroDefinitionList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::setter_setMMacroNameAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMacroName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_MacroDefinitionList::getter_mMacroNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    result = p->mObject.mProperty_mMacroName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::setter_setMConstantNameListAtIndex (GALGAS_lstringlist inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantNameList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_pic_31__38_MacroDefinitionList::getter_mConstantNameListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    result = p->mObject.mProperty_mConstantNameList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_MacroDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_MacroDefinitionList::cEnumerator_pic_31__38_MacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element cEnumerator_pic_31__38_MacroDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38_MacroDefinitionList::current_mMacroName (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mMacroName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_pic_31__38_MacroDefinitionList::current_mConstantNameList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mConstantNameList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_MacroDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_MacroDefinitionList * p = (const cCollectionElement_pic_31__38_MacroDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@pic18MacroDefinitionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ("pic18MacroDefinitionList",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_MacroDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroDefinitionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_MacroDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList result ;
  const GALGAS_pic_31__38_MacroDefinitionList * p = (const GALGAS_pic_31__38_MacroDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_MacroDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_pic_31__38_MacroMap::cMapElement_pic_31__38_MacroMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_lstringlist & in_mConstantNameList,
                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstantNameList (in_mConstantNameList),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_pic_31__38_MacroMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_pic_31__38_MacroMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_pic_31__38_MacroMap (mProperty_lkey, mProperty_mConstantNameList, mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_pic_31__38_MacroMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantNameList" ":" ;
  mProperty_mConstantNameList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap::GALGAS_pic_31__38_MacroMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap::GALGAS_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap & GALGAS_pic_31__38_MacroMap::operator = (const GALGAS_pic_31__38_MacroMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap GALGAS_pic_31__38_MacroMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap GALGAS_pic_31__38_MacroMap::constructor_mapWithMapToOverride (const GALGAS_pic_31__38_MacroMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap GALGAS_pic_31__38_MacroMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_MacroMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_lstringlist & inArgument0,
                                                      const GALGAS_pic_31__38_InstructionList & inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38_MacroMap * p = NULL ;
  macroMyNew (p, cMapElement_pic_31__38_MacroMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@pic_31__38_MacroMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_lstringlist inArgument0,
                                                   GALGAS_pic_31__38_InstructionList inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38_MacroMap * p = NULL ;
  macroMyNew (p, cMapElement_pic_31__38_MacroMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' macro is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_pic_31__38_MacroMap_searchKey = "there is no '%K' macro" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_lstringlist & outArgument0,
                                                   GALGAS_pic_31__38_InstructionList & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_pic_31__38_MacroMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    outArgument0 = p->mProperty_mConstantNameList ;
    outArgument1 = p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_pic_31__38_MacroMap::getter_mConstantNameListForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) attributes ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    result = p->mProperty_mConstantNameList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_MacroMap::getter_mInstructionListForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) attributes ;
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap::setter_setMConstantNameListForKey (GALGAS_lstringlist inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38_MacroMap * p = (cMapElement_pic_31__38_MacroMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    p->mProperty_mConstantNameList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap::setter_setMInstructionListForKey (GALGAS_pic_31__38_InstructionList inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38_MacroMap * p = (cMapElement_pic_31__38_MacroMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
    p->mProperty_mInstructionList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_pic_31__38_MacroMap * GALGAS_pic_31__38_MacroMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38_MacroMap * result = (cMapElement_pic_31__38_MacroMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_pic_31__38_MacroMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_MacroMap::cEnumerator_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element cEnumerator_pic_31__38_MacroMap::current (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return GALGAS_pic_31__38_MacroMap_2D_element (p->mProperty_lkey, p->mProperty_mConstantNameList, p->mProperty_mInstructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38_MacroMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_pic_31__38_MacroMap::current_mConstantNameList (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return p->mProperty_mConstantNameList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_MacroMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38_MacroMap) ;
  return p->mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_MacroMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_lstringlist & outArgument0,
                                                     GALGAS_pic_31__38_InstructionList & outArgument1) const {
  const cMapElement_pic_31__38_MacroMap * p = (const cMapElement_pic_31__38_MacroMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18MacroMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroMap ("pic18MacroMap",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_MacroMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap GALGAS_pic_31__38_MacroMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap result ;
  const GALGAS_pic_31__38_MacroMap * p = (const GALGAS_pic_31__38_MacroMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_MacroMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@routineDeclarationList' list
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_routineDeclarationList::cCollectionElement_routineDeclarationList (const GALGAS_lstring & in_mRoutineName,
                                                                                      const GALGAS_luint & in_mRequiredBank,
                                                                                      const GALGAS_luint & in_mReturnedBank,
                                                                                      const GALGAS_bool & in_mPreservesBank,
                                                                                      const GALGAS_bool & in_mIsNoReturn
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_routineDeclarationList::cCollectionElement_routineDeclarationList (const GALGAS_routineDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mRequiredBank, inElement.mProperty_mReturnedBank, inElement.mProperty_mPreservesBank, inElement.mProperty_mIsNoReturn) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_routineDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineDeclarationList (mObject.mProperty_mRoutineName, mObject.mProperty_mRequiredBank, mObject.mProperty_mReturnedBank, mObject.mProperty_mPreservesBank, mObject.mProperty_mIsNoReturn COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_routineDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineName" ":" ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRequiredBank" ":" ;
  mObject.mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedBank" ":" ;
  mObject.mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPreservesBank" ":" ;
  mObject.mProperty_mPreservesBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsNoReturn" ":" ;
  mObject.mProperty_mIsNoReturn.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_routineDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineDeclarationList * operand = (cCollectionElement_routineDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList::GALGAS_routineDeclarationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList::GALGAS_routineDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineDeclarationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mRoutineName,
                                                               const GALGAS_luint & in_mRequiredBank,
                                                               const GALGAS_luint & in_mReturnedBank,
                                                               const GALGAS_bool & in_mPreservesBank,
                                                               const GALGAS_bool & in_mIsNoReturn
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_routineDeclarationList (in_mRoutineName,
                                                            in_mRequiredBank,
                                                            in_mReturnedBank,
                                                            in_mPreservesBank,
                                                            in_mIsNoReturn COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_luint & inOperand1,
                                                         const GALGAS_luint & inOperand2,
                                                         const GALGAS_bool & inOperand3,
                                                         const GALGAS_bool & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_routineDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_routineDeclarationList::setter_append (GALGAS_routineDeclarationList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_routineDeclarationList (inElement COMMA_THERE)) ;
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

void GALGAS_routineDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_luint inOperand1,
                                                          const GALGAS_luint inOperand2,
                                                          const GALGAS_bool inOperand3,
                                                          const GALGAS_bool inOperand4,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_luint & outOperand1,
                                                          GALGAS_luint & outOperand2,
                                                          GALGAS_bool & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_luint & outOperand1,
                                                     GALGAS_luint & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     GALGAS_bool & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_luint & outOperand1,
                                                    GALGAS_luint & outOperand2,
                                                    GALGAS_bool & outOperand3,
                                                    GALGAS_bool & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_luint & outOperand1,
                                                  GALGAS_luint & outOperand2,
                                                  GALGAS_bool & outOperand3,
                                                  GALGAS_bool & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_luint & outOperand1,
                                                 GALGAS_luint & outOperand2,
                                                 GALGAS_bool & outOperand3,
                                                 GALGAS_bool & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::add_operation (const GALGAS_routineDeclarationList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineDeclarationList result = GALGAS_routineDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineDeclarationList result = GALGAS_routineDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineDeclarationList result = GALGAS_routineDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::plusAssign_operation (const GALGAS_routineDeclarationList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMRoutineNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineDeclarationList::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMRequiredBankAtIndex (GALGAS_luint inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRequiredBank = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_routineDeclarationList::getter_mRequiredBankAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mRequiredBank ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMReturnedBankAtIndex (GALGAS_luint inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReturnedBank = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_routineDeclarationList::getter_mReturnedBankAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mReturnedBank ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMPreservesBankAtIndex (GALGAS_bool inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPreservesBank = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineDeclarationList::getter_mPreservesBankAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mPreservesBank ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList::setter_setMIsNoReturnAtIndex (GALGAS_bool inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsNoReturn = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineDeclarationList::getter_mIsNoReturnAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineDeclarationList::cEnumerator_routineDeclarationList (const GALGAS_routineDeclarationList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element cEnumerator_routineDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineDeclarationList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_routineDeclarationList::current_mRequiredBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mRequiredBank ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_routineDeclarationList::current_mReturnedBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mReturnedBank ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineDeclarationList::current_mPreservesBank (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mPreservesBank ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineDeclarationList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_routineDeclarationList * p = (const cCollectionElement_routineDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@routineDeclarationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineDeclarationList ("routineDeclarationList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDeclarationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList GALGAS_routineDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineDeclarationList result ;
  const GALGAS_routineDeclarationList * p = (const GALGAS_routineDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programKind::GALGAS_programKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programKind GALGAS_programKind::constructor_regularProgram (UNUSED_LOCATION_ARGS) {
  GALGAS_programKind result ;
  result.mEnum = kEnum_regularProgram ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programKind GALGAS_programKind::constructor_bootloaderProgram (UNUSED_LOCATION_ARGS) {
  GALGAS_programKind result ;
  result.mEnum = kEnum_bootloaderProgram ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programKind GALGAS_programKind::constructor_userProgram (UNUSED_LOCATION_ARGS) {
  GALGAS_programKind result ;
  result.mEnum = kEnum_userProgram ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_programKind::optional_regularProgram () const {
  const bool ok = mEnum == kEnum_regularProgram ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_programKind::optional_bootloaderProgram () const {
  const bool ok = mEnum == kEnum_bootloaderProgram ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_programKind::optional_userProgram () const {
  const bool ok = mEnum == kEnum_userProgram ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_programKind [4] = {
  "(not built)",
  "regularProgram",
  "bootloaderProgram",
  "userProgram"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_programKind::getter_isRegularProgram (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_regularProgram == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_programKind::getter_isBootloaderProgram (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bootloaderProgram == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_programKind::getter_isUserProgram (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_userProgram == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programKind::description (C_String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString << "<enum @programKind: " << gEnumNameArrayFor_programKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@programKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programKind ("programKind",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programKind GALGAS_programKind::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_programKind result ;
  const GALGAS_programKind * p = (const GALGAS_programKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@dataList' list
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_dataList::cCollectionElement_dataList (const GALGAS_lstring & in_mDataName,
                                                          const GALGAS_immediatExpressionList & in_mValueList,
                                                          const GALGAS_bool & in_mIsByteList
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDataName, in_mValueList, in_mIsByteList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_dataList::cCollectionElement_dataList (const GALGAS_dataList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDataName, inElement.mProperty_mValueList, inElement.mProperty_mIsByteList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_dataList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_dataList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_dataList (mObject.mProperty_mDataName, mObject.mProperty_mValueList, mObject.mProperty_mIsByteList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_dataList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDataName" ":" ;
  mObject.mProperty_mDataName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValueList" ":" ;
  mObject.mProperty_mValueList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsByteList" ":" ;
  mObject.mProperty_mIsByteList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_dataList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_dataList * operand = (cCollectionElement_dataList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_dataList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList::GALGAS_dataList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList::GALGAS_dataList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_dataList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_lstring & in_mDataName,
                                                 const GALGAS_immediatExpressionList & in_mValueList,
                                                 const GALGAS_bool & in_mIsByteList
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = NULL ;
  macroMyNew (p, cCollectionElement_dataList (in_mDataName,
                                              in_mValueList,
                                              in_mIsByteList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                           const GALGAS_immediatExpressionList & inOperand1,
                                           const GALGAS_bool & inOperand2
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_dataList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_dataList::setter_append (GALGAS_dataList_2D_element inElement,
                                     C_Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_dataList (inElement COMMA_THERE)) ;
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

void GALGAS_dataList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                            const GALGAS_immediatExpressionList inOperand1,
                                            const GALGAS_bool inOperand2,
                                            const GALGAS_uint inInsertionIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                            GALGAS_immediatExpressionList & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            const GALGAS_uint inRemoveIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::setter_popFirst (GALGAS_lstring & outOperand0,
                                       GALGAS_immediatExpressionList & outOperand1,
                                       GALGAS_bool & outOperand2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::setter_popLast (GALGAS_lstring & outOperand0,
                                      GALGAS_immediatExpressionList & outOperand1,
                                      GALGAS_bool & outOperand2,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::method_first (GALGAS_lstring & outOperand0,
                                    GALGAS_immediatExpressionList & outOperand1,
                                    GALGAS_bool & outOperand2,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::method_last (GALGAS_lstring & outOperand0,
                                   GALGAS_immediatExpressionList & outOperand1,
                                   GALGAS_bool & outOperand2,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::add_operation (const GALGAS_dataList & inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_dataList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::getter_subListWithRange (const GALGAS_range & inRange,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_dataList result = GALGAS_dataList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_dataList result = GALGAS_dataList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_dataList result = GALGAS_dataList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::plusAssign_operation (const GALGAS_dataList inOperand,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::setter_setMDataNameAtIndex (GALGAS_lstring inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDataName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dataList::getter_mDataNameAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    result = p->mObject.mProperty_mDataName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::setter_setMValueListAtIndex (GALGAS_immediatExpressionList inOperand,
                                                   GALGAS_uint inIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValueList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_dataList::getter_mValueListAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  GALGAS_immediatExpressionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList::setter_setMIsByteListAtIndex (GALGAS_bool inOperand,
                                                    GALGAS_uint inIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsByteList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataList::getter_mIsByteListAtIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_dataList * p = (cCollectionElement_dataList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    result = p->mObject.mProperty_mIsByteList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_dataList::cEnumerator_dataList (const GALGAS_dataList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element cEnumerator_dataList::current (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_dataList::current_mDataName (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mDataName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList cEnumerator_dataList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mValueList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_dataList::current_mIsByteList (LOCATION_ARGS) const {
  const cCollectionElement_dataList * p = (const cCollectionElement_dataList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_dataList) ;
  return p->mObject.mProperty_mIsByteList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@dataList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataList ("dataList",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dataList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dataList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList GALGAS_dataList::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_dataList result ;
  const GALGAS_dataList * p = (const GALGAS_dataList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@checkpicList' list
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_checkpicList::cCollectionElement_checkpicList (const GALGAS_location & in_mErrorLocation,
                                                                  const GALGAS_lstringlist & in_mValueList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mErrorLocation, in_mValueList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_checkpicList::cCollectionElement_checkpicList (const GALGAS_checkpicList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mErrorLocation, inElement.mProperty_mValueList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_checkpicList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_checkpicList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_checkpicList (mObject.mProperty_mErrorLocation, mObject.mProperty_mValueList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_checkpicList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorLocation" ":" ;
  mObject.mProperty_mErrorLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValueList" ":" ;
  mObject.mProperty_mValueList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_checkpicList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_checkpicList * operand = (cCollectionElement_checkpicList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_checkpicList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList::GALGAS_checkpicList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList::GALGAS_checkpicList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkpicList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_location & in_mErrorLocation,
                                                     const GALGAS_lstringlist & in_mValueList
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_checkpicList * p = NULL ;
  macroMyNew (p, cCollectionElement_checkpicList (in_mErrorLocation,
                                                  in_mValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::addAssign_operation (const GALGAS_location & inOperand0,
                                               const GALGAS_lstringlist & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_checkpicList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_checkpicList::setter_append (GALGAS_checkpicList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_checkpicList (inElement COMMA_THERE)) ;
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

void GALGAS_checkpicList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                const GALGAS_lstringlist inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::setter_popFirst (GALGAS_location & outOperand0,
                                           GALGAS_lstringlist & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    outOperand0 = p->mObject.mProperty_mErrorLocation ;
    outOperand1 = p->mObject.mProperty_mValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::setter_popLast (GALGAS_location & outOperand0,
                                          GALGAS_lstringlist & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    outOperand0 = p->mObject.mProperty_mErrorLocation ;
    outOperand1 = p->mObject.mProperty_mValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::method_first (GALGAS_location & outOperand0,
                                        GALGAS_lstringlist & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    outOperand0 = p->mObject.mProperty_mErrorLocation ;
    outOperand1 = p->mObject.mProperty_mValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::method_last (GALGAS_location & outOperand0,
                                       GALGAS_lstringlist & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    outOperand0 = p->mObject.mProperty_mErrorLocation ;
    outOperand1 = p->mObject.mProperty_mValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::add_operation (const GALGAS_checkpicList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_checkpicList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_checkpicList result = GALGAS_checkpicList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_checkpicList result = GALGAS_checkpicList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_checkpicList result = GALGAS_checkpicList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::plusAssign_operation (const GALGAS_checkpicList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::setter_setMErrorLocationAtIndex (GALGAS_location inOperand,
                                                           GALGAS_uint inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_checkpicList::getter_mErrorLocationAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    result = p->mObject.mProperty_mErrorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList::setter_setMValueListAtIndex (GALGAS_lstringlist inOperand,
                                                       GALGAS_uint inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValueList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_checkpicList::getter_mValueListAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_checkpicList::cEnumerator_checkpicList (const GALGAS_checkpicList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element cEnumerator_checkpicList::current (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_checkpicList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject.mProperty_mErrorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_checkpicList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_checkpicList * p = (const cCollectionElement_checkpicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkpicList) ;
  return p->mObject.mProperty_mValueList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@checkpicList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkpicList ("checkpicList",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkpicList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkpicList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkpicList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkpicList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList GALGAS_checkpicList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_checkpicList result ;
  const GALGAS_checkpicList * p = (const GALGAS_checkpicList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkpicList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkpicList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@pic18RegisterComparison mnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_pic_31__38_RegisterComparison & inObject,
                                        C_Compiler * /* inCompiler */
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




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@conditional_branch condition'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_condition (const GALGAS_conditional_5F_branch & inObject,
                                         C_Compiler * /* inCompiler */
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




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@pic18InstructionWithNoOperandKind assemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_assemblyCode (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
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
//Extension Getter '@FA_instruction_base_code mnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_FA_5F_instruction_5F_base_5F_code & inObject,
                                        C_Compiler * /* inCompiler */
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




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@bit_oriented_op mnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_bit_5F_oriented_5F_op & inObject,
                                        C_Compiler * /* inCompiler */
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




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@conditional_branch mnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_conditional_5F_branch & inObject,
                                        C_Compiler * /* inCompiler */
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




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@literal_instruction_opcode mnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_literal_5F_instruction_5F_opcode & inObject,
                                        C_Compiler * /* inCompiler */
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




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@tableAccessOption mnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_tableAccessOption & inObject,
                                        C_Compiler * /* inCompiler */
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
        GALGAS_lstring var_unusedRegister_1274 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        ioArgument_unusedRegisterList.addAssign_operation (var_unusedRegister_1274  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 49)) ;
        switch (select_pic_31__38__5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GALGAS_lstring var_unusedRoutine_1440 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        ioArgument_unusedRoutineList.addAssign_operation (var_unusedRoutine_1440  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 58)) ;
        switch (select_pic_31__38__5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        GALGAS_lstring var_inlinedRoutine_1591 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        ioArgument_inlinedRoutineList.addAssign_operation (var_inlinedRoutine_1591  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 66)) ;
        switch (select_pic_31__38__5F_syntax_3 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
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
      GALGAS_lstring var_includedFilePath_2238 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
      cGrammar_pic_31__38__5F_include_5F_grammar::_performSourceFileParsing_ (inCompiler, var_includedFilePath_2238, ioArgument_interruptDefinitionList, ioArgument_routineDefinitionList, ioArgument_ioMacroDefinitionList, ioArgument_unusedRoutineList, ioArgument_inlinedRoutineList, ioArgument_ramDefinitionList, ioArgument_unusedRegisterList, ioArgument_configDefinitionList, ioArgument_constantDefinitionList, ioArgument_ioCheckpicList, ioArgument_dataList, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 93)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 108)) ;
      GALGAS_lstring var_macroName_2696 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      GALGAS_lstringlist var_constantNameList_2742 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        GALGAS_lstring var_constantName_2795 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 113)) ;
        var_constantNameList_2742.addAssign_operation (var_constantName_2795  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        switch (select_pic_31__38__5F_syntax_4 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 116)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 118)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      GALGAS_labelMap var_labelMap_2906 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      GALGAS_pic_31__38_InstructionList var_instructionList_2983 ;
      nt_instruction_5F_list_ (var_instructionList_2983, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_, var_labelMap_2906, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 126)) ;
      ioArgument_ioMacroDefinitionList.addAssign_operation (var_macroName_2696, var_constantNameList_2742, var_instructionList_2983  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
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
        switch (select_pic_31__38__5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        switch (select_pic_31__38__5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        switch (select_pic_31__38__5F_syntax_3 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 113)) ;
        switch (select_pic_31__38__5F_syntax_4 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 116)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 118)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 126)) ;
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
        switch (select_pic_31__38__5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        switch (select_pic_31__38__5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        switch (select_pic_31__38__5F_syntax_3 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 113)) ;
        switch (select_pic_31__38__5F_syntax_4 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 116)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 118)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 126)) ;
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
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 138)) ;
  GALGAS_location var_loc_3307 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  GALGAS_lstringlist var_valueList_3340 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 140)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_s_3412 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 142)) ;
    var_valueList_3340.addAssign_operation (var_s_3412  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    switch (select_pic_31__38__5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 145)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioList.addAssign_operation (var_loc_3307, var_valueList_3340  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 138)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 142)) ;
    switch (select_pic_31__38__5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 145)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 138)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 142)) ;
    switch (select_pic_31__38__5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 145)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GALGAS_dataList & ioArgument_ioDataList,
                                                                                       C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 154)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    appendFixItActions (fixItArray0, kFixItReplace, GALGAS_string ("data16")) ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)), GALGAS_string ("obsolete keyword"), fixItArray0  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_dataName_3741 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 159)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  GALGAS_immediatExpressionList var_valueList_3787 = GALGAS_immediatExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_immediatExpression var_expression_3864 ;
    nt_immediate_5F_expression_ (var_expression_3864, inCompiler) ;
    var_valueList_3787.addAssign_operation (var_expression_3864, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 164))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 164)) ;
    switch (select_pic_31__38__5F_syntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 166)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 168)) ;
  ioArgument_ioDataList.addAssign_operation (var_dataName_3741, var_valueList_3787, GALGAS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 154)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 159)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 166)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 168)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 154)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 159)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 166)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 168)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GALGAS_dataList & ioArgument_ioDataList,
                                                                                       C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 175)) ;
  GALGAS_lstring var_dataName_4136 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  GALGAS_immediatExpressionList var_valueList_4182 = GALGAS_immediatExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_immediatExpression var_expression_4259 ;
    nt_immediate_5F_expression_ (var_expression_4259, inCompiler) ;
    var_valueList_4182.addAssign_operation (var_expression_4259, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 181))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 181)) ;
    switch (select_pic_31__38__5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 183)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 185)) ;
  ioArgument_ioDataList.addAssign_operation (var_dataName_4136, var_valueList_4182, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 183)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 185)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 183)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 185)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GALGAS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                                                                        GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                        GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                        GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                        C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 197)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_9 (inCompiler)) {
    case 2: {
      GALGAS_pic_31__38_PiccoloSimpleInstruction var_instruction_4741 ;
      nt_simple_5F_instruction_ (var_instruction_4741, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_4741  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 201)) ;
    } break ;
    case 3: {
      GALGAS_pic_31__38_PiccoloInstruction var_instruction_4840 ;
      nt_structured_5F_instruction_ (var_instruction_4840, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_4840  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 208)) ;
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
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 219)) ;
  GALGAS_lstring var_interruptName_5231 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  GALGAS_bool var_isFast_5250 ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
    var_isFast_5250 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 225)) ;
    var_isFast_5250 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 228)) ;
  GALGAS_labelMap var_labelMap_5349 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_5400 ;
  nt_instruction_5F_list_ (var_instructionList_5400, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5349, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 235)) ;
  ioArgument_ioInterruptDefinitionList.addAssign_operation (var_interruptName_5231, var_isFast_5250, var_instructionList_5400, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 219)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 225)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 228)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 235)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 219)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 225)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 228)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                          GALGAS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                          GALGAS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  GALGAS_bool var_noreturn_5789 ;
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
    var_noreturn_5789 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 249)) ;
    var_noreturn_5789 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 252)) ;
  GALGAS_lstring var_routineName_5918 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  GALGAS_luint var_requiredBank_5971 ;
  GALGAS_luint var_returnedBank_5997 ;
  GALGAS_bool var_preservesBank_6023 ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
    var_requiredBank_5971 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 258)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 258))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 258)) ;
    var_returnedBank_5997 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 259)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 259))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 259)) ;
    var_preservesBank_6023 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 262)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 265)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_noreturn_5789.boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 267)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 267)) ;
        }
      }
      var_preservesBank_6023 = GALGAS_bool (true) ;
      var_requiredBank_5971 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 270)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 270))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 270)) ;
      var_returnedBank_5997 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 271)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 271))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 271)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 273)) ;
      var_requiredBank_5971 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      var_preservesBank_6023 = GALGAS_bool (false) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
        var_returnedBank_5997 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 277)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 277))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 277)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 279)) ;
        var_returnedBank_5997 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_noreturn_5789.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 282)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 282)) ;
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 286)) ;
      var_returnedBank_5997 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_noreturn_5789.boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 289)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 289)) ;
        }
      }
      var_preservesBank_6023 = GALGAS_bool (false) ;
      var_requiredBank_5971 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_syntax.galgas", 292)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 292))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 292)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 295)) ;
  GALGAS_labelMap var_labelMap_7204 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_7277 ;
  nt_instruction_5F_list_ (var_instructionList_7277, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7204, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 302)) ;
  ioArgument_ioRoutineDefinitionList.addAssign_operation (var_routineName_5918, var_requiredBank_5971, var_returnedBank_5997, var_preservesBank_6023, var_noreturn_5789, var_instructionList_7277, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 252)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 262)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 265)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 273)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 279)) ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 286)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 295)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 302)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 252)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 262)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 265)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 273)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 279)) ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 286)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 295)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 302)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GALGAS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 310)) ;
  GALGAS_pic_31__38_ConditionExpression var_condition_7649 ;
  nt_condition_5F_factor_ (var_condition_7649, inCompiler) ;
  outArgument_outCondition = GALGAS_pic_31__38_NegateCondition::constructor_new (var_condition_7649  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 312)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 310)) ;
  nt_condition_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 310)) ;
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
    GALGAS_bool var_isIncrement_8036 ;
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 329)) ;
      var_isIncrement_8036 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 331)) ;
      var_isIncrement_8036 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression_8174 ;
    nt_register_5F_parsing_ (var_registerExpression_8174, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_8204 ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_8204 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 338)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 338)) ;
      var_W_5F_isDestination_8204 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString_8344 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 340)) ;
    GALGAS_string var_condition_8370 = var_conditionString_8344.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
    GALGAS_bool var_branchIfZero_8440 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_condition_8370.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_branchIfZero_8440 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_condition_8370.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_branchIfZero_8440 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_8344.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_8344.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 348)).add_operation (GALGAS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 348)), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 348)) ;
        var_branchIfZero_8440.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GALGAS_pic_31__38_IncDecRegisterInCondition::constructor_new (var_registerExpression_8174, var_isIncrement_8036, var_W_5F_isDestination_8204, var_branchIfZero_8440  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 352)) ;
  } break ;
  case 2: {
    GALGAS_registerExpression var_registerExpression_8903 ;
    nt_register_5F_parsing_ (var_registerExpression_8903, inCompiler) ;
    GALGAS_pic_31__38_RegisterComparison var_comparison_8947 ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 361)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 361)) ;
      var_comparison_8947 = GALGAS_pic_31__38_RegisterComparison::constructor_notEqual (SOURCE_FILE ("pic18_syntax.galgas", 361)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 363)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 363)) ;
      var_comparison_8947 = GALGAS_pic_31__38_RegisterComparison::constructor_equal (SOURCE_FILE ("pic18_syntax.galgas", 363)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 365)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 365)) ;
      var_comparison_8947 = GALGAS_pic_31__38_RegisterComparison::constructor_lowerOrEqual (SOURCE_FILE ("pic18_syntax.galgas", 365)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 367)) ;
      var_comparison_8947 = GALGAS_pic_31__38_RegisterComparison::constructor_greaterOrEqual (SOURCE_FILE ("pic18_syntax.galgas", 367)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 369)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 369)) ;
      var_comparison_8947 = GALGAS_pic_31__38_RegisterComparison::constructor_lower (SOURCE_FILE ("pic18_syntax.galgas", 369)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 371)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 371)) ;
      var_comparison_8947 = GALGAS_pic_31__38_RegisterComparison::constructor_greater (SOURCE_FILE ("pic18_syntax.galgas", 371)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outCondition = GALGAS_pic_31__38_RegisterComparisonCondition::constructor_new (var_registerExpression_8903, var_comparison_8947  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 373)) ;
  } break ;
  case 3: {
    GALGAS_registerExpression var_registerExpression_9537 ;
    nt_register_5F_parsing_ (var_registerExpression_9537, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 378)) ;
    GALGAS_bitNumberExpression var_bitNumberExpression_9595 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_9595, inCompiler) ;
    outArgument_outCondition = GALGAS_pic_31__38_BitTestInStructuredCondition::constructor_new (var_registerExpression_9537, var_bitNumberExpression_9595  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 380)) ;
  } break ;
  case 4: {
    GALGAS_registerExpression var_registerName_9761 ;
    nt_register_5F_parsing_ (var_registerName_9761, inCompiler) ;
    GALGAS_lstring var_conditionString_9808 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 386)) ;
    GALGAS_string var_condition_9834 = var_conditionString_9808.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
    GALGAS_bool var_branchIfZero_9904 ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, var_condition_9834.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_branchIfZero_9904 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_condition_9834.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_branchIfZero_9904 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_conditionString_9808.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_9808.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 394)).add_operation (GALGAS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 394)), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 394)) ;
        var_branchIfZero_9904.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GALGAS_pic_31__38_RegisterTestCondition::constructor_new (var_registerName_9761, var_branchIfZero_9904  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 398)) ;
  } break ;
  case 5: {
    GALGAS_conditional_5F_branch var_conditional_5F_branch_10303 ;
    GALGAS_lstring var_conditionString_10350 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 401)) ;
    GALGAS_string var_condition_10376 = var_conditionString_10350.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsEqual, var_condition_10376.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        var_conditional_5F_branch_10303 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("pic18_syntax.galgas", 404)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, var_condition_10376.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_conditional_5F_branch_10303 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("pic18_syntax.galgas", 406)) ;
        }
      }
      if (kBoolFalse == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, var_condition_10376.objectCompare (GALGAS_string ("NN"))).boolEnum () ;
          if (kBoolTrue == test_8) {
            var_conditional_5F_branch_10303 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("pic18_syntax.galgas", 408)) ;
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsEqual, var_condition_10376.objectCompare (GALGAS_string ("N"))).boolEnum () ;
            if (kBoolTrue == test_9) {
              var_conditional_5F_branch_10303 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("pic18_syntax.galgas", 410)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_condition_10376.objectCompare (GALGAS_string ("C"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_conditional_5F_branch_10303 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("pic18_syntax.galgas", 412)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsEqual, var_condition_10376.objectCompare (GALGAS_string ("NC"))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  var_conditional_5F_branch_10303 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("pic18_syntax.galgas", 414)) ;
                }
              }
              if (kBoolFalse == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsEqual, var_condition_10376.objectCompare (GALGAS_string ("OV"))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    var_conditional_5F_branch_10303 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("pic18_syntax.galgas", 416)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  enumGalgasBool test_13 = kBoolTrue ;
                  if (kBoolTrue == test_13) {
                    test_13 = GALGAS_bool (kIsEqual, var_condition_10376.objectCompare (GALGAS_string ("NOV"))).boolEnum () ;
                    if (kBoolTrue == test_13) {
                      var_conditional_5F_branch_10303 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("pic18_syntax.galgas", 418)) ;
                    }
                  }
                  if (kBoolFalse == test_13) {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (var_conditionString_10350.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_10350.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 420)).add_operation (GALGAS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 420)), fixItArray14  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 420)) ;
                    var_conditional_5F_branch_10303.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    outArgument_outCondition = GALGAS_pic_31__38_BccInStructuredCondition::constructor_new (var_conditionString_10350.readProperty_location (), var_conditional_5F_branch_10303  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 424)) ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 329)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 331)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 338)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 340)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 361)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 361)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 363)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 363)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 365)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 365)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 367)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 369)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 369)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 371)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 371)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 378)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 386)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 401)) ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 329)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 331)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 338)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 340)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 361)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 361)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 363)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 363)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 365)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 365)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 367)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 369)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 369)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 371)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 371)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 378)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 386)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 401)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GALGAS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                             C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 432)) ;
  nt_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 436)) ;
      GALGAS_pic_31__38_ConditionExpression var_c_11616 ;
      nt_condition_5F_term_ (var_c_11616, inCompiler) ;
      GALGAS_pic_31__38_ConditionExpression var_rc_11653 = GALGAS_pic_31__38_NegateCondition::constructor_new (var_c_11616  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 438)) ;
      GALGAS_pic_31__38_ConditionExpression var_lc_11725 = GALGAS_pic_31__38_NegateCondition::constructor_new (outArgument_outCondition  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 439)) ;
      outArgument_outCondition = GALGAS_pic_31__38_NegateCondition::constructor_new (GALGAS_pic_31__38_AndCondition::constructor_new (var_lc_11725, var_rc_11653  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 440))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 440)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 442)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 432)) ;
  nt_condition_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 436)) ;
      nt_condition_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 442)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 432)) ;
  nt_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 436)) ;
      nt_condition_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 442)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GALGAS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                       C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 452)) ;
      GALGAS_pic_31__38_ConditionExpression var_c_12110 ;
      nt_condition_5F_factor_ (var_c_12110, inCompiler) ;
      outArgument_outCondition = GALGAS_pic_31__38_AndCondition::constructor_new (outArgument_outCondition, var_c_12110  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 454)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 452)) ;
      nt_condition_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 452)) ;
      nt_condition_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 462)) ;
  outArgument_outBlockTermination = GALGAS_exitBlockTerminationForBlockInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 462)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 462)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GALGAS_lstring var_nextBlockName_12625 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 470)) ;
  outArgument_outBlockTermination = GALGAS_gotoTerminationForBlockInstruction::constructor_new (var_nextBlockName_12625  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 470)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 470)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GALGAS_location var_location_12887 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 478)) ;
  GALGAS_pic_31__38_ConditionExpression var_condition_12971 ;
  nt_condition_5F_expression_ (var_condition_12971, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 480)) ;
  GALGAS_abstractBlockTerminationForBlockInstruction var_terminationIfTrue_13069 ;
  nt_block_5F_termination_ (var_terminationIfTrue_13069, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 482)) ;
  GALGAS_abstractBlockTerminationForBlockInstruction var_terminationIfFalse_13168 ;
  nt_block_5F_termination_ (var_terminationIfFalse_13168, inCompiler) ;
  outArgument_outBlockTermination = GALGAS_testTerminationForBlockInstruction::constructor_new (var_condition_12971, var_terminationIfTrue_13069, var_terminationIfFalse_13168, var_location_12887  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 484)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 480)) ;
  nt_block_5F_termination_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 482)) ;
  nt_block_5F_termination_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 480)) ;
  nt_block_5F_termination_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 482)) ;
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
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 496)) ;
    GALGAS_lstring var_switchLabel_13569 ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
      var_switchLabel_13569 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 499))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 499)) ;
    } break ;
    case 2: {
      var_switchLabel_13569 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 501)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_switchLabel_13569, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_13732 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 504)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 505)) ;
    GALGAS_pic_31__38_SwitchInstructionCaseList var_caseList_13806 = GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 508)) ;
      GALGAS_lstring var_caseLabel_13864 ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
        var_caseLabel_13864 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 511))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 511)) ;
      } break ;
      case 2: {
        var_caseLabel_13864 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 513)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_switchLabel_13569.readProperty_string ().objectCompare (var_caseLabel_13864.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string temp_2 ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_switchLabel_13569.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = var_switchLabel_13569.readProperty_string () ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GALGAS_string ("empty") ;
          }
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_caseLabel_13864.readProperty_location (), GALGAS_string ("'case' label does not match 'switch' label, it should be ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 516)), fixItArray4  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 516)) ;
        }
      }
      GALGAS_location var_caseLocation_14228 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 519)) ;
      GALGAS_pic_31__38_CaseExpressionList var_caseExpressionList_14274 = GALGAS_pic_31__38_CaseExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 520)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_pic_31__38__5F_syntax_26 (inCompiler)) {
        case 1: {
          GALGAS_immediatExpression var_caseExpression_14413 ;
          nt_immediate_5F_expression_ (var_caseExpression_14413, inCompiler) ;
          var_caseExpressionList_14274.addAssign_operation (GALGAS_pic_31__38_SimpleConstantCaseItem::constructor_new (var_caseExpression_14413, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 524))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 524))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 524)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 526)) ;
          GALGAS_immediatExpression var_minExpression_14612 ;
          nt_immediate_5F_expression_ (var_minExpression_14612, inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 528)) ;
          GALGAS_immediatExpression var_maxExpression_14698 ;
          nt_immediate_5F_expression_ (var_maxExpression_14698, inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 530)) ;
          var_caseExpressionList_14274.addAssign_operation (GALGAS_pic_31__38_IntervalCaseItem::constructor_new (var_minExpression_14612, var_maxExpression_14698, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
        } break ;
        default:
          break ;
        }
        switch (select_pic_31__38__5F_syntax_25 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 534)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 536)) ;
      GALGAS_pic_31__38_InstructionList var_instructionList_14954 ;
      nt_instruction_5F_list_ (var_instructionList_14954, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_caseList_13806.addAssign_operation (var_caseLocation_14228, var_caseExpressionList_14274, var_instructionList_14954  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 542)) ;
      switch (select_pic_31__38__5F_syntax_23 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_pic_31__38_InstructionList var_elseInstructionList_15174 ;
    GALGAS_location var_elseLocation_15205 ;
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLocation_15205 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 548)) ;
      var_elseInstructionList_15174 = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 549)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 551)) ;
      GALGAS_lstring var_elseLabel_15362 ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
        var_elseLabel_15362 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 554))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 554)) ;
      } break ;
      case 2: {
        var_elseLabel_15362 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 556)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_switchLabel_13569.readProperty_string ().objectCompare (var_elseLabel_15362.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_switchLabel_13569.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = var_switchLabel_13569.readProperty_string () ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string ("empty") ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_elseLabel_15362.readProperty_location (), GALGAS_string ("'else' label does not match 'switch' label, it should be ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 559)), fixItArray9  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 559)) ;
        }
      }
      var_elseLocation_15205 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 562)) ;
      nt_instruction_5F_list_ (var_elseInstructionList_15174, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_switch::constructor_new (var_instructionLocation_13732, var_caseList_13806, var_elseLocation_15205, var_elseInstructionList_15174  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 569)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 574)) ;
    GALGAS_lstring var_endSwitchLabel_16059 ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
      var_endSwitchLabel_16059 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 577))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 577)) ;
    } break ;
    case 2: {
      var_endSwitchLabel_16059 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 579)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsNotEqual, var_switchLabel_13569.readProperty_string ().objectCompare (var_endSwitchLabel_16059.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string temp_11 ;
        const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_switchLabel_13569.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          temp_11 = var_switchLabel_13569.readProperty_string () ;
        }else if (kBoolFalse == test_12) {
          temp_11 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_switchLabel_13569.readProperty_location (), GALGAS_string ("'end' label does not match 'switch' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 582)), fixItArray13  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 582)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 586)) ;
    GALGAS_location var_instructionLocation_16443 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    GALGAS_lstring var_startBlockName_16506 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 588)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    GALGAS_pic_31__38_BlockInstructionBlockList var_blockList_16532 = GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      GALGAS_lstring var_blockName_16631 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 592)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      GALGAS_pic_31__38_InstructionList var_instructionList_16717 ;
      nt_instruction_5F_list_ (var_instructionList_16717, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 599)) ;
      GALGAS_location var_endOfBlock_16841 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination_16951 ;
      nt_block_5F_termination_ (var_blockTermination_16951, inCompiler) ;
      var_blockList_16532.addAssign_operation (var_blockName_16631, var_instructionList_16717, var_blockTermination_16951, var_endOfBlock_16841  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 602)) ;
      switch (select_pic_31__38__5F_syntax_30 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_14 = false ;
        break ;
      }
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_block::constructor_new (var_instructionLocation_16443, var_startBlockName_16506, var_blockList_16532, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 609))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 605)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 610)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 612)) ;
    GALGAS_lstring var_doLabel_17240 ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
      var_doLabel_17240 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 615))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 615)) ;
    } break ;
    case 2: {
      var_doLabel_17240 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 617)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_17240, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_17391 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 620)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 621)) ;
    GALGAS_lstring var_constantName_17451 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    GALGAS_immediatExpression var_lowBoundExpression_17530 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_17530, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 625)) ;
    GALGAS_immediatExpression var_highBoundExpression_17612 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_17612, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 627)) ;
    GALGAS_pic_31__38_InstructionList var_instructionList_17692 ;
    nt_instruction_5F_list_ (var_instructionList_17692, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_repetitionStatique::constructor_new (var_instructionLocation_17391, var_constantName_17451, var_lowBoundExpression_17530, var_highBoundExpression_17612, var_instructionList_17692, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 639))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 633)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 641)) ;
    GALGAS_lstring var_endDoLabel_18023 ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
      var_endDoLabel_18023 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 644))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 644)) ;
    } break ;
    case 2: {
      var_endDoLabel_18023 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 646)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (kIsNotEqual, var_doLabel_17240.readProperty_string ().objectCompare (var_endDoLabel_18023.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_string temp_16 ;
        const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_doLabel_17240.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          temp_16 = var_doLabel_17240.readProperty_string () ;
        }else if (kBoolFalse == test_17) {
          temp_16 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (var_endDoLabel_18023.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 649)), fixItArray18  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 649)) ;
      }
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 653)) ;
    GALGAS_luint var_bankIndex_18380 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (var_bankIndex_18380.readProperty_location (), var_bankIndex_18380.readProperty_uint ()  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 657)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_checknobank::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 661)) ;
      TC_Array <C_FixItDescription> fixItArray19 ;
      appendFixItActions (fixItArray19, kFixItReplace, GALGAS_string ("ldata16ptr")) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)), GALGAS_string ("obsolete keyword"), fixItArray19  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 664)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_18748 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 666)) ;
    GALGAS_lstring var_dataName_18796 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 667)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    GALGAS_luint var_dataIndex_18840 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::constructor_new (var_instructionLocation_18748, var_dataName_18796, var_dataIndex_18840  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 673)) ;
    GALGAS_location var_instructionLocation_19007 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    GALGAS_lstring var_dataName_19055 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 675)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    GALGAS_luint var_dataIndex_19099 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::constructor_new (var_instructionLocation_19007, var_dataName_19055, var_dataIndex_19099  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 681)) ;
    GALGAS_location var_instructionLocation_19263 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    GALGAS_immediatExpression var_expression_19343 ;
    nt_immediate_5F_expression_ (var_expression_19343, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_LTBLPTR::constructor_new (var_instructionLocation_19263, var_expression_19343  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 684)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 686)) ;
    GALGAS_location var_instructionLocation_19488 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    GALGAS_luint var_bank_19536 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 688)) ;
    GALGAS_bool var_warningOnUselessBanksel_19574 ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19574 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 693)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      var_warningOnUselessBanksel_19574 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_banksel::constructor_new (var_instructionLocation_19488, var_bank_19536, var_warningOnUselessBanksel_19574  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 697)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 699)) ;
    GALGAS_location var_instructionLocation_19860 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    GALGAS_registerExpression var_register_19934 ;
    nt_register_5F_parsing_ (var_register_19934, inCompiler) ;
    GALGAS_bool var_warningOnUselessBanksel_19972 ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19972 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 706)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      var_warningOnUselessBanksel_19972 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::constructor_new (var_instructionLocation_19860, var_register_19934, var_warningOnUselessBanksel_19972  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 710)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 712)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_nobanksel::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 715)) ;
    GALGAS_location var_instructionLocation_20362 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    GALGAS_registerExpression var_register_20436 ;
    nt_register_5F_parsing_ (var_register_20436, inCompiler) ;
    GALGAS_pic_31__38_InstructionList var_instructionList_20508 ;
    nt_instruction_5F_list_ (var_instructionList_20508, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 723)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (var_instructionLocation_20362, var_register_20436, var_instructionList_20508, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 728))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 731)) ;
    GALGAS_location var_instructionLocation_20802 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 733)) ;
    GALGAS_immediatExpression var_sizeExpression_20874 ;
    nt_immediate_5F_expression_ (var_sizeExpression_20874, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 735)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 737)) ;
      GALGAS_immediatExpressionList var_argumentList_20930 = GALGAS_immediatExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        GALGAS_immediatExpression var_expression_21027 ;
        nt_immediate_5F_expression_ (var_expression_21027, inCompiler) ;
        var_argumentList_20930.addAssign_operation (var_expression_21027, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 741))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 741)) ;
        switch (select_pic_31__38__5F_syntax_37 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 743)) ;
        } break ;
        default:
          repeatFlag_20 = false ;
          break ;
        }
      }
      outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::constructor_new (var_instructionLocation_20802, var_sizeExpression_20874, var_argumentList_20930, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 745)) ;
      ioArgument_ioNeedsComputedGoto_32_ = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 752)) ;
      GALGAS_lstringlist var_argumentList_21342 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      bool repeatFlag_21 = true ;
      while (repeatFlag_21) {
        GALGAS_lstring var_targetRoutine_21430 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 755)) ;
        var_argumentList_21342.addAssign_operation (var_targetRoutine_21430  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        switch (select_pic_31__38__5F_syntax_38 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 758)) ;
        } break ;
        default:
          repeatFlag_21 = false ;
          break ;
        }
      }
      outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::constructor_new (var_instructionLocation_20802, var_sizeExpression_20874, var_argumentList_21342, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 760)) ;
      ioArgument_ioNeedsComputedGoto_32_ = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 767)) ;
      GALGAS_lstringlist var_argumentList_21753 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      bool repeatFlag_22 = true ;
      while (repeatFlag_22) {
        GALGAS_lstring var_targetRoutine_21841 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 770)) ;
        var_argumentList_21753.addAssign_operation (var_targetRoutine_21841  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        switch (select_pic_31__38__5F_syntax_39 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 773)) ;
        } break ;
        default:
          repeatFlag_22 = false ;
          break ;
        }
      }
      outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::constructor_new (var_instructionLocation_20802, var_sizeExpression_20874, var_argumentList_21753, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 775)) ;
      ioArgument_ioNeedsComputedGoto_34_ = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 782)) ;
      GALGAS_lstringlist var_argumentList_22166 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      bool repeatFlag_23 = true ;
      while (repeatFlag_23) {
        GALGAS_lstring var_targetRoutine_22254 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 785)) ;
        var_argumentList_22166.addAssign_operation (var_targetRoutine_22254  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        switch (select_pic_31__38__5F_syntax_40 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 788)) ;
        } break ;
        default:
          repeatFlag_23 = false ;
          break ;
        }
      }
      outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::constructor_new (var_instructionLocation_20802, var_sizeExpression_20874, var_argumentList_22166, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 790)) ;
      ioArgument_ioNeedsComputedGoto_34_ = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 798)) ;
    GALGAS_lstring var_foreverLabel_22593 ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
      var_foreverLabel_22593 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 801))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 801)) ;
    } break ;
    case 2: {
      var_foreverLabel_22593 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 803)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_22593, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_22759 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 806)) ;
    GALGAS_pic_31__38_InstructionList var_instructionList_22826 ;
    nt_instruction_5F_list_ (var_instructionList_22826, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 812)) ;
    GALGAS_lstring var_endForeverLabel_22946 ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
      var_endForeverLabel_22946 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 815))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 815)) ;
    } break ;
    case 2: {
      var_endForeverLabel_22946 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 817)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = GALGAS_bool (kIsNotEqual, var_foreverLabel_22593.readProperty_string ().objectCompare (var_endForeverLabel_22946.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_24) {
        GALGAS_string temp_25 ;
        const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, var_foreverLabel_22593.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_26) {
          temp_25 = var_foreverLabel_22593.readProperty_string () ;
        }else if (kBoolFalse == test_26) {
          temp_25 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (var_endForeverLabel_22946.readProperty_location (), GALGAS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_25, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 820)), fixItArray27  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 820)) ;
      }
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (var_instructionLocation_22759, var_instructionList_22826, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 826))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 823)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 829)) ;
    GALGAS_location var_instructionLocation_23470 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    GALGAS_registerExpression var_registerName_23528 ;
    nt_register_5F_parsing_ (var_registerName_23528, inCompiler) ;
    GALGAS_if_5F_semi_5F_colon_5F_op var_opCode_23561 ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 834)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 834)) ;
      var_opCode_23561 = GALGAS_if_5F_semi_5F_colon_5F_op::constructor_CPFSEQ (SOURCE_FILE ("pic18_syntax.galgas", 834)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 836)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 836)) ;
      var_opCode_23561 = GALGAS_if_5F_semi_5F_colon_5F_op::constructor_CPFSGT (SOURCE_FILE ("pic18_syntax.galgas", 836)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 838)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 838)) ;
      var_opCode_23561 = GALGAS_if_5F_semi_5F_colon_5F_op::constructor_CPFSLT (SOURCE_FILE ("pic18_syntax.galgas", 838)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_conditionString_23792 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 840)) ;
      GALGAS_string var_condition_23820 = var_conditionString_23792.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_condition_23820.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_28) {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (var_conditionString_23792.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_condition_23820, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 843)).add_operation (GALGAS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 843)), fixItArray29  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 843)) ;
        }
      }
      var_opCode_23561 = GALGAS_if_5F_semi_5F_colon_5F_op::constructor_TSTFSZ (SOURCE_FILE ("pic18_syntax.galgas", 845)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 847)) ;
    GALGAS_pic_31__38_PiccoloSimpleInstruction var_instruction_24124 ;
    nt_simple_5F_instruction_ (var_instruction_24124, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::constructor_new (var_instructionLocation_23470, var_instruction_24124, var_opCode_23561, var_registerName_23528  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 849)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 855)) ;
    GALGAS_location var_instructionLocation_24320 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    GALGAS_registerExpression var_registerName_24378 ;
    GALGAS_bitNumberExpression var_bitNumber_24417 ;
    GALGAS_bool var_skipIfSet_24441 ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 861)) ;
      nt_register_5F_parsing_ (var_registerName_24378, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 863)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24417, inCompiler) ;
      var_skipIfSet_24441 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerName_24378, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 868)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24417, inCompiler) ;
      var_skipIfSet_24441 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 872)) ;
    GALGAS_pic_31__38_PiccoloSimpleInstruction var_instruction_24779 ;
    nt_simple_5F_instruction_ (var_instruction_24779, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::constructor_new (var_instructionLocation_24320, var_instruction_24779, var_skipIfSet_24441, var_registerName_24378, var_bitNumber_24417  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 874)) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 882)) ;
    GALGAS_location var_instructionLocation_24994 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    GALGAS_bool var_increment_25035 ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 886)) ;
      var_increment_25035 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 888)) ;
      var_increment_25035 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerName_25163 ;
    nt_register_5F_parsing_ (var_registerName_25163, inCompiler) ;
    GALGAS_bool var_w_5F_isTarget_25188 ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_25188 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 895)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 895)) ;
      var_w_5F_isTarget_25188 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_bool var_skipIfZero_25296 ;
    GALGAS_lstring var_conditionString_25343 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 898)) ;
    GALGAS_string var_condition_25369 = var_conditionString_25343.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = GALGAS_bool (kIsEqual, var_condition_25369.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_30) {
        var_skipIfZero_25296 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_30) {
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = GALGAS_bool (kIsEqual, var_condition_25369.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_31) {
          var_skipIfZero_25296 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_31) {
        TC_Array <C_FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (var_conditionString_25343.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_condition_25369, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 905)).add_operation (GALGAS_string ("' condition; it should be 'z' or 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 905)), fixItArray32  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 905)) ;
        var_skipIfZero_25296.drop () ; // Release error dropped variable
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 907)) ;
    GALGAS_pic_31__38_PiccoloSimpleInstruction var_instruction_25728 ;
    nt_simple_5F_instruction_ (var_instruction_25728, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::constructor_new (var_instructionLocation_24994, var_instruction_25728, var_increment_25035, var_skipIfZero_25296, var_registerName_25163, var_w_5F_isTarget_25188  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 909)) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 917)) ;
    GALGAS_lstring var_ifLabel_25943 ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
      var_ifLabel_25943 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 920))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 920)) ;
    } break ;
    case 2: {
      var_ifLabel_25943 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 922)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_25943, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_ (var_ifLabel_25943, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 931)) ;
    GALGAS_lstring var_endIfLabel_26250 ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
      var_endIfLabel_26250 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 934))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 934)) ;
    } break ;
    case 2: {
      var_endIfLabel_26250 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 936)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_33 = kBoolTrue ;
    if (kBoolTrue == test_33) {
      test_33 = GALGAS_bool (kIsNotEqual, var_ifLabel_25943.readProperty_string ().objectCompare (var_endIfLabel_26250.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_33) {
        GALGAS_string temp_34 ;
        const enumGalgasBool test_35 = GALGAS_bool (kIsNotEqual, var_ifLabel_25943.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_35) {
          temp_34 = var_ifLabel_25943.readProperty_string () ;
        }else if (kBoolFalse == test_35) {
          temp_34 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (var_endIfLabel_26250.readProperty_location (), GALGAS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_34, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 939)), fixItArray36  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 939)) ;
      }
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 943)) ;
    GALGAS_lstring var_doLabel_26589 ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
      var_doLabel_26589 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 946))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 946)) ;
    } break ;
    case 2: {
      var_doLabel_26589 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 948)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_26589, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_26750 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 951)) ;
    GALGAS_pic_31__38_InstructionList var_repeatedInstructionList_26825 ;
    nt_instruction_5F_list_ (var_repeatedInstructionList_26825, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GALGAS_location var_endOfRepeatedInstructionList_26939 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 957)) ;
    GALGAS_pic_31__38_DoWhilePartList var_whilePartList_26978 = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 958)) ;
    bool repeatFlag_37 = true ;
    while (repeatFlag_37) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 960)) ;
      GALGAS_lstring var_whileLabel_27068 ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
        var_whileLabel_27068 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 963))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 963)) ;
      } break ;
      case 2: {
        var_whileLabel_27068 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 965)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_38 = kBoolTrue ;
      if (kBoolTrue == test_38) {
        test_38 = GALGAS_bool (kIsNotEqual, var_doLabel_26589.readProperty_string ().objectCompare (var_whileLabel_27068.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_string temp_39 ;
          const enumGalgasBool test_40 = GALGAS_bool (kIsNotEqual, var_doLabel_26589.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_40) {
            temp_39 = var_doLabel_26589.readProperty_string () ;
          }else if (kBoolFalse == test_40) {
            temp_39 = GALGAS_string ("empty") ;
          }
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (var_whileLabel_27068.readProperty_location (), GALGAS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_39, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 968)), fixItArray41  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 968)) ;
        }
      }
      GALGAS_pic_31__38_ConditionExpression var_whileCondition_27437 ;
      nt_condition_5F_expression_ (var_whileCondition_27437, inCompiler) ;
      GALGAS_pic_31__38_InstructionList var_instructionList_27491 ;
      nt_instruction_5F_list_ (var_instructionList_27491, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_26978.addAssign_operation (var_whileCondition_27437, var_instructionList_27491, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 977))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 977)) ;
      switch (select_pic_31__38__5F_syntax_50 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_37 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 980)) ;
    GALGAS_lstring var_endDoLabel_27702 ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
      var_endDoLabel_27702 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 983))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 983)) ;
    } break ;
    case 2: {
      var_endDoLabel_27702 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 985)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_42 = kBoolTrue ;
    if (kBoolTrue == test_42) {
      test_42 = GALGAS_bool (kIsNotEqual, var_doLabel_26589.readProperty_string ().objectCompare (var_endDoLabel_27702.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_42) {
        GALGAS_string temp_43 ;
        const enumGalgasBool test_44 = GALGAS_bool (kIsNotEqual, var_doLabel_26589.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_44) {
          temp_43 = var_doLabel_26589.readProperty_string () ;
        }else if (kBoolFalse == test_44) {
          temp_43 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray45 ;
        inCompiler->emitSemanticError (var_endDoLabel_27702.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_43, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 988)), fixItArray45  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 988)) ;
      }
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (var_instructionLocation_26750, var_repeatedInstructionList_26825, var_endOfRepeatedInstructionList_26939, var_whilePartList_26978  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 991)) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 998)) ;
    GALGAS_location var_instructionLocation_28232 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    GALGAS_luint var_occurrenceFactor_28292 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1000)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_MNOP::constructor_new (var_instructionLocation_28232, var_occurrenceFactor_28292  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1003)) ;
    GALGAS_location var_instructionLocation_28429 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    GALGAS_luint var_occurrenceFactor_28489 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1005)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_NOPBRA::constructor_new (var_instructionLocation_28429, var_occurrenceFactor_28489  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
  } break ;
  case 22: {
    GALGAS_conditional_5F_branch var_condition_28624 ;
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1010)) ;
      var_condition_28624 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("pic18_syntax.galgas", 1010)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1012)) ;
      var_condition_28624 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("pic18_syntax.galgas", 1012)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1014)) ;
      var_condition_28624 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("pic18_syntax.galgas", 1014)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1016)) ;
      var_condition_28624 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("pic18_syntax.galgas", 1016)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1018)) ;
      var_condition_28624 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("pic18_syntax.galgas", 1018)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1020)) ;
      var_condition_28624 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("pic18_syntax.galgas", 1020)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1022)) ;
      var_condition_28624 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("pic18_syntax.galgas", 1022)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1024)) ;
      var_condition_28624 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("pic18_syntax.galgas", 1024)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_29118 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1026)) ;
    GALGAS_lstring var_targetLabelName_29182 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1027)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMPCC::constructor_new (var_instructionLocation_29118, var_targetLabelName_29182, var_condition_28624, GALGAS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1034)) ;
    GALGAS_location var_instructionLocation_29390 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    GALGAS_conditional_5F_branch var_conditional_5F_branch_29454 ;
    GALGAS_lstring var_conditionString_29501 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1037)) ;
    GALGAS_string var_condition_29527 = var_conditionString_29501.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    enumGalgasBool test_46 = kBoolTrue ;
    if (kBoolTrue == test_46) {
      test_46 = GALGAS_bool (kIsEqual, var_condition_29527.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_46) {
        var_conditional_5F_branch_29454 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("pic18_syntax.galgas", 1040)) ;
      }
    }
    if (kBoolFalse == test_46) {
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = GALGAS_bool (kIsEqual, var_condition_29527.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_47) {
          var_conditional_5F_branch_29454 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("pic18_syntax.galgas", 1042)) ;
        }
      }
      if (kBoolFalse == test_47) {
        enumGalgasBool test_48 = kBoolTrue ;
        if (kBoolTrue == test_48) {
          test_48 = GALGAS_bool (kIsEqual, var_condition_29527.objectCompare (GALGAS_string ("NN"))).boolEnum () ;
          if (kBoolTrue == test_48) {
            var_conditional_5F_branch_29454 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("pic18_syntax.galgas", 1044)) ;
          }
        }
        if (kBoolFalse == test_48) {
          enumGalgasBool test_49 = kBoolTrue ;
          if (kBoolTrue == test_49) {
            test_49 = GALGAS_bool (kIsEqual, var_condition_29527.objectCompare (GALGAS_string ("N"))).boolEnum () ;
            if (kBoolTrue == test_49) {
              var_conditional_5F_branch_29454 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("pic18_syntax.galgas", 1046)) ;
            }
          }
          if (kBoolFalse == test_49) {
            enumGalgasBool test_50 = kBoolTrue ;
            if (kBoolTrue == test_50) {
              test_50 = GALGAS_bool (kIsEqual, var_condition_29527.objectCompare (GALGAS_string ("C"))).boolEnum () ;
              if (kBoolTrue == test_50) {
                var_conditional_5F_branch_29454 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("pic18_syntax.galgas", 1048)) ;
              }
            }
            if (kBoolFalse == test_50) {
              enumGalgasBool test_51 = kBoolTrue ;
              if (kBoolTrue == test_51) {
                test_51 = GALGAS_bool (kIsEqual, var_condition_29527.objectCompare (GALGAS_string ("NC"))).boolEnum () ;
                if (kBoolTrue == test_51) {
                  var_conditional_5F_branch_29454 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("pic18_syntax.galgas", 1050)) ;
                }
              }
              if (kBoolFalse == test_51) {
                enumGalgasBool test_52 = kBoolTrue ;
                if (kBoolTrue == test_52) {
                  test_52 = GALGAS_bool (kIsEqual, var_condition_29527.objectCompare (GALGAS_string ("OV"))).boolEnum () ;
                  if (kBoolTrue == test_52) {
                    var_conditional_5F_branch_29454 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("pic18_syntax.galgas", 1052)) ;
                  }
                }
                if (kBoolFalse == test_52) {
                  enumGalgasBool test_53 = kBoolTrue ;
                  if (kBoolTrue == test_53) {
                    test_53 = GALGAS_bool (kIsEqual, var_condition_29527.objectCompare (GALGAS_string ("NOV"))).boolEnum () ;
                    if (kBoolTrue == test_53) {
                      var_conditional_5F_branch_29454 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("pic18_syntax.galgas", 1054)) ;
                    }
                  }
                  if (kBoolFalse == test_53) {
                    TC_Array <C_FixItDescription> fixItArray54 ;
                    inCompiler->emitSemanticError (var_conditionString_29501.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_29501.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1056)).add_operation (GALGAS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1056)), fixItArray54  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1056)) ;
                    var_conditional_5F_branch_29454.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    GALGAS_lstring var_targetLabelName_30480 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1060)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMPCC::constructor_new (var_instructionLocation_29390, var_targetLabelName_30480, var_conditional_5F_branch_29454, GALGAS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1067)) ;
    GALGAS_location var_instructionLocation_30698 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    GALGAS_lstring var_targetLabelName_30762 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1069)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMP::constructor_new (var_instructionLocation_30698, var_targetLabelName_30762, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas", 1073))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1075)) ;
    GALGAS_location var_instructionLocation_30981 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    GALGAS_lstring var_targetLabelName_31045 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1077)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMP::constructor_new (var_instructionLocation_30981, var_targetLabelName_31045, GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("pic18_syntax.galgas", 1081))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1083)) ;
    GALGAS_location var_instructionLocation_31249 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    GALGAS_lstring var_targetLabelName_31313 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1085)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JUMP::constructor_new (var_instructionLocation_31249, var_targetLabelName_31313, GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("pic18_syntax.galgas", 1089))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1092)) ;
    GALGAS_lstring var_macroName_31527 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    GALGAS_immediatExpressionList var_immediatExpressionList_31590 = GALGAS_immediatExpressionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    bool repeatFlag_55 = true ;
    while (repeatFlag_55) {
      GALGAS_immediatExpression var_constantExpression_31679 ;
      nt_immediate_5F_expression_ (var_constantExpression_31679, inCompiler) ;
      var_immediatExpressionList_31590.addAssign_operation (var_constantExpression_31679, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1098))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1098)) ;
      switch (select_pic_31__38__5F_syntax_54 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1100)) ;
      } break ;
      default:
        repeatFlag_55 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1102)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_macro::constructor_new (var_macroName_31527.readProperty_location (), var_macroName_31527, var_immediatExpressionList_31590  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 496)) ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 501)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 505)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 508)) ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 513)) ;
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
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 526)) ;
          nt_immediate_5F_expression_parse (inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 528)) ;
          nt_immediate_5F_expression_parse (inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 530)) ;
        } break ;
        default:
          break ;
        }
        switch (select_pic_31__38__5F_syntax_25 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 534)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 536)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      switch (select_pic_31__38__5F_syntax_23 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 551)) ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 556)) ;
      } break ;
      default:
        break ;
      }
      nt_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 574)) ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 579)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 586)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 588)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 592)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 599)) ;
      nt_block_5F_termination_parse (inCompiler) ;
      switch (select_pic_31__38__5F_syntax_30 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 610)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 612)) ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 617)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 621)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 625)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 627)) ;
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 641)) ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 646)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 653)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 657)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 661)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 664)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 667)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 673)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 675)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 681)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 686)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 688)) ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 693)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 699)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 706)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 712)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 715)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 723)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 731)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 733)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 735)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 737)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_immediate_5F_expression_parse (inCompiler) ;
        switch (select_pic_31__38__5F_syntax_37 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 743)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 752)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 755)) ;
        switch (select_pic_31__38__5F_syntax_38 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 758)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 767)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 770)) ;
        switch (select_pic_31__38__5F_syntax_39 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 773)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 782)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 785)) ;
        switch (select_pic_31__38__5F_syntax_40 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 788)) ;
        } break ;
        default:
          repeatFlag_6 = false ;
          break ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 798)) ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 803)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 812)) ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 817)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 829)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 834)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 834)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 836)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 836)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 838)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 838)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 840)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 847)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 855)) ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 861)) ;
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 863)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 868)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 872)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 882)) ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 886)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 888)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 895)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 895)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 898)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 907)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 917)) ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 922)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 931)) ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 936)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 943)) ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 948)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_parse (inCompiler) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 960)) ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 965)) ;
      } break ;
      default:
        break ;
      }
      nt_condition_5F_expression_parse (inCompiler) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      switch (select_pic_31__38__5F_syntax_50 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_7 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 980)) ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 985)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 998)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1000)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1003)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1005)) ;
  } break ;
  case 22: {
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1010)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1012)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1014)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1016)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1018)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1020)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1022)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1024)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1027)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1034)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1037)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1060)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1067)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1069)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1075)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1077)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1083)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1085)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1092)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    bool repeatFlag_8 = true ;
    while (repeatFlag_8) {
      nt_immediate_5F_expression_parse (inCompiler) ;
      switch (select_pic_31__38__5F_syntax_54 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1100)) ;
      } break ;
      default:
        repeatFlag_8 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1102)) ;
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
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 496)) ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 501)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 505)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 508)) ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 513)) ;
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
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 526)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 528)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 530)) ;
        } break ;
        default:
          break ;
        }
        switch (select_pic_31__38__5F_syntax_25 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 534)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 536)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      switch (select_pic_31__38__5F_syntax_23 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 551)) ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 556)) ;
      } break ;
      default:
        break ;
      }
      nt_instruction_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 574)) ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 579)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 586)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 588)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 592)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 599)) ;
      nt_block_5F_termination_indexing (inCompiler) ;
      switch (select_pic_31__38__5F_syntax_30 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 610)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 612)) ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 617)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 621)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 625)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 627)) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 641)) ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 646)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 653)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 657)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 661)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 664)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 667)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 673)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 675)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 681)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 686)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 688)) ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 693)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 699)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 706)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 712)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 715)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 723)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 731)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 733)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 735)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 737)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_immediate_5F_expression_indexing (inCompiler) ;
        switch (select_pic_31__38__5F_syntax_37 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 743)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 752)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 755)) ;
        switch (select_pic_31__38__5F_syntax_38 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 758)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 767)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 770)) ;
        switch (select_pic_31__38__5F_syntax_39 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 773)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 782)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 785)) ;
        switch (select_pic_31__38__5F_syntax_40 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 788)) ;
        } break ;
        default:
          repeatFlag_6 = false ;
          break ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 798)) ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 803)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 812)) ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 817)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 829)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 834)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 834)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 836)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 836)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 838)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 838)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 840)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 847)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 855)) ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 861)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 863)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 868)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 872)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 882)) ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 886)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 888)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 895)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 895)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 898)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 907)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 917)) ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 922)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 931)) ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 936)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 943)) ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 948)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 960)) ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 965)) ;
      } break ;
      default:
        break ;
      }
      nt_condition_5F_expression_indexing (inCompiler) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      switch (select_pic_31__38__5F_syntax_50 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_7 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 980)) ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 985)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 998)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1000)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1003)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1005)) ;
  } break ;
  case 22: {
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1010)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1012)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1014)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1016)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1018)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1020)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1022)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1024)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1027)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1034)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1037)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1060)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1067)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1069)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1075)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1077)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1083)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1085)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1092)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    bool repeatFlag_8 = true ;
    while (repeatFlag_8) {
      nt_immediate_5F_expression_indexing (inCompiler) ;
      switch (select_pic_31__38__5F_syntax_54 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1100)) ;
      } break ;
      default:
        repeatFlag_8 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1102)) ;
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
  GALGAS_location var_instructionLocation_32194 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1120)) ;
  GALGAS_pic_31__38_ConditionExpression var_structured_5F_if_5F_condition_32265 ;
  nt_condition_5F_expression_ (var_structured_5F_if_5F_condition_32265, inCompiler) ;
  GALGAS_pic_31__38_InstructionList var_thenInstructionList_32315 ;
  nt_instruction_5F_list_ (var_thenInstructionList_32315, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GALGAS_pic_31__38_InstructionList var_elseInstructionList_32434 ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
    var_elseInstructionList_32434 = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 1129)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1131)) ;
    GALGAS_lstring var_elsifIfLabel_32549 ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_32549 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1134))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1134)) ;
    } break ;
    case 2: {
      var_elsifIfLabel_32549 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1136)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_32549.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_32549.readProperty_location (), GALGAS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1139)), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1139)) ;
      }
    }
    GALGAS_pic_31__38_PiccoloInstruction var_elsifPartInstruction_32938 ;
    nt_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_32938, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_32434 = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_syntax.galgas", 1148)) ;
    var_elseInstructionList_32434.addAssign_operation (var_elsifPartInstruction_32938  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1149)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1151)) ;
    GALGAS_lstring var_elsifLabel_33167 ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
      var_elsifLabel_33167 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1154))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1154)) ;
    } break ;
    case 2: {
      var_elsifLabel_33167 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1156)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifLabel_33167.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elsifLabel_33167.readProperty_location (), GALGAS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1159)), fixItArray7  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1159)) ;
      }
    }
    nt_instruction_5F_list_ (var_elseInstructionList_32434, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElsePartLocation_33639 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1168)) ;
  outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (var_instructionLocation_32194, var_structured_5F_if_5F_condition_32265, var_thenInstructionList_32315, var_elseInstructionList_32434, var_endOfElsePartLocation_33639  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1131)) ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1136)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1151)) ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1156)) ;
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
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1131)) ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1136)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1151)) ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1156)) ;
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
    GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST var_baseCode_34042 ;
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1183)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1186)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1189)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ANDWF (SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1192)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_COMF (SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1195)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_DECF (SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1198)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_INCF (SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1201)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_IORWF (SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1204)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1207)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_RLCF (SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1210)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_RLNCF (SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1213)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_RRCF (SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1216)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_RRNCF (SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1219)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_SUBFWB (SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1222)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_SUBWF (SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1225)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_SUBWFB (SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1228)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_SWAPF (SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1231)) ;
      var_baseCode_34042 = GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_XORWF (SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_34851 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1234)) ;
    GALGAS_registerExpression var_registerName_34900 ;
    nt_register_5F_parsing_ (var_registerName_34900, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_34946 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_34946, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FDA::constructor_new (var_instructionLocation_34851, var_baseCode_34042, var_registerName_34900, var_W_5F_isDestination_34946  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1237)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_baseCode_34042.objectCompare (GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1244)))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_34946.operator_not (SOURCE_FILE ("pic18_syntax.galgas", 1244)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_34851, GALGAS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1245)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1249)) ;
    GALGAS_location var_instructionLocation_35449 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1251)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    GALGAS_registerExpression var_registerName_35514 ;
    nt_register_5F_parsing_ (var_registerName_35514, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FDA::constructor_new (var_instructionLocation_35449, GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1256)), var_registerName_35514, GALGAS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1254)) ;
  } break ;
  case 3: {
    GALGAS_FA_5F_instruction_5F_base_5F_code var_FAinstruction_35718 ;
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1263)) ;
      var_FAinstruction_35718 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1266)) ;
      var_FAinstruction_35718 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1269)) ;
      var_FAinstruction_35718 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_MULWF (SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1272)) ;
      var_FAinstruction_35718 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_NEGF (SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1275)) ;
      var_FAinstruction_35718 = GALGAS_FA_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_36142 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1278)) ;
    GALGAS_registerExpression var_registerName_36200 ;
    nt_register_5F_parsing_ (var_registerName_36200, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FA::constructor_new (var_instructionLocation_36142, var_FAinstruction_35718, var_registerName_36200  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1280)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1285)) ;
    GALGAS_location var_instructionLocation_36373 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    GALGAS_registerExpression var_sourceRegisterName_36437 ;
    nt_register_5F_parsing_ (var_sourceRegisterName_36437, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1288)) ;
    GALGAS_registerExpression var_destinationRegisterName_36497 ;
    nt_register_5F_parsing_ (var_destinationRegisterName_36497, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_MOVFF::constructor_new (var_instructionLocation_36373, var_sourceRegisterName_36437, var_destinationRegisterName_36497  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1290)) ;
  } break ;
  case 5: {
    GALGAS_bit_5F_oriented_5F_op var_bitOrientedOp_36678 ;
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1297)) ;
      var_bitOrientedOp_36678 = GALGAS_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("pic18_syntax.galgas", 1297)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1299)) ;
      var_bitOrientedOp_36678 = GALGAS_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("pic18_syntax.galgas", 1299)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1301)) ;
      var_bitOrientedOp_36678 = GALGAS_bit_5F_oriented_5F_op::constructor_BTG (SOURCE_FILE ("pic18_syntax.galgas", 1301)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_36899 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1303)) ;
    GALGAS_registerExpression var_registerName_36977 ;
    nt_register_5F_parsing_ (var_registerName_36977, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1305)) ;
    GALGAS_bitNumberExpression var_bitNumber_37046 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumber_37046, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_FBA::constructor_new (var_instructionLocation_36899, var_bitOrientedOp_36678, var_registerName_36977, var_bitNumber_37046  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1307)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1314)) ;
    GALGAS_location var_instructionLocation_37240 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    GALGAS_lstring var_targetLabelName_37304 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1316)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JSR::constructor_new (var_instructionLocation_37240, var_targetLabelName_37304, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas", 1320))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1322)) ;
    GALGAS_location var_instructionLocation_37522 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    GALGAS_lstring var_targetLabelName_37586 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1324)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JSR::constructor_new (var_instructionLocation_37522, var_targetLabelName_37586, GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("pic18_syntax.galgas", 1328))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1330)) ;
    GALGAS_location var_instructionLocation_37801 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    GALGAS_lstring var_targetLabelName_37865 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1332)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_JSR::constructor_new (var_instructionLocation_37801, var_targetLabelName_37865, GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("pic18_syntax.galgas", 1336))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1338)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_CLRWDT (SOURCE_FILE ("pic18_syntax.galgas", 1339))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1341)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_DAW (SOURCE_FILE ("pic18_syntax.galgas", 1342))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1344)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_NOP (SOURCE_FILE ("pic18_syntax.galgas", 1345))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1347)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_POP (SOURCE_FILE ("pic18_syntax.galgas", 1348))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1350)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_PUSH (SOURCE_FILE ("pic18_syntax.galgas", 1351))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1353)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_RESET (SOURCE_FILE ("pic18_syntax.galgas", 1354))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1356)) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)), GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_SLEEP (SOURCE_FILE ("pic18_syntax.galgas", 1357))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1359)) ;
    GALGAS_location var_instructionLocation_39026 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    GALGAS_immediatExpression var_expression_39106 ;
    nt_immediate_5F_expression_ (var_expression_39106, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_fnop::constructor_new (var_instructionLocation_39026, var_expression_39106  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1362)) ;
  } break ;
  case 17: {
    GALGAS_literal_5F_instruction_5F_opcode var_literalInstruction_39263 ;
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1368)) ;
      var_literalInstruction_39263 = GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("pic18_syntax.galgas", 1368)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1370)) ;
      var_literalInstruction_39263 = GALGAS_literal_5F_instruction_5F_opcode::constructor_ANDLW (SOURCE_FILE ("pic18_syntax.galgas", 1370)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1372)) ;
      var_literalInstruction_39263 = GALGAS_literal_5F_instruction_5F_opcode::constructor_IORLW (SOURCE_FILE ("pic18_syntax.galgas", 1372)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1374)) ;
      var_literalInstruction_39263 = GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("pic18_syntax.galgas", 1374)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1376)) ;
      var_literalInstruction_39263 = GALGAS_literal_5F_instruction_5F_opcode::constructor_MULLW (SOURCE_FILE ("pic18_syntax.galgas", 1376)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1378)) ;
      var_literalInstruction_39263 = GALGAS_literal_5F_instruction_5F_opcode::constructor_SUBLW (SOURCE_FILE ("pic18_syntax.galgas", 1378)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1380)) ;
      var_literalInstruction_39263 = GALGAS_literal_5F_instruction_5F_opcode::constructor_XORLW (SOURCE_FILE ("pic18_syntax.galgas", 1380)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_39852 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1382)) ;
    GALGAS_immediatExpression var_expression_39932 ;
    nt_immediate_5F_expression_ (var_expression_39932, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_literalOperation::constructor_new (var_instructionLocation_39852, var_literalInstruction_39263, var_expression_39932  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1384)) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1389)) ;
    GALGAS_location var_instructionLocation_40121 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    GALGAS_luint var_FSRindex_40173 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1391)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    GALGAS_immediatExpression var_expression_40224 ;
    nt_immediate_5F_expression_ (var_expression_40224, inCompiler) ;
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_LFSR::constructor_new (var_instructionLocation_40121, var_FSRindex_40173, var_expression_40224  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1394)) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1396)) ;
    GALGAS_location var_instructionLocation_40374 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    GALGAS_tableAccessOption var_accessOption_40431 ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1400)) ;
      var_accessOption_40431 = GALGAS_tableAccessOption::constructor_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1403)) ;
      var_accessOption_40431 = GALGAS_tableAccessOption::constructor_postIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1406)) ;
      var_accessOption_40431 = GALGAS_tableAccessOption::constructor_postDecrement (SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1409)) ;
      var_accessOption_40431 = GALGAS_tableAccessOption::constructor_preIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_TBLRD::constructor_new (var_instructionLocation_40374, var_accessOption_40431  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1412)) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1414)) ;
    GALGAS_location var_instructionLocation_40875 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    GALGAS_tableAccessOption var_accessOption_40932 ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1418)) ;
      var_accessOption_40932 = GALGAS_tableAccessOption::constructor_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1421)) ;
      var_accessOption_40932 = GALGAS_tableAccessOption::constructor_postIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1424)) ;
      var_accessOption_40932 = GALGAS_tableAccessOption::constructor_postDecrement (SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1427)) ;
      var_accessOption_40932 = GALGAS_tableAccessOption::constructor_preIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_pic_31__38_Instruction_5F_TBLWT::constructor_new (var_instructionLocation_40875, var_accessOption_40932  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1430)) ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1183)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1186)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1189)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1192)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1195)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1198)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1201)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1204)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1207)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1210)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1213)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1216)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1219)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1222)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1225)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1228)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1231)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1249)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1251)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 3: {
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1263)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1266)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1269)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1272)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1275)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1285)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1288)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 5: {
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1297)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1299)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1301)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1305)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1314)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1316)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1322)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1324)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1330)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1332)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1338)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1341)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1344)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1347)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1350)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1353)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1356)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1359)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 17: {
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1368)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1370)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1372)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1374)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1376)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1378)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1380)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1389)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1391)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1396)) ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1400)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1403)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1406)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1409)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1414)) ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1418)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1421)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1424)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1427)) ;
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
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1183)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1186)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1189)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1192)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1195)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1198)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1201)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1204)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1207)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1210)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1213)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1216)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1219)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1222)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1225)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1228)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1231)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1249)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1251)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1263)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1266)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1269)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1272)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1275)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1285)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1288)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1297)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1299)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1301)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1305)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1314)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1316)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1322)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1324)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1330)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1332)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1338)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1341)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1344)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1347)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1350)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1353)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1356)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1359)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 17: {
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1368)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1370)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1372)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1374)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1376)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1378)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1380)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1389)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1391)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1396)) ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1400)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1403)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1406)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1409)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1414)) ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1418)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1421)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1424)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1427)) ;
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
  GALGAS_lstring var_programName_767 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 24)) ;
  GALGAS_lstring var_deviceNameOrBootloaderReference_814 ;
  GALGAS_programKind var_programKind_845 ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
    var_programKind_845 = GALGAS_programKind::constructor_regularProgram (SOURCE_FILE ("pic18_start_symbol.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 30)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 31)) ;
    var_programKind_845 = GALGAS_programKind::constructor_bootloaderProgram (SOURCE_FILE ("pic18_start_symbol.galgas", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 34)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 35)) ;
    var_programKind_845 = GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_start_symbol.galgas", 36)) ;
  } break ;
  default:
    break ;
  }
  var_deviceNameOrBootloaderReference_814 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 39)) ;
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_1162 = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 40)) ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_1233 = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 41)) ;
  GALGAS_pic_31__38_MacroDefinitionList var_macroDefinitionList_1326 = GALGAS_pic_31__38_MacroDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 42)) ;
  GALGAS_lstringlist var_unusedRoutineList_1355 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 43)) ;
  GALGAS_ramDefinitionList var_ramDefinitionList_1405 = GALGAS_ramDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 44)) ;
  GALGAS_lstringlist var_unusedRegisterList_1462 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 45)) ;
  GALGAS_configDefinitionList var_configDefinitionList_1515 = GALGAS_configDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 46)) ;
  GALGAS_constantDefinitionList var_constantDefinitionList_1579 = GALGAS_constantDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 47)) ;
  GALGAS_dataList var_dataList_1631 = GALGAS_dataList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 48)) ;
  GALGAS_checkpicList var_checkpicList_1673 = GALGAS_checkpicList::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 49)) ;
  GALGAS_lstringlist var_inlinedRoutineList_1725 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("pic18_start_symbol.galgas", 50)) ;
  GALGAS_bool var_needsComputedGoto_32__1782 = GALGAS_bool (false) ;
  GALGAS_bool var_needsComputedGoto_34__1821 = GALGAS_bool (false) ;
  nt_body_ (var_interruptDefinitionList_1162, var_routineDefinitionList_1233, var_macroDefinitionList_1326, var_unusedRoutineList_1355, var_inlinedRoutineList_1725, var_ramDefinitionList_1405, var_unusedRegisterList_1462, var_configDefinitionList_1515, var_constantDefinitionList_1579, var_checkpicList_1673, var_dataList_1631, var_needsComputedGoto_32__1782, var_needsComputedGoto_34__1821, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 67)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("pic18_start_symbol.galgas", 69)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_AST var_piccoloModel_2245 = GALGAS_pic_31__38_AST::constructor_new (var_programName_767, var_programKind_845, var_deviceNameOrBootloaderReference_814, var_configDefinitionList_1515, var_ramDefinitionList_1405, var_unusedRegisterList_1462, var_checkpicList_1673, var_dataList_1631, var_interruptDefinitionList_1162, var_constantDefinitionList_1579, var_routineDefinitionList_1233, var_macroDefinitionList_1326, var_unusedRoutineList_1355, var_inlinedRoutineList_1725, var_needsComputedGoto_32__1782, var_needsComputedGoto_34__1821, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 87))  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 70)) ;
      {
      routine_pic_31__38__5F_analyze (var_piccoloModel_2245, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 89)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_hexDestinationFile_2812 = GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 91)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas", 91)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 91)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_hexDestinationFile_2812.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas", 92)).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_2812, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 93)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_3023 = GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 95)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas", 95)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 95)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_asmDestinationFile_3023.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas", 96)).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_3023, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 97)) ;
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
  GALGAS_lstring var_programName_3679 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 112)) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3679.readProperty_location (), GALGAS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 113)) ;
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
  GALGAS_lstring var_programName_778 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 33)) ;
  GALGAS_lstring var_deviceName_822 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 35)) ;
  GALGAS_midrange_5F_interruptDefinitionList var_interruptDefinitionList_858 = GALGAS_midrange_5F_interruptDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 36)) ;
  GALGAS_midrange_5F_routineDefinitionList var_routineDefinitionList_933 = GALGAS_midrange_5F_routineDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 37)) ;
  GALGAS_ramDefinitionList var_ramDefinitionList_1002 = GALGAS_ramDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 38)) ;
  GALGAS_lstringlist var_unusedRegisterList_1059 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 39)) ;
  GALGAS_lstringlist var_unusedRoutineList_1109 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 40)) ;
  GALGAS_configDefinitionList var_configDefinitionList_1162 = GALGAS_configDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 41)) ;
  GALGAS_constantDefinitionList var_constantDefinitionList_1226 = GALGAS_constantDefinitionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 42)) ;
  GALGAS_bool var_needsComputedGoto_32__1294 = GALGAS_bool (false) ;
  GALGAS_bool var_needsComputedGoto_34__1333 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 47)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_unusedRegister_1441 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 50)) ;
        var_unusedRegisterList_1059.addAssign_operation (var_unusedRegister_1441  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 51)) ;
        switch (select_midrange_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 53)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GALGAS_lstring var_unusedRoutine_1607 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 59)) ;
        var_unusedRoutineList_1109.addAssign_operation (var_unusedRoutine_1607  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 60)) ;
        switch (select_midrange_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 62)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_ (var_configDefinitionList_1162, inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_ (var_ramDefinitionList_1002, inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_ (var_constantDefinitionList_1226, inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_ (var_interruptDefinitionList_858, var_needsComputedGoto_32__1294, var_needsComputedGoto_34__1333, inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_ (var_routineDefinitionList_933, var_needsComputedGoto_32__1294, var_needsComputedGoto_34__1333, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 81)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_syntax.galgas", 83)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_midrange_5F_model var_piccoloModel_2195 = GALGAS_midrange_5F_model::constructor_new (var_programName_778, var_deviceName_822, var_configDefinitionList_1162, var_ramDefinitionList_1002, var_unusedRegisterList_1059, var_interruptDefinitionList_858, var_constantDefinitionList_1226, var_routineDefinitionList_933, var_unusedRoutineList_1109, var_needsComputedGoto_32__1294, var_needsComputedGoto_34__1333, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 96))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 84)) ;
      {
      routine_midrange_5F_analyze (var_piccoloModel_2195, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 98)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    GALGAS_string var_hexDestinationFile_2645 = GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 100)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas", 100)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 100)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_hexDestinationFile_2645.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas", 101)).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_2645, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 102)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_2856 = GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 104)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas", 104)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 104)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_asmDestinationFile_2856.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas", 105)).boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_2856, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 106)) ;
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
  GALGAS_lstring var_programName_3515 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 121)) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3515.readProperty_location (), GALGAS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 122)) ;
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
        switch (select_midrange_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 136)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 140)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 142)) ;
        switch (select_midrange_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 144)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
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
        switch (select_midrange_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 53)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 59)) ;
        switch (select_midrange_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 62)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
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
        switch (select_midrange_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 53)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 59)) ;
        switch (select_midrange_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 62)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
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
      GALGAS_midrange_5F_instruction var_instruction_4654 ;
      nt_midrange_5F_simple_5F_instruction_ (var_instruction_4654, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_4654  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 172)) ;
    } break ;
    case 3: {
      GALGAS_midrange_5F_instruction var_instruction_4762 ;
      nt_midrange_5F_structured_5F_instruction_ (var_instruction_4762, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_4762  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 179)) ;
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
  GALGAS_location var_interruptionLocation_5160 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 190)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 191)) ;
  GALGAS_lstring var_firstSaveRegister_5240 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 193)) ;
  GALGAS_lstring var_secondSaveRegister_5294 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 194)) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 195)) ;
  GALGAS_labelMap var_labelMap_5325 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("midrange_syntax.galgas", 196)) ;
  GALGAS_midrange_5F_instructionList var_instructionList_5385 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_5385, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5325, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 202)) ;
  ioArgument_ioInterruptDefinitionList.addAssign_operation (var_interruptionLocation_5160, var_instructionList_5385, var_firstSaveRegister_5240, var_secondSaveRegister_5294, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 208))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 203)) ;
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
  GALGAS_bool var_noreturn_5831 ;
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_noreturn_5831 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas", 222)) ;
    var_noreturn_5831 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 225)) ;
  GALGAS_lstring var_routineName_5960 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 226)) ;
  GALGAS_luint var_page_6015 ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_page_6015 = GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 230))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 230)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas", 232)) ;
    var_page_6015 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_luint var_requiredBank_6148 ;
  GALGAS_luint var_returnedBank_6174 ;
  GALGAS_bool var_preservesBank_6200 ;
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
    var_requiredBank_6148 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 240)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 240))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 240)) ;
    var_returnedBank_6174 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 241)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 241))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 241)) ;
    var_preservesBank_6200 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 244)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 245)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas", 247)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_noreturn_5831.boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 249)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 249)) ;
        }
      }
      var_preservesBank_6200 = GALGAS_bool (true) ;
      var_requiredBank_6148 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 252)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 252))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 252)) ;
      var_returnedBank_6174 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 253)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 253))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 253)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas", 255)) ;
      var_requiredBank_6148 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 256)) ;
      var_preservesBank_6200 = GALGAS_bool (false) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_returnedBank_6174 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 259)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 259))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 259)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 261)) ;
        var_returnedBank_6174 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 262)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_noreturn_5831.boolEnum () ;
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
      var_returnedBank_6174 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 269)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_noreturn_5831.boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 271)), GALGAS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 271)) ;
        }
      }
      var_preservesBank_6200 = GALGAS_bool (false) ;
      var_requiredBank_6148 = GALGAS_luint::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_syntax.galgas", 274)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 274))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 274)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 277)) ;
  GALGAS_labelMap var_labelMap_7381 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("midrange_syntax.galgas", 278)) ;
  GALGAS_midrange_5F_instructionList var_instructionList_7441 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_7441, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7381, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 284)) ;
  ioArgument_ioRoutineDefinitionList.addAssign_operation (var_routineName_5960, var_page_6015, var_requiredBank_6148, var_returnedBank_6174, var_preservesBank_6200, var_noreturn_5831, var_instructionList_7441, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 293))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 285)) ;
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
    GALGAS_lstring var_doLabel_7953 ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
      var_doLabel_7953 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 308))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 308)) ;
    } break ;
    case 2: {
      var_doLabel_7953 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 310)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_7953, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 311)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_8104 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 313)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 314)) ;
    GALGAS_lstring var_constantName_8164 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 315)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 316)) ;
    GALGAS_immediatExpression var_lowBoundExpression_8243 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_8243, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 318)) ;
    GALGAS_immediatExpression var_highBoundExpression_8325 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_8325, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 320)) ;
    GALGAS_midrange_5F_instructionList var_instructionList_8418 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_8418, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::constructor_new (var_instructionLocation_8104, var_constantName_8164, var_lowBoundExpression_8243, var_highBoundExpression_8325, var_instructionList_8418, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 332))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 326)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 333)) ;
    GALGAS_lstring var_endDoLabel_8743 ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
      var_endDoLabel_8743 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 336))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 336)) ;
    } break ;
    case 2: {
      var_endDoLabel_8743 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_doLabel_7953.readProperty_string ().objectCompare (var_endDoLabel_8743.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_doLabel_7953.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = var_doLabel_7953.readProperty_string () ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_endDoLabel_8743.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 341)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 341)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 345)) ;
    GALGAS_luint var_bankIndex_9100 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 346)) ;
    outArgument_outInstruction = GALGAS_midrangeInstruction_5F_checkbank::constructor_new (var_bankIndex_9100.readProperty_location (), var_bankIndex_9100.readProperty_uint ()  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 347)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 349)) ;
    outArgument_outInstruction = GALGAS_midrangeInstruction_5F_checknobank::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 350))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 350)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 352)) ;
    GALGAS_location var_instructionLocation_9354 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 353)) ;
    GALGAS_registerExpression var_register_9428 ;
    nt_register_5F_parsing_ (var_register_9428, inCompiler) ;
    GALGAS_bool var_warningOnUselessBanksel_9466 ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_9466 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 359)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 360)) ;
      var_warningOnUselessBanksel_9466 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_banksel_5F_register::constructor_new (var_instructionLocation_9354, var_register_9428, var_warningOnUselessBanksel_9466  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 363)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 365)) ;
    GALGAS_location var_instructionLocation_9768 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 366)) ;
    GALGAS_luint var_bank_9816 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 367)) ;
    GALGAS_bool var_warningOnUselessBanksel_9854 ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_9854 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 373)) ;
      var_warningOnUselessBanksel_9854 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_banksel::constructor_new (var_instructionLocation_9768, var_bank_9816, var_warningOnUselessBanksel_9854  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 376)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 378)) ;
    GALGAS_location var_instructionLocation_10144 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 379)) ;
    GALGAS_registerExpression var_register_10218 ;
    nt_register_5F_parsing_ (var_register_10218, inCompiler) ;
    GALGAS_midrange_5F_instructionList var_instructionList_10277 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_10277, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 386)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_savebank::constructor_new (var_instructionLocation_10144, var_register_10218, var_instructionList_10277, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 391))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 387)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 393)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_nobanksel::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 394))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 394)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas", 396)) ;
    GALGAS_lstring var_foreverLabel_10656 ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
      var_foreverLabel_10656 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 399))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 399)) ;
    } break ;
    case 2: {
      var_foreverLabel_10656 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 401)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_10656, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 402)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_10832 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 404)) ;
    GALGAS_midrange_5F_instructionList var_instructionList_10908 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_10908, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 410)) ;
    GALGAS_lstring var_endForeverLabel_11028 ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_endForeverLabel_11028 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 413))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 413)) ;
    } break ;
    case 2: {
      var_endForeverLabel_11028 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 415)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_foreverLabel_10656.readProperty_string ().objectCompare (var_endForeverLabel_11028.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_foreverLabel_10656.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = var_foreverLabel_10656.readProperty_string () ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_endForeverLabel_11028.readProperty_location (), GALGAS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 418)), fixItArray7  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 418)) ;
      }
    }
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_FOREVER::constructor_new (var_instructionLocation_10832, var_instructionList_10908, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 424))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 421)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 426)) ;
    GALGAS_location var_instructionLocation_11551 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 427)) ;
    GALGAS_registerExpression var_registerExpression_11615 ;
    GALGAS_bitNumberExpression var_bitNumberExpression_11664 ;
    GALGAS_bool var_skipIfSet_11688 ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 432)) ;
      nt_register_5F_parsing_ (var_registerExpression_11615, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 434)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11664, inCompiler) ;
      var_skipIfSet_11688 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerExpression_11615, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 439)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11664, inCompiler) ;
      var_skipIfSet_11688 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 443)) ;
    GALGAS_midrange_5F_instruction var_instruction_12040 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_12040, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::constructor_new (var_instructionLocation_11551, var_instruction_12040, var_skipIfSet_11688, var_registerExpression_11615, var_bitNumberExpression_11664  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 445)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 452)) ;
    GALGAS_location var_instructionLocation_12270 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 453)) ;
    GALGAS_bool var_increment_12311 ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 456)) ;
      var_increment_12311 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 458)) ;
      var_increment_12311 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression_12445 ;
    nt_register_5F_parsing_ (var_registerExpression_12445, inCompiler) ;
    GALGAS_bool var_w_5F_isTarget_12470 ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_12470 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      var_w_5F_isTarget_12470 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString_12600 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 467)) ;
    GALGAS_string var_condition_12626 = var_conditionString_12600.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("midrange_syntax.galgas", 468)) ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsNotEqual, var_condition_12626.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_conditionString_12600.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_condition_12626, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 470)).add_operation (GALGAS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 470)), fixItArray9  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 470)) ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 472)) ;
    GALGAS_midrange_5F_instruction var_instruction_12853 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_12853, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::constructor_new (var_instructionLocation_12270, var_instruction_12853, var_increment_12311, var_registerExpression_12445, var_w_5F_isTarget_12470  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 474)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 482)) ;
    GALGAS_lstring var_ifLabel_13065 ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
      var_ifLabel_13065 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 485))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 485)) ;
    } break ;
    case 2: {
      var_ifLabel_13065 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 487)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_13065, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 488)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_ (var_ifLabel_13065, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 496)) ;
    GALGAS_lstring var_endIfLabel_13381 ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
      var_endIfLabel_13381 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 499))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 499)) ;
    } break ;
    case 2: {
      var_endIfLabel_13381 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 501)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsNotEqual, var_ifLabel_13065.readProperty_string ().objectCompare (var_endIfLabel_13381.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string temp_11 ;
        const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_ifLabel_13065.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          temp_11 = var_ifLabel_13065.readProperty_string () ;
        }else if (kBoolFalse == test_12) {
          temp_11 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_endIfLabel_13381.readProperty_location (), GALGAS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 504)), fixItArray13  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 504)) ;
      }
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 508)) ;
    GALGAS_lstring var_doLabel_13720 ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
      var_doLabel_13720 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 511))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 511)) ;
    } break ;
    case 2: {
      var_doLabel_13720 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 513)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_13720, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 514)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_13881 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 516)) ;
    GALGAS_midrange_5F_instructionList var_repeatedInstructionList_13965 ;
    nt_midrange_5F_instruction_5F_list_ (var_repeatedInstructionList_13965, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GALGAS_location var_endOfRepeatedInstructionList_14089 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 522)) ;
    GALGAS_midrange_5F_partList var_whilePartList_14128 = GALGAS_midrange_5F_partList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 523)) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas", 525)) ;
      GALGAS_lstring var_whileLabel_14215 ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
        var_whileLabel_14215 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 528))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 528)) ;
      } break ;
      case 2: {
        var_whileLabel_14215 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 530)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, var_doLabel_13720.readProperty_string ().objectCompare (var_whileLabel_14215.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_doLabel_13720.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = var_doLabel_13720.readProperty_string () ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string ("empty") ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (var_whileLabel_14215.readProperty_location (), GALGAS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 533)), fixItArray18  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 533)) ;
        }
      }
      GALGAS_midrange_5F_conditionExpression var_whileCondition_14593 ;
      nt_midrange_5F_condition_5F_expression_ (var_whileCondition_14593, inCompiler) ;
      GALGAS_midrange_5F_instructionList var_instructionList_14656 ;
      nt_midrange_5F_instruction_5F_list_ (var_instructionList_14656, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_14128.addAssign_operation (var_whileCondition_14593, var_instructionList_14656, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 542))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 542)) ;
      switch (select_midrange_5F_syntax_22 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_14 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 545)) ;
    GALGAS_lstring var_endDoLabel_14865 ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
      var_endDoLabel_14865 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 548))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 548)) ;
    } break ;
    case 2: {
      var_endDoLabel_14865 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 550)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (kIsNotEqual, var_doLabel_13720.readProperty_string ().objectCompare (var_endDoLabel_14865.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_string temp_20 ;
        const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, var_doLabel_13720.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_21) {
          temp_20 = var_doLabel_13720.readProperty_string () ;
        }else if (kBoolFalse == test_21) {
          temp_20 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (var_endDoLabel_14865.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 553)), fixItArray22  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 553)) ;
      }
    }
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_do_5F_while::constructor_new (var_instructionLocation_13881, var_repeatedInstructionList_13965, var_endOfRepeatedInstructionList_14089, var_whilePartList_14128  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 556)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 562)) ;
    GALGAS_location var_instructionLocation_15394 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 563)) ;
    GALGAS_luint var_occurrenceFactor_15454 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 564)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_MNOP::constructor_new (var_instructionLocation_15394, var_occurrenceFactor_15454  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 565)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas", 567)) ;
    GALGAS_location var_instructionLocation_15602 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 568)) ;
    GALGAS_lstring var_targetLabelName_15666 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 569)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_JSR::constructor_new (var_instructionLocation_15602, var_targetLabelName_15666  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 570)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas", 574)) ;
    GALGAS_location var_instructionLocation_15825 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 575)) ;
    GALGAS_lstring var_targetLabelName_15889 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 576)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_JUMP::constructor_new (var_instructionLocation_15825, var_targetLabelName_15889  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 577)) ;
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
      switch (select_midrange_5F_syntax_22 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
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
      switch (select_midrange_5F_syntax_22 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
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
  GALGAS_location var_instructionLocation_16292 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 593)) ;
  GALGAS_midrange_5F_conditionExpression var_structured_5F_if_5F_condition_16372 ;
  nt_midrange_5F_condition_5F_expression_ (var_structured_5F_if_5F_condition_16372, inCompiler) ;
  GALGAS_midrange_5F_instructionList var_thenInstructionList_16431 ;
  nt_midrange_5F_instruction_5F_list_ (var_thenInstructionList_16431, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GALGAS_midrange_5F_instructionList var_elseInstructionList_16554 ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
    var_elseInstructionList_16554 = GALGAS_midrange_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 602)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas", 604)) ;
    GALGAS_lstring var_elsifIfLabel_16673 ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_16673 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 607))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 607)) ;
    } break ;
    case 2: {
      var_elsifIfLabel_16673 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 609)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_16673.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_16673.readProperty_location (), GALGAS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 612)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 612)) ;
      }
    }
    GALGAS_midrange_5F_instruction var_elsifPartInstruction_17071 ;
    nt_midrange_5F_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_17071, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_16554 = GALGAS_midrange_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_syntax.galgas", 621)) ;
    var_elseInstructionList_16554.addAssign_operation (var_elsifPartInstruction_17071  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 622)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas", 624)) ;
    GALGAS_lstring var_elseLabel_17303 ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLabel_17303 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 627))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 627)) ;
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
    nt_midrange_5F_instruction_5F_list_ (var_elseInstructionList_16554, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElsePartLocation_17780 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 641)) ;
  outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_structured_5F_if::constructor_new (var_instructionLocation_16292, var_structured_5F_if_5F_condition_16372, var_thenInstructionList_16431, var_elseInstructionList_16554, var_endOfElsePartLocation_17780  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 642)) ;
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
    GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_18186 ;
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 656)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_ADDWF (SOURCE_FILE ("midrange_syntax.galgas", 657)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 659)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_ANDWF (SOURCE_FILE ("midrange_syntax.galgas", 660)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 662)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_COMF (SOURCE_FILE ("midrange_syntax.galgas", 663)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 665)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECF (SOURCE_FILE ("midrange_syntax.galgas", 666)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 668)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCF (SOURCE_FILE ("midrange_syntax.galgas", 669)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 671)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_IORWF (SOURCE_FILE ("midrange_syntax.galgas", 672)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 674)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_syntax.galgas", 675)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 677)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_RLF (SOURCE_FILE ("midrange_syntax.galgas", 678)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 680)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_RRF (SOURCE_FILE ("midrange_syntax.galgas", 681)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 683)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SUBWF (SOURCE_FILE ("midrange_syntax.galgas", 684)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 686)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_syntax.galgas", 687)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 689)) ;
      var_baseCode_18186 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_XORWF (SOURCE_FILE ("midrange_syntax.galgas", 690)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_18750 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 692)) ;
    GALGAS_registerExpression var_registerExpression_18814 ;
    nt_register_5F_parsing_ (var_registerExpression_18814, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_18860 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_18860, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_FD::constructor_new (var_instructionLocation_18750, var_baseCode_18186, var_registerExpression_18814, var_W_5F_isDestination_18860  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 695)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_baseCode_18186.objectCompare (GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_syntax.galgas", 702)))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_18860.operator_not (SOURCE_FILE ("midrange_syntax.galgas", 702)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_18750, GALGAS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 703)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 707)) ;
    GALGAS_location var_instructionLocation_19373 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 708)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 709)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 710)) ;
    GALGAS_registerExpression var_registerName_19438 ;
    nt_register_5F_parsing_ (var_registerName_19438, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_FD::constructor_new (var_instructionLocation_19373, GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_syntax.galgas", 714)), var_registerName_19438, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 712)) ;
  } break ;
  case 3: {
    GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code var_FAinstruction_19653 ;
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 721)) ;
      var_FAinstruction_19653 = GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_syntax.galgas", 722)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 724)) ;
      var_FAinstruction_19653 = GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_syntax.galgas", 725)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_19869 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 727)) ;
    GALGAS_registerExpression var_registerExpression_19933 ;
    nt_register_5F_parsing_ (var_registerExpression_19933, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_F::constructor_new (var_instructionLocation_19869, var_FAinstruction_19653, var_registerExpression_19933  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 729)) ;
  } break ;
  case 4: {
    GALGAS_midrange_5F_bit_5F_oriented_5F_op var_bitOrientedOp_20113 ;
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
      var_bitOrientedOp_20113 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
      var_bitOrientedOp_20113 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_20295 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 740)) ;
    GALGAS_registerExpression var_registerExpression_20359 ;
    nt_register_5F_parsing_ (var_registerExpression_20359, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 742)) ;
    GALGAS_bitNumberExpression var_bitNumberExpression_20417 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_20417, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_FB::constructor_new (var_instructionLocation_20295, var_bitOrientedOp_20113, var_registerExpression_20359, var_bitNumberExpression_20417  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 744)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas", 750)) ;
    GALGAS_location var_instructionLocation_20626 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 751)) ;
    GALGAS_lstring var_targetLabelName_20690 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 752)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_GOTO::constructor_new (var_instructionLocation_20626, var_targetLabelName_20690  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 753)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas", 757)) ;
    GALGAS_location var_instructionLocation_20871 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 758)) ;
    GALGAS_lstring var_targetLabelName_20935 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 759)) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_CALL::constructor_new (var_instructionLocation_20871, var_targetLabelName_20935  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 760)) ;
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
    GALGAS_midrange_5F_literal_5F_instruction_5F_opcode var_literalInstruction_21487 ;
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
      var_literalInstruction_21487 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
      var_literalInstruction_21487 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_ANDLW (SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
      var_literalInstruction_21487 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_IORLW (SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
      var_literalInstruction_21487 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
      var_literalInstruction_21487 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_SUBLW (SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
      var_literalInstruction_21487 = GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_XORLW (SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_22053 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 790)) ;
    GALGAS_immediatExpression var_expression_22113 ;
    nt_immediate_5F_expression_ (var_expression_22113, inCompiler) ;
    outArgument_outInstruction = GALGAS_midrange_5F_instruction_5F_literalOperation::constructor_new (var_instructionLocation_22053, var_literalInstruction_21487, var_expression_22113  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 792)) ;
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
  GALGAS_midrange_5F_conditionExpression var_condition_22449 ;
  nt_midrange_5F_condition_5F_factor_ (var_condition_22449, inCompiler) ;
  outArgument_outCondition = GALGAS_midrange_5F_negateCondition::constructor_new (var_condition_22449  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 805)) ;
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
    GALGAS_bool var_isIncrement_22875 ;
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 822)) ;
      var_isIncrement_22875 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 824)) ;
      var_isIncrement_22875 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression_23013 ;
    nt_register_5F_parsing_ (var_registerExpression_23013, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_23043 ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_23043 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      var_W_5F_isDestination_23043 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString_23183 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 833)) ;
    GALGAS_string var_condition_23209 = var_conditionString_23183.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("midrange_syntax.galgas", 834)) ;
    GALGAS_bool var_branchIfZero_23279 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_condition_23209.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_branchIfZero_23279 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_condition_23209.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_branchIfZero_23279 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_23183.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_23183.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 841)).add_operation (GALGAS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 841)), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 841)) ;
        var_branchIfZero_23279.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GALGAS_midrange_5F_incDecRegisterInCondition::constructor_new (var_registerExpression_23013, var_isIncrement_22875, var_W_5F_isDestination_23043, var_branchIfZero_23279  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 845)) ;
  } break ;
  case 2: {
    GALGAS_registerExpression var_registerExpression_23746 ;
    nt_register_5F_parsing_ (var_registerExpression_23746, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 852)) ;
    GALGAS_bitNumberExpression var_bitNumberExpression_23804 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_23804, inCompiler) ;
    outArgument_outCondition = GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (var_registerExpression_23746, var_bitNumberExpression_23804  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 854)) ;
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
    switch (select_midrange_5F_syntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 869)) ;
      GALGAS_midrange_5F_conditionExpression var_c_24195 ;
      nt_midrange_5F_condition_5F_term_ (var_c_24195, inCompiler) ;
      GALGAS_midrange_5F_conditionExpression var_rc_24236 = GALGAS_midrange_5F_negateCondition::constructor_new (var_c_24195  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 871)) ;
      GALGAS_midrange_5F_conditionExpression var_lc_24316 = GALGAS_midrange_5F_negateCondition::constructor_new (outArgument_outCondition  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 872)) ;
      outArgument_outCondition = GALGAS_midrange_5F_negateCondition::constructor_new (GALGAS_midrange_5F_andCondition::constructor_new (var_lc_24316, var_rc_24236  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 873))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 873)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
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
    switch (select_midrange_5F_syntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 869)) ;
      nt_midrange_5F_condition_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
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
    switch (select_midrange_5F_syntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 869)) ;
      nt_midrange_5F_condition_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
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
    switch (select_midrange_5F_syntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 885)) ;
      GALGAS_midrange_5F_conditionExpression var_c_24718 ;
      nt_midrange_5F_condition_5F_factor_ (var_c_24718, inCompiler) ;
      outArgument_outCondition = GALGAS_midrange_5F_andCondition::constructor_new (outArgument_outCondition, var_c_24718  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 887)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 885)) ;
      nt_midrange_5F_condition_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 885)) ;
      nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_section_5F_list_i0_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                              GALGAS_lstringlist & ioArgument_ioUnusedRoutineList,
                                                                              GALGAS_ramDefinitionList & ioArgument_ioRamDefinitionList,
                                                                              GALGAS_lstringlist & ioArgument_unusedRegisterList,
                                                                              GALGAS_configDefinitionList & ioArgument_ioConfigDefinitionList,
                                                                              GALGAS_constantDefinitionList & ioArgument_ioConstantDefinitionList,
                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("baseline_syntax.galgas", 38)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_unusedRegister_1039 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 40)) ;
        ioArgument_unusedRegisterList.addAssign_operation (var_unusedRegister_1039  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 41)) ;
        switch (select_baseline_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 43)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas", 46)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas", 47)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GALGAS_lstring var_unusedRoutine_1205 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 49)) ;
        ioArgument_ioUnusedRoutineList.addAssign_operation (var_unusedRoutine_1205  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 50)) ;
        switch (select_baseline_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 52)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_ (ioArgument_ioConfigDefinitionList, inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_ (ioArgument_ioRamDefinitionList, inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_ (ioArgument_ioConstantDefinitionList, inCompiler) ;
    } break ;
    case 7: {
      nt_baseline_5F_routine_5F_definition_ (ioArgument_ioRoutineDefinitionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_section_5F_list_i0_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("baseline_syntax.galgas", 38)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 40)) ;
        switch (select_baseline_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 43)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas", 46)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas", 47)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 49)) ;
        switch (select_baseline_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 52)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
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
      nt_baseline_5F_routine_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_section_5F_list_i0_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("baseline_syntax.galgas", 38)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 40)) ;
        switch (select_baseline_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 43)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas", 46)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas", 47)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 49)) ;
        switch (select_baseline_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 52)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
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
      nt_baseline_5F_routine_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GALGAS_baseline_5F_instructionList & outArgument_outInstructionList,
                                                                                              GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_baseline_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_syntax.galgas", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_3 (inCompiler)) {
    case 2: {
      GALGAS_baseline_5F_instruction var_instruction_1823 ;
      nt_baseline_5F_simple_5F_instruction_ (var_instruction_1823, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_1823  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 75)) ;
    } break ;
    case 3: {
      GALGAS_baseline_5F_instruction var_instruction_1931 ;
      nt_baseline_5F_structured_5F_instruction_ (var_instruction_1931, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_1931  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 80)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_baseline_5F_simple_5F_instruction_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_baseline_5F_structured_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_baseline_5F_simple_5F_instruction_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_baseline_5F_structured_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                                C_Lexique_piccolo_5F_lexique * inCompiler) {
  GALGAS_bool var_noreturn_2172 ;
  switch (select_baseline_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_noreturn_2172 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("baseline_syntax.galgas", 92)) ;
    var_noreturn_2172 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas", 95)) ;
  GALGAS_lstring var_routineName_2301 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 96)) ;
  GALGAS_luint var_page_2356 ;
  switch (select_baseline_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_page_2356 = GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 100))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 100)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("baseline_syntax.galgas", 102)) ;
    var_page_2356 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 106)) ;
  GALGAS_labelMap var_labelMap_2489 = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("baseline_syntax.galgas", 107)) ;
  GALGAS_baseline_5F_instructionList var_instructionList_2549 ;
  nt_baseline_5F_instruction_5F_list_ (var_instructionList_2549, var_labelMap_2489, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 111)) ;
  ioArgument_ioRoutineDefinitionList.addAssign_operation (var_routineName_2301, var_page_2356, var_noreturn_2172, var_instructionList_2549, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 117))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("baseline_syntax.galgas", 92)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas", 95)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 96)) ;
  switch (select_baseline_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("baseline_syntax.galgas", 102)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 106)) ;
  nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 111)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("baseline_syntax.galgas", 92)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas", 95)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 96)) ;
  switch (select_baseline_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("baseline_syntax.galgas", 102)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 106)) ;
  nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GALGAS_baseline_5F_instruction & outArgument_outInstruction,
                                                                                                    GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                                    C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_baseline_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas", 127)) ;
    GALGAS_lstring var_doLabel_2889 ;
    switch (select_baseline_5F_syntax_7 (inCompiler)) {
    case 1: {
      var_doLabel_2889 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 130))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 130)) ;
    } break ;
    case 2: {
      var_doLabel_2889 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 132)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_2889, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 133)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_3050 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 135)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 136)) ;
    GALGAS_lstring var_constantName_3110 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 137)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 138)) ;
    GALGAS_immediatExpression var_lowBoundExpression_3189 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_3189, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 140)) ;
    GALGAS_immediatExpression var_highBoundExpression_3271 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_3271, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 142)) ;
    GALGAS_baseline_5F_instructionList var_instructionList_3358 ;
    nt_baseline_5F_instruction_5F_list_ (var_instructionList_3358, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::constructor_new (var_instructionLocation_3050, var_constantName_3110, var_lowBoundExpression_3189, var_highBoundExpression_3271, var_instructionList_3358, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 150))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 144)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 152)) ;
    GALGAS_lstring var_endDoLabel_3615 ;
    switch (select_baseline_5F_syntax_8 (inCompiler)) {
    case 1: {
      var_endDoLabel_3615 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 155))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 155)) ;
    } break ;
    case 2: {
      var_endDoLabel_3615 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 157)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_doLabel_2889.readProperty_string ().objectCompare (var_endDoLabel_3615.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_doLabel_2889.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = var_doLabel_2889.readProperty_string () ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_endDoLabel_3615.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 160)), fixItArray3  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 160)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("baseline_syntax.galgas", 164)) ;
    GALGAS_location var_instructionLocation_3969 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 165)) ;
    GALGAS_lstring var_targetLabelName_4033 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 166)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_JUMP::constructor_new (var_instructionLocation_3969, var_targetLabelName_4033  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 167)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("baseline_syntax.galgas", 171)) ;
    GALGAS_location var_instructionLocation_4192 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 172)) ;
    GALGAS_lstring var_targetLabelName_4256 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 173)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_JSR::constructor_new (var_instructionLocation_4192, var_targetLabelName_4256  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 174)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("baseline_syntax.galgas", 178)) ;
    GALGAS_lstring var_foreverLabel_4410 ;
    switch (select_baseline_5F_syntax_9 (inCompiler)) {
    case 1: {
      var_foreverLabel_4410 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 181))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 181)) ;
    } break ;
    case 2: {
      var_foreverLabel_4410 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 183)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_4410, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 184)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_4576 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 186)) ;
    GALGAS_baseline_5F_instructionList var_instructionList_4646 ;
    nt_baseline_5F_instruction_5F_list_ (var_instructionList_4646, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 188)) ;
    GALGAS_lstring var_endForeverLabel_4702 ;
    switch (select_baseline_5F_syntax_10 (inCompiler)) {
    case 1: {
      var_endForeverLabel_4702 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 191))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 191)) ;
    } break ;
    case 2: {
      var_endForeverLabel_4702 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 193)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_foreverLabel_4410.readProperty_string ().objectCompare (var_endForeverLabel_4702.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_foreverLabel_4410.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = var_foreverLabel_4410.readProperty_string () ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_endForeverLabel_4702.readProperty_location (), GALGAS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 196)), fixItArray7  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 196)) ;
      }
    }
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_FOREVER::constructor_new (var_instructionLocation_4576, var_instructionList_4646, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 202))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 199)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas", 205)) ;
    GALGAS_location var_instructionLocation_5230 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 206)) ;
    GALGAS_registerExpression var_registerExpression_5294 ;
    GALGAS_bitNumberExpression var_bitNumberExpression_5343 ;
    GALGAS_bool var_skipIfSet_5367 ;
    switch (select_baseline_5F_syntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 211)) ;
      nt_register_5F_parsing_ (var_registerExpression_5294, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 213)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_5343, inCompiler) ;
      var_skipIfSet_5367 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerExpression_5294, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 218)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_5343, inCompiler) ;
      var_skipIfSet_5367 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 222)) ;
    GALGAS_baseline_5F_instruction var_instruction_5719 ;
    nt_baseline_5F_simple_5F_instruction_ (var_instruction_5719, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::constructor_new (var_instructionLocation_5230, var_instruction_5719, var_skipIfSet_5367, var_registerExpression_5294, var_bitNumberExpression_5343  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 224)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas", 231)) ;
    GALGAS_location var_instructionLocation_5949 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 232)) ;
    GALGAS_bool var_increment_5990 ;
    switch (select_baseline_5F_syntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 235)) ;
      var_increment_5990 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 237)) ;
      var_increment_5990 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression_6124 ;
    nt_register_5F_parsing_ (var_registerExpression_6124, inCompiler) ;
    GALGAS_bool var_w_5F_isTarget_6149 ;
    switch (select_baseline_5F_syntax_13 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_6149 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 244)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas", 244)) ;
      var_w_5F_isTarget_6149 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString_6279 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 246)) ;
    GALGAS_string var_condition_6305 = var_conditionString_6279.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("baseline_syntax.galgas", 247)) ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsNotEqual, var_condition_6305.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_conditionString_6279.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_condition_6305, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 249)).add_operation (GALGAS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 249)), fixItArray9  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 249)) ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 251)) ;
    GALGAS_baseline_5F_instruction var_instruction_6532 ;
    nt_baseline_5F_simple_5F_instruction_ (var_instruction_6532, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::constructor_new (var_instructionLocation_5949, var_instruction_6532, var_increment_5990, var_registerExpression_6124, var_w_5F_isTarget_6149  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 253)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas", 261)) ;
    GALGAS_lstring var_ifLabel_6744 ;
    switch (select_baseline_5F_syntax_14 (inCompiler)) {
    case 1: {
      var_ifLabel_6744 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 264))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 264)) ;
    } break ;
    case 2: {
      var_ifLabel_6744 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 266)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_6744, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 267)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_ (var_ifLabel_6744, outArgument_outInstruction, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 270)) ;
    GALGAS_lstring var_endIfLabel_6984 ;
    switch (select_baseline_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_endIfLabel_6984 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 273))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 273)) ;
    } break ;
    case 2: {
      var_endIfLabel_6984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 275)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsNotEqual, var_ifLabel_6744.readProperty_string ().objectCompare (var_endIfLabel_6984.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string temp_11 ;
        const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_ifLabel_6744.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          temp_11 = var_ifLabel_6744.readProperty_string () ;
        }else if (kBoolFalse == test_12) {
          temp_11 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_endIfLabel_6984.readProperty_location (), GALGAS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 278)), fixItArray13  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 278)) ;
      }
    }
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas", 282)) ;
    GALGAS_lstring var_doLabel_7323 ;
    switch (select_baseline_5F_syntax_16 (inCompiler)) {
    case 1: {
      var_doLabel_7323 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 285))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 285)) ;
    } break ;
    case 2: {
      var_doLabel_7323 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 287)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_7323, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 288)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_7474 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 290)) ;
    GALGAS_baseline_5F_instructionList var_repeatedInstructionList_7552 ;
    nt_baseline_5F_instruction_5F_list_ (var_repeatedInstructionList_7552, ioArgument_ioLabelMap, inCompiler) ;
    GALGAS_location var_endOfRepeatedInstructionList_7602 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 292)) ;
    GALGAS_baseline_5F_partList var_whilePartList_7641 = GALGAS_baseline_5F_partList::constructor_emptyList (SOURCE_FILE ("baseline_syntax.galgas", 293)) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("baseline_syntax.galgas", 295)) ;
      GALGAS_lstring var_whileLabel_7729 ;
      switch (select_baseline_5F_syntax_18 (inCompiler)) {
      case 1: {
        var_whileLabel_7729 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 298))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 298)) ;
      } break ;
      case 2: {
        var_whileLabel_7729 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 300)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, var_doLabel_7323.readProperty_string ().objectCompare (var_whileLabel_7729.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_doLabel_7323.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = var_doLabel_7323.readProperty_string () ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string ("empty") ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (var_whileLabel_7729.readProperty_location (), GALGAS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 303)), fixItArray18  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 303)) ;
        }
      }
      GALGAS_baseline_5F_conditionExpression var_whileCondition_8107 ;
      nt_baseline_5F_condition_5F_expression_ (var_whileCondition_8107, inCompiler) ;
      GALGAS_baseline_5F_instructionList var_instructionList_8162 ;
      nt_baseline_5F_instruction_5F_list_ (var_instructionList_8162, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_7641.addAssign_operation (var_whileCondition_8107, var_instructionList_8162, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 308))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 308)) ;
      switch (select_baseline_5F_syntax_17 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_14 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 311)) ;
    GALGAS_lstring var_endDoLabel_8303 ;
    switch (select_baseline_5F_syntax_19 (inCompiler)) {
    case 1: {
      var_endDoLabel_8303 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 314))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 314)) ;
    } break ;
    case 2: {
      var_endDoLabel_8303 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 316)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (kIsNotEqual, var_doLabel_7323.readProperty_string ().objectCompare (var_endDoLabel_8303.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_string temp_20 ;
        const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, var_doLabel_7323.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_21) {
          temp_20 = var_doLabel_7323.readProperty_string () ;
        }else if (kBoolFalse == test_21) {
          temp_20 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (var_endDoLabel_8303.readProperty_location (), GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 319)), fixItArray22  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 319)) ;
      }
    }
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_do_5F_while::constructor_new (var_instructionLocation_7474, var_repeatedInstructionList_7552, var_endOfRepeatedInstructionList_7602, var_whilePartList_7641  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 322)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("baseline_syntax.galgas", 328)) ;
    GALGAS_location var_instructionLocation_8832 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 329)) ;
    GALGAS_luint var_occurrenceFactor_8892 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas", 330)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_MNOP::constructor_new (var_instructionLocation_8832, var_occurrenceFactor_8892  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 331)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas", 127)) ;
    switch (select_baseline_5F_syntax_7 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 132)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 136)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 137)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 138)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 140)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 142)) ;
    nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 152)) ;
    switch (select_baseline_5F_syntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 157)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("baseline_syntax.galgas", 164)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 166)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("baseline_syntax.galgas", 171)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 173)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("baseline_syntax.galgas", 178)) ;
    switch (select_baseline_5F_syntax_9 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 183)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 188)) ;
    switch (select_baseline_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 193)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas", 205)) ;
    switch (select_baseline_5F_syntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 211)) ;
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 213)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 218)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 222)) ;
    nt_baseline_5F_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas", 231)) ;
    switch (select_baseline_5F_syntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 235)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 237)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_baseline_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 244)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas", 244)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 246)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 251)) ;
    nt_baseline_5F_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas", 261)) ;
    switch (select_baseline_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 266)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 270)) ;
    switch (select_baseline_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 275)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas", 282)) ;
    switch (select_baseline_5F_syntax_16 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 287)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("baseline_syntax.galgas", 295)) ;
      switch (select_baseline_5F_syntax_18 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 300)) ;
      } break ;
      default:
        break ;
      }
      nt_baseline_5F_condition_5F_expression_parse (inCompiler) ;
      nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
      switch (select_baseline_5F_syntax_17 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 311)) ;
    switch (select_baseline_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 316)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("baseline_syntax.galgas", 328)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas", 330)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas", 127)) ;
    switch (select_baseline_5F_syntax_7 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 132)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 136)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 137)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 138)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 140)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 142)) ;
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 152)) ;
    switch (select_baseline_5F_syntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 157)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("baseline_syntax.galgas", 164)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 166)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("baseline_syntax.galgas", 171)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 173)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("baseline_syntax.galgas", 178)) ;
    switch (select_baseline_5F_syntax_9 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 183)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 188)) ;
    switch (select_baseline_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 193)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas", 205)) ;
    switch (select_baseline_5F_syntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 211)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 213)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 218)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 222)) ;
    nt_baseline_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas", 231)) ;
    switch (select_baseline_5F_syntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 235)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 237)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_baseline_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 244)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas", 244)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 246)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 251)) ;
    nt_baseline_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas", 261)) ;
    switch (select_baseline_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 266)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 270)) ;
    switch (select_baseline_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 275)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas", 282)) ;
    switch (select_baseline_5F_syntax_16 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 287)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("baseline_syntax.galgas", 295)) ;
      switch (select_baseline_5F_syntax_18 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 300)) ;
      } break ;
      default:
        break ;
      }
      nt_baseline_5F_condition_5F_expression_indexing (inCompiler) ;
      nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
      switch (select_baseline_5F_syntax_17 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas", 311)) ;
    switch (select_baseline_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 316)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("baseline_syntax.galgas", 328)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas", 330)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GALGAS_lstring constinArgument_ifLabel,
                                                                                                          GALGAS_baseline_5F_instruction & outArgument_outInstruction,
                                                                                                          GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_9222 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 342)) ;
  GALGAS_baseline_5F_conditionExpression var_structured_5F_if_5F_condition_9302 ;
  nt_baseline_5F_condition_5F_expression_ (var_structured_5F_if_5F_condition_9302, inCompiler) ;
  GALGAS_baseline_5F_instructionList var_thenInstructionList_9357 ;
  nt_baseline_5F_instruction_5F_list_ (var_thenInstructionList_9357, ioArgument_ioLabelMap, inCompiler) ;
  GALGAS_baseline_5F_instructionList var_elseInstructionList_9422 ;
  switch (select_baseline_5F_syntax_20 (inCompiler)) {
  case 1: {
    var_elseInstructionList_9422 = GALGAS_baseline_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_syntax.galgas", 347)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("baseline_syntax.galgas", 349)) ;
    GALGAS_lstring var_elsifIfLabel_9541 ;
    switch (select_baseline_5F_syntax_21 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_9541 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 352))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 352)) ;
    } break ;
    case 2: {
      var_elsifIfLabel_9541 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 354)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_9541.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_9541.readProperty_location (), GALGAS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 357)), fixItArray3  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 357)) ;
      }
    }
    GALGAS_baseline_5F_instruction var_elsifPartInstruction_9927 ;
    nt_baseline_5F_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_9927, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_9422 = GALGAS_baseline_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_syntax.galgas", 361)) ;
    var_elseInstructionList_9422.addAssign_operation (var_elsifPartInstruction_9927  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 362)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("baseline_syntax.galgas", 364)) ;
    GALGAS_lstring var_elseLabel_10095 ;
    switch (select_baseline_5F_syntax_22 (inCompiler)) {
    case 1: {
      var_elseLabel_10095 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 367))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 367)) ;
    } break ;
    case 2: {
      var_elseLabel_10095 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 369)) ;
    } break ;
    default:
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elseLabel_10095.readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string ("empty") ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elseLabel_10095.readProperty_location (), GALGAS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 372)), fixItArray7  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 372)) ;
      }
    }
    nt_baseline_5F_instruction_5F_list_ (var_elseInstructionList_9422, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElsePartLocation_10502 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 377)) ;
  outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_structured_5F_if::constructor_new (var_instructionLocation_9222, var_structured_5F_if_5F_condition_9302, var_thenInstructionList_9357, var_elseInstructionList_9422, var_endOfElsePartLocation_10502  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 378)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_parse (inCompiler) ;
  nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_baseline_5F_syntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("baseline_syntax.galgas", 349)) ;
    switch (select_baseline_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 354)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("baseline_syntax.galgas", 364)) ;
    switch (select_baseline_5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 369)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_indexing (inCompiler) ;
  nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_baseline_5F_syntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("baseline_syntax.galgas", 349)) ;
    switch (select_baseline_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 354)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("baseline_syntax.galgas", 364)) ;
    switch (select_baseline_5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas", 369)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GALGAS_baseline_5F_instruction & outArgument_outInstruction,
                                                                                                C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_baseline_5F_syntax_23 (inCompiler)) {
  case 1: {
    GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_10908 ;
    switch (select_baseline_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 392)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_ADDWF (SOURCE_FILE ("baseline_syntax.galgas", 393)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 395)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_ANDWF (SOURCE_FILE ("baseline_syntax.galgas", 396)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 398)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_COMF (SOURCE_FILE ("baseline_syntax.galgas", 399)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 401)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECF (SOURCE_FILE ("baseline_syntax.galgas", 402)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 404)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCF (SOURCE_FILE ("baseline_syntax.galgas", 405)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 407)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_IORWF (SOURCE_FILE ("baseline_syntax.galgas", 408)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 410)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("baseline_syntax.galgas", 411)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 413)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_RLF (SOURCE_FILE ("baseline_syntax.galgas", 414)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 416)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_RRF (SOURCE_FILE ("baseline_syntax.galgas", 417)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 419)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_SUBWF (SOURCE_FILE ("baseline_syntax.galgas", 420)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 422)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("baseline_syntax.galgas", 423)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 425)) ;
      var_baseCode_10908 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_XORWF (SOURCE_FILE ("baseline_syntax.galgas", 426)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_11472 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 428)) ;
    GALGAS_registerExpression var_registerExpression_11536 ;
    nt_register_5F_parsing_ (var_registerExpression_11536, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_11582 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_11582, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_FD::constructor_new (var_instructionLocation_11472, var_baseCode_10908, var_registerExpression_11536, var_W_5F_isDestination_11582  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 431)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_baseCode_10908.objectCompare (GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("baseline_syntax.galgas", 438)))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_11582.operator_not (SOURCE_FILE ("baseline_syntax.galgas", 438)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_11472, GALGAS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 439)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 443)) ;
    GALGAS_location var_instructionLocation_12094 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 444)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 445)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 446)) ;
    GALGAS_registerExpression var_registerName_12159 ;
    nt_register_5F_parsing_ (var_registerName_12159, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_FD::constructor_new (var_instructionLocation_12094, GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("baseline_syntax.galgas", 450)), var_registerName_12159, GALGAS_bool (false)  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 448)) ;
  } break ;
  case 3: {
    GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code var_FAinstruction_12374 ;
    switch (select_baseline_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 457)) ;
      var_FAinstruction_12374 = GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("baseline_syntax.galgas", 458)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 460)) ;
      var_FAinstruction_12374 = GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("baseline_syntax.galgas", 461)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_12590 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 463)) ;
    GALGAS_registerExpression var_registerExpression_12654 ;
    nt_register_5F_parsing_ (var_registerExpression_12654, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_F::constructor_new (var_instructionLocation_12590, var_FAinstruction_12374, var_registerExpression_12654  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 465)) ;
  } break ;
  case 4: {
    GALGAS_baseline_5F_bit_5F_oriented_5F_op var_bitOrientedOp_12834 ;
    switch (select_baseline_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 472)) ;
      var_bitOrientedOp_12834 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_syntax.galgas", 472)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 474)) ;
      var_bitOrientedOp_12834 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_syntax.galgas", 474)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_13016 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 476)) ;
    GALGAS_registerExpression var_registerExpression_13080 ;
    nt_register_5F_parsing_ (var_registerExpression_13080, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 478)) ;
    GALGAS_bitNumberExpression var_bitNumberExpression_13138 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_13138, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_FB::constructor_new (var_instructionLocation_13016, var_bitOrientedOp_12834, var_registerExpression_13080, var_bitNumberExpression_13138  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 480)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("baseline_syntax.galgas", 486)) ;
    GALGAS_location var_instructionLocation_13347 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 487)) ;
    GALGAS_lstring var_targetLabelName_13411 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 488)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_GOTO::constructor_new (var_instructionLocation_13347, var_targetLabelName_13411  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 489)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("baseline_syntax.galgas", 493)) ;
    GALGAS_location var_instructionLocation_13592 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 494)) ;
    GALGAS_lstring var_targetLabelName_13656 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 495)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_CALL::constructor_new (var_instructionLocation_13592, var_targetLabelName_13656  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 496)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 500)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 501)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_CLRW (SOURCE_FILE ("baseline_syntax.galgas", 501))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 501)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("baseline_syntax.galgas", 503)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 504)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_CLRWDT (SOURCE_FILE ("baseline_syntax.galgas", 504))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 504)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("baseline_syntax.galgas", 506)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 507)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_NOP (SOURCE_FILE ("baseline_syntax.galgas", 507))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 507)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_option COMMA_SOURCE_FILE ("baseline_syntax.galgas", 509)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 510)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_OPTION_5F_ (SOURCE_FILE ("baseline_syntax.galgas", 510))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 510)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("baseline_syntax.galgas", 512)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 513)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_SLEEP (SOURCE_FILE ("baseline_syntax.galgas", 513))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 513)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tris COMMA_SOURCE_FILE ("baseline_syntax.galgas", 515)) ;
    GALGAS_lstring var_operand_14487 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 516)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_TRIS::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 517)), var_operand_14487  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 517)) ;
  } break ;
  case 13: {
    GALGAS_baseline_5F_literal_5F_instruction_5F_opcode var_literalInstruction_14637 ;
    switch (select_baseline_5F_syntax_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 521)) ;
      var_literalInstruction_14637 = GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_ANDLW (SOURCE_FILE ("baseline_syntax.galgas", 521)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 523)) ;
      var_literalInstruction_14637 = GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_IORLW (SOURCE_FILE ("baseline_syntax.galgas", 523)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 525)) ;
      var_literalInstruction_14637 = GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_syntax.galgas", 525)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 527)) ;
      var_literalInstruction_14637 = GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_XORLW (SOURCE_FILE ("baseline_syntax.galgas", 527)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation_15031 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 529)) ;
    GALGAS_immediatExpression var_expression_15091 ;
    nt_immediate_5F_expression_ (var_expression_15091, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_literalOperation::constructor_new (var_instructionLocation_15031, var_literalInstruction_14637, var_expression_15091  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 531)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_23 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 392)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 395)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 398)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 401)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 404)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 407)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 410)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 413)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 416)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 419)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 422)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 425)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 443)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 445)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 446)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 3: {
    switch (select_baseline_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 457)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 460)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    switch (select_baseline_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 472)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 474)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 478)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("baseline_syntax.galgas", 486)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 488)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("baseline_syntax.galgas", 493)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 495)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 500)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("baseline_syntax.galgas", 503)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("baseline_syntax.galgas", 506)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_option COMMA_SOURCE_FILE ("baseline_syntax.galgas", 509)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("baseline_syntax.galgas", 512)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tris COMMA_SOURCE_FILE ("baseline_syntax.galgas", 515)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 516)) ;
  } break ;
  case 13: {
    switch (select_baseline_5F_syntax_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 521)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 523)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 525)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 527)) ;
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

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_23 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 392)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 395)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 398)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 401)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 404)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 407)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 410)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 413)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 416)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 419)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 422)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 425)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 443)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 445)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 446)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_baseline_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 457)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 460)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    switch (select_baseline_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 472)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 474)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 478)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("baseline_syntax.galgas", 486)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 488)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("baseline_syntax.galgas", 493)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 495)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 500)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("baseline_syntax.galgas", 503)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("baseline_syntax.galgas", 506)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_option COMMA_SOURCE_FILE ("baseline_syntax.galgas", 509)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("baseline_syntax.galgas", 512)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_tris COMMA_SOURCE_FILE ("baseline_syntax.galgas", 515)) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 516)) ;
  } break ;
  case 13: {
    switch (select_baseline_5F_syntax_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 521)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 523)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 525)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas", 527)) ;
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

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 542)) ;
  GALGAS_baseline_5F_conditionExpression var_condition_15427 ;
  nt_baseline_5F_condition_5F_factor_ (var_condition_15427, inCompiler) ;
  outArgument_outCondition = GALGAS_baseline_5F_negateCondition::constructor_new (var_condition_15427  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 544)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 542)) ;
  nt_baseline_5F_condition_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 542)) ;
  nt_baseline_5F_condition_5F_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_baseline_5F_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  switch (select_baseline_5F_syntax_28 (inCompiler)) {
  case 1: {
    GALGAS_bool var_isIncrement_15853 ;
    switch (select_baseline_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 561)) ;
      var_isIncrement_15853 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 563)) ;
      var_isIncrement_15853 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression_15991 ;
    nt_register_5F_parsing_ (var_registerExpression_15991, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination_16021 ;
    switch (select_baseline_5F_syntax_30 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_16021 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 570)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas", 570)) ;
      var_W_5F_isDestination_16021 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString_16161 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 572)) ;
    GALGAS_string var_condition_16187 = var_conditionString_16161.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("baseline_syntax.galgas", 573)) ;
    GALGAS_bool var_branchIfZero_16257 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_condition_16187.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_branchIfZero_16257 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_condition_16187.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_branchIfZero_16257 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_16161.readProperty_location (), GALGAS_string ("invalid '").add_operation (var_conditionString_16161.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 580)).add_operation (GALGAS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 580)), fixItArray2  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 580)) ;
        var_branchIfZero_16257.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GALGAS_baseline_5F_incDecRegisterInCondition::constructor_new (var_registerExpression_15991, var_isIncrement_15853, var_W_5F_isDestination_16021, var_branchIfZero_16257  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 584)) ;
  } break ;
  case 2: {
    GALGAS_registerExpression var_registerExpression_16724 ;
    nt_register_5F_parsing_ (var_registerExpression_16724, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 591)) ;
    GALGAS_bitNumberExpression var_bitNumberExpression_16782 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_16782, inCompiler) ;
    outArgument_outCondition = GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (var_registerExpression_16724, var_bitNumberExpression_16782  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 593)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 561)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 563)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_baseline_5F_syntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 570)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas", 570)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 572)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 591)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 561)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas", 563)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_baseline_5F_syntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 570)) ;
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas", 570)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas", 572)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 591)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                                  C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 604)) ;
  nt_baseline_5F_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 608)) ;
      GALGAS_baseline_5F_conditionExpression var_c_17173 ;
      nt_baseline_5F_condition_5F_term_ (var_c_17173, inCompiler) ;
      GALGAS_baseline_5F_conditionExpression var_rc_17214 = GALGAS_baseline_5F_negateCondition::constructor_new (var_c_17173  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 610)) ;
      GALGAS_baseline_5F_conditionExpression var_lc_17294 = GALGAS_baseline_5F_negateCondition::constructor_new (outArgument_outCondition  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 611)) ;
      outArgument_outCondition = GALGAS_baseline_5F_negateCondition::constructor_new (GALGAS_baseline_5F_andCondition::constructor_new (var_lc_17294, var_rc_17214  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 612))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 612)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 614)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 604)) ;
  nt_baseline_5F_condition_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 608)) ;
      nt_baseline_5F_condition_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 614)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 604)) ;
  nt_baseline_5F_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 608)) ;
      nt_baseline_5F_condition_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 614)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                             C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_baseline_5F_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 624)) ;
      GALGAS_baseline_5F_conditionExpression var_c_17696 ;
      nt_baseline_5F_condition_5F_factor_ (var_c_17696, inCompiler) ;
      outArgument_outCondition = GALGAS_baseline_5F_andCondition::constructor_new (outArgument_outCondition, var_c_17696  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 626)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 624)) ;
      nt_baseline_5F_condition_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("baseline_syntax.galgas", 624)) ;
      nt_baseline_5F_condition_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

