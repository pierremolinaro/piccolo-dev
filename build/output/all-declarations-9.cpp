#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_structured_5F_if::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIfCondition.objectCompare (p->mAttribute_mIfCondition) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenInstructionList.objectCompare (p->mAttribute_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfElsePartLocation.objectCompare (p->mAttribute_mEndOfElsePartLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_structured_5F_if::objectCompare (const GALGAS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_structured_5F_if::GALGAS_midrange_5F_instruction_5F_structured_5F_if (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_structured_5F_if::GALGAS_midrange_5F_instruction_5F_structured_5F_if (const cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_structured_5F_if GALGAS_midrange_5F_instruction_5F_structured_5F_if::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_midrange_5F_conditionExpression & inAttribute_mIfCondition,
                                                                                                                        const GALGAS_midrange_5F_instructionList & inAttribute_mThenInstructionList,
                                                                                                                        const GALGAS_midrange_5F_instructionList & inAttribute_mElseInstructionList,
                                                                                                                        const GALGAS_location & inAttribute_mEndOfElsePartLocation
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_structured_5F_if result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIfCondition.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElsePartLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_structured_5F_if (inAttribute_mInstructionLocation, inAttribute_mIfCondition, inAttribute_mThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElsePartLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_instruction_5F_structured_5F_if::reader_mIfCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mIfCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression cPtr_midrange_5F_instruction_5F_structured_5F_if::reader_mIfCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIfCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_structured_5F_if::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList cPtr_midrange_5F_instruction_5F_structured_5F_if::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_structured_5F_if::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList cPtr_midrange_5F_instruction_5F_structured_5F_if::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_instruction_5F_structured_5F_if::reader_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mEndOfElsePartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_midrange_5F_instruction_5F_structured_5F_if::reader_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfElsePartLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @midrange_instruction_structured_if class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_structured_5F_if::cPtr_midrange_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_midrange_5F_conditionExpression & in_mIfCondition,
                                                                                                    const GALGAS_midrange_5F_instructionList & in_mThenInstructionList,
                                                                                                    const GALGAS_midrange_5F_instructionList & in_mElseInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mIfCondition (in_mIfCondition),
mAttribute_mThenInstructionList (in_mThenInstructionList),
mAttribute_mElseInstructionList (in_mElseInstructionList),
mAttribute_mEndOfElsePartLocation (in_mEndOfElsePartLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;
}

void cPtr_midrange_5F_instruction_5F_structured_5F_if::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_structured_if:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIfCondition.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfElsePartLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_structured_5F_if (mAttribute_mInstructionLocation, mAttribute_mIfCondition, mAttribute_mThenInstructionList, mAttribute_mElseInstructionList, mAttribute_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_instruction_structured_if type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ("midrange_instruction_structured_if",
                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_structured_5F_if GALGAS_midrange_5F_instruction_5F_structured_5F_if::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_structured_5F_if result ;
  const GALGAS_midrange_5F_instruction_5F_structured_5F_if * p = (const GALGAS_midrange_5F_instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction::GALGAS_midrange_5F_intermediate_5F_instruction (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction::GALGAS_midrange_5F_intermediate_5F_instruction (const cPtr_midrange_5F_intermediate_5F_instruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @midrange_intermediate_instruction class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction::cPtr_midrange_5F_intermediate_5F_instruction (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_intermediate_instruction type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ("midrange_intermediate_instruction",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction GALGAS_midrange_5F_intermediate_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction * p = (const GALGAS_midrange_5F_intermediate_5F_instruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_NULL::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_NULL::objectCompare (const GALGAS_midrange_5F_intermediate_5F_NULL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_NULL::GALGAS_midrange_5F_intermediate_5F_NULL (void) :
GALGAS_midrange_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_NULL GALGAS_midrange_5F_intermediate_5F_NULL::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_NULL::GALGAS_midrange_5F_intermediate_5F_NULL (const cPtr_midrange_5F_intermediate_5F_NULL * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_NULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_NULL GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_NULL result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_NULL (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @midrange_intermediate_NULL class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_NULL::cPtr_midrange_5F_intermediate_5F_NULL (LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_NULL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;
}

void cPtr_midrange_5F_intermediate_5F_NULL::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@midrange_intermediate_NULL]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_NULL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_NULL (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @midrange_intermediate_NULL type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ("midrange_intermediate_NULL",
                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_NULL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_NULL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_NULL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_NULL GALGAS_midrange_5F_intermediate_5F_NULL::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_NULL result ;
  const GALGAS_midrange_5F_intermediate_5F_NULL * p = (const GALGAS_midrange_5F_intermediate_5F_NULL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_NULL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_NULL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_midrange_5F_intermediate_5F_actualInstruction::objectCompare (const GALGAS_midrange_5F_intermediate_5F_actualInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_actualInstruction::GALGAS_midrange_5F_intermediate_5F_actualInstruction (void) :
GALGAS_midrange_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_actualInstruction::GALGAS_midrange_5F_intermediate_5F_actualInstruction (const cPtr_midrange_5F_intermediate_5F_actualInstruction * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_intermediate_5F_actualInstruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_actualInstruction * p = (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_midrange_5F_intermediate_5F_actualInstruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @midrange_intermediate_actualInstruction class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_actualInstruction::cPtr_midrange_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @midrange_intermediate_actualInstruction type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction ("midrange_intermediate_actualInstruction",
                                                                      & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_actualInstruction GALGAS_midrange_5F_intermediate_5F_actualInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_actualInstruction result ;
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction * p = (const GALGAS_midrange_5F_intermediate_5F_actualInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_CALL * p = (const cPtr_midrange_5F_intermediate_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_CALL::objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_CALL::GALGAS_midrange_5F_intermediate_5F_CALL (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_CALL::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_CALL::GALGAS_midrange_5F_intermediate_5F_CALL (const cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_CALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_CALL::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_CALL * p = (const cPtr_midrange_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_midrange_5F_intermediate_5F_CALL::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @midrange_intermediate_CALL class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_CALL::cPtr_midrange_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;
}

void cPtr_midrange_5F_intermediate_5F_CALL::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_CALL:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_CALL (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @midrange_intermediate_CALL type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ("midrange_intermediate_CALL",
                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL result ;
  const GALGAS_midrange_5F_intermediate_5F_CALL * p = (const GALGAS_midrange_5F_intermediate_5F_CALL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_GOTO * p = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_GOTO::objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_GOTO::GALGAS_midrange_5F_intermediate_5F_GOTO (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_GOTO::GALGAS_midrange_5F_intermediate_5F_GOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_GOTO) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_GOTO::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_GOTO * p = (const cPtr_midrange_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_midrange_5F_intermediate_5F_GOTO::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @midrange_intermediate_GOTO class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_GOTO::cPtr_midrange_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;
}

void cPtr_midrange_5F_intermediate_5F_GOTO::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_GOTO:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_GOTO (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @midrange_intermediate_GOTO type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ("midrange_intermediate_GOTO",
                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO result ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO * p = (const GALGAS_midrange_5F_intermediate_5F_GOTO *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_JSR * p = (const cPtr_midrange_5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBit_31__31_.objectCompare (p->mAttribute_mBit_31__31_) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBit_31__32_.objectCompare (p->mAttribute_mBit_31__32_) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_JSR::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_JSR::GALGAS_midrange_5F_intermediate_5F_JSR (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_JSR::GALGAS_midrange_5F_intermediate_5F_JSR (const cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JSR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__31_,
                                                                                                const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__32_
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mBit_31__31_.isValid () && inAttribute_mBit_31__32_.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mBit_31__31_, inAttribute_mBit_31__32_ COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_JSR * p = (const cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_midrange_5F_intermediate_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JSR::reader_mBit_31__31_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_JSR * p = (const cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    result = p->mAttribute_mBit_31__31_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_call_5F_goto_5F_bit cPtr_midrange_5F_intermediate_5F_JSR::reader_mBit_31__31_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBit_31__31_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JSR::reader_mBit_31__32_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_JSR * p = (const cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    result = p->mAttribute_mBit_31__32_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_call_5F_goto_5F_bit cPtr_midrange_5F_intermediate_5F_JSR::reader_mBit_31__32_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBit_31__32_ ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @midrange_intermediate_JSR class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_JSR::cPtr_midrange_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel,
                                                                            const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                            const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mBit_31__31_ (in_mBit_31__31_),
mAttribute_mBit_31__32_ (in_mBit_31__32_) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;
}

void cPtr_midrange_5F_intermediate_5F_JSR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_JSR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBit_31__31_.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBit_31__32_.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_JSR (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mBit_31__31_, mAttribute_mBit_31__32_ COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_intermediate_JSR type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ("midrange_intermediate_JSR",
                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR result ;
  const GALGAS_midrange_5F_intermediate_5F_JSR * p = (const GALGAS_midrange_5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBit_31__31_.objectCompare (p->mAttribute_mBit_31__31_) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBit_31__32_.objectCompare (p->mAttribute_mBit_31__32_) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_JUMP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_JUMP::GALGAS_midrange_5F_intermediate_5F_JUMP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_JUMP::GALGAS_midrange_5F_intermediate_5F_JUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                  const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__31_,
                                                                                                  const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__32_
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mBit_31__31_.isValid () && inAttribute_mBit_31__32_.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mBit_31__31_, inAttribute_mBit_31__32_ COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_midrange_5F_intermediate_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP::reader_mBit_31__31_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    result = p->mAttribute_mBit_31__31_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_call_5F_goto_5F_bit cPtr_midrange_5F_intermediate_5F_JUMP::reader_mBit_31__31_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBit_31__31_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP::reader_mBit_31__32_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    result = p->mAttribute_mBit_31__32_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_call_5F_goto_5F_bit cPtr_midrange_5F_intermediate_5F_JUMP::reader_mBit_31__32_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBit_31__32_ ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @midrange_intermediate_JUMP class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_JUMP::cPtr_midrange_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                              const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mBit_31__31_ (in_mBit_31__31_),
mAttribute_mBit_31__32_ (in_mBit_31__32_) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;
}

void cPtr_midrange_5F_intermediate_5F_JUMP::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_JUMP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBit_31__31_.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBit_31__32_.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_JUMP (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mBit_31__31_, mAttribute_mBit_31__32_ COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @midrange_intermediate_JUMP type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ("midrange_intermediate_JUMP",
                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP result ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP * p = (const GALGAS_midrange_5F_intermediate_5F_JUMP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranchIfZero.objectCompare (p->mAttribute_mBranchIfZero) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::objectCompare (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                        GALGAS_midrange_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                        GALGAS_string::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE)
                                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      Pointer class for @midrange_intermediate_incDecRegisterInCondition class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                                                                        const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                        const GALGAS_string & in_mTargetLabel,
                                                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mIncrement (in_mIncrement),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mAttribute_mBranchIfZero (in_mBranchIfZero) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;
}

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_incDecRegisterInCondition:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (mAttribute_mInstructionLocation, mAttribute_mRegisterDescription, mAttribute_mTargetLabel, mAttribute_mIncrement, mAttribute_m_5F_W_5F_isDestination, mAttribute_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @midrange_intermediate_incDecRegisterInCondition type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ("midrange_intermediate_incDecRegisterInCondition",
                                                                              & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition result ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSkipIfSet.objectCompare (p->mAttribute_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                         GALGAS_bool::constructor_default (HERE),
                                                                                         GALGAS_midrange_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                         GALGAS_uint::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    result = p->mAttribute_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @midrange_intermediate_instruction_BitTestSkip class                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                          const GALGAS_bool & in_mSkipIfSet,
                                                                                                                          const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                          const GALGAS_uint & in_mBitNumber
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSkipIfSet (in_mSkipIfSet),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_BitTestSkip:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (mAttribute_mInstructionLocation, mAttribute_mSkipIfSet, mAttribute_mRegisterDescription, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_intermediate_instruction_BitTestSkip type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ("midrange_intermediate_instruction_BitTestSkip",
                                                                               & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @midrange_intermediate_instruction_CLRW class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (const GALGAS_location & in_mInstructionLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_CLRW:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @midrange_intermediate_instruction_CLRW type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ("midrange_intermediate_instruction_CLRW",
                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRW", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @midrange_intermediate_instruction_CLRWDT class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const GALGAS_location & in_mInstructionLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_CLRWDT:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_intermediate_instruction_CLRWDT type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ("midrange_intermediate_instruction_CLRWDT",
                                                                          & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRWDT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFinstruction.objectCompare (p->mAttribute_mFinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                          const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mFinstruction,
                                                                                                                          const GALGAS_midrange_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFinstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mFinstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::reader_mFinstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
    result = p->mAttribute_mFinstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code cPtr_midrange_5F_intermediate_5F_instruction_5F_F::reader_mFinstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFinstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression cPtr_midrange_5F_intermediate_5F_instruction_5F_F::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @midrange_intermediate_instruction_F class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_F::cPtr_midrange_5F_intermediate_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                                                      const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                                                                                                      const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mFinstruction (in_mFinstruction),
mAttribute_mRegisterDescription (in_mRegisterDescription) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_F:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F (mAttribute_mInstructionLocation, mAttribute_mFinstruction, mAttribute_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_intermediate_instruction_F type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ("midrange_intermediate_instruction_F",
                                                                     & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_F GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_F result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitOrientedOp.objectCompare (p->mAttribute_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::reader_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitOrientedOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bit_5F_oriented_5F_op cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::reader_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitOrientedOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @midrange_intermediate_instruction_FB class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                                        const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_uint & in_mBitNumber
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBitOrientedOp (in_mBitOrientedOp),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_FB:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (mAttribute_mInstructionLocation, mAttribute_mBitOrientedOp, mAttribute_mRegisterDescription, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @midrange_intermediate_instruction_FB type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ("midrange_intermediate_instruction_FB",
                                                                      & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mAttribute_mInstruction_5F_FD_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::reader_mInstruction_5F_FD_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    result = p->mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::reader_mInstruction_5F_FD_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @midrange_intermediate_instruction_FD class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                                                        const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction_5F_FD_5F_base_5F_code (in_mInstruction_5F_FD_5F_base_5F_code),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_FD:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (mAttribute_mInstructionLocation, mAttribute_mInstruction_5F_FD_5F_base_5F_code, mAttribute_mRegisterDescription, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @midrange_intermediate_instruction_FD type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ("midrange_intermediate_instruction_FD",
                                                                      & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOccurrenceFactor.objectCompare (p->mAttribute_mOccurrenceFactor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                  GALGAS_luint::constructor_default (HERE)
                                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
    result = p->mAttribute_mOccurrenceFactor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOccurrenceFactor ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @midrange_intermediate_instruction_MNOP class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                                                            const GALGAS_luint & in_mOccurrenceFactor
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_MNOP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (mAttribute_mInstructionLocation, mAttribute_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @midrange_intermediate_instruction_MNOP type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ("midrange_intermediate_instruction_MNOP",
                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @midrange_intermediate_instruction_NOP class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (const GALGAS_location & in_mInstructionLocation
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_NOP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @midrange_intermediate_instruction_NOP type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ("midrange_intermediate_instruction_NOP",
                                                                       & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_NOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @midrange_intermediate_instruction_RETFIE class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const GALGAS_location & in_mInstructionLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_RETFIE:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_intermediate_instruction_RETFIE type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ("midrange_intermediate_instruction_RETFIE",
                                                                          & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETFIE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @midrange_intermediate_instruction_RETURN class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (const GALGAS_location & in_mInstructionLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_RETURN:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_intermediate_instruction_RETURN type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ("midrange_intermediate_instruction_RETURN",
                                                                          & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETURN", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @midrange_intermediate_instruction_SLEEP class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const GALGAS_location & in_mInstructionLocation
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_SLEEP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @midrange_intermediate_instruction_SLEEP type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ("midrange_intermediate_instruction_SLEEP",
                                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_SLEEP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralInstruction.objectCompare (p->mAttribute_mLiteralInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralValue.objectCompare (p->mAttribute_mLiteralValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                        const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inAttribute_mLiteralInstruction,
                                                                                                                                                        const GALGAS_uint & inAttribute_mLiteralValue
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralInstruction.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mLiteralInstruction, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    result = p->mAttribute_mLiteralInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::reader_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    result = p->mAttribute_mLiteralValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::reader_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                     Pointer class for @midrange_intermediate_instruction_literalOperation class                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                    const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                                    const GALGAS_uint & in_mLiteralValue
                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mLiteralInstruction (in_mLiteralInstruction),
mAttribute_mLiteralValue (in_mLiteralValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::description (C_String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_instruction_literalOperation:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (mAttribute_mInstructionLocation, mAttribute_mLiteralInstruction, mAttribute_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @midrange_intermediate_instruction_literalOperation type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ("midrange_intermediate_instruction_literalOperation",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLabel.objectCompare (p->mAttribute_mLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsDeletable.objectCompare (p->mAttribute_mIsDeletable) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GALGAS_midrange_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                              GALGAS_bool::constructor_default (HERE)
                                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (const GALGAS_lstring & inAttribute_mLabel,
                                                                                                                        const GALGAS_bool & inAttribute_mIsDeletable
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (inAttribute_mLabel.isValid () && inAttribute_mIsDeletable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (inAttribute_mLabel, inAttribute_mIsDeletable COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::reader_mLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    result = p->mAttribute_mLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::reader_mLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::reader_mIsDeletable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    result = p->mAttribute_mIsDeletable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::reader_mIsDeletable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsDeletable ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @midrange_intermediate_pseudo_LABEL class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel,
                                                                                                    const GALGAS_bool & in_mIsDeletable
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (THERE),
mAttribute_mLabel (in_mLabel),
mAttribute_mIsDeletable (in_mIsDeletable) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_pseudo_LABEL:" ;
  mAttribute_mLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsDeletable.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (mAttribute_mLabel, mAttribute_mIsDeletable COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_intermediate_pseudo_LABEL type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ("midrange_intermediate_pseudo_LABEL",
                                                                    & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_pseudo_LABEL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOrigin.objectCompare (p->mAttribute_mOrigin) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG (void) :
GALGAS_midrange_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (const GALGAS_uint & inAttribute_mOrigin
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG result ;
  if (inAttribute_mOrigin.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (inAttribute_mOrigin COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::reader_mOrigin (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
    result = p->mAttribute_mOrigin ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::reader_mOrigin (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @midrange_intermediate_pseudo_ORG class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (const GALGAS_uint & in_mOrigin
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (THERE),
mAttribute_mOrigin (in_mOrigin) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;
}

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_pseudo_ORG:" ;
  mAttribute_mOrigin.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (mAttribute_mOrigin COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_intermediate_pseudo_ORG type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ("midrange_intermediate_pseudo_ORG",
                                                                  & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG result ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG * p = (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_pseudo_ORG", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_pic_31__38_AbstractCaseItem::objectCompare (const GALGAS_pic_31__38_AbstractCaseItem & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AbstractCaseItem::GALGAS_pic_31__38_AbstractCaseItem (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AbstractCaseItem::GALGAS_pic_31__38_AbstractCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_AbstractCaseItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18AbstractCaseItem class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_AbstractCaseItem::cPtr_pic_31__38_AbstractCaseItem (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18AbstractCaseItem type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ("pic18AbstractCaseItem",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_AbstractCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_AbstractCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_AbstractCaseItem (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AbstractCaseItem GALGAS_pic_31__38_AbstractCaseItem::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AbstractCaseItem result ;
  const GALGAS_pic_31__38_AbstractCaseItem * p = (const GALGAS_pic_31__38_AbstractCaseItem *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_AbstractCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AbstractCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_IntervalCaseItem::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_IntervalCaseItem * p = (const cPtr_pic_31__38_IntervalCaseItem *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMinExpression.objectCompare (p->mAttribute_mMinExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMaxExpression.objectCompare (p->mAttribute_mMaxExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCaseExpressionLocation.objectCompare (p->mAttribute_mCaseExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_IntervalCaseItem::objectCompare (const GALGAS_pic_31__38_IntervalCaseItem & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IntervalCaseItem::GALGAS_pic_31__38_IntervalCaseItem (void) :
GALGAS_pic_31__38_AbstractCaseItem () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IntervalCaseItem::GALGAS_pic_31__38_IntervalCaseItem (const cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) :
GALGAS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_IntervalCaseItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IntervalCaseItem GALGAS_pic_31__38_IntervalCaseItem::constructor_new (const GALGAS_immediatExpression & inAttribute_mMinExpression,
                                                                                        const GALGAS_immediatExpression & inAttribute_mMaxExpression,
                                                                                        const GALGAS_location & inAttribute_mCaseExpressionLocation
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IntervalCaseItem result ;
  if (inAttribute_mMinExpression.isValid () && inAttribute_mMaxExpression.isValid () && inAttribute_mCaseExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_IntervalCaseItem (inAttribute_mMinExpression, inAttribute_mMaxExpression, inAttribute_mCaseExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_IntervalCaseItem::reader_mMinExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IntervalCaseItem * p = (const cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    result = p->mAttribute_mMinExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_IntervalCaseItem::reader_mMinExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMinExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_IntervalCaseItem::reader_mMaxExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IntervalCaseItem * p = (const cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    result = p->mAttribute_mMaxExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_IntervalCaseItem::reader_mMaxExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaxExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_IntervalCaseItem::reader_mCaseExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IntervalCaseItem * p = (const cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    result = p->mAttribute_mCaseExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_IntervalCaseItem::reader_mCaseExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCaseExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18IntervalCaseItem class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_IntervalCaseItem::cPtr_pic_31__38_IntervalCaseItem (const GALGAS_immediatExpression & in_mMinExpression,
                                                                    const GALGAS_immediatExpression & in_mMaxExpression,
                                                                    const GALGAS_location & in_mCaseExpressionLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (THERE),
mAttribute_mMinExpression (in_mMinExpression),
mAttribute_mMaxExpression (in_mMaxExpression),
mAttribute_mCaseExpressionLocation (in_mCaseExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_IntervalCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

void cPtr_pic_31__38_IntervalCaseItem::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@pic18IntervalCaseItem:" ;
  mAttribute_mMinExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMaxExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_IntervalCaseItem::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_IntervalCaseItem (mAttribute_mMinExpression, mAttribute_mMaxExpression, mAttribute_mCaseExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18IntervalCaseItem type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ("pic18IntervalCaseItem",
                                                    & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_IntervalCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_IntervalCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_IntervalCaseItem (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IntervalCaseItem GALGAS_pic_31__38_IntervalCaseItem::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IntervalCaseItem result ;
  const GALGAS_pic_31__38_IntervalCaseItem * p = (const GALGAS_pic_31__38_IntervalCaseItem *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_IntervalCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IntervalCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_SimpleConstantCaseItem::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_SimpleConstantCaseItem * p = (const cPtr_pic_31__38_SimpleConstantCaseItem *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCaseExpression.objectCompare (p->mAttribute_mCaseExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCaseExpressionLocation.objectCompare (p->mAttribute_mCaseExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_SimpleConstantCaseItem::objectCompare (const GALGAS_pic_31__38_SimpleConstantCaseItem & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SimpleConstantCaseItem::GALGAS_pic_31__38_SimpleConstantCaseItem (void) :
GALGAS_pic_31__38_AbstractCaseItem () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SimpleConstantCaseItem::GALGAS_pic_31__38_SimpleConstantCaseItem (const cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) :
GALGAS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_SimpleConstantCaseItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SimpleConstantCaseItem GALGAS_pic_31__38_SimpleConstantCaseItem::constructor_new (const GALGAS_immediatExpression & inAttribute_mCaseExpression,
                                                                                                    const GALGAS_location & inAttribute_mCaseExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SimpleConstantCaseItem result ;
  if (inAttribute_mCaseExpression.isValid () && inAttribute_mCaseExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_SimpleConstantCaseItem (inAttribute_mCaseExpression, inAttribute_mCaseExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_SimpleConstantCaseItem::reader_mCaseExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_SimpleConstantCaseItem * p = (const cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    result = p->mAttribute_mCaseExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_SimpleConstantCaseItem::reader_mCaseExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCaseExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_SimpleConstantCaseItem::reader_mCaseExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_SimpleConstantCaseItem * p = (const cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    result = p->mAttribute_mCaseExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_SimpleConstantCaseItem::reader_mCaseExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCaseExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @pic18SimpleConstantCaseItem class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_SimpleConstantCaseItem::cPtr_pic_31__38_SimpleConstantCaseItem (const GALGAS_immediatExpression & in_mCaseExpression,
                                                                                const GALGAS_location & in_mCaseExpressionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (THERE),
mAttribute_mCaseExpression (in_mCaseExpression),
mAttribute_mCaseExpressionLocation (in_mCaseExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_SimpleConstantCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

void cPtr_pic_31__38_SimpleConstantCaseItem::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@pic18SimpleConstantCaseItem:" ;
  mAttribute_mCaseExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_SimpleConstantCaseItem::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_SimpleConstantCaseItem (mAttribute_mCaseExpression, mAttribute_mCaseExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18SimpleConstantCaseItem type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ("pic18SimpleConstantCaseItem",
                                                          & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_SimpleConstantCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_SimpleConstantCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_SimpleConstantCaseItem (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SimpleConstantCaseItem GALGAS_pic_31__38_SimpleConstantCaseItem::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SimpleConstantCaseItem result ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem * p = (const GALGAS_pic_31__38_SimpleConstantCaseItem *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_SimpleConstantCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SimpleConstantCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_pic_31__38_ConditionExpression::objectCompare (const GALGAS_pic_31__38_ConditionExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression::GALGAS_pic_31__38_ConditionExpression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression::GALGAS_pic_31__38_ConditionExpression (const cPtr_pic_31__38_ConditionExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_ConditionExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18ConditionExpression class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_ConditionExpression::cPtr_pic_31__38_ConditionExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18ConditionExpression type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ("pic18ConditionExpression",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_ConditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_ConditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_ConditionExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_ConditionExpression::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_ConditionExpression result ;
  const GALGAS_pic_31__38_ConditionExpression * p = (const GALGAS_pic_31__38_ConditionExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_ConditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18ConditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_AndCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_AndCondition * p = (const cPtr_pic_31__38_AndCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_AndCondition::objectCompare (const GALGAS_pic_31__38_AndCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AndCondition::GALGAS_pic_31__38_AndCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AndCondition::GALGAS_pic_31__38_AndCondition (const cPtr_pic_31__38_AndCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_AndCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AndCondition GALGAS_pic_31__38_AndCondition::constructor_new (const GALGAS_pic_31__38_ConditionExpression & inAttribute_mLeftExpression,
                                                                                const GALGAS_pic_31__38_ConditionExpression & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AndCondition result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_AndCondition (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_AndCondition::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_ConditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_AndCondition * p = (const cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression cPtr_pic_31__38_AndCondition::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_AndCondition::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_ConditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_AndCondition * p = (const cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression cPtr_pic_31__38_AndCondition::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @pic18AndCondition class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_AndCondition::cPtr_pic_31__38_AndCondition (const GALGAS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                                            const GALGAS_pic_31__38_ConditionExpression & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_AndCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;
}

void cPtr_pic_31__38_AndCondition::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@pic18AndCondition:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_AndCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_AndCondition (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @pic18AndCondition type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_AndCondition ("pic18AndCondition",
                                                & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_AndCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_AndCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_AndCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_BccInStructuredCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_BccInStructuredCondition * p = (const cPtr_pic_31__38_BccInStructuredCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mConditionLocation.objectCompare (p->mAttribute_mConditionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCondition.objectCompare (p->mAttribute_mCondition) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_BccInStructuredCondition::objectCompare (const GALGAS_pic_31__38_BccInStructuredCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BccInStructuredCondition::GALGAS_pic_31__38_BccInStructuredCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BccInStructuredCondition::GALGAS_pic_31__38_BccInStructuredCondition (const cPtr_pic_31__38_BccInStructuredCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BccInStructuredCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BccInStructuredCondition GALGAS_pic_31__38_BccInStructuredCondition::constructor_new (const GALGAS_location & inAttribute_mConditionLocation,
                                                                                                        const GALGAS_conditional_5F_branch & inAttribute_mCondition
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BccInStructuredCondition result ;
  if (inAttribute_mConditionLocation.isValid () && inAttribute_mCondition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_BccInStructuredCondition (inAttribute_mConditionLocation, inAttribute_mCondition COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_BccInStructuredCondition::reader_mConditionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BccInStructuredCondition * p = (const cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    result = p->mAttribute_mConditionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_BccInStructuredCondition::reader_mConditionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConditionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditional_5F_branch GALGAS_pic_31__38_BccInStructuredCondition::reader_mCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_conditional_5F_branch result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BccInStructuredCondition * p = (const cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    result = p->mAttribute_mCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditional_5F_branch cPtr_pic_31__38_BccInStructuredCondition::reader_mCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18BccInStructuredCondition class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_BccInStructuredCondition::cPtr_pic_31__38_BccInStructuredCondition (const GALGAS_location & in_mConditionLocation,
                                                                                    const GALGAS_conditional_5F_branch & in_mCondition
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mAttribute_mConditionLocation (in_mConditionLocation),
mAttribute_mCondition (in_mCondition) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_BccInStructuredCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;
}

void cPtr_pic_31__38_BccInStructuredCondition::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@pic18BccInStructuredCondition:" ;
  mAttribute_mConditionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCondition.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_BccInStructuredCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_BccInStructuredCondition (mAttribute_mConditionLocation, mAttribute_mCondition COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18BccInStructuredCondition type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ("pic18BccInStructuredCondition",
                                                            & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_BccInStructuredCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_BccInStructuredCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BccInStructuredCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BccInStructuredCondition GALGAS_pic_31__38_BccInStructuredCondition::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BccInStructuredCondition result ;
  const GALGAS_pic_31__38_BccInStructuredCondition * p = (const GALGAS_pic_31__38_BccInStructuredCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_BccInStructuredCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BccInStructuredCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_BitTestInStructuredCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_BitTestInStructuredCondition * p = (const cPtr_pic_31__38_BitTestInStructuredCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_BitTestInStructuredCondition::objectCompare (const GALGAS_pic_31__38_BitTestInStructuredCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BitTestInStructuredCondition::GALGAS_pic_31__38_BitTestInStructuredCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BitTestInStructuredCondition::GALGAS_pic_31__38_BitTestInStructuredCondition (const cPtr_pic_31__38_BitTestInStructuredCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BitTestInStructuredCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BitTestInStructuredCondition GALGAS_pic_31__38_BitTestInStructuredCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestInStructuredCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_BitTestInStructuredCondition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_BitTestInStructuredCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BitTestInStructuredCondition * p = (const cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_BitTestInStructuredCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_pic_31__38_BitTestInStructuredCondition::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BitTestInStructuredCondition * p = (const cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_pic_31__38_BitTestInStructuredCondition::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18BitTestInStructuredCondition class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_BitTestInStructuredCondition::cPtr_pic_31__38_BitTestInStructuredCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_BitTestInStructuredCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;
}

void cPtr_pic_31__38_BitTestInStructuredCondition::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@pic18BitTestInStructuredCondition:" ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_BitTestInStructuredCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_BitTestInStructuredCondition (mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18BitTestInStructuredCondition type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ("pic18BitTestInStructuredCondition",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_BitTestInStructuredCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_BitTestInStructuredCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BitTestInStructuredCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BitTestInStructuredCondition GALGAS_pic_31__38_BitTestInStructuredCondition::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestInStructuredCondition result ;
  const GALGAS_pic_31__38_BitTestInStructuredCondition * p = (const GALGAS_pic_31__38_BitTestInStructuredCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_BitTestInStructuredCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestInStructuredCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_IncDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranchIfZero.objectCompare (p->mAttribute_mBranchIfZero) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_IncDecRegisterInCondition::objectCompare (const GALGAS_pic_31__38_IncDecRegisterInCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IncDecRegisterInCondition::GALGAS_pic_31__38_IncDecRegisterInCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IncDecRegisterInCondition::GALGAS_pic_31__38_IncDecRegisterInCondition (const cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_IncDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IncDecRegisterInCondition GALGAS_pic_31__38_IncDecRegisterInCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                          const GALGAS_bool & inAttribute_mIncrement,
                                                                                                          const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                          const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IncDecRegisterInCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_IncDecRegisterInCondition (inAttribute_mRegisterExpression, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_IncDecRegisterInCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_IncDecRegisterInCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_IncDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_IncDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_IncDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_IncDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_IncDecRegisterInCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mAttribute_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_IncDecRegisterInCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18IncDecRegisterInCondition class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_IncDecRegisterInCondition::cPtr_pic_31__38_IncDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                      const GALGAS_bool & in_mIncrement,
                                                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                      const GALGAS_bool & in_mBranchIfZero
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mIncrement (in_mIncrement),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mAttribute_mBranchIfZero (in_mBranchIfZero) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_IncDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;
}

void cPtr_pic_31__38_IncDecRegisterInCondition::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@pic18IncDecRegisterInCondition:" ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_IncDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_IncDecRegisterInCondition (mAttribute_mRegisterExpression, mAttribute_mIncrement, mAttribute_m_5F_W_5F_isDestination, mAttribute_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18IncDecRegisterInCondition type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ("pic18IncDecRegisterInCondition",
                                                             & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_IncDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_IncDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_IncDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IncDecRegisterInCondition GALGAS_pic_31__38_IncDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IncDecRegisterInCondition result ;
  const GALGAS_pic_31__38_IncDecRegisterInCondition * p = (const GALGAS_pic_31__38_IncDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_IncDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IncDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_NegateCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_NegateCondition * p = (const cPtr_pic_31__38_NegateCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_NegateCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCondition.objectCompare (p->mAttribute_mCondition) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_NegateCondition::objectCompare (const GALGAS_pic_31__38_NegateCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_NegateCondition::GALGAS_pic_31__38_NegateCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_NegateCondition::GALGAS_pic_31__38_NegateCondition (const cPtr_pic_31__38_NegateCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_NegateCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_NegateCondition GALGAS_pic_31__38_NegateCondition::constructor_new (const GALGAS_pic_31__38_ConditionExpression & inAttribute_mCondition
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_NegateCondition result ;
  if (inAttribute_mCondition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_NegateCondition (inAttribute_mCondition COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_NegateCondition::reader_mCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_ConditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_NegateCondition * p = (const cPtr_pic_31__38_NegateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_NegateCondition) ;
    result = p->mAttribute_mCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression cPtr_pic_31__38_NegateCondition::reader_mCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18NegateCondition class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_NegateCondition::cPtr_pic_31__38_NegateCondition (const GALGAS_pic_31__38_ConditionExpression & in_mCondition
                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mAttribute_mCondition (in_mCondition) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_NegateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;
}

void cPtr_pic_31__38_NegateCondition::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@pic18NegateCondition:" ;
  mAttribute_mCondition.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_NegateCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_NegateCondition (mAttribute_mCondition COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18NegateCondition type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ("pic18NegateCondition",
                                                   & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_NegateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_NegateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_NegateCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_NegateCondition GALGAS_pic_31__38_NegateCondition::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_NegateCondition result ;
  const GALGAS_pic_31__38_NegateCondition * p = (const GALGAS_pic_31__38_NegateCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_NegateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18NegateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_RegisterComparisonCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_RegisterComparisonCondition * p = (const cPtr_pic_31__38_RegisterComparisonCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mComparison.objectCompare (p->mAttribute_mComparison) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_RegisterComparisonCondition::objectCompare (const GALGAS_pic_31__38_RegisterComparisonCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonCondition::GALGAS_pic_31__38_RegisterComparisonCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonCondition::GALGAS_pic_31__38_RegisterComparisonCondition (const cPtr_pic_31__38_RegisterComparisonCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterComparisonCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonCondition GALGAS_pic_31__38_RegisterComparisonCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                              const GALGAS_pic_31__38_RegisterComparison & inAttribute_mComparison
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mComparison.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_RegisterComparisonCondition (inAttribute_mRegisterExpression, inAttribute_mComparison COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_RegisterComparisonCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterComparisonCondition * p = (const cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_RegisterComparisonCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparisonCondition::reader_mComparison (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RegisterComparison result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterComparisonCondition * p = (const cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    result = p->mAttribute_mComparison ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparison cPtr_pic_31__38_RegisterComparisonCondition::reader_mComparison (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComparison ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @pic18RegisterComparisonCondition class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_RegisterComparisonCondition::cPtr_pic_31__38_RegisterComparisonCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                          const GALGAS_pic_31__38_RegisterComparison & in_mComparison
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mComparison (in_mComparison) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_RegisterComparisonCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;
}

void cPtr_pic_31__38_RegisterComparisonCondition::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@pic18RegisterComparisonCondition:" ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mComparison.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_RegisterComparisonCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterComparisonCondition (mAttribute_mRegisterExpression, mAttribute_mComparison COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18RegisterComparisonCondition type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ("pic18RegisterComparisonCondition",
                                                               & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterComparisonCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_RegisterComparisonCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterComparisonCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonCondition GALGAS_pic_31__38_RegisterComparisonCondition::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonCondition result ;
  const GALGAS_pic_31__38_RegisterComparisonCondition * p = (const GALGAS_pic_31__38_RegisterComparisonCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_RegisterComparisonCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_RegisterTestCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_RegisterTestCondition * p = (const cPtr_pic_31__38_RegisterTestCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranchIfZero.objectCompare (p->mAttribute_mBranchIfZero) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_RegisterTestCondition::objectCompare (const GALGAS_pic_31__38_RegisterTestCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterTestCondition::GALGAS_pic_31__38_RegisterTestCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterTestCondition::GALGAS_pic_31__38_RegisterTestCondition (const cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterTestCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterTestCondition GALGAS_pic_31__38_RegisterTestCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                  const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterTestCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_RegisterTestCondition (inAttribute_mRegisterExpression, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_RegisterTestCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterTestCondition * p = (const cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_RegisterTestCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_RegisterTestCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterTestCondition * p = (const cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    result = p->mAttribute_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_RegisterTestCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18RegisterTestCondition class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_RegisterTestCondition::cPtr_pic_31__38_RegisterTestCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                              const GALGAS_bool & in_mBranchIfZero
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBranchIfZero (in_mBranchIfZero) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_RegisterTestCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;
}

void cPtr_pic_31__38_RegisterTestCondition::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@pic18RegisterTestCondition:" ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_RegisterTestCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterTestCondition (mAttribute_mRegisterExpression, mAttribute_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18RegisterTestCondition type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ("pic18RegisterTestCondition",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterTestCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_RegisterTestCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterTestCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterTestCondition GALGAS_pic_31__38_RegisterTestCondition::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterTestCondition result ;
  const GALGAS_pic_31__38_RegisterTestCondition * p = (const GALGAS_pic_31__38_RegisterTestCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_RegisterTestCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterTestCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_pic_31__38_PiccoloInstruction::objectCompare (const GALGAS_pic_31__38_PiccoloInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloInstruction::GALGAS_pic_31__38_PiccoloInstruction (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloInstruction::GALGAS_pic_31__38_PiccoloInstruction (const cPtr_pic_31__38_PiccoloInstruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_PiccoloInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_PiccoloInstruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_PiccoloInstruction * p = (const cPtr_pic_31__38_PiccoloInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_PiccoloInstruction) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_PiccoloInstruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18PiccoloInstruction class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_PiccoloInstruction::cPtr_pic_31__38_PiccoloInstruction (const GALGAS_location & in_mInstructionLocation
                                                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18PiccoloInstruction type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ("pic18PiccoloInstruction",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_PiccoloInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_PiccoloInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_PiccoloInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloInstruction GALGAS_pic_31__38_PiccoloInstruction::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_PiccoloInstruction result ;
  const GALGAS_pic_31__38_PiccoloInstruction * p = (const GALGAS_pic_31__38_PiccoloInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_PiccoloInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FOREVER::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FOREVER * p = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfInstructionList.objectCompare (p->mAttribute_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FOREVER::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FOREVER & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FOREVER::GALGAS_pic_31__38_Instruction_5F_FOREVER (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FOREVER GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                                    GALGAS_location::constructor_nowhere (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FOREVER::GALGAS_pic_31__38_Instruction_5F_FOREVER (const cPtr_pic_31__38_Instruction_5F_FOREVER * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FOREVER GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_pic_31__38_InstructionList & inAttribute_mInstructionList,
                                                                                                    const GALGAS_location & inAttribute_mEndOfInstructionList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FOREVER result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FOREVER (inAttribute_mInstructionLocation, inAttribute_mInstructionList, inAttribute_mEndOfInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_FOREVER::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FOREVER * p = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_FOREVER::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_FOREVER::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FOREVER * p = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
    result = p->mAttribute_mEndOfInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_FOREVER::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_FOREVER class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_FOREVER::cPtr_pic_31__38_Instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                const GALGAS_location & in_mEndOfInstructionList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mEndOfInstructionList (in_mEndOfInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ;
}

void cPtr_pic_31__38_Instruction_5F_FOREVER::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FOREVER:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FOREVER::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FOREVER (mAttribute_mInstructionLocation, mAttribute_mInstructionList, mAttribute_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_FOREVER type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ("pic18Instruction_FOREVER",
                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FOREVER GALGAS_pic_31__38_Instruction_5F_FOREVER::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FOREVER result ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER * p = (const GALGAS_pic_31__38_Instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloSimpleInstruction GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::reader_mEmbeddedInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_PiccoloSimpleInstruction result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
    result = p->mAttribute_mEmbeddedInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloSimpleInstruction cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::reader_mEmbeddedInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEmbeddedInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18Instruction_IF_SEMI_COLON class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mEmbeddedInstruction (in_mEmbeddedInstruction) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_IF_SEMI_COLON type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ("pic18Instruction_IF_SEMI_COLON",
                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEmbeddedInstruction.objectCompare (p->mAttribute_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSkipIfSet.objectCompare (p->mAttribute_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_pic_31__38_PiccoloSimpleInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @pic18Instruction_IF_BitTest class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                            const GALGAS_bool & in_mSkipIfSet,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mAttribute_mSkipIfSet (in_mSkipIfSet),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_IF_BitTest:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (mAttribute_mInstructionLocation, mAttribute_mEmbeddedInstruction, mAttribute_mSkipIfSet, mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18Instruction_IF_BitTest type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ("pic18Instruction_IF_BitTest",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEmbeddedInstruction.objectCompare (p->mAttribute_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOpCode.objectCompare (p->mAttribute_mOpCode) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_pic_31__38_PiccoloSimpleInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                                        const GALGAS_if_5F_semi_5F_colon_5F_op & inAttribute_mOpCode,
                                                                                                                                        const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mOpCode.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mOpCode, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_if_5F_semi_5F_colon_5F_op GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::reader_mOpCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_if_5F_semi_5F_colon_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    result = p->mAttribute_mOpCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_if_5F_semi_5F_colon_5F_op cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::reader_mOpCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOpCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18Instruction_IF_FA_SEMI_COLON class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                                                    const GALGAS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                                                                    const GALGAS_registerExpression & in_mRegisterExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mAttribute_mOpCode (in_mOpCode),
mAttribute_mRegisterExpression (in_mRegisterExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_IF_FA_SEMI_COLON:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOpCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (mAttribute_mInstructionLocation, mAttribute_mEmbeddedInstruction, mAttribute_mOpCode, mAttribute_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18Instruction_IF_FA_SEMI_COLON type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ("pic18Instruction_IF_FA_SEMI_COLON",
                                                                            & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_FA_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEmbeddedInstruction.objectCompare (p->mAttribute_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSkipIfZero.objectCompare (p->mAttribute_mSkipIfZero) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                              const GALGAS_pic_31__38_PiccoloSimpleInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                              const GALGAS_bool & inAttribute_mIncrement,
                                                                                                              const GALGAS_bool & inAttribute_mSkipIfZero,
                                                                                                              const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                              const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mIncrement.isValid () && inAttribute_mSkipIfZero.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mIncrement, inAttribute_mSkipIfZero, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::reader_mSkipIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_mSkipIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::reader_mSkipIfZero (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSkipIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_IF_IncDec class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                          const GALGAS_bool & in_mIncrement,
                                                                                          const GALGAS_bool & in_mSkipIfZero,
                                                                                          const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                          const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mAttribute_mIncrement (in_mIncrement),
mAttribute_mSkipIfZero (in_mSkipIfZero),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_IF_IncDec:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSkipIfZero.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (mAttribute_mInstructionLocation, mAttribute_mEmbeddedInstruction, mAttribute_mIncrement, mAttribute_mSkipIfZero, mAttribute_mRegisterExpression, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18Instruction_IF_IncDec type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ("pic18Instruction_IF_IncDec",
                                                               & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JUMP * p = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMP::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMP::GALGAS_pic_31__38_Instruction_5F_JUMP (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMP::GALGAS_pic_31__38_Instruction_5F_JUMP (const cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                              const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMP * p = (const cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind GALGAS_pic_31__38_Instruction_5F_JUMP::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_jumpInstructionKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMP * p = (const cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind cPtr_pic_31__38_Instruction_5F_JUMP::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_JUMP class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_JUMP::cPtr_pic_31__38_Instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel,
                                                                          const GALGAS_jumpInstructionKind & in_mKind
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

void cPtr_pic_31__38_Instruction_5F_JUMP::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_JUMP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMP (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_JUMP type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ("pic18Instruction_JUMP",
                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP * p = (const GALGAS_pic_31__38_Instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JUMPCC::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConditionalBranch.objectCompare (p->mAttribute_mConditionalBranch) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsBcc.objectCompare (p->mAttribute_mIsBcc) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMPCC::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMPCC::GALGAS_pic_31__38_Instruction_5F_JUMPCC (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMPCC::GALGAS_pic_31__38_Instruction_5F_JUMPCC (const cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                  const GALGAS_conditional_5F_branch & inAttribute_mConditionalBranch,
                                                                                                  const GALGAS_bool & inAttribute_mIsBcc
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mConditionalBranch.isValid () && inAttribute_mIsBcc.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMPCC (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mConditionalBranch, inAttribute_mIsBcc COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JUMPCC::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_JUMPCC::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditional_5F_branch GALGAS_pic_31__38_Instruction_5F_JUMPCC::reader_mConditionalBranch (UNUSED_LOCATION_ARGS) const {
  GALGAS_conditional_5F_branch result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    result = p->mAttribute_mConditionalBranch ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditional_5F_branch cPtr_pic_31__38_Instruction_5F_JUMPCC::reader_mConditionalBranch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConditionalBranch ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_JUMPCC::reader_mIsBcc (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    result = p->mAttribute_mIsBcc ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_JUMPCC::reader_mIsBcc (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsBcc ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_JUMPCC class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_JUMPCC::cPtr_pic_31__38_Instruction_5F_JUMPCC (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                                              const GALGAS_bool & in_mIsBcc
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mConditionalBranch (in_mConditionalBranch),
mAttribute_mIsBcc (in_mIsBcc) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMPCC::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

void cPtr_pic_31__38_Instruction_5F_JUMPCC::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_JUMPCC:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConditionalBranch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsBcc.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMPCC::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMPCC (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mConditionalBranch, mAttribute_mIsBcc COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_JUMPCC type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ("pic18Instruction_JUMPCC",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMPCC::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMPCC::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMPCC (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC * p = (const GALGAS_pic_31__38_Instruction_5F_JUMPCC *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMPCC *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMPCC", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_LDATAPTR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LDATAPTR * p = (const cPtr_pic_31__38_Instruction_5F_LDATAPTR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATAPTR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDataName.objectCompare (p->mAttribute_mDataName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDataIndex.objectCompare (p->mAttribute_mDataIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_LDATAPTR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATAPTR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR::GALGAS_pic_31__38_Instruction_5F_LDATAPTR (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR GALGAS_pic_31__38_Instruction_5F_LDATAPTR::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_LDATAPTR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_luint::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR::GALGAS_pic_31__38_Instruction_5F_LDATAPTR (const cPtr_pic_31__38_Instruction_5F_LDATAPTR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LDATAPTR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR GALGAS_pic_31__38_Instruction_5F_LDATAPTR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_lstring & inAttribute_mDataName,
                                                                                                      const GALGAS_luint & inAttribute_mDataIndex
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATAPTR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mDataName.isValid () && inAttribute_mDataIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LDATAPTR (inAttribute_mInstructionLocation, inAttribute_mDataName, inAttribute_mDataIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_LDATAPTR::reader_mDataName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LDATAPTR * p = (const cPtr_pic_31__38_Instruction_5F_LDATAPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATAPTR) ;
    result = p->mAttribute_mDataName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_LDATAPTR::reader_mDataName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_LDATAPTR::reader_mDataIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LDATAPTR * p = (const cPtr_pic_31__38_Instruction_5F_LDATAPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATAPTR) ;
    result = p->mAttribute_mDataIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_pic_31__38_Instruction_5F_LDATAPTR::reader_mDataIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_LDATAPTR class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_LDATAPTR::cPtr_pic_31__38_Instruction_5F_LDATAPTR (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_lstring & in_mDataName,
                                                                                  const GALGAS_luint & in_mDataIndex
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mDataName (in_mDataName),
mAttribute_mDataIndex (in_mDataIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LDATAPTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR ;
}

void cPtr_pic_31__38_Instruction_5F_LDATAPTR::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_LDATAPTR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDataName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDataIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_LDATAPTR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LDATAPTR (mAttribute_mInstructionLocation, mAttribute_mDataName, mAttribute_mDataIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_LDATAPTR type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR ("pic18Instruction_LDATAPTR",
                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LDATAPTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LDATAPTR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LDATAPTR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR GALGAS_pic_31__38_Instruction_5F_LDATAPTR::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATAPTR result ;
  const GALGAS_pic_31__38_Instruction_5F_LDATAPTR * p = (const GALGAS_pic_31__38_Instruction_5F_LDATAPTR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LDATAPTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATAPTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_LTBLPTR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (const cPtr_pic_31__38_Instruction_5F_LTBLPTR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediatExpression.objectCompare (p->mAttribute_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_LTBLPTR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LTBLPTR::GALGAS_pic_31__38_Instruction_5F_LTBLPTR (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LTBLPTR::GALGAS_pic_31__38_Instruction_5F_LTBLPTR (const cPtr_pic_31__38_Instruction_5F_LTBLPTR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LTBLPTR GALGAS_pic_31__38_Instruction_5F_LTBLPTR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LTBLPTR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR (inAttribute_mInstructionLocation, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_LTBLPTR::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (const cPtr_pic_31__38_Instruction_5F_LTBLPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
    result = p->mAttribute_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_LTBLPTR::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_LTBLPTR class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_LTBLPTR::cPtr_pic_31__38_Instruction_5F_LTBLPTR (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LTBLPTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;
}

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_LTBLPTR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_LTBLPTR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LTBLPTR (mAttribute_mInstructionLocation, mAttribute_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_LTBLPTR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ("pic18Instruction_LTBLPTR",
                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LTBLPTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LTBLPTR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LTBLPTR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LTBLPTR GALGAS_pic_31__38_Instruction_5F_LTBLPTR::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LTBLPTR result ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR * p = (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LTBLPTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LTBLPTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_MNOP * p = (const cPtr_pic_31__38_Instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MNOP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOccurrenceFactor.objectCompare (p->mAttribute_mOccurrenceFactor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_MNOP::objectCompare (const GALGAS_pic_31__38_Instruction_5F_MNOP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP::GALGAS_pic_31__38_Instruction_5F_MNOP (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP GALGAS_pic_31__38_Instruction_5F_MNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_MNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_luint::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP::GALGAS_pic_31__38_Instruction_5F_MNOP (const cPtr_pic_31__38_Instruction_5F_MNOP * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MNOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP GALGAS_pic_31__38_Instruction_5F_MNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MNOP * p = (const cPtr_pic_31__38_Instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MNOP) ;
    result = p->mAttribute_mOccurrenceFactor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_pic_31__38_Instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOccurrenceFactor ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_MNOP class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_MNOP::cPtr_pic_31__38_Instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_luint & in_mOccurrenceFactor
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;
}

void cPtr_pic_31__38_Instruction_5F_MNOP::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_MNOP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MNOP (mAttribute_mInstructionLocation, mAttribute_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_MNOP type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ("pic18Instruction_MNOP",
                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP GALGAS_pic_31__38_Instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MNOP result ;
  const GALGAS_pic_31__38_Instruction_5F_MNOP * p = (const GALGAS_pic_31__38_Instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_NOPBRA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_NOPBRA * p = (const cPtr_pic_31__38_Instruction_5F_NOPBRA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOccurrenceFactor.objectCompare (p->mAttribute_mOccurrenceFactor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_NOPBRA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_NOPBRA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_NOPBRA::GALGAS_pic_31__38_Instruction_5F_NOPBRA (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_NOPBRA GALGAS_pic_31__38_Instruction_5F_NOPBRA::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_NOPBRA::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_luint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_NOPBRA::GALGAS_pic_31__38_Instruction_5F_NOPBRA (const cPtr_pic_31__38_Instruction_5F_NOPBRA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_NOPBRA GALGAS_pic_31__38_Instruction_5F_NOPBRA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_NOPBRA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_NOPBRA (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_NOPBRA::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_NOPBRA * p = (const cPtr_pic_31__38_Instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
    result = p->mAttribute_mOccurrenceFactor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_pic_31__38_Instruction_5F_NOPBRA::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOccurrenceFactor ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_NOPBRA class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_NOPBRA::cPtr_pic_31__38_Instruction_5F_NOPBRA (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_luint & in_mOccurrenceFactor
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_NOPBRA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ;
}

void cPtr_pic_31__38_Instruction_5F_NOPBRA::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_NOPBRA:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_NOPBRA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_NOPBRA (mAttribute_mInstructionLocation, mAttribute_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_NOPBRA type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ("pic18Instruction_NOPBRA",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_NOPBRA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_NOPBRA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_NOPBRA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_NOPBRA GALGAS_pic_31__38_Instruction_5F_NOPBRA::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_NOPBRA result ;
  const GALGAS_pic_31__38_Instruction_5F_NOPBRA * p = (const GALGAS_pic_31__38_Instruction_5F_NOPBRA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_NOPBRA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_NOPBRA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_banksel::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_banksel * p = (const cPtr_pic_31__38_Instruction_5F_banksel *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBankIndex.objectCompare (p->mAttribute_mBankIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWarningOnUselessBanksel.objectCompare (p->mAttribute_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel::GALGAS_pic_31__38_Instruction_5F_banksel (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel GALGAS_pic_31__38_Instruction_5F_banksel::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_banksel::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_luint::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel::GALGAS_pic_31__38_Instruction_5F_banksel (const cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel GALGAS_pic_31__38_Instruction_5F_banksel::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_luint & inAttribute_mBankIndex,
                                                                                                    const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_banksel (inAttribute_mInstructionLocation, inAttribute_mBankIndex, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_banksel::reader_mBankIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel * p = (const cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    result = p->mAttribute_mBankIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_pic_31__38_Instruction_5F_banksel::reader_mBankIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_banksel::reader_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel * p = (const cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    result = p->mAttribute_mWarningOnUselessBanksel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_banksel::reader_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarningOnUselessBanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_banksel class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_banksel::cPtr_pic_31__38_Instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_luint & in_mBankIndex,
                                                                                const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBankIndex (in_mBankIndex),
mAttribute_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_banksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;
}

void cPtr_pic_31__38_Instruction_5F_banksel::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_banksel:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBankIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel (mAttribute_mInstructionLocation, mAttribute_mBankIndex, mAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_banksel type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ("pic18Instruction_banksel",
                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel GALGAS_pic_31__38_Instruction_5F_banksel::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel result ;
  const GALGAS_pic_31__38_Instruction_5F_banksel * p = (const GALGAS_pic_31__38_Instruction_5F_banksel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_banksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWarningOnUselessBanksel.objectCompare (p->mAttribute_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                            const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (inAttribute_mInstructionLocation, inAttribute_mRegisterExpression, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_banksel_5F_register::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::reader_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    result = p->mAttribute_mWarningOnUselessBanksel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_banksel_5F_register::reader_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarningOnUselessBanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18Instruction_banksel_register class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                        const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_banksel_register:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (mAttribute_mInstructionLocation, mAttribute_mRegisterExpression, mAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18Instruction_banksel_register type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ("pic18Instruction_banksel_register",
                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register * p = (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_block::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStartBlockName.objectCompare (p->mAttribute_mStartBlockName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBlockList.objectCompare (p->mAttribute_mBlockList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfBlockInstruction.objectCompare (p->mAttribute_mEndOfBlockInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_block::objectCompare (const GALGAS_pic_31__38_Instruction_5F_block & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block::GALGAS_pic_31__38_Instruction_5F_block (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_block::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (HERE),
                                                                  GALGAS_location::constructor_nowhere (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block::GALGAS_pic_31__38_Instruction_5F_block (const cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_block) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mStartBlockName,
                                                                                                const GALGAS_pic_31__38_BlockInstructionBlockList & inAttribute_mBlockList,
                                                                                                const GALGAS_location & inAttribute_mEndOfBlockInstruction
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mStartBlockName.isValid () && inAttribute_mBlockList.isValid () && inAttribute_mEndOfBlockInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_block (inAttribute_mInstructionLocation, inAttribute_mStartBlockName, inAttribute_mBlockList, inAttribute_mEndOfBlockInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_block::reader_mStartBlockName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    result = p->mAttribute_mStartBlockName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_block::reader_mStartBlockName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartBlockName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_Instruction_5F_block::reader_mBlockList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_BlockInstructionBlockList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    result = p->mAttribute_mBlockList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList cPtr_pic_31__38_Instruction_5F_block::reader_mBlockList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_block::reader_mEndOfBlockInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    result = p->mAttribute_mEndOfBlockInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_block::reader_mEndOfBlockInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_block class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_block::cPtr_pic_31__38_Instruction_5F_block (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mStartBlockName,
                                                                            const GALGAS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                                            const GALGAS_location & in_mEndOfBlockInstruction
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mStartBlockName (in_mStartBlockName),
mAttribute_mBlockList (in_mBlockList),
mAttribute_mEndOfBlockInstruction (in_mEndOfBlockInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_block::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

void cPtr_pic_31__38_Instruction_5F_block::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_block:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStartBlockName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBlockList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfBlockInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_block::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_block (mAttribute_mInstructionLocation, mAttribute_mStartBlockName, mAttribute_mBlockList, mAttribute_mEndOfBlockInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_block type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ("pic18Instruction_block",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_block::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_block::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_block (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  const GALGAS_pic_31__38_Instruction_5F_block * p = (const GALGAS_pic_31__38_Instruction_5F_block *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_block *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_block", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_checkbank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_checkbank * p = (const cPtr_pic_31__38_Instruction_5F_checkbank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checkbank) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBankIndex.objectCompare (p->mAttribute_mBankIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_checkbank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_checkbank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank::GALGAS_pic_31__38_Instruction_5F_checkbank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_uint::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank::GALGAS_pic_31__38_Instruction_5F_checkbank (const cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_checkbank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_uint & inAttribute_mBankIndex
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checkbank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_checkbank (inAttribute_mInstructionLocation, inAttribute_mBankIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_pic_31__38_Instruction_5F_checkbank::reader_mBankIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_checkbank * p = (const cPtr_pic_31__38_Instruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checkbank) ;
    result = p->mAttribute_mBankIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_pic_31__38_Instruction_5F_checkbank::reader_mBankIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_checkbank class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_checkbank::cPtr_pic_31__38_Instruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_uint & in_mBankIndex
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBankIndex (in_mBankIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_checkbank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;
}

void cPtr_pic_31__38_Instruction_5F_checkbank::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_checkbank:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBankIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_checkbank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_checkbank (mAttribute_mInstructionLocation, mAttribute_mBankIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18Instruction_checkbank type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ("pic18Instruction_checkbank",
                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_checkbank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_checkbank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_checkbank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank GALGAS_pic_31__38_Instruction_5F_checkbank::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checkbank result ;
  const GALGAS_pic_31__38_Instruction_5F_checkbank * p = (const GALGAS_pic_31__38_Instruction_5F_checkbank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_checkbank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checkbank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_checknobank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_checknobank * p = (const cPtr_pic_31__38_Instruction_5F_checknobank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checknobank) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_checknobank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_checknobank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank::GALGAS_pic_31__38_Instruction_5F_checknobank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank GALGAS_pic_31__38_Instruction_5F_checknobank::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_checknobank::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank::GALGAS_pic_31__38_Instruction_5F_checknobank (const cPtr_pic_31__38_Instruction_5F_checknobank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_checknobank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank GALGAS_pic_31__38_Instruction_5F_checknobank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checknobank result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_checknobank (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @pic18Instruction_checknobank class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_checknobank::cPtr_pic_31__38_Instruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_checknobank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;
}

void cPtr_pic_31__38_Instruction_5F_checknobank::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_checknobank:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_checknobank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_checknobank (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18Instruction_checknobank type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ("pic18Instruction_checknobank",
                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_checknobank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_checknobank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_checknobank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank GALGAS_pic_31__38_Instruction_5F_checknobank::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checknobank result ;
  const GALGAS_pic_31__38_Instruction_5F_checknobank * p = (const GALGAS_pic_31__38_Instruction_5F_checknobank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_checknobank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checknobank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_bra::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabels.objectCompare (p->mAttribute_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUsesRelativeCall.objectCompare (p->mAttribute_mUsesRelativeCall) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_computed_5F_bra::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    result = p->mAttribute_mTargetLabels ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_pic_31__38_Instruction_5F_computed_5F_bra::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    result = p->mAttribute_mUsesRelativeCall ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_computed_5F_bra::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUsesRelativeCall ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18Instruction_computed_bra class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_computed_5F_bra::cPtr_pic_31__38_Instruction_5F_computed_5F_bra (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                const GALGAS_lstringlist & in_mTargetLabels,
                                                                                                const GALGAS_bool & in_mUsesRelativeCall
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mTargetLabels (in_mTargetLabels),
mAttribute_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_computed_bra:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra (mAttribute_mInstructionLocation, mAttribute_mSizeExpression, mAttribute_mTargetLabels, mAttribute_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18Instruction_computed_bra type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ("pic18Instruction_computed_bra",
                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_bra", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_goto::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabels.objectCompare (p->mAttribute_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUsesRelativeCall.objectCompare (p->mAttribute_mUsesRelativeCall) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_computed_5F_goto::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    result = p->mAttribute_mTargetLabels ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_pic_31__38_Instruction_5F_computed_5F_goto::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    result = p->mAttribute_mUsesRelativeCall ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_computed_5F_goto::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUsesRelativeCall ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18Instruction_computed_goto class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_computed_5F_goto::cPtr_pic_31__38_Instruction_5F_computed_5F_goto (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                  const GALGAS_lstringlist & in_mTargetLabels,
                                                                                                  const GALGAS_bool & in_mUsesRelativeCall
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mTargetLabels (in_mTargetLabels),
mAttribute_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_computed_goto:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto (mAttribute_mInstructionLocation, mAttribute_mSizeExpression, mAttribute_mTargetLabels, mAttribute_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_computed_goto type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ("pic18Instruction_computed_goto",
                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_goto", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabels.objectCompare (p->mAttribute_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUsesRelativeCall.objectCompare (p->mAttribute_mUsesRelativeCall) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    result = p->mAttribute_mTargetLabels ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    result = p->mAttribute_mUsesRelativeCall ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUsesRelativeCall ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @pic18Instruction_computed_rcall class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                    const GALGAS_lstringlist & in_mTargetLabels,
                                                                                                    const GALGAS_bool & in_mUsesRelativeCall
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mTargetLabels (in_mTargetLabels),
mAttribute_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_computed_rcall:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (mAttribute_mInstructionLocation, mAttribute_mSizeExpression, mAttribute_mTargetLabels, mAttribute_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_computed_rcall type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ("pic18Instruction_computed_rcall",
                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_rcall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediateExpressionList.objectCompare (p->mAttribute_mImmediateExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUsesRelativeCall.objectCompare (p->mAttribute_mUsesRelativeCall) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mImmediateExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    result = p->mAttribute_mImmediateExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mImmediateExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediateExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    result = p->mAttribute_mUsesRelativeCall ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUsesRelativeCall ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @pic18Instruction_computed_retlw class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                    const GALGAS_immediatExpressionList & in_mImmediateExpressionList,
                                                                                                    const GALGAS_bool & in_mUsesRelativeCall
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mImmediateExpressionList (in_mImmediateExpressionList),
mAttribute_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_computed_retlw:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediateExpressionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (mAttribute_mInstructionLocation, mAttribute_mSizeExpression, mAttribute_mImmediateExpressionList, mAttribute_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_computed_retlw type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ("pic18Instruction_computed_retlw",
                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_retlw", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_do_5F_while::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRepeatedInstructionList.objectCompare (p->mAttribute_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfRepeatedInstructionList.objectCompare (p->mAttribute_mEndOfRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhilePartList.objectCompare (p->mAttribute_mWhilePartList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_do_5F_while::objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_do_5F_while::GALGAS_pic_31__38_Instruction_5F_do_5F_while (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                                        GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_do_5F_while::GALGAS_pic_31__38_Instruction_5F_do_5F_while (const cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_do_5F_while::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    result = p->mAttribute_mRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_do_5F_while::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_do_5F_while::reader_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    result = p->mAttribute_mEndOfRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_do_5F_while::reader_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_Instruction_5F_do_5F_while::reader_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    result = p->mAttribute_mWhilePartList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_DoWhilePartList cPtr_pic_31__38_Instruction_5F_do_5F_while::reader_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhilePartList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_do_while class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_do_5F_while::cPtr_pic_31__38_Instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                                                        const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                        const GALGAS_pic_31__38_DoWhilePartList & in_mWhilePartList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRepeatedInstructionList (in_mRepeatedInstructionList),
mAttribute_mEndOfRepeatedInstructionList (in_mEndOfRepeatedInstructionList),
mAttribute_mWhilePartList (in_mWhilePartList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

void cPtr_pic_31__38_Instruction_5F_do_5F_while::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_do_while:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_do_5F_while (mAttribute_mInstructionLocation, mAttribute_mRepeatedInstructionList, mAttribute_mEndOfRepeatedInstructionList, mAttribute_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_do_while type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ("pic18Instruction_do_while",
                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_macro::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_macro * p = (const cPtr_pic_31__38_Instruction_5F_macro *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMacroName.objectCompare (p->mAttribute_mMacroName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_macro::objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_macro::GALGAS_pic_31__38_Instruction_5F_macro (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_macro::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_immediatExpressionList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_macro::GALGAS_pic_31__38_Instruction_5F_macro (const cPtr_pic_31__38_Instruction_5F_macro * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_macro) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mMacroName,
                                                                                                const GALGAS_immediatExpressionList & inAttribute_mExpressionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mMacroName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_macro (inAttribute_mInstructionLocation, inAttribute_mMacroName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_macro::reader_mMacroName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_macro * p = (const cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    result = p->mAttribute_mMacroName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_macro::reader_mMacroName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMacroName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_pic_31__38_Instruction_5F_macro::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_macro * p = (const cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList cPtr_pic_31__38_Instruction_5F_macro::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_macro class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_macro::cPtr_pic_31__38_Instruction_5F_macro (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mMacroName,
                                                                            const GALGAS_immediatExpressionList & in_mExpressionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mMacroName (in_mMacroName),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_macro::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;
}

void cPtr_pic_31__38_Instruction_5F_macro::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_macro:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMacroName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_macro::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_macro (mAttribute_mInstructionLocation, mAttribute_mMacroName, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_macro type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ("pic18Instruction_macro",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_macro::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_macro::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_macro (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro result ;
  const GALGAS_pic_31__38_Instruction_5F_macro * p = (const GALGAS_pic_31__38_Instruction_5F_macro *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_macro *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_macro", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_nobanksel::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_nobanksel * p = (const cPtr_pic_31__38_Instruction_5F_nobanksel *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_nobanksel::objectCompare (const GALGAS_pic_31__38_Instruction_5F_nobanksel & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel::GALGAS_pic_31__38_Instruction_5F_nobanksel (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel GALGAS_pic_31__38_Instruction_5F_nobanksel::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_nobanksel::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel::GALGAS_pic_31__38_Instruction_5F_nobanksel (const cPtr_pic_31__38_Instruction_5F_nobanksel * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel GALGAS_pic_31__38_Instruction_5F_nobanksel::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_nobanksel result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_nobanksel (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_nobanksel class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_nobanksel::cPtr_pic_31__38_Instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_nobanksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;
}

void cPtr_pic_31__38_Instruction_5F_nobanksel::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_nobanksel:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_nobanksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_nobanksel (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18Instruction_nobanksel type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ("pic18Instruction_nobanksel",
                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_nobanksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_nobanksel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_nobanksel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel GALGAS_pic_31__38_Instruction_5F_nobanksel::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_nobanksel result ;
  const GALGAS_pic_31__38_Instruction_5F_nobanksel * p = (const GALGAS_pic_31__38_Instruction_5F_nobanksel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_nobanksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_nobanksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_repetitionStatique::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstantName.objectCompare (p->mAttribute_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLowerBoundExpression.objectCompare (p->mAttribute_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUpperBoundExpression.objectCompare (p->mAttribute_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfInstruction.objectCompare (p->mAttribute_mEndOfInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_repetitionStatique::objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (const cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                          const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                          const GALGAS_immediatExpression & inAttribute_mLowerBoundExpression,
                                                                                                                          const GALGAS_immediatExpression & inAttribute_mUpperBoundExpression,
                                                                                                                          const GALGAS_pic_31__38_InstructionList & inAttribute_mInstructionList,
                                                                                                                          const GALGAS_location & inAttribute_mEndOfInstruction
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mLowerBoundExpression, inAttribute_mUpperBoundExpression, inAttribute_mInstructionList, inAttribute_mEndOfInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_repetitionStatique::reader_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    result = p->mAttribute_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_repetitionStatique::reader_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_repetitionStatique::reader_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    result = p->mAttribute_mLowerBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_repetitionStatique::reader_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLowerBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_repetitionStatique::reader_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    result = p->mAttribute_mUpperBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_repetitionStatique::reader_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUpperBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_repetitionStatique::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_repetitionStatique::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_repetitionStatique::reader_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    result = p->mAttribute_mEndOfInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_repetitionStatique::reader_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @pic18Instruction_repetitionStatique class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_repetitionStatique::cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GALGAS_location & in_mInstructionLocation,
                                                                                                      const GALGAS_lstring & in_mConstantName,
                                                                                                      const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                      const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                      const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                      const GALGAS_location & in_mEndOfInstruction
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mConstantName (in_mConstantName),
mAttribute_mLowerBoundExpression (in_mLowerBoundExpression),
mAttribute_mUpperBoundExpression (in_mUpperBoundExpression),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mEndOfInstruction (in_mEndOfInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_repetitionStatique::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_repetitionStatique:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_repetitionStatique::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (mAttribute_mInstructionLocation, mAttribute_mConstantName, mAttribute_mLowerBoundExpression, mAttribute_mUpperBoundExpression, mAttribute_mInstructionList, mAttribute_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic18Instruction_repetitionStatique type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ("pic18Instruction_repetitionStatique",
                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_repetitionStatique::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_repetitionStatique::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_repetitionStatique (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique * p = (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_repetitionStatique *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_repetitionStatique", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegister.objectCompare (p->mAttribute_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfSaveBankInstruction.objectCompare (p->mAttribute_mEndOfSaveBankInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_savebank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (const cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_registerExpression & inAttribute_mRegister,
                                                                                                      const GALGAS_pic_31__38_InstructionList & inAttribute_mInstructionList,
                                                                                                      const GALGAS_location & inAttribute_mEndOfSaveBankInstruction
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegister.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfSaveBankInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_savebank (inAttribute_mInstructionLocation, inAttribute_mRegister, inAttribute_mInstructionList, inAttribute_mEndOfSaveBankInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_savebank::reader_mRegister (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mAttribute_mRegister ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_savebank::reader_mRegister (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_savebank::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_savebank::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_savebank::reader_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mAttribute_mEndOfSaveBankInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_savebank::reader_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSaveBankInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_savebank class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_savebank::cPtr_pic_31__38_Instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_registerExpression & in_mRegister,
                                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRegister (in_mRegister),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mEndOfSaveBankInstruction (in_mEndOfSaveBankInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

void cPtr_pic_31__38_Instruction_5F_savebank::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_savebank:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegister.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_savebank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_savebank (mAttribute_mInstructionLocation, mAttribute_mRegister, mAttribute_mInstructionList, mAttribute_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_savebank type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ("pic18Instruction_savebank",
                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  const GALGAS_pic_31__38_Instruction_5F_savebank * p = (const GALGAS_pic_31__38_Instruction_5F_savebank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_savebank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_savebank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_structured_5F_if::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIfCondition.objectCompare (p->mAttribute_mIfCondition) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenInstructionList.objectCompare (p->mAttribute_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfElsePartLocation.objectCompare (p->mAttribute_mEndOfElsePartLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_structured_5F_if::objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_structured_5F_if::GALGAS_pic_31__38_Instruction_5F_structured_5F_if (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_structured_5F_if::GALGAS_pic_31__38_Instruction_5F_structured_5F_if (const cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_Instruction_5F_structured_5F_if::reader_mIfCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_ConditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mIfCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression cPtr_pic_31__38_Instruction_5F_structured_5F_if::reader_mIfCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIfCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_structured_5F_if::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_structured_5F_if::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_structured_5F_if::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_structured_5F_if::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_structured_5F_if::reader_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mEndOfElsePartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_structured_5F_if::reader_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfElsePartLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18Instruction_structured_if class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_structured_5F_if::cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                                                                  const GALGAS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                                                                  const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                                                                  const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mIfCondition (in_mIfCondition),
mAttribute_mThenInstructionList (in_mThenInstructionList),
mAttribute_mElseInstructionList (in_mElseInstructionList),
mAttribute_mEndOfElsePartLocation (in_mEndOfElsePartLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_structured_if:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIfCondition.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfElsePartLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_structured_5F_if (mAttribute_mInstructionLocation, mAttribute_mIfCondition, mAttribute_mThenInstructionList, mAttribute_mElseInstructionList, mAttribute_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_structured_if type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ("pic18Instruction_structured_if",
                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_switch::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCaseList.objectCompare (p->mAttribute_mCaseList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseBranchStartLocation.objectCompare (p->mAttribute_mElseBranchStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_switch::objectCompare (const GALGAS_pic_31__38_Instruction_5F_switch & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch::GALGAS_pic_31__38_Instruction_5F_switch (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_switch::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_emptyList (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch::GALGAS_pic_31__38_Instruction_5F_switch (const cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_switch) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_pic_31__38_SwitchInstructionCaseList & inAttribute_mCaseList,
                                                                                                  const GALGAS_location & inAttribute_mElseBranchStartLocation,
                                                                                                  const GALGAS_pic_31__38_InstructionList & inAttribute_mElseInstructionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_switch result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCaseList.isValid () && inAttribute_mElseBranchStartLocation.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_switch (inAttribute_mInstructionLocation, inAttribute_mCaseList, inAttribute_mElseBranchStartLocation, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_Instruction_5F_switch::reader_mCaseList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    result = p->mAttribute_mCaseList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList cPtr_pic_31__38_Instruction_5F_switch::reader_mCaseList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCaseList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_switch::reader_mElseBranchStartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    result = p->mAttribute_mElseBranchStartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_switch::reader_mElseBranchStartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseBranchStartLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_switch::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_switch::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_switch class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_switch::cPtr_pic_31__38_Instruction_5F_switch (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                                              const GALGAS_location & in_mElseBranchStartLocation,
                                                                              const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mCaseList (in_mCaseList),
mAttribute_mElseBranchStartLocation (in_mElseBranchStartLocation),
mAttribute_mElseInstructionList (in_mElseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_switch::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

void cPtr_pic_31__38_Instruction_5F_switch::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_switch:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCaseList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseBranchStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_switch::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_switch (mAttribute_mInstructionLocation, mAttribute_mCaseList, mAttribute_mElseBranchStartLocation, mAttribute_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_switch type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ("pic18Instruction_switch",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_switch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_switch::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_switch (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_switch result ;
  const GALGAS_pic_31__38_Instruction_5F_switch * p = (const GALGAS_pic_31__38_Instruction_5F_switch *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_switch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_switch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_pic_31__38_PiccoloSimpleInstruction::objectCompare (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloSimpleInstruction::GALGAS_pic_31__38_PiccoloSimpleInstruction (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloSimpleInstruction::GALGAS_pic_31__38_PiccoloSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18PiccoloSimpleInstruction class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_PiccoloSimpleInstruction::cPtr_pic_31__38_PiccoloSimpleInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18PiccoloSimpleInstruction type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ("pic18PiccoloSimpleInstruction",
                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_PiccoloSimpleInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_PiccoloSimpleInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_PiccoloSimpleInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloSimpleInstruction GALGAS_pic_31__38_PiccoloSimpleInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_PiccoloSimpleInstruction result ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction * p = (const GALGAS_pic_31__38_PiccoloSimpleInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_PiccoloSimpleInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloSimpleInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFAinstruction.objectCompare (p->mAttribute_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (const cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA GALGAS_pic_31__38_Instruction_5F_FA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_FA_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                          const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FA (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_pic_31__38_Instruction_5F_FA::reader_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    result = p->mAttribute_mFAinstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_FA_5F_instruction_5F_base_5F_code cPtr_pic_31__38_Instruction_5F_FA::reader_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFAinstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_FA class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_FA::cPtr_pic_31__38_Instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mFAinstruction (in_mFAinstruction),
mAttribute_mRegisterExpression (in_mRegisterExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

void cPtr_pic_31__38_Instruction_5F_FA::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FA:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FA (mAttribute_mInstructionLocation, mAttribute_mFAinstruction, mAttribute_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @pic18Instruction_FA type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ("pic18Instruction_FA",
                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA GALGAS_pic_31__38_Instruction_5F_FA::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA result ;
  const GALGAS_pic_31__38_Instruction_5F_FA * p = (const GALGAS_pic_31__38_Instruction_5F_FA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FBA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitOrientedOp.objectCompare (p->mAttribute_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FBA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (const cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FBA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA GALGAS_pic_31__38_Instruction_5F_FBA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FBA (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bit_5F_oriented_5F_op GALGAS_pic_31__38_Instruction_5F_FBA::reader_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mAttribute_mBitOrientedOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bit_5F_oriented_5F_op cPtr_pic_31__38_Instruction_5F_FBA::reader_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitOrientedOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FBA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FBA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_pic_31__38_Instruction_5F_FBA::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_pic_31__38_Instruction_5F_FBA::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_FBA class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_FBA::cPtr_pic_31__38_Instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBitOrientedOp (in_mBitOrientedOp),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FBA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

void cPtr_pic_31__38_Instruction_5F_FBA::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FBA:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FBA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FBA (mAttribute_mInstructionLocation, mAttribute_mBitOrientedOp, mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_FBA type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ("pic18Instruction_FBA",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FBA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FBA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FBA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA GALGAS_pic_31__38_Instruction_5F_FBA::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA result ;
  const GALGAS_pic_31__38_Instruction_5F_FBA * p = (const GALGAS_pic_31__38_Instruction_5F_FBA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FBA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FBA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FDA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction_5F_FDA_5F_base_5F_code.objectCompare (p->mAttribute_mInstruction_5F_FDA_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FDA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (const cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FDA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA GALGAS_pic_31__38_Instruction_5F_FDA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inAttribute_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FDA (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FDA_5F_base_5F_code, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA::reader_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mAttribute_mInstruction_5F_FDA_5F_base_5F_code ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST cPtr_pic_31__38_Instruction_5F_FDA::reader_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction_5F_FDA_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FDA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FDA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_FDA::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_FDA class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_FDA::cPtr_pic_31__38_Instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction_5F_FDA_5F_base_5F_code (in_mInstruction_5F_FDA_5F_base_5F_code),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

void cPtr_pic_31__38_Instruction_5F_FDA::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FDA:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FDA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FDA (mAttribute_mInstructionLocation, mAttribute_mInstruction_5F_FDA_5F_base_5F_code, mAttribute_mRegisterExpression, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_FDA type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ("pic18Instruction_FDA",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA GALGAS_pic_31__38_Instruction_5F_FDA::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA result ;
  const GALGAS_pic_31__38_Instruction_5F_FDA * p = (const GALGAS_pic_31__38_Instruction_5F_FDA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JSR * p = (const cPtr_pic_31__38_Instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JSR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JSR::GALGAS_pic_31__38_Instruction_5F_JSR (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JSR::GALGAS_pic_31__38_Instruction_5F_JSR (const cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JSR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                            const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JSR * p = (const cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind GALGAS_pic_31__38_Instruction_5F_JSR::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_jumpInstructionKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JSR * p = (const cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind cPtr_pic_31__38_Instruction_5F_JSR::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_JSR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_JSR::cPtr_pic_31__38_Instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mTargetLabel,
                                                                        const GALGAS_jumpInstructionKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

void cPtr_pic_31__38_Instruction_5F_JSR::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_JSR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JSR (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_JSR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ("pic18Instruction_JSR",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  const GALGAS_pic_31__38_Instruction_5F_JSR * p = (const GALGAS_pic_31__38_Instruction_5F_JSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_LFSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LFSR * p = (const cPtr_pic_31__38_Instruction_5F_LFSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFSRindex.objectCompare (p->mAttribute_mFSRindex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediatExpression.objectCompare (p->mAttribute_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_LFSR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LFSR::GALGAS_pic_31__38_Instruction_5F_LFSR (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LFSR::GALGAS_pic_31__38_Instruction_5F_LFSR (const cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LFSR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LFSR GALGAS_pic_31__38_Instruction_5F_LFSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_luint & inAttribute_mFSRindex,
                                                                                              const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LFSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFSRindex.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LFSR (inAttribute_mInstructionLocation, inAttribute_mFSRindex, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_LFSR::reader_mFSRindex (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LFSR * p = (const cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    result = p->mAttribute_mFSRindex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_pic_31__38_Instruction_5F_LFSR::reader_mFSRindex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFSRindex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_LFSR::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LFSR * p = (const cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    result = p->mAttribute_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_LFSR::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_LFSR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_LFSR::cPtr_pic_31__38_Instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_luint & in_mFSRindex,
                                                                          const GALGAS_immediatExpression & in_mImmediatExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mFSRindex (in_mFSRindex),
mAttribute_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LFSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;
}

void cPtr_pic_31__38_Instruction_5F_LFSR::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_LFSR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFSRindex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_LFSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LFSR (mAttribute_mInstructionLocation, mAttribute_mFSRindex, mAttribute_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_LFSR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ("pic18Instruction_LFSR",
                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LFSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LFSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LFSR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LFSR GALGAS_pic_31__38_Instruction_5F_LFSR::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LFSR result ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR * p = (const GALGAS_pic_31__38_Instruction_5F_LFSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LFSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LFSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_MOVFF::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceRegisterName.objectCompare (p->mAttribute_mSourceRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDestinationRegisterName.objectCompare (p->mAttribute_mDestinationRegisterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_MOVFF::objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (const cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_registerExpression & inAttribute_mSourceRegisterName,
                                                                                                const GALGAS_registerExpression & inAttribute_mDestinationRegisterName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSourceRegisterName.isValid () && inAttribute_mDestinationRegisterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_MOVFF (inAttribute_mInstructionLocation, inAttribute_mSourceRegisterName, inAttribute_mDestinationRegisterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::reader_mSourceRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    result = p->mAttribute_mSourceRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_MOVFF::reader_mSourceRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::reader_mDestinationRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    result = p->mAttribute_mDestinationRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_MOVFF::reader_mDestinationRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_MOVFF class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_MOVFF::cPtr_pic_31__38_Instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_registerExpression & in_mSourceRegisterName,
                                                                            const GALGAS_registerExpression & in_mDestinationRegisterName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSourceRegisterName (in_mSourceRegisterName),
mAttribute_mDestinationRegisterName (in_mDestinationRegisterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_MOVFF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

void cPtr_pic_31__38_Instruction_5F_MOVFF::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_MOVFF:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDestinationRegisterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_MOVFF::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MOVFF (mAttribute_mInstructionLocation, mAttribute_mSourceRegisterName, mAttribute_mDestinationRegisterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_MOVFF type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ("pic18Instruction_MOVFF",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF result ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF * p = (const GALGAS_pic_31__38_Instruction_5F_MOVFF *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_MOVFF *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MOVFF", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_TBLRD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_TBLRD * p = (const cPtr_pic_31__38_Instruction_5F_TBLRD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOption.objectCompare (p->mAttribute_mOption) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_TBLRD::objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLRD & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLRD::GALGAS_pic_31__38_Instruction_5F_TBLRD (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLRD::GALGAS_pic_31__38_Instruction_5F_TBLRD (const cPtr_pic_31__38_Instruction_5F_TBLRD * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLRD GALGAS_pic_31__38_Instruction_5F_TBLRD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_tableAccessOption & inAttribute_mOption
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLRD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_TBLRD (inAttribute_mInstructionLocation, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableAccessOption GALGAS_pic_31__38_Instruction_5F_TBLRD::reader_mOption (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableAccessOption result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_TBLRD * p = (const cPtr_pic_31__38_Instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
    result = p->mAttribute_mOption ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableAccessOption cPtr_pic_31__38_Instruction_5F_TBLRD::reader_mOption (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOption ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_TBLRD class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_TBLRD::cPtr_pic_31__38_Instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_tableAccessOption & in_mOption
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOption (in_mOption) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_TBLRD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;
}

void cPtr_pic_31__38_Instruction_5F_TBLRD::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_TBLRD:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOption.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_TBLRD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_TBLRD (mAttribute_mInstructionLocation, mAttribute_mOption COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_TBLRD type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ("pic18Instruction_TBLRD",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_TBLRD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_TBLRD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_TBLRD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLRD GALGAS_pic_31__38_Instruction_5F_TBLRD::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLRD result ;
  const GALGAS_pic_31__38_Instruction_5F_TBLRD * p = (const GALGAS_pic_31__38_Instruction_5F_TBLRD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_TBLRD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLRD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_TBLWT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_TBLWT * p = (const cPtr_pic_31__38_Instruction_5F_TBLWT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOption.objectCompare (p->mAttribute_mOption) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_TBLWT::objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLWT & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLWT::GALGAS_pic_31__38_Instruction_5F_TBLWT (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLWT::GALGAS_pic_31__38_Instruction_5F_TBLWT (const cPtr_pic_31__38_Instruction_5F_TBLWT * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLWT GALGAS_pic_31__38_Instruction_5F_TBLWT::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_tableAccessOption & inAttribute_mOption
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLWT result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_TBLWT (inAttribute_mInstructionLocation, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableAccessOption GALGAS_pic_31__38_Instruction_5F_TBLWT::reader_mOption (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableAccessOption result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_TBLWT * p = (const cPtr_pic_31__38_Instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
    result = p->mAttribute_mOption ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableAccessOption cPtr_pic_31__38_Instruction_5F_TBLWT::reader_mOption (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOption ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_TBLWT class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_TBLWT::cPtr_pic_31__38_Instruction_5F_TBLWT (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_tableAccessOption & in_mOption
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOption (in_mOption) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_TBLWT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;
}

void cPtr_pic_31__38_Instruction_5F_TBLWT::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_TBLWT:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOption.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_TBLWT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_TBLWT (mAttribute_mInstructionLocation, mAttribute_mOption COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_TBLWT type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ("pic18Instruction_TBLWT",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_TBLWT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_TBLWT::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_TBLWT (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLWT GALGAS_pic_31__38_Instruction_5F_TBLWT::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLWT result ;
  const GALGAS_pic_31__38_Instruction_5F_TBLWT * p = (const GALGAS_pic_31__38_Instruction_5F_TBLWT *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_TBLWT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLWT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_fnop::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_fnop * p = (const cPtr_pic_31__38_Instruction_5F_fnop *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_fnop) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediatExpression.objectCompare (p->mAttribute_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_fnop::objectCompare (const GALGAS_pic_31__38_Instruction_5F_fnop & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_fnop::GALGAS_pic_31__38_Instruction_5F_fnop (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_fnop::GALGAS_pic_31__38_Instruction_5F_fnop (const cPtr_pic_31__38_Instruction_5F_fnop * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_fnop) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_fnop GALGAS_pic_31__38_Instruction_5F_fnop::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_fnop result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_fnop (inAttribute_mInstructionLocation, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_fnop::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_fnop * p = (const cPtr_pic_31__38_Instruction_5F_fnop *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_fnop) ;
    result = p->mAttribute_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_fnop::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_fnop class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_fnop::cPtr_pic_31__38_Instruction_5F_fnop (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_immediatExpression & in_mImmediatExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_fnop::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;
}

void cPtr_pic_31__38_Instruction_5F_fnop::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_fnop:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_fnop::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_fnop (mAttribute_mInstructionLocation, mAttribute_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_fnop type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ("pic18Instruction_fnop",
                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_fnop::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_fnop::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_fnop (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_fnop GALGAS_pic_31__38_Instruction_5F_fnop::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_fnop result ;
  const GALGAS_pic_31__38_Instruction_5F_fnop * p = (const GALGAS_pic_31__38_Instruction_5F_fnop *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_fnop *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_fnop", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_literalOperation * p = (const cPtr_pic_31__38_Instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralInstruction.objectCompare (p->mAttribute_mLiteralInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediatExpression.objectCompare (p->mAttribute_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_literalOperation::objectCompare (const GALGAS_pic_31__38_Instruction_5F_literalOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_literalOperation::GALGAS_pic_31__38_Instruction_5F_literalOperation (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_literalOperation::GALGAS_pic_31__38_Instruction_5F_literalOperation (const cPtr_pic_31__38_Instruction_5F_literalOperation * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_literalOperation GALGAS_pic_31__38_Instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                      const GALGAS_literal_5F_instruction_5F_opcode & inAttribute_mLiteralInstruction,
                                                                                                                      const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralInstruction.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mLiteralInstruction, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_instruction_5F_opcode GALGAS_pic_31__38_Instruction_5F_literalOperation::reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_literalOperation * p = (const cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    result = p->mAttribute_mLiteralInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_instruction_5F_opcode cPtr_pic_31__38_Instruction_5F_literalOperation::reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_literalOperation::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_literalOperation * p = (const cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    result = p->mAttribute_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_literalOperation::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18Instruction_literalOperation class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_literalOperation::cPtr_pic_31__38_Instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                  const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mLiteralInstruction (in_mLiteralInstruction),
mAttribute_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;
}

void cPtr_pic_31__38_Instruction_5F_literalOperation::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_literalOperation:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_literalOperation (mAttribute_mInstructionLocation, mAttribute_mLiteralInstruction, mAttribute_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18Instruction_literalOperation type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ("pic18Instruction_literalOperation",
                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_literalOperation GALGAS_pic_31__38_Instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_literalOperation result ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation * p = (const GALGAS_pic_31__38_Instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_withNoOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (const cPtr_pic_31__38_Instruction_5F_withNoOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_withNoOperand::objectCompare (const GALGAS_pic_31__38_Instruction_5F_withNoOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_withNoOperand::GALGAS_pic_31__38_Instruction_5F_withNoOperand (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_withNoOperand::GALGAS_pic_31__38_Instruction_5F_withNoOperand (const cPtr_pic_31__38_Instruction_5F_withNoOperand * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_withNoOperand GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_pic_31__38_InstructionWithNoOperandKind & inAttribute_mKind
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_withNoOperand result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_withNoOperand (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_Instruction_5F_withNoOperand::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (const cPtr_pic_31__38_Instruction_5F_withNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionWithNoOperandKind cPtr_pic_31__38_Instruction_5F_withNoOperand::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18Instruction_withNoOperand class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_withNoOperand::cPtr_pic_31__38_Instruction_5F_withNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_withNoOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;
}

void cPtr_pic_31__38_Instruction_5F_withNoOperand::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_withNoOperand:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_withNoOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_withNoOperand (mAttribute_mInstructionLocation, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_withNoOperand type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ("pic18Instruction_withNoOperand",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_withNoOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_withNoOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_withNoOperand (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_withNoOperand GALGAS_pic_31__38_Instruction_5F_withNoOperand::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_withNoOperand result ;
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand * p = (const GALGAS_pic_31__38_Instruction_5F_withNoOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_withNoOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_withNoOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_registerExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerExpression * p = (const cPtr_registerExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterName.objectCompare (p->mAttribute_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOffset.objectCompare (p->mAttribute_mOffset) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfOffsetExpression.objectCompare (p->mAttribute_mEndOfOffsetExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerExpression::objectCompare (const GALGAS_registerExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression::GALGAS_registerExpression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression::GALGAS_registerExpression (const cPtr_registerExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_registerExpression::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                                      const GALGAS_immediatExpression & inAttribute_mOffset,
                                                                      const GALGAS_location & inAttribute_mEndOfOffsetExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_registerExpression result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mOffset.isValid () && inAttribute_mEndOfOffsetExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerExpression (inAttribute_mRegisterName, inAttribute_mOffset, inAttribute_mEndOfOffsetExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerExpression::reader_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerExpression * p = (const cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerExpression::reader_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_registerExpression::reader_mOffset (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerExpression * p = (const cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    result = p->mAttribute_mOffset ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_registerExpression::reader_mOffset (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOffset ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerExpression::reader_mEndOfOffsetExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerExpression * p = (const cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    result = p->mAttribute_mEndOfOffsetExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_registerExpression::reader_mEndOfOffsetExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfOffsetExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @registerExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerExpression::cPtr_registerExpression (const GALGAS_lstring & in_mRegisterName,
                                                  const GALGAS_immediatExpression & in_mOffset,
                                                  const GALGAS_location & in_mEndOfOffsetExpression
                                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mRegisterName (in_mRegisterName),
mAttribute_mOffset (in_mOffset),
mAttribute_mEndOfOffsetExpression (in_mEndOfOffsetExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

void cPtr_registerExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@registerExpression:" ;
  mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOffset.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfOffsetExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerExpression (mAttribute_mRegisterName, mAttribute_mOffset, mAttribute_mEndOfOffsetExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @registerExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerExpression ("registerExpression",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerExpression result ;
  const GALGAS_registerExpression * p = (const GALGAS_registerExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "piccolo",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .piccolo extension",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const char * kVersionString = "version " PROJECT_VERSION_STRING " [debug]" ;
#else
  static const char * kVersionString = "version " PROJECT_VERSION_STRING ;
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    const enumGalgasBool test_0 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.reader_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 6)).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 7)).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 8)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_allDevices = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 11)) ;
      GALGAS_stringlist var_pic_31__38__5F_devices = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_program.galgas", 12)) ;
      GALGAS_stringlist var_midrange_5F_devices = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_program.galgas", 13)) ;
      GALGAS_stringlist var_baseline_5F_devices = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_program.galgas", 14)) ;
      cEnumerator_stringlist enumerator_694 (var_allDevices, kEnumeration_up) ;
      while (enumerator_694.hasCurrentObject ()) {
        GALGAS_string var_name = enumerator_694.current_mValue (HERE).reader_lastPathComponent (SOURCE_FILE ("piccolo_program.galgas", 17)).reader_stringByDeletingPathExtension (SOURCE_FILE ("piccolo_program.galgas", 17)) ;
        GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
        {
        routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_name, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)) ;
        }
        switch (var_piccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("piccolo_program.galgas", 19)).enumValue ()) {
        case GALGAS_processorType::kNotBuilt:
          break ;
        case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
        case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
          {
            var_pic_31__38__5F_devices.addAssign_operation (var_name  COMMA_SOURCE_FILE ("piccolo_program.galgas", 21)) ;
          }
          break ;
        case GALGAS_processorType::kEnum_midrange:
          {
            var_midrange_5F_devices.addAssign_operation (var_name  COMMA_SOURCE_FILE ("piccolo_program.galgas", 23)) ;
          }
          break ;
        case GALGAS_processorType::kEnum_baseline:
          {
            var_baseline_5F_devices.addAssign_operation (var_name  COMMA_SOURCE_FILE ("piccolo_program.galgas", 31)) ;
          }
          break ;
        }
        enumerator_694.gotoNextObject () ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.reader_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 35)).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->printMessage (var_baseline_5F_devices.reader_length (SOURCE_FILE ("piccolo_program.galgas", 36)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string (" baseline devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string::constructor_stringWithVersionString (SOURCE_FILE ("piccolo_program.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)) ;
        GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_stringlist enumerator_1824 (var_baseline_5F_devices, kEnumeration_up) ;
        while (enumerator_1824.hasCurrentObject ()) {
          inCompiler->printMessage (enumerator_1824.current_mValue (HERE).reader_stringByRightPadding (GALGAS_uint ((uint32_t) 15U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 39))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 39)) ;
          var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 40)) ;
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 5U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_idx = GALGAS_uint ((uint32_t) 0U) ;
            inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 43)) ;
          }
          enumerator_1824.gotoNextObject () ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 47)) ;
        }
      }
      const enumGalgasBool test_4 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.reader_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 51)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->printMessage (var_midrange_5F_devices.reader_length (SOURCE_FILE ("piccolo_program.galgas", 52)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string (" mid-range devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string::constructor_stringWithVersionString (SOURCE_FILE ("piccolo_program.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)) ;
        GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_stringlist enumerator_2417 (var_midrange_5F_devices, kEnumeration_up) ;
        while (enumerator_2417.hasCurrentObject ()) {
          inCompiler->printMessage (enumerator_2417.current_mValue (HERE).reader_stringByRightPadding (GALGAS_uint ((uint32_t) 15U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 55))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 55)) ;
          var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 56)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 5U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_idx = GALGAS_uint ((uint32_t) 0U) ;
            inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 59)) ;
          }
          enumerator_2417.gotoNextObject () ;
        }
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_6) {
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 63)) ;
        }
      }
      const enumGalgasBool test_7 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.reader_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->printMessage (var_pic_31__38__5F_devices.reader_length (SOURCE_FILE ("piccolo_program.galgas", 68)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string (" pic18 devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string::constructor_stringWithVersionString (SOURCE_FILE ("piccolo_program.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)) ;
        GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_stringlist enumerator_2993 (var_pic_31__38__5F_devices, kEnumeration_up) ;
        while (enumerator_2993.hasCurrentObject ()) {
          inCompiler->printMessage (enumerator_2993.current_mValue (HERE).reader_stringByRightPadding (GALGAS_uint ((uint32_t) 15U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 71))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 71)) ;
          var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 72)) ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 5U))).boolEnum () ;
          if (kBoolTrue == test_8) {
            var_idx = GALGAS_uint ((uint32_t) 0U) ;
            inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 75)) ;
          }
          enumerator_2993.gotoNextObject () ;
        }
        const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_9) {
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 79)) ;
        }
      }
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.reader_value ()).reader_length (SOURCE_FILE ("piccolo_program.galgas", 85)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_string var_dir = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.reader_value ()) ;
      const enumGalgasBool test_11 = var_dir.reader_directoryExists (SOURCE_FILE ("piccolo_program.galgas", 87)).operator_not (SOURCE_FILE ("piccolo_program.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_11) {
        var_dir.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 88)) ;
      }
      GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
      GALGAS_stringlist var_allDevices = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 91)) ;
      cEnumerator_stringlist enumerator_3704 (var_allDevices, kEnumeration_up) ;
      while (enumerator_3704.hasCurrentObject ()) {
        GALGAS_string var_definitionString = var_fw.reader_textFileContentsAtPath (enumerator_3704.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 93)) ;
        var_definitionString.method_writeToFile (var_dir.add_operation (enumerator_3704.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)) ;
        enumerator_3704.gotoNextObject () ;
      }
      inCompiler->printMessage (var_allDevices.reader_length (SOURCE_FILE ("piccolo_program.galgas", 96)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GALGAS_string (" devices copied in '"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (var_dir, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GALGAS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)) ;
    }
    GALGAS_string var_deviceForMemoryDescription = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription.reader_value ()) ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_deviceForMemoryDescription.reader_length (SOURCE_FILE ("piccolo_program.galgas", 100)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_string var_devicePath = GALGAS_string ("/").add_operation (var_deviceForMemoryDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)) ;
      const enumGalgasBool test_13 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_fileExistsAtPath (var_devicePath, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 102)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
        {
        routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_deviceForMemoryDescription, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 104))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 104)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 104)) ;
        }
        GALGAS_uint var_totalRam = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_ramBankTable enumerator_4540 (var_piccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("piccolo_program.galgas", 106)), kEnumeration_up) ;
        while (enumerator_4540.hasCurrentObject ()) {
          var_totalRam = var_totalRam.add_operation (enumerator_4540.current_mLastAddressPlusOne (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 107)).substract_operation (enumerator_4540.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 107)) ;
          enumerator_4540.gotoNextObject () ;
        }
        inCompiler->printMessage (var_deviceForMemoryDescription.add_operation (GALGAS_string (" device:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)) ;
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_piccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("piccolo_program.galgas", 110)).reader_count (SOURCE_FILE ("piccolo_program.galgas", 110)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)).add_operation (GALGAS_string (" RAM banks (total "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)).add_operation (var_totalRam.reader_string (SOURCE_FILE ("piccolo_program.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)).add_operation (GALGAS_string (" bytes):\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)) ;
        cEnumerator_ramBankTable enumerator_4864 (var_piccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("piccolo_program.galgas", 111)), kEnumeration_up) ;
        while (enumerator_4864.hasCurrentObject ()) {
          inCompiler->printMessage (GALGAS_string ("    bank \"").add_operation (enumerator_4864.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (GALGAS_string ("\" from "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (enumerator_4864.current_mFirstFreeAddress (HERE).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (enumerator_4864.current_mLastAddressPlusOne (HERE).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).add_operation (enumerator_4864.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_4864.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 114)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 114)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 114))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)) ;
          cEnumerator_uintlist enumerator_5115 (enumerator_4864.current_mMirrorOffsetList (HERE), kEnumeration_up) ;
          const bool bool_14 = true ;
          if (enumerator_5115.hasCurrentObject () && bool_14) {
            inCompiler->printMessage (GALGAS_string (", mirror at ")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 116)) ;
            while (enumerator_5115.hasCurrentObject () && bool_14) {
              inCompiler->printMessage (enumerator_4864.current_mFirstFreeAddress (HERE).add_operation (enumerator_5115.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 117)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 117))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 117)) ;
              enumerator_5115.gotoNextObject () ;
              if (enumerator_5115.hasCurrentObject () && bool_14) {
                inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 118)) ;
              }
            }
          }
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 120)) ;
          enumerator_4864.gotoNextObject () ;
        }
        switch (var_piccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("piccolo_program.galgas", 122)).enumValue ()) {
        case GALGAS_processorType::kNotBuilt:
          break ;
        case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
        case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
          {
            inCompiler->printMessage (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("piccolo_program.galgas", 124)).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 124)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 124)).add_operation (GALGAS_string (" bytes\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 124))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 124)) ;
          }
          break ;
        case GALGAS_processorType::kEnum_midrange:
          {
            GALGAS_uint var_pageCount = var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("piccolo_program.galgas", 126)).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 126)).add_operation (GALGAS_uint ((uint32_t) 2047U), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 126)).divide_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 126)) ;
            GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
            const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_pageCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_15) {
              var_s = GALGAS_string ("s") ;
            }
            inCompiler->printMessage (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("piccolo_program.galgas", 131)).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 131)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (GALGAS_string (" instructions ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (var_pageCount.reader_string (SOURCE_FILE ("piccolo_program.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (GALGAS_string (" page"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 132)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 132)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 132))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)) ;
          }
          break ;
        case GALGAS_processorType::kEnum_baseline:
          {
            inCompiler->printMessage (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("piccolo_program.galgas", 134)).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 134)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 134)).add_operation (GALGAS_string (" instructions\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 134))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 134)) ;
          }
          break ;
        }
        const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, var_piccoloDeviceModel.reader_mEepromSize (SOURCE_FILE ("piccolo_program.galgas", 136)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_16) {
          inCompiler->printMessage (GALGAS_string ("  No EEPROM\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 137)) ;
        }else if (kBoolFalse == test_16) {
          inCompiler->printMessage (GALGAS_string ("  EEPROM size: ").add_operation (var_piccoloDeviceModel.reader_mEepromSize (SOURCE_FILE ("piccolo_program.galgas", 139)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)).add_operation (GALGAS_string (" bytes (at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)).add_operation (var_piccoloDeviceModel.reader_mEepromAddress (SOURCE_FILE ("piccolo_program.galgas", 140)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 140))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)) ;
        }
      }else if (kBoolFalse == test_13) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 143)), GALGAS_string ("The ").add_operation (var_deviceForMemoryDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 143)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 143))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 143)) ;
      }
    }
    GALGAS_string var_deviceForRegistersDescription = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription.reader_value ()) ;
    const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_deviceForRegistersDescription.reader_length (SOURCE_FILE ("piccolo_program.galgas", 148)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_string var_devicePath = GALGAS_string ("/").add_operation (var_deviceForRegistersDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)) ;
      const enumGalgasBool test_18 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_fileExistsAtPath (var_devicePath, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 150)).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
        {
        routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_deviceForRegistersDescription, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 152))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 152)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 152)) ;
        }
        inCompiler->printMessage (var_deviceForRegistersDescription.add_operation (GALGAS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)).add_operation (var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("piccolo_program.galgas", 153)).reader_count (SOURCE_FILE ("piccolo_program.galgas", 153)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)).add_operation (GALGAS_string (" special registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)) ;
        cEnumerator_registerTable enumerator_7064 (var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("piccolo_program.galgas", 154)), kEnumeration_up) ;
        while (enumerator_7064.hasCurrentObject ()) {
          GALGAS_string var_s = GALGAS_string ("  '").add_operation (enumerator_7064.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 155)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 155)) ;
          cEnumerator_uintlist enumerator_7150 (enumerator_7064.current_mRegisterAddressList (HERE), kEnumeration_up) ;
          while (enumerator_7150.hasCurrentObject ()) {
            var_s.dotAssign_operation (enumerator_7150.current_mValue (HERE).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 157))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 157)) ;
            if (enumerator_7150.hasNextObject ()) {
              var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 158)) ;
            }
            enumerator_7150.gotoNextObject () ;
          }
          var_s.dotAssign_operation (enumerator_7064.current_mBitDefinitionString (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 160))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 160)) ;
          inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("piccolo_program.galgas", 161)) ;
          enumerator_7064.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_18) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 164)), GALGAS_string ("The ").add_operation (var_deviceForRegistersDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 164)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 164))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 164)) ;
      }
    }
    GALGAS_string var_deviceForConfigDescription = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription.reader_value ()) ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_deviceForConfigDescription.reader_length (SOURCE_FILE ("piccolo_program.galgas", 169)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string var_devicePath = GALGAS_string ("/").add_operation (var_deviceForConfigDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)) ;
      const enumGalgasBool test_20 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_fileExistsAtPath (var_devicePath, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).boolEnum () ;
      if (kBoolTrue == test_20) {
        GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
        {
        routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_deviceForConfigDescription, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 173))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)) ;
        }
        inCompiler->printMessage (var_deviceForConfigDescription.add_operation (GALGAS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 174)).add_operation (var_piccoloDeviceModel.reader_mConfigRegisterMap (SOURCE_FILE ("piccolo_program.galgas", 174)).reader_count (SOURCE_FILE ("piccolo_program.galgas", 174)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 174)).add_operation (GALGAS_string (" configuration registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 174))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 174)) ;
        cEnumerator_configRegisterMap enumerator_8170 (var_piccoloDeviceModel.reader_mConfigRegisterMap (SOURCE_FILE ("piccolo_program.galgas", 175)), kEnumeration_up) ;
        while (enumerator_8170.hasCurrentObject ()) {
          GALGAS_string var_s = GALGAS_string ("REGISTER '").add_operation (enumerator_8170.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (enumerator_8170.current_mRegisterAddress (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 176)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (GALGAS_string (", width "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (enumerator_8170.current_mRegisterWidth (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 176)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)) ;
          cEnumerator_illegalMaskList enumerator_8350 (enumerator_8170.current_mIllegalMaskList (HERE), kEnumeration_up) ;
          while (enumerator_8350.hasCurrentObject ()) {
            var_s.dotAssign_operation (GALGAS_string ("  illegal value ").add_operation (enumerator_8350.current_mIllegalValue (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 178)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string (" mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8350.current_mIllegalMask (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 178)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8350.current_mDescription (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)) ;
            enumerator_8350.gotoNextObject () ;
          }
          cEnumerator_configRegisterMaskMap enumerator_8573 (enumerator_8170.current_mConfigRegisterMaskMap (HERE), kEnumeration_up) ;
          while (enumerator_8573.hasCurrentObject ()) {
            var_s.dotAssign_operation (GALGAS_string ("  setting '").add_operation (enumerator_8573.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (GALGAS_string ("': mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (enumerator_8573.current_mMaskValue (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 181)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (enumerator_8573.current_mDescription (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)) ;
            cEnumerator_fieldSettingMap enumerator_8775 (enumerator_8573.current_mFieldSettingMap (HERE), kEnumeration_up) ;
            while (enumerator_8775.hasCurrentObject ()) {
              var_s.dotAssign_operation (GALGAS_string ("    value ").add_operation (enumerator_8775.current_mValue (HERE).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)).add_operation (enumerator_8775.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 183))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)) ;
              enumerator_8775.gotoNextObject () ;
            }
            enumerator_8573.gotoNextObject () ;
          }
          inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)) ;
          enumerator_8170.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_20) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 189)), GALGAS_string ("The ").add_operation (var_deviceForConfigDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 189)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 189))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 189)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("piccolo_program.galgas", 200)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         kVersionString,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  bool verboseOptionOn = true ;
  int16_t returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "" COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      verboseOptionOn = gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int16_t r = 0 ;
        if (fileExtension == "piccolo") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_pic_31__38__5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_pic_31__38__5F_grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_pic_31__38__5F_grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_pic_31__38__5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
        closeTrace () ;
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonLexique COMMA_HERE) ;
    //--- Display error and warnings count
      if (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

