#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_andCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_andCondition * p = (const cPtr_baseline_5F_andCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_andCondition::objectCompare (const GALGAS_baseline_5F_andCondition & inOperand) const {
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

GALGAS_baseline_5F_andCondition::GALGAS_baseline_5F_andCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_andCondition::GALGAS_baseline_5F_andCondition (const cPtr_baseline_5F_andCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_andCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_andCondition GALGAS_baseline_5F_andCondition::constructor_new (const GALGAS_baseline_5F_conditionExpression & inAttribute_mLeftExpression,
                                                                                  const GALGAS_baseline_5F_conditionExpression & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_andCondition result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_andCondition (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_andCondition::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_andCondition * p = (const cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression cPtr_baseline_5F_andCondition::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_andCondition::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_andCondition * p = (const cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression cPtr_baseline_5F_andCondition::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @baseline_andCondition class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_andCondition::cPtr_baseline_5F_andCondition (const GALGAS_baseline_5F_conditionExpression & in_mLeftExpression,
                                                              const GALGAS_baseline_5F_conditionExpression & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_andCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

void cPtr_baseline_5F_andCondition::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@baseline_andCondition:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_andCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_andCondition (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @baseline_andCondition type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_andCondition ("baseline_andCondition",
                                                 & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_andCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_andCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_andCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_andCondition GALGAS_baseline_5F_andCondition::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_andCondition result ;
  const GALGAS_baseline_5F_andCondition * p = (const GALGAS_baseline_5F_andCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_andCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_andCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_structured_5F_if::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_structured_5F_if::objectCompare (const GALGAS_baseline_5F_instruction_5F_structured_5F_if & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_structured_5F_if::GALGAS_baseline_5F_instruction_5F_structured_5F_if (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_structured_5F_if::GALGAS_baseline_5F_instruction_5F_structured_5F_if (const cPtr_baseline_5F_instruction_5F_structured_5F_if * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_structured_5F_if GALGAS_baseline_5F_instruction_5F_structured_5F_if::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_baseline_5F_conditionExpression & inAttribute_mIfCondition,
                                                                                                                        const GALGAS_baseline_5F_instructionList & inAttribute_mThenInstructionList,
                                                                                                                        const GALGAS_baseline_5F_instructionList & inAttribute_mElseInstructionList,
                                                                                                                        const GALGAS_location & inAttribute_mEndOfElsePartLocation
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_structured_5F_if result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIfCondition.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElsePartLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_structured_5F_if (inAttribute_mInstructionLocation, inAttribute_mIfCondition, inAttribute_mThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElsePartLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_instruction_5F_structured_5F_if::getter_mIfCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    result = p->mProperty_mIfCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression cPtr_baseline_5F_instruction_5F_structured_5F_if::getter_mIfCondition (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIfCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_structured_5F_if::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    result = p->mProperty_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cPtr_baseline_5F_instruction_5F_structured_5F_if::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_structured_5F_if::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cPtr_baseline_5F_instruction_5F_structured_5F_if::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_instruction_5F_structured_5F_if::getter_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    result = p->mProperty_mEndOfElsePartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_instruction_5F_structured_5F_if::getter_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfElsePartLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_instruction_structured_if class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_structured_5F_if::cPtr_baseline_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                                                    const GALGAS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                                                    const GALGAS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mIfCondition (in_mIfCondition),
mProperty_mThenInstructionList (in_mThenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfElsePartLocation (in_mEndOfElsePartLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

void cPtr_baseline_5F_instruction_5F_structured_5F_if::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_structured_if:" ;
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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_instruction_structured_if type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ("baseline_instruction_structured_if",
                                                                    & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_structured_5F_if GALGAS_baseline_5F_instruction_5F_structured_5F_if::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_structured_5F_if result ;
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if * p = (const GALGAS_baseline_5F_instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@baseline_5F_partList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_baseline_5F_partList : public cCollectionElement {
  public : GALGAS_baseline_5F_partList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_baseline_5F_partList (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                    const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfPartLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_baseline_5F_partList::cCollectionElement_baseline_5F_partList (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                                                  const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfPartLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_baseline_5F_partList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_baseline_5F_partList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_baseline_5F_partList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_baseline_5F_partList::description (C_String & ioString, const int32_t inIndentation) const {
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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_baseline_5F_partList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_partList * operand = (cCollectionElement_baseline_5F_partList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_partList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList::GALGAS_baseline_5F_partList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList::GALGAS_baseline_5F_partList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_partList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::constructor_listWithValue (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                                    const GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                    const GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_baseline_5F_partList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_baseline_5F_partList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                             const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfPartLocation
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = NULL ;
  macroMyNew (p, cCollectionElement_baseline_5F_partList (in_mCondition,
                                                          in_mInstructionList,
                                                          in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::addAssign_operation (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                       const GALGAS_baseline_5F_instructionList & inOperand1,
                                                       const GALGAS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::setter_insertAtIndex (const GALGAS_baseline_5F_conditionExpression inOperand0,
                                                        const GALGAS_baseline_5F_instructionList inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::setter_removeAtIndex (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                        GALGAS_baseline_5F_instructionList & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
      outOperand0 = p->mObject.mProperty_mCondition ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::setter_popFirst (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                   GALGAS_baseline_5F_instructionList & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::setter_popLast (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                  GALGAS_baseline_5F_instructionList & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::method_first (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                GALGAS_baseline_5F_instructionList & outOperand1,
                                                GALGAS_location & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::method_last (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                               GALGAS_baseline_5F_instructionList & outOperand1,
                                               GALGAS_location & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::add_operation (const GALGAS_baseline_5F_partList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result = GALGAS_baseline_5F_partList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result = GALGAS_baseline_5F_partList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result = GALGAS_baseline_5F_partList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::plusAssign_operation (const GALGAS_baseline_5F_partList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_partList::getter_mConditionAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GALGAS_baseline_5F_conditionExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mProperty_mCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_partList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_partList::getter_mEndOfPartLocationAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mProperty_mEndOfPartLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_partList::cEnumerator_baseline_5F_partList (const GALGAS_baseline_5F_partList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList_2D_element cEnumerator_baseline_5F_partList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression cEnumerator_baseline_5F_partList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mProperty_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cEnumerator_baseline_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_baseline_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mProperty_mEndOfPartLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @baseline_partList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_partList ("baseline_partList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_partList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_partList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_partList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_partList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList result ;
  const GALGAS_baseline_5F_partList * p = (const GALGAS_baseline_5F_partList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_partList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_partList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_do_5F_while::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_do_5F_while::objectCompare (const GALGAS_baseline_5F_instruction_5F_do_5F_while & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_do_5F_while::GALGAS_baseline_5F_instruction_5F_do_5F_while (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_do_5F_while::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_baseline_5F_instructionList::constructor_emptyList (HERE),
                                                                         GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_baseline_5F_partList::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_do_5F_while::GALGAS_baseline_5F_instruction_5F_do_5F_while (const cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                              const GALGAS_baseline_5F_instructionList & inAttribute_mRepeatedInstructionList,
                                                                                                              const GALGAS_location & inAttribute_mEndOfRepeatedInstructionList,
                                                                                                              const GALGAS_baseline_5F_partList & inAttribute_mWhilePartList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_do_5F_while result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mEndOfRepeatedInstructionList.isValid () && inAttribute_mWhilePartList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_do_5F_while (inAttribute_mInstructionLocation, inAttribute_mRepeatedInstructionList, inAttribute_mEndOfRepeatedInstructionList, inAttribute_mWhilePartList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_do_5F_while::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    result = p->mProperty_mRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cPtr_baseline_5F_instruction_5F_do_5F_while::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_instruction_5F_do_5F_while::getter_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    result = p->mProperty_mEndOfRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_instruction_5F_do_5F_while::getter_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_instruction_5F_do_5F_while::getter_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    result = p->mProperty_mWhilePartList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList cPtr_baseline_5F_instruction_5F_do_5F_while::getter_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhilePartList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @baseline_instruction_do_while class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_do_5F_while::cPtr_baseline_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                                                          const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                          const GALGAS_baseline_5F_partList & in_mWhilePartList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRepeatedInstructionList (in_mRepeatedInstructionList),
mProperty_mEndOfRepeatedInstructionList (in_mEndOfRepeatedInstructionList),
mProperty_mWhilePartList (in_mWhilePartList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

void cPtr_baseline_5F_instruction_5F_do_5F_while::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_do_while:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_instruction_do_while type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ("baseline_instruction_do_while",
                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_do_5F_while result ;
  const GALGAS_baseline_5F_instruction_5F_do_5F_while * p = (const GALGAS_baseline_5F_instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@baseline_5F_routineDefinitionList' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_baseline_5F_routineDefinitionList : public cCollectionElement {
  public : GALGAS_baseline_5F_routineDefinitionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_baseline_5F_routineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                                 const GALGAS_luint & in_mPage,
                                                                 const GALGAS_bool & in_mIsNoReturn,
                                                                 const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                 const GALGAS_location & in_mEndOfRoutineLocation
                                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_baseline_5F_routineDefinitionList::cCollectionElement_baseline_5F_routineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                                                                            const GALGAS_luint & in_mPage,
                                                                                                            const GALGAS_bool & in_mIsNoReturn,
                                                                                                            const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                            const GALGAS_location & in_mEndOfRoutineLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mPage, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_baseline_5F_routineDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_baseline_5F_routineDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_baseline_5F_routineDefinitionList (mObject.mProperty_mRoutineName, mObject.mProperty_mPage, mObject.mProperty_mIsNoReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_baseline_5F_routineDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineName" ":" ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPage" ":" ;
  mObject.mProperty_mPage.description (ioString, inIndentation) ;
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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_baseline_5F_routineDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_routineDefinitionList * operand = (cCollectionElement_baseline_5F_routineDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList::GALGAS_baseline_5F_routineDefinitionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList::GALGAS_baseline_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_routineDefinitionList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_luint & inOperand1,
                                                                                                              const GALGAS_bool & inOperand2,
                                                                                                              const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                                              const GALGAS_location & inOperand4
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_baseline_5F_routineDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_baseline_5F_routineDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mRoutineName,
                                                                          const GALGAS_luint & in_mPage,
                                                                          const GALGAS_bool & in_mIsNoReturn,
                                                                          const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                          const GALGAS_location & in_mEndOfRoutineLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (in_mRoutineName,
                                                                       in_mPage,
                                                                       in_mIsNoReturn,
                                                                       in_mInstructionList,
                                                                       in_mEndOfRoutineLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_luint & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                    const GALGAS_location & inOperand4
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_luint inOperand1,
                                                                     const GALGAS_bool inOperand2,
                                                                     const GALGAS_baseline_5F_instructionList inOperand3,
                                                                     const GALGAS_location inOperand4,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_luint & outOperand1,
                                                                     GALGAS_bool & outOperand2,
                                                                     GALGAS_baseline_5F_instructionList & outOperand3,
                                                                     GALGAS_location & outOperand4,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mRoutineName ;
      outOperand1 = p->mObject.mProperty_mPage ;
      outOperand2 = p->mObject.mProperty_mIsNoReturn ;
      outOperand3 = p->mObject.mProperty_mInstructionList ;
      outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_luint & outOperand1,
                                                                GALGAS_bool & outOperand2,
                                                                GALGAS_baseline_5F_instructionList & outOperand3,
                                                                GALGAS_location & outOperand4,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mIsNoReturn ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_luint & outOperand1,
                                                               GALGAS_bool & outOperand2,
                                                               GALGAS_baseline_5F_instructionList & outOperand3,
                                                               GALGAS_location & outOperand4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mIsNoReturn ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_luint & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             GALGAS_baseline_5F_instructionList & outOperand3,
                                                             GALGAS_location & outOperand4,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mIsNoReturn ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_luint & outOperand1,
                                                            GALGAS_bool & outOperand2,
                                                            GALGAS_baseline_5F_instructionList & outOperand3,
                                                            GALGAS_location & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mIsNoReturn ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::add_operation (const GALGAS_baseline_5F_routineDefinitionList & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::plusAssign_operation (const GALGAS_baseline_5F_routineDefinitionList inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_routineDefinitionList::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baseline_5F_routineDefinitionList::getter_mPageAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_routineDefinitionList::getter_mIsNoReturnAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_routineDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_routineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_routineDefinitionList::cEnumerator_baseline_5F_routineDefinitionList (const GALGAS_baseline_5F_routineDefinitionList & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element cEnumerator_baseline_5F_routineDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_baseline_5F_routineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cEnumerator_baseline_5F_routineDefinitionList::current_mPage (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_baseline_5F_routineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cEnumerator_baseline_5F_routineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_baseline_5F_routineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mEndOfRoutineLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_routineDefinitionList type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ("baseline_routineDefinitionList",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_routineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_routineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_routineDefinitionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList result ;
  const GALGAS_baseline_5F_routineDefinitionList * p = (const GALGAS_baseline_5F_routineDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_routineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension method '@baseline_instruction addUsedRoutines'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_instruction_addUsedRoutines> gExtensionMethodTable_baseline_5F_instruction_addUsedRoutines ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addUsedRoutines (const int32_t inClassIndex,
                                           extensionMethodSignature_baseline_5F_instruction_addUsedRoutines inMethod) {
  gExtensionMethodTable_baseline_5F_instruction_addUsedRoutines.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_instruction_addUsedRoutines (void) {
  gExtensionMethodTable_baseline_5F_instruction_addUsedRoutines.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_addUsedRoutines (NULL,
                                                                    freeExtensionMethod_baseline_5F_instruction_addUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                          GALGAS_stringset & io_ioUsedRoutines,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_instruction_addUsedRoutines f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_instruction_addUsedRoutines.count ()) {
      f = gExtensionMethodTable_baseline_5F_instruction_addUsedRoutines (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_baseline_5F_instruction_addUsedRoutines.count ()) {
          f = gExtensionMethodTable_baseline_5F_instruction_addUsedRoutines (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_baseline_5F_instruction_addUsedRoutines.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUsedRoutines, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baseline_5F_declaredRoutineMap::cMapElement_baseline_5F_declaredRoutineMap (const GALGAS_lstring & inKey
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_baseline_5F_declaredRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_baseline_5F_declaredRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_baseline_5F_declaredRoutineMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_baseline_5F_declaredRoutineMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_baseline_5F_declaredRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_baseline_5F_declaredRoutineMap * operand = (cMapElement_baseline_5F_declaredRoutineMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap::GALGAS_baseline_5F_declaredRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap::GALGAS_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap & GALGAS_baseline_5F_declaredRoutineMap::operator = (const GALGAS_baseline_5F_declaredRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::constructor_mapWithMapToOverride (const GALGAS_baseline_5F_declaredRoutineMap & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_baseline_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baseline_5F_declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_baseline_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey = "the '%K' routine is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_baseline_5F_declaredRoutineMap * p = (const cMapElement_baseline_5F_declaredRoutineMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_baseline_5F_declaredRoutineMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baseline_5F_declaredRoutineMap * GALGAS_baseline_5F_declaredRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * result = (cMapElement_baseline_5F_declaredRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baseline_5F_declaredRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_declaredRoutineMap::cEnumerator_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element cEnumerator_baseline_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_baseline_5F_declaredRoutineMap * p = (const cMapElement_baseline_5F_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baseline_5F_declaredRoutineMap) ;
  return GALGAS_baseline_5F_declaredRoutineMap_2D_element (p->mProperty_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_baseline_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_declaredRoutineMap type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ("baseline_declaredRoutineMap",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  const GALGAS_baseline_5F_declaredRoutineMap * p = (const GALGAS_baseline_5F_declaredRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@baseline_instruction shouldTerminateWithMOVLW'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW> gExtensionMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_shouldTerminateWithMOVLW (const int32_t inClassIndex,
                                                    extensionMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW inMethod) {
  gExtensionMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                   const GALGAS_string constin_inErrorMessage,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.count ()) {
      f = gExtensionMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.count ()) {
           f = gExtensionMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inErrorMessage, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                              const GALGAS_string constinArgument_inErrorMessage,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, constinArgument_inErrorMessage, fixItArray0  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 18)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_instruction_shouldTerminateWithMOVLW (void) {
  gExtensionMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_shouldTerminateWithMOVLW,
                                                                             freeExtensionMethod_baseline_5F_instruction_shouldTerminateWithMOVLW) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@baseline_instruction shouldNotContinueInSequence'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence> gExtensionMethodTable_baseline_5F_instruction_shouldNotContinueInSequence ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_shouldNotContinueInSequence (const int32_t inClassIndex,
                                                       extensionMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence inMethod) {
  gExtensionMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * inObject,
                                                      const GALGAS_string constin_inErrorMessage,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.count ()) {
      f = gExtensionMethodTable_baseline_5F_instruction_shouldNotContinueInSequence (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.count ()) {
           f = gExtensionMethodTable_baseline_5F_instruction_shouldNotContinueInSequence (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inErrorMessage, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * inObject,
                                                                                 const GALGAS_string constinArgument_inErrorMessage,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, constinArgument_inErrorMessage, fixItArray0  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 64)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_instruction_shouldNotContinueInSequence (void) {
  gExtensionMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_shouldNotContinueInSequence,
                                                                                freeExtensionMethod_baseline_5F_instruction_shouldNotContinueInSequence) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression::GALGAS_baseline_5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression::~ GALGAS_baseline_5F_intermediate_5F_registerExpression (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression::GALGAS_baseline_5F_intermediate_5F_registerExpression (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_registerExpression (GALGAS_string::constructor_default (HERE),
                                                                GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_uint & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_baseline_5F_intermediate_5F_registerExpression (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_registerExpression::objectCompare (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAssemblyString.objectCompare (inOperand.mProperty_mAssemblyString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_registerExpression::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @baseline_intermediate_registerExpression:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_baseline_5F_intermediate_5F_registerExpression::getter_mAssemblyString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssemblyString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_registerExpression::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @baseline_intermediate_registerExpression type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ("baseline_intermediate_registerExpression",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  const GALGAS_baseline_5F_intermediate_5F_registerExpression * p = (const GALGAS_baseline_5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction::GALGAS_baseline_5F_intermediate_5F_instruction (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction::GALGAS_baseline_5F_intermediate_5F_instruction (const cPtr_baseline_5F_intermediate_5F_instruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_intermediate_instruction class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction::cPtr_baseline_5F_intermediate_5F_instruction (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_intermediate_instruction type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ("baseline_intermediate_instruction",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction GALGAS_baseline_5F_intermediate_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction * p = (const GALGAS_baseline_5F_intermediate_5F_instruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Class for element of '@baseline_5F_intermediate_5F_instructionList' list                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_baseline_5F_intermediate_5F_instructionList : public cCollectionElement {
  public : GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_baseline_5F_intermediate_5F_instructionList::cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_baseline_5F_intermediate_5F_instructionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_baseline_5F_intermediate_5F_instructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_baseline_5F_intermediate_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_baseline_5F_intermediate_5F_instructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_baseline_5F_intermediate_5F_instructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * operand = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList::GALGAS_baseline_5F_intermediate_5F_instructionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList::GALGAS_baseline_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_instructionList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_listWithValue (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_intermediate_5F_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_baseline_5F_intermediate_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                    const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::addAssign_operation (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_insertAtIndex (const GALGAS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                               const GALGAS_uint inInsertionIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_removeAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                               const GALGAS_uint inRemoveIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_popFirst (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_popLast (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::method_first (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::method_last (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::add_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                                                                      C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::plusAssign_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList inOperand,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction GALGAS_baseline_5F_intermediate_5F_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  GALGAS_baseline_5F_intermediate_5F_instruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_intermediate_5F_instructionList::cEnumerator_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element cEnumerator_baseline_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (const cCollectionElement_baseline_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction cEnumerator_baseline_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (const cCollectionElement_baseline_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_intermediate_instructionList type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ("baseline_intermediate_instructionList",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instructionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList result ;
  const GALGAS_baseline_5F_intermediate_5F_instructionList * p = (const GALGAS_baseline_5F_intermediate_5F_instructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_NULL::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_NULL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_NULL & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_NULL::GALGAS_baseline_5F_intermediate_5F_NULL (void) :
GALGAS_baseline_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_NULL::GALGAS_baseline_5F_intermediate_5F_NULL (const cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_NULL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_NULL (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_intermediate_NULL class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_NULL::cPtr_baseline_5F_intermediate_5F_NULL (LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_NULL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

void cPtr_baseline_5F_intermediate_5F_NULL::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@baseline_intermediate_NULL]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_NULL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_NULL (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_intermediate_NULL type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ("baseline_intermediate_NULL",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_NULL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_NULL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_NULL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_NULL result ;
  const GALGAS_baseline_5F_intermediate_5F_NULL * p = (const GALGAS_baseline_5F_intermediate_5F_NULL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_NULL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo::GALGAS_baseline_5F_intermediate_5F_pseudo (void) :
GALGAS_baseline_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo::GALGAS_baseline_5F_intermediate_5F_pseudo (const cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @baseline_intermediate_pseudo class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_pseudo::cPtr_baseline_5F_intermediate_5F_pseudo (LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_intermediate_pseudo type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ("baseline_intermediate_pseudo",
                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo GALGAS_baseline_5F_intermediate_5F_pseudo::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  if (kOperandEqual == result) {
    result = mProperty_mPage.objectCompare (p->mProperty_mPage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_new (const GALGAS_uint & inAttribute_mPage
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  if (inAttribute_mPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (inAttribute_mPage COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::getter_mPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
    result = p->mProperty_mPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::getter_mPage (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_intermediate_pseudo_PAGE class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GALGAS_uint & in_mPage
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mProperty_mPage (in_mPage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_pseudo_PAGE:" ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (mProperty_mPage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_intermediate_pseudo_PAGE type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ("baseline_intermediate_pseudo_PAGE",
                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_intermediate_5F_actualInstruction::objectCompare (const GALGAS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_actualInstruction::GALGAS_baseline_5F_intermediate_5F_actualInstruction (void) :
GALGAS_baseline_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_actualInstruction::GALGAS_baseline_5F_intermediate_5F_actualInstruction (const cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_intermediate_5F_actualInstruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (const cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_intermediate_5F_actualInstruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @baseline_intermediate_actualInstruction class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_intermediate_actualInstruction type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ("baseline_intermediate_actualInstruction",
                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_actualInstruction GALGAS_baseline_5F_intermediate_5F_actualInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_actualInstruction result ;
  const GALGAS_baseline_5F_intermediate_5F_actualInstruction * p = (const GALGAS_baseline_5F_intermediate_5F_actualInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                            const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inAttribute_mInstruction,
                                                                                                                            const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @baseline_intermediate_instruction_FD class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_FD:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_intermediate_instruction_FD type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ("baseline_intermediate_instruction_FD",
                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                          const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mInstruction,
                                                                                                                          const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code cPtr_baseline_5F_intermediate_5F_instruction_5F_F::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_instruction_5F_F::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @baseline_intermediate_instruction_F class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                                                      const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction),
mProperty_mRegisterDescription (in_mRegisterDescription) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_F:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_intermediate_instruction_F type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ("baseline_intermediate_instruction_F",
                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                            const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inAttribute_mInstruction,
                                                                                                                            const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                            const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @baseline_intermediate_instruction_FB class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_uint & in_mBitNumber
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_FB:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_intermediate_instruction_FB type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ("baseline_intermediate_instruction_FB",
                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                         GALGAS_bool::constructor_default (HERE),
                                                                                         GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                         GALGAS_uint::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                              const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                              const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (inAttribute_mInstructionLocation, inAttribute_mSkipIfSet, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    result = p->mProperty_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @baseline_intermediate_instruction_BitTestSkip class                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                          const GALGAS_bool & in_mSkipIfSet,
                                                                                                                          const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                          const GALGAS_uint & in_mBitNumber
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_BitTestSkip:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @baseline_intermediate_instruction_BitTestSkip type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ("baseline_intermediate_instruction_BitTestSkip",
                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::objectCompare (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inAttribute_mInstruction
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (inAttribute_mInstructionLocation, inAttribute_mInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_intermediate_WO_OPERAND class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_WO_OPERAND:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_intermediate_WO_OPERAND type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ("baseline_intermediate_WO_OPERAND",
                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralValue.objectCompare (p->mProperty_mLiteralValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                        const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inAttribute_mInstruction,
                                                                                                                                                        const GALGAS_uint & inAttribute_mLiteralValue
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::getter_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    result = p->mProperty_mLiteralValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::getter_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                     Pointer class for @baseline_intermediate_instruction_literalOperation class                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                    const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                    const GALGAS_uint & in_mLiteralValue
                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction),
mProperty_mLiteralValue (in_mLiteralValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::description (C_String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_literalOperation:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @baseline_intermediate_instruction_literalOperation type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ("baseline_intermediate_instruction_literalOperation",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOccurrenceFactor.objectCompare (p->mProperty_mOccurrenceFactor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                  GALGAS_luint::constructor_default (HERE)
                                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::getter_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
    result = p->mProperty_mOccurrenceFactor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::getter_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOccurrenceFactor ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @baseline_intermediate_instruction_MNOP class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                                                            const GALGAS_luint & in_mOccurrenceFactor
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_MNOP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_intermediate_instruction_MNOP type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ("baseline_intermediate_instruction_MNOP",
                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                        GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                        GALGAS_string::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE)
                                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                            const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                            const GALGAS_string & inAttribute_mTargetLabel,
                                                                                                                                            const GALGAS_bool & inAttribute_mIncrement,
                                                                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                                                            const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (inAttribute_mInstructionLocation, inAttribute_mRegisterDescription, inAttribute_mTargetLabel, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      Pointer class for @baseline_intermediate_incDecRegisterInCondition class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                        const GALGAS_string & in_mTargetLabel,
                                                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_incDecRegisterInCondition:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mTargetLabel, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_intermediate_incDecRegisterInCondition type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ("baseline_intermediate_incDecRegisterInCondition",
                                                                              & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baselineRoutineMap::cMapElement_baselineRoutineMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_bool & in_mIsNoReturn,
                                                                const GALGAS_luint & in_mPage
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsNoReturn (in_mIsNoReturn),
mProperty_mPage (in_mPage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_baselineRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mPage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_baselineRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_baselineRoutineMap (mProperty_lkey, mProperty_mIsNoReturn, mProperty_mPage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_baselineRoutineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsNoReturn" ":" ;
  mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPage" ":" ;
  mProperty_mPage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_baselineRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_baselineRoutineMap * operand = (cMapElement_baselineRoutineMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsNoReturn.objectCompare (operand->mProperty_mIsNoReturn) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPage.objectCompare (operand->mProperty_mPage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap::GALGAS_baselineRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap::GALGAS_baselineRoutineMap (const GALGAS_baselineRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap & GALGAS_baselineRoutineMap::operator = (const GALGAS_baselineRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap GALGAS_baselineRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_baselineRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap GALGAS_baselineRoutineMap::constructor_mapWithMapToOverride (const GALGAS_baselineRoutineMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap GALGAS_baselineRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_baselineRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_bool & inArgument0,
                                                     const GALGAS_luint & inArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_baselineRoutineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baselineRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_bool inArgument0,
                                                  GALGAS_luint inArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_baselineRoutineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_baselineRoutineMap_searchKey = "the '%K' routine is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_bool & outArgument0,
                                                  GALGAS_luint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_baselineRoutineMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    outArgument0 = p->mProperty_mIsNoReturn ;
    outArgument1 = p->mProperty_mPage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baselineRoutineMap::getter_mIsNoReturnForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    result = p->mProperty_mIsNoReturn ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baselineRoutineMap::getter_mPageForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) attributes ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    result = p->mProperty_mPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineRoutineMap::setter_setMIsNoReturnForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baselineRoutineMap * p = (cMapElement_baselineRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    p->mProperty_mIsNoReturn = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineRoutineMap::setter_setMPageForKey (GALGAS_luint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baselineRoutineMap * p = (cMapElement_baselineRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    p->mProperty_mPage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baselineRoutineMap * GALGAS_baselineRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * result = (cMapElement_baselineRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baselineRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baselineRoutineMap::cEnumerator_baselineRoutineMap (const GALGAS_baselineRoutineMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element cEnumerator_baselineRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
  return GALGAS_baselineRoutineMap_2D_element (p->mProperty_lkey, p->mProperty_mIsNoReturn, p->mProperty_mPage) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_baselineRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_baselineRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
  return p->mProperty_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cEnumerator_baselineRoutineMap::current_mPage (LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
  return p->mProperty_mPage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @baselineRoutineMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baselineRoutineMap ("baselineRoutineMap",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baselineRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baselineRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap GALGAS_baselineRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap result ;
  const GALGAS_baselineRoutineMap * p = (const GALGAS_baselineRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baselineRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Abstract extension method '@baseline_instruction build_baseline_intermediate_instructionList'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList> gExtensionMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (const int32_t inClassIndex,
                                                                                extensionMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList inMethod) {
  gExtensionMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  gExtensionMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList (NULL,
                                                                                                         freeExtensionMethod_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                               const GALGAS_uint constin_inCurrentPage,
                                                                               const GALGAS_baselineRoutineMap constin_inRoutineMap,
                                                                               const GALGAS_registerTable constin_inRegisterTable,
                                                                               const GALGAS_constantMap constin_inConstantMap,
                                                                               GALGAS_uint & io_ioLocalLabelIndex,
                                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                               GALGAS_string & io_ioListFileContents,
                                                                               GALGAS_bool & io_ioContinuesInSequence,
                                                                               const GALGAS_routineKind constin_inRoutineKind,
                                                                               const GALGAS_bool constin_inLastInstructionShouldReturn,
                                                                               GALGAS_stringset & io_ioUsedRegisters,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.count ()) {
      f = gExtensionMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.count ()) {
          f = gExtensionMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inCurrentPage, constin_inRoutineMap, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioContinuesInSequence, constin_inRoutineKind, constin_inLastInstructionShouldReturn, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract extension method '@baseline_conditionExpression build_intermediate_condition_instructions'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions> gExtensionMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (const int32_t inClassIndex,
                                                                              extensionMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions inMethod) {
  gExtensionMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions (void) {
  gExtensionMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions (NULL,
                                                                                                               freeExtensionMethod_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                             const GALGAS_uint constin_inCurrentPage,
                                                                             const GALGAS_registerTable constin_inRegisterTable,
                                                                             const GALGAS_constantMap constin_inConstantMap,
                                                                             GALGAS_uint & io_ioLocalLabelIndex,
                                                                             const GALGAS_bool constin_inComplementaryBranch,
                                                                             const GALGAS_location constin_inInstructionLocation,
                                                                             const GALGAS_string constin_inTargetLabel,
                                                                             GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                             GALGAS_stringset & io_ioUsedRegisters,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_conditionExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.count ()) {
      f = gExtensionMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.count ()) {
          f = gExtensionMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inCurrentPage, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, constin_inComplementaryBranch, constin_inInstructionLocation, constin_inTargetLabel, io_ioGeneratedInstructionList, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension method '@baseline_intermediate_instruction print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_instruction_print> gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_print ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_print (const int32_t inClassIndex,
                                 extensionMethodSignature_baseline_5F_intermediate_5F_instruction_print inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_print.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_intermediate_5F_instruction_print (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_print.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_print (NULL,
                                                                          freeExtensionMethod_baseline_5F_intermediate_5F_instruction_print) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                GALGAS_string & io_ioListFileContents,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_instruction_print f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_print.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_print (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_print.count ()) {
          f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_print (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_print.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioListFileContents, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension getter '@baseline_intermediate_instruction length'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_baseline_5F_intermediate_5F_instruction_length> gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_length ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_length (const int32_t inClassIndex,
                                  enterExtensionGetter_baseline_5F_intermediate_5F_instruction_length inGetter) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_length.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_baseline_5F_intermediate_5F_instruction_length (void) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_length.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_length (NULL,
                                                                           freeExtensionGetter_baseline_5F_intermediate_5F_instruction_length) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callExtensionGetter_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_baseline_5F_intermediate_5F_instruction_length f = NULL ;
    if (classIndex < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_length.count ()) {
      f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_length (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_length.count ()) {
           f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_length (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_length.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baselineSymbolTableForOptimizations::cMapElement_baselineSymbolTableForOptimizations (const GALGAS_lstring & inKey,
                                                                                                  const GALGAS_uint & in_mDefinitionLineIndex
                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDefinitionLineIndex (in_mDefinitionLineIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_baselineSymbolTableForOptimizations::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionLineIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_baselineSymbolTableForOptimizations::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_baselineSymbolTableForOptimizations (mProperty_lkey, mProperty_mDefinitionLineIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_baselineSymbolTableForOptimizations::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefinitionLineIndex" ":" ;
  mProperty_mDefinitionLineIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_baselineSymbolTableForOptimizations::compare (const cCollectionElement * inOperand) const {
  cMapElement_baselineSymbolTableForOptimizations * operand = (cMapElement_baselineSymbolTableForOptimizations *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefinitionLineIndex.objectCompare (operand->mProperty_mDefinitionLineIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations::GALGAS_baselineSymbolTableForOptimizations (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations::GALGAS_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations & GALGAS_baselineSymbolTableForOptimizations::operator = (const GALGAS_baselineSymbolTableForOptimizations & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations GALGAS_baselineSymbolTableForOptimizations::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations GALGAS_baselineSymbolTableForOptimizations::constructor_mapWithMapToOverride (const GALGAS_baselineSymbolTableForOptimizations & inMapToOverride
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations GALGAS_baselineSymbolTableForOptimizations::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_baselineSymbolTableForOptimizations result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineSymbolTableForOptimizations::addAssign_operation (const GALGAS_lstring & inKey,
                                                                      const GALGAS_uint & inArgument0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * p = NULL ;
  macroMyNew (p, cMapElement_baselineSymbolTableForOptimizations (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baselineSymbolTableForOptimizations insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineSymbolTableForOptimizations::setter_insertKey (GALGAS_lstring inKey,
                                                                   GALGAS_uint inArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * p = NULL ;
  macroMyNew (p, cMapElement_baselineSymbolTableForOptimizations (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey = "the '%K' label is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineSymbolTableForOptimizations::method_searchKey (GALGAS_lstring inKey,
                                                                   GALGAS_uint & outArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) performSearch (inKey,
                                                                                                                                       inCompiler,
                                                                                                                                       kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey
                                                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineSymbolTableForOptimizations::setter_removeKey (GALGAS_lstring inKey,
                                                                   GALGAS_uint & outArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "the '%K' label is not declared" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_baselineSymbolTableForOptimizations * p = (cMapElement_baselineSymbolTableForOptimizations *) attributes.ptr () ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baselineSymbolTableForOptimizations::getter_mDefinitionLineIndexForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    result = p->mProperty_mDefinitionLineIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineSymbolTableForOptimizations::setter_setMDefinitionLineIndexForKey (GALGAS_uint inAttributeValue,
                                                                                       GALGAS_string inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baselineSymbolTableForOptimizations * p = (cMapElement_baselineSymbolTableForOptimizations *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    p->mProperty_mDefinitionLineIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baselineSymbolTableForOptimizations * GALGAS_baselineSymbolTableForOptimizations::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                 const GALGAS_string & inKey
                                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * result = (cMapElement_baselineSymbolTableForOptimizations *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baselineSymbolTableForOptimizations) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baselineSymbolTableForOptimizations::cEnumerator_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element cEnumerator_baselineSymbolTableForOptimizations::current (LOCATION_ARGS) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
  return GALGAS_baselineSymbolTableForOptimizations_2D_element (p->mProperty_lkey, p->mProperty_mDefinitionLineIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_baselineSymbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_baselineSymbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
  return p->mProperty_mDefinitionLineIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baselineSymbolTableForOptimizations type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ("baselineSymbolTableForOptimizations",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baselineSymbolTableForOptimizations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baselineSymbolTableForOptimizations::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineSymbolTableForOptimizations (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations GALGAS_baselineSymbolTableForOptimizations::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations result ;
  const GALGAS_baselineSymbolTableForOptimizations * p = (const GALGAS_baselineSymbolTableForOptimizations *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baselineSymbolTableForOptimizations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@baseline_intermediate_instruction setCurrentAddress'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress> gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_setCurrentAddress (const int32_t inClassIndex,
                                             extensionMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_setCurrentAddress (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            GALGAS_uint & io_ioCurrentWordAdress,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.count ()) {
           f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioCurrentWordAdress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                       GALGAS_uint & ioArgument_ioCurrentWordAdress,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction temp_0 = object ;
  ioArgument_ioCurrentWordAdress = ioArgument_ioCurrentWordAdress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress (void) {
  enterExtensionMethod_setCurrentAddress (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                          extensionMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress,
                                                                                      freeExtensionMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension getter '@baseline_intermediate_instruction isLABEL'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL> gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_isLABEL (const int32_t inClassIndex,
                                   enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL inGetter) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL f = NULL ;
    if (classIndex < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.count ()) {
      f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.count ()) {
           f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (false) ;
//---
  return result_outIsLABEL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL (void) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL,
                                                                            freeExtensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension getter '@baseline_intermediate_instruction isNULL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isNULL> gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isNULL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_isNULL (const int32_t inClassIndex,
                                  enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isNULL inGetter) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isNULL f = NULL ;
    if (classIndex < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.count ()) {
      f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isNULL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.count ()) {
           f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isNULL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (false) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_isNULL (void) {
  enterExtensionGetter_isNULL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_instruction_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_baseline_5F_intermediate_5F_instruction_isNULL (void) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_isNULL (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_isNULL,
                                                                           freeExtensionGetter_baseline_5F_intermediate_5F_instruction_isNULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension getter '@baseline_intermediate_instruction isSkippingInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction> gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_isSkippingInstruction (const int32_t inClassIndex,
                                                 enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction inGetter) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction f = NULL ;
    if (classIndex < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
      f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
           f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (false) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  enterExtensionGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                              extensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction,
                                                                                          freeExtensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension getter '@baseline_intermediate_instruction nextInstructionIsReachable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable> gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_nextInstructionIsReachable (const int32_t inClassIndex,
                                                      enterExtensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable inGetter) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable f = NULL ;
    if (classIndex < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
      f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
           f = gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (true) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  gExtensionGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable,
                                                                                               freeExtensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@baseline_intermediate_instruction enterReferencedLabel'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel> gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterReferencedLabel (const int32_t inClassIndex,
                                                extensionMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               GALGAS_stringset & io_ioReferencedLabelSet,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.count ()) {
           f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioReferencedLabelSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                          GALGAS_stringset & /* ioArgument_ioReferencedLabelSet */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel,
                                                                                         freeExtensionMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@baseline_intermediate_instruction defineLabel'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel> gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_defineLabel (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_defineLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      GALGAS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.count ()) {
           f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRoutineSymbolTable, constin_inLineIndex, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_defineLabel (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                 GALGAS_baselineSymbolTableForOptimizations & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 const GALGAS_uint /* constinArgument_inLineIndex */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_defineLabel (void) {
  enterExtensionMethod_defineLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                    extensionMethod_baseline_5F_intermediate_5F_instruction_defineLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_intermediate_5F_instruction_defineLabel (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_defineLabel (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_defineLabel,
                                                                                freeExtensionMethod_baseline_5F_intermediate_5F_instruction_defineLabel) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@baseline_intermediate_incDecRegisterInCondition optimizeTestDecInc'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc> gExtensionMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_optimizeTestDecInc (const int32_t inClassIndex,
                                              extensionMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_optimizeTestDecInc (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                             const GALGAS_uint constin_inLineIndex,
                                             GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_bool & io_ioOptimizationsDone,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.count ()) {
           f = gExtensionMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                                                                                      const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                                                      const GALGAS_uint constinArgument_inLineIndex,
                                                                                                      GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                      GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  GALGAS_uint var_line_18466 ;
  constinArgument_inSymbolTable.method_searchKey (GALGAS_lstring::constructor_new (object->mProperty_mTargetLabel, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 469))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 469)), var_line_18466, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 469)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_18657 ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line_18466.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 472)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_18657, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 471)) ;
  }
  if (var_firstInstruction_18657.isValid ()) {
    if (var_firstInstruction_18657.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
      GALGAS_baseline_5F_intermediate_5F_GOTO cast_18775_goto ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_firstInstruction_18657.ptr ()) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mRegisterDescription, cast_18775_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 483)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 483)), object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination, object->mProperty_mBranchIfZero  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 480)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 479)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 490)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 490)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 491)) ;
      const enumGalgasBool test_0 = object->mProperty_mIncrement.boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 493)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 495)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_optimizations.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 497)) ;
      const enumGalgasBool test_1 = object->mProperty_m_5F_W_5F_isDestination.boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 499)) ;
      }
      const enumGalgasBool test_2 = object->mProperty_mBranchIfZero.boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 502)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 504)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": branching to GOTO replaced by second GOTO label\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 506)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (void) {
  enterExtensionMethod_optimizeTestDecInc (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                           extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc,
                                                                                                     freeExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction::GALGAS_baseline_5F_assembly_5F_instruction (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction::GALGAS_baseline_5F_assembly_5F_instruction (const cPtr_baseline_5F_assembly_5F_instruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @baseline_assembly_instruction class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction::cPtr_baseline_5F_assembly_5F_instruction (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_assembly_instruction type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ("baseline_assembly_instruction",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction GALGAS_baseline_5F_assembly_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction result ;
  const GALGAS_baseline_5F_assembly_5F_instruction * p = (const GALGAS_baseline_5F_assembly_5F_instruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Class for element of '@baseline_5F_assembly_5F_instructionList' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_baseline_5F_assembly_5F_instructionList : public cCollectionElement {
  public : GALGAS_baseline_5F_assembly_5F_instructionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_baseline_5F_assembly_5F_instructionList (const GALGAS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_baseline_5F_assembly_5F_instructionList::cCollectionElement_baseline_5F_assembly_5F_instructionList (const GALGAS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_baseline_5F_assembly_5F_instructionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_baseline_5F_assembly_5F_instructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_baseline_5F_assembly_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_baseline_5F_assembly_5F_instructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_baseline_5F_assembly_5F_instructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_assembly_5F_instructionList * operand = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList::GALGAS_baseline_5F_assembly_5F_instructionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList::GALGAS_baseline_5F_assembly_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_instructionList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList GALGAS_baseline_5F_assembly_5F_instructionList::constructor_listWithValue (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_assembly_5F_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_baseline_5F_assembly_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_baseline_5F_assembly_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::addAssign_operation (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_assembly_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::setter_insertAtIndex (const GALGAS_baseline_5F_assembly_5F_instruction inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_assembly_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::setter_removeAtIndex (GALGAS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::setter_popFirst (GALGAS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::setter_popLast (GALGAS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::method_first (GALGAS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::method_last (GALGAS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList GALGAS_baseline_5F_assembly_5F_instructionList::add_operation (const GALGAS_baseline_5F_assembly_5F_instructionList & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList GALGAS_baseline_5F_assembly_5F_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_instructionList result = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList GALGAS_baseline_5F_assembly_5F_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_instructionList result = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList GALGAS_baseline_5F_assembly_5F_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_instructionList result = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::plusAssign_operation (const GALGAS_baseline_5F_assembly_5F_instructionList inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList::setter_setMInstructionAtIndex (GALGAS_baseline_5F_assembly_5F_instruction inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction GALGAS_baseline_5F_assembly_5F_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  GALGAS_baseline_5F_assembly_5F_instruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_assembly_5F_instructionList::cEnumerator_baseline_5F_assembly_5F_instructionList (const GALGAS_baseline_5F_assembly_5F_instructionList & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element cEnumerator_baseline_5F_assembly_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (const cCollectionElement_baseline_5F_assembly_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction cEnumerator_baseline_5F_assembly_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (const cCollectionElement_baseline_5F_assembly_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_assembly_instructionList type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ("baseline_assembly_instructionList",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instructionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList GALGAS_baseline_5F_assembly_5F_instructionList::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instructionList result ;
  const GALGAS_baseline_5F_assembly_5F_instructionList * p = (const GALGAS_baseline_5F_assembly_5F_instructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  if (kOperandEqual == result) {
    result = mProperty_mOrigin.objectCompare (p->mProperty_mOrigin) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::constructor_new (const GALGAS_uint & inAttribute_mOrigin
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  if (inAttribute_mOrigin.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (inAttribute_mOrigin COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::getter_mOrigin (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
    result = p->mProperty_mOrigin ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::getter_mOrigin (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @baseline_assembly_pseudo_ORG class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (const GALGAS_uint & in_mOrigin
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mOrigin (in_mOrigin) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_pseudo_ORG:" ;
  mProperty_mOrigin.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (mProperty_mOrigin COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_assembly_pseudo_ORG type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ("baseline_assembly_pseudo_ORG",
                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ORG", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_assembly_5F_actualInstruction::objectCompare (const GALGAS_baseline_5F_assembly_5F_actualInstruction & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_actualInstruction::GALGAS_baseline_5F_assembly_5F_actualInstruction (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_actualInstruction::GALGAS_baseline_5F_assembly_5F_actualInstruction (const cPtr_baseline_5F_assembly_5F_actualInstruction * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_assembly_5F_actualInstruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_actualInstruction * p = (const cPtr_baseline_5F_assembly_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_assembly_5F_actualInstruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @baseline_assembly_actualInstruction class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_actualInstruction::cPtr_baseline_5F_assembly_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_assembly_actualInstruction type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ("baseline_assembly_actualInstruction",
                                                                  & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_actualInstruction GALGAS_baseline_5F_assembly_5F_actualInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_actualInstruction result ;
  const GALGAS_baseline_5F_assembly_5F_actualInstruction * p = (const GALGAS_baseline_5F_assembly_5F_actualInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inAttribute_mInstruction,
                                                                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                    const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code cPtr_baseline_5F_assembly_5F_instruction_5F_FD::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_instruction_5F_FD::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_assembly_5F_instruction_5F_FD::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_assembly_instruction_FD class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_FD::cPtr_baseline_5F_assembly_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_FD:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_assembly_instruction_FD type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ("baseline_assembly_instruction_FD",
                                                                  & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_F::GALGAS_baseline_5F_assembly_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_F::GALGAS_baseline_5F_assembly_5F_instruction_5F_F (const cPtr_baseline_5F_assembly_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_F GALGAS_baseline_5F_assembly_5F_instruction_5F_F::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mInstruction,
                                                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_assembly_5F_instruction_5F_F::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code cPtr_baseline_5F_assembly_5F_instruction_5F_F::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_F::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_instruction_5F_F::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_assembly_instruction_F class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_F::cPtr_baseline_5F_assembly_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction),
mProperty_mRegisterDescription (in_mRegisterDescription) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_F:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_assembly_instruction_F type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ("baseline_assembly_instruction_F",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_F GALGAS_baseline_5F_assembly_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inAttribute_mInstruction,
                                                                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                    const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op cPtr_baseline_5F_assembly_5F_instruction_5F_FB::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_instruction_5F_FB::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_instruction_5F_FB::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_assembly_instruction_FB class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_FB::cPtr_baseline_5F_assembly_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                const GALGAS_uint & in_mBitNumber
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_FB:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_assembly_instruction_FB type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ("baseline_assembly_instruction_FB",
                                                                  & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                     GALGAS_bool::constructor_default (HERE),
                                                                                     GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                     GALGAS_uint::constructor_default (HERE)
                                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                      const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                      const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (inAttribute_mInstructionLocation, inAttribute_mSkipIfSet, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    result = p->mProperty_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @baseline_assembly_instruction_BitTestSkip class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                  const GALGAS_bool & in_mSkipIfSet,
                                                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GALGAS_uint & in_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_BitTestSkip:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @baseline_assembly_instruction_BitTestSkip type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ("baseline_assembly_instruction_BitTestSkip",
                                                                           & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_SKIP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_SKIP * p = (const cPtr_baseline_5F_assembly_5F_SKIP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_SKIP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_SKIP::objectCompare (const GALGAS_baseline_5F_assembly_5F_SKIP & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_SKIP::GALGAS_baseline_5F_assembly_5F_SKIP (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_SKIP::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_SKIP::GALGAS_baseline_5F_assembly_5F_SKIP (const cPtr_baseline_5F_assembly_5F_SKIP * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_SKIP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_SKIP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_SKIP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @baseline_assembly_SKIP class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_SKIP::cPtr_baseline_5F_assembly_5F_SKIP (const GALGAS_location & in_mInstructionLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_SKIP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

void cPtr_baseline_5F_assembly_5F_SKIP::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_SKIP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_SKIP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_SKIP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_assembly_SKIP type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ("baseline_assembly_SKIP",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_SKIP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_SKIP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_SKIP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_SKIP result ;
  const GALGAS_baseline_5F_assembly_5F_SKIP * p = (const GALGAS_baseline_5F_assembly_5F_SKIP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_SKIP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_SKIP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::objectCompare (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inAttribute_mInstruction
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (inAttribute_mInstructionLocation, inAttribute_mInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @baseline_assembly_WO_OPERAND class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_WO_OPERAND:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_assembly_WO_OPERAND type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ("baseline_assembly_WO_OPERAND",
                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralValue.objectCompare (p->mProperty_mLiteralValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inAttribute_mInstruction,
                                                                                                                                                const GALGAS_uint & inAttribute_mLiteralValue
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::getter_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    result = p->mProperty_mLiteralValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::getter_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @baseline_assembly_instruction_literalOperation class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                            const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                            const GALGAS_uint & in_mLiteralValue
                                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction),
mProperty_mLiteralValue (in_mLiteralValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_literalOperation:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_assembly_instruction_literalOperation type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ("baseline_assembly_instruction_literalOperation",
                                                                                & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                    GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                    GALGAS_bool::constructor_default (HERE),
                                                                                    GALGAS_bool::constructor_default (HERE)
                                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                    const GALGAS_bool & inAttribute_mIncrement,
                                                                                                                                    const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (inAttribute_mInstructionLocation, inAttribute_mRegisterDescription, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @baseline_assembly_incDecRegisterInCondition class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                const GALGAS_bool & in_mIncrement,
                                                                                                                const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_incDecRegisterInCondition:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_assembly_incDecRegisterInCondition type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ("baseline_assembly_incDecRegisterInCondition",
                                                                          & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension method '@baseline_assembly_instruction print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_assembly_5F_instruction_print> gExtensionMethodTable_baseline_5F_assembly_5F_instruction_print ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_print (const int32_t inClassIndex,
                                 extensionMethodSignature_baseline_5F_assembly_5F_instruction_print inMethod) {
  gExtensionMethodTable_baseline_5F_assembly_5F_instruction_print.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_assembly_5F_instruction_print (void) {
  gExtensionMethodTable_baseline_5F_assembly_5F_instruction_print.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_print (NULL,
                                                                      freeExtensionMethod_baseline_5F_assembly_5F_instruction_print) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                GALGAS_string & io_ioListFileContents,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_assembly_5F_instruction_print f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_assembly_5F_instruction_print.count ()) {
      f = gExtensionMethodTable_baseline_5F_assembly_5F_instruction_print (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_baseline_5F_assembly_5F_instruction_print.count ()) {
          f = gExtensionMethodTable_baseline_5F_assembly_5F_instruction_print (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_baseline_5F_assembly_5F_instruction_print.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioListFileContents, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension getter '@baseline_assembly_instruction length'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_baseline_5F_assembly_5F_instruction_length> gExtensionGetterTable_baseline_5F_assembly_5F_instruction_length ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_length (const int32_t inClassIndex,
                                  enterExtensionGetter_baseline_5F_assembly_5F_instruction_length inGetter) {
  gExtensionGetterTable_baseline_5F_assembly_5F_instruction_length.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_baseline_5F_assembly_5F_instruction_length (void) {
  gExtensionGetterTable_baseline_5F_assembly_5F_instruction_length.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_instruction_length (NULL,
                                                                       freeExtensionGetter_baseline_5F_assembly_5F_instruction_length) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callExtensionGetter_length (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_baseline_5F_assembly_5F_instruction_length f = NULL ;
    if (classIndex < gExtensionGetterTable_baseline_5F_assembly_5F_instruction_length.count ()) {
      f = gExtensionGetterTable_baseline_5F_assembly_5F_instruction_length (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_baseline_5F_assembly_5F_instruction_length.count ()) {
           f = gExtensionGetterTable_baseline_5F_assembly_5F_instruction_length (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_baseline_5F_assembly_5F_instruction_length.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@baseline_intermediate_instruction generateAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode> gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateAssemblyCode (const int32_t inClassIndex,
                                                extensionMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_intermediate_5F_instruction_generateAssemblyCode (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_generateAssemblyCode (NULL,
                                                                                         freeExtensionMethod_baseline_5F_intermediate_5F_instruction_generateAssemblyCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression constin_inSTATUSregister,
                                               const GALGAS_bitSliceTable constin_inStatusRegisterBitSliceTable,
                                               GALGAS_baseline_5F_assembly_5F_instructionList & io_ioAssemblyInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.count ()) {
          f = gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSTATUSregister, constin_inStatusRegisterBitSliceTable, io_ioAssemblyInstructionList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baseline_5F_symbolTable::cMapElement_baseline_5F_symbolTable (const GALGAS_lstring & inKey,
                                                                          const GALGAS_uint & in_mRoutineAddress
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineAddress (in_mRoutineAddress) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_baseline_5F_symbolTable::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_baseline_5F_symbolTable::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_baseline_5F_symbolTable (mProperty_lkey, mProperty_mRoutineAddress COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_baseline_5F_symbolTable::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineAddress" ":" ;
  mProperty_mRoutineAddress.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_baseline_5F_symbolTable::compare (const cCollectionElement * inOperand) const {
  cMapElement_baseline_5F_symbolTable * operand = (cMapElement_baseline_5F_symbolTable *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineAddress.objectCompare (operand->mProperty_mRoutineAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable::GALGAS_baseline_5F_symbolTable (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable::GALGAS_baseline_5F_symbolTable (const GALGAS_baseline_5F_symbolTable & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable & GALGAS_baseline_5F_symbolTable::operator = (const GALGAS_baseline_5F_symbolTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::constructor_mapWithMapToOverride (const GALGAS_baseline_5F_symbolTable & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_symbolTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_symbolTable::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_symbolTable * p = NULL ;
  macroMyNew (p, cMapElement_baseline_5F_symbolTable (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baseline_5F_symbolTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_symbolTable::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_uint inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_symbolTable * p = NULL ;
  macroMyNew (p, cMapElement_baseline_5F_symbolTable (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_baseline_5F_symbolTable_searchKey = "the '%K' label is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_symbolTable::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_uint & outArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_baseline_5F_symbolTable * p = (const cMapElement_baseline_5F_symbolTable *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_baseline_5F_symbolTable_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
    outArgument0 = p->mProperty_mRoutineAddress ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_symbolTable::getter_mRoutineAddressForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baseline_5F_symbolTable * p = (const cMapElement_baseline_5F_symbolTable *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
    result = p->mProperty_mRoutineAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_symbolTable::setter_setMRoutineAddressForKey (GALGAS_uint inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baseline_5F_symbolTable * p = (cMapElement_baseline_5F_symbolTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
    p->mProperty_mRoutineAddress = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baseline_5F_symbolTable * GALGAS_baseline_5F_symbolTable::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_symbolTable * result = (cMapElement_baseline_5F_symbolTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baseline_5F_symbolTable) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_symbolTable::cEnumerator_baseline_5F_symbolTable (const GALGAS_baseline_5F_symbolTable & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element cEnumerator_baseline_5F_symbolTable::current (LOCATION_ARGS) const {
  const cMapElement_baseline_5F_symbolTable * p = (const cMapElement_baseline_5F_symbolTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
  return GALGAS_baseline_5F_symbolTable_2D_element (p->mProperty_lkey, p->mProperty_mRoutineAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_baseline_5F_symbolTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_baseline_5F_symbolTable::current_mRoutineAddress (LOCATION_ARGS) const {
  const cMapElement_baseline_5F_symbolTable * p = (const cMapElement_baseline_5F_symbolTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
  return p->mProperty_mRoutineAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @baseline_symbolTable type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_symbolTable ("baseline_symbolTable",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_symbolTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_symbolTable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_symbolTable (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable result ;
  const GALGAS_baseline_5F_symbolTable * p = (const GALGAS_baseline_5F_symbolTable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_symbolTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@baseline_assembly_instruction enterLabelAtAddress'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress> gExtensionMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterLabelAtAddress (const int32_t inClassIndex,
                                               extensionMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress inMethod) {
  gExtensionMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                              GALGAS_baseline_5F_symbolTable & io_ioRoutineSymbolTable,
                                              GALGAS_uint & io_ioWordAddress,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.count ()) {
      f = gExtensionMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.count ()) {
           f = gExtensionMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRoutineSymbolTable, io_ioWordAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                     GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                     GALGAS_uint & /* ioArgument_ioWordAddress */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (void) {
  gExtensionMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress,
                                                                                    freeExtensionMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Abstract extension method '@baseline_assembly_instruction generateBinaryCodeAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress> gExtensionMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateBinaryCodeAtAddress (const int32_t inClassIndex,
                                                       extensionMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress inMethod) {
  gExtensionMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress (void) {
  gExtensionMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress (NULL,
                                                                                            freeExtensionMethod_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                      const GALGAS_baseline_5F_symbolTable constin_inRoutineSymbolTable,
                                                      GALGAS_string & io_ioListFileContents,
                                                      GALGAS_uint & io_ioWordAddress,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.count ()) {
      f = gExtensionMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.count ()) {
          f = gExtensionMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRoutineSymbolTable, io_ioListFileContents, io_ioWordAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_midrange_5F_instruction::objectCompare (const GALGAS_midrange_5F_instruction & inOperand) const {
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

GALGAS_midrange_5F_instruction::GALGAS_midrange_5F_instruction (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction::GALGAS_midrange_5F_instruction (const cPtr_midrange_5F_instruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_instruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction * p = (const cPtr_midrange_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_midrange_5F_instruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @midrange_instruction class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction::cPtr_midrange_5F_instruction (const GALGAS_location & in_mInstructionLocation
                                                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @midrange_instruction type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction ("midrange_instruction",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction GALGAS_midrange_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction result ;
  const GALGAS_midrange_5F_instruction * p = (const GALGAS_midrange_5F_instruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@midrange_5F_instructionList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_midrange_5F_instructionList : public cCollectionElement {
  public : GALGAS_midrange_5F_instructionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_midrange_5F_instructionList (const GALGAS_midrange_5F_instruction & in_mInstruction
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_midrange_5F_instructionList::cCollectionElement_midrange_5F_instructionList (const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_midrange_5F_instructionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_midrange_5F_instructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_midrange_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_midrange_5F_instructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_midrange_5F_instructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_midrange_5F_instructionList * operand = (cCollectionElement_midrange_5F_instructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_midrange_5F_instructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList::GALGAS_midrange_5F_instructionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList::GALGAS_midrange_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_instructionList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::constructor_listWithValue (const GALGAS_midrange_5F_instruction & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_midrange_5F_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_midrange_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_instructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_midrange_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList::addAssign_operation (const GALGAS_midrange_5F_instruction & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_midrange_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList::setter_insertAtIndex (const GALGAS_midrange_5F_instruction inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_midrange_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList::setter_removeAtIndex (GALGAS_midrange_5F_instruction & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList::setter_popFirst (GALGAS_midrange_5F_instruction & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList::setter_popLast (GALGAS_midrange_5F_instruction & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList::method_first (GALGAS_midrange_5F_instruction & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList::method_last (GALGAS_midrange_5F_instruction & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::add_operation (const GALGAS_midrange_5F_instructionList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result = GALGAS_midrange_5F_instructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result = GALGAS_midrange_5F_instructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result = GALGAS_midrange_5F_instructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList::plusAssign_operation (const GALGAS_midrange_5F_instructionList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction GALGAS_midrange_5F_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  GALGAS_midrange_5F_instruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_midrange_5F_instructionList::cEnumerator_midrange_5F_instructionList (const GALGAS_midrange_5F_instructionList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList_2D_element cEnumerator_midrange_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_instructionList * p = (const cCollectionElement_midrange_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction cEnumerator_midrange_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_instructionList * p = (const cCollectionElement_midrange_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_instructionList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instructionList ("midrange_instructionList",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instructionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList result ;
  const GALGAS_midrange_5F_instructionList * p = (const GALGAS_midrange_5F_instructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_nobanksel::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_nobanksel * p = (const cPtr_midrange_5F_instruction_5F_nobanksel *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_nobanksel) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_nobanksel::objectCompare (const GALGAS_midrange_5F_instruction_5F_nobanksel & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_nobanksel::GALGAS_midrange_5F_instruction_5F_nobanksel (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_nobanksel GALGAS_midrange_5F_instruction_5F_nobanksel::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_nobanksel::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_nobanksel::GALGAS_midrange_5F_instruction_5F_nobanksel (const cPtr_midrange_5F_instruction_5F_nobanksel * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_nobanksel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_nobanksel GALGAS_midrange_5F_instruction_5F_nobanksel::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_nobanksel result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_nobanksel (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @midrange_instruction_nobanksel class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_nobanksel::cPtr_midrange_5F_instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_nobanksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;
}

void cPtr_midrange_5F_instruction_5F_nobanksel::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_nobanksel:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_nobanksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_nobanksel (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrange_instruction_nobanksel type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ("midrange_instruction_nobanksel",
                                                             & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_nobanksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_nobanksel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_nobanksel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_nobanksel GALGAS_midrange_5F_instruction_5F_nobanksel::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_nobanksel result ;
  const GALGAS_midrange_5F_instruction_5F_nobanksel * p = (const GALGAS_midrange_5F_instruction_5F_nobanksel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_nobanksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_nobanksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_banksel::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_banksel * p = (const cPtr_midrange_5F_instruction_5F_banksel *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBankIndex.objectCompare (p->mProperty_mBankIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarningOnUselessBanksel.objectCompare (p->mProperty_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_banksel::objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_banksel::GALGAS_midrange_5F_instruction_5F_banksel (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_banksel GALGAS_midrange_5F_instruction_5F_banksel::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_banksel::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_luint::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_banksel::GALGAS_midrange_5F_instruction_5F_banksel (const cPtr_midrange_5F_instruction_5F_banksel * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_banksel GALGAS_midrange_5F_instruction_5F_banksel::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_luint & inAttribute_mBankIndex,
                                                                                                      const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_banksel (inAttribute_mInstructionLocation, inAttribute_mBankIndex, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_midrange_5F_instruction_5F_banksel::getter_mBankIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_banksel * p = (const cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    result = p->mProperty_mBankIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_midrange_5F_instruction_5F_banksel::getter_mBankIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_banksel::getter_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_banksel * p = (const cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    result = p->mProperty_mWarningOnUselessBanksel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_instruction_5F_banksel::getter_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarningOnUselessBanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @midrange_instruction_banksel class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_banksel::cPtr_midrange_5F_instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_luint & in_mBankIndex,
                                                                                  const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBankIndex (in_mBankIndex),
mProperty_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_banksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;
}

void cPtr_midrange_5F_instruction_5F_banksel::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_banksel:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_banksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_banksel (mProperty_mInstructionLocation, mProperty_mBankIndex, mProperty_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @midrange_instruction_banksel type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ("midrange_instruction_banksel",
                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_banksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_banksel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_banksel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_banksel GALGAS_midrange_5F_instruction_5F_banksel::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel result ;
  const GALGAS_midrange_5F_instruction_5F_banksel * p = (const GALGAS_midrange_5F_instruction_5F_banksel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_banksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrangeInstruction_5F_checkbank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrangeInstruction_5F_checkbank * p = (const cPtr_midrangeInstruction_5F_checkbank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrangeInstruction_5F_checkbank) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBankIndex.objectCompare (p->mProperty_mBankIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrangeInstruction_5F_checkbank::objectCompare (const GALGAS_midrangeInstruction_5F_checkbank & inOperand) const {
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

GALGAS_midrangeInstruction_5F_checkbank::GALGAS_midrangeInstruction_5F_checkbank (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrangeInstruction_5F_checkbank GALGAS_midrangeInstruction_5F_checkbank::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrangeInstruction_5F_checkbank::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_uint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrangeInstruction_5F_checkbank::GALGAS_midrangeInstruction_5F_checkbank (const cPtr_midrangeInstruction_5F_checkbank * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrangeInstruction_5F_checkbank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrangeInstruction_5F_checkbank GALGAS_midrangeInstruction_5F_checkbank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_uint & inAttribute_mBankIndex
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checkbank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrangeInstruction_5F_checkbank (inAttribute_mInstructionLocation, inAttribute_mBankIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrangeInstruction_5F_checkbank::getter_mBankIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrangeInstruction_5F_checkbank * p = (const cPtr_midrangeInstruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrangeInstruction_5F_checkbank) ;
    result = p->mProperty_mBankIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_midrangeInstruction_5F_checkbank::getter_mBankIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @midrangeInstruction_checkbank class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrangeInstruction_5F_checkbank::cPtr_midrangeInstruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_uint & in_mBankIndex
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBankIndex (in_mBankIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrangeInstruction_5F_checkbank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;
}

void cPtr_midrangeInstruction_5F_checkbank::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@midrangeInstruction_checkbank:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrangeInstruction_5F_checkbank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrangeInstruction_5F_checkbank (mProperty_mInstructionLocation, mProperty_mBankIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @midrangeInstruction_checkbank type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ("midrangeInstruction_checkbank",
                                                         & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrangeInstruction_5F_checkbank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrangeInstruction_5F_checkbank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrangeInstruction_5F_checkbank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrangeInstruction_5F_checkbank GALGAS_midrangeInstruction_5F_checkbank::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checkbank result ;
  const GALGAS_midrangeInstruction_5F_checkbank * p = (const GALGAS_midrangeInstruction_5F_checkbank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrangeInstruction_5F_checkbank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checkbank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrangeInstruction_5F_checknobank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrangeInstruction_5F_checknobank * p = (const cPtr_midrangeInstruction_5F_checknobank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrangeInstruction_5F_checknobank) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrangeInstruction_5F_checknobank::objectCompare (const GALGAS_midrangeInstruction_5F_checknobank & inOperand) const {
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

GALGAS_midrangeInstruction_5F_checknobank::GALGAS_midrangeInstruction_5F_checknobank (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrangeInstruction_5F_checknobank GALGAS_midrangeInstruction_5F_checknobank::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrangeInstruction_5F_checknobank::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrangeInstruction_5F_checknobank::GALGAS_midrangeInstruction_5F_checknobank (const cPtr_midrangeInstruction_5F_checknobank * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrangeInstruction_5F_checknobank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrangeInstruction_5F_checknobank GALGAS_midrangeInstruction_5F_checknobank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checknobank result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrangeInstruction_5F_checknobank (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @midrangeInstruction_checknobank class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrangeInstruction_5F_checknobank::cPtr_midrangeInstruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrangeInstruction_5F_checknobank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;
}

void cPtr_midrangeInstruction_5F_checknobank::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@midrangeInstruction_checknobank:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrangeInstruction_5F_checknobank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrangeInstruction_5F_checknobank (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrangeInstruction_checknobank type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ("midrangeInstruction_checknobank",
                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrangeInstruction_5F_checknobank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrangeInstruction_5F_checknobank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrangeInstruction_5F_checknobank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrangeInstruction_5F_checknobank GALGAS_midrangeInstruction_5F_checknobank::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checknobank result ;
  const GALGAS_midrangeInstruction_5F_checknobank * p = (const GALGAS_midrangeInstruction_5F_checknobank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrangeInstruction_5F_checknobank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checknobank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_ADDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_ADDWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_ANDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_ANDWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_COMF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_COMF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_DECF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_DECFSZ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_INCF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_INCFSZ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_IORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_IORWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_RLF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_RLF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_RRF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_RRF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SUBWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_SUBWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_SWAPF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_XORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_XORWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_midrange_5F_instruction_5F_FD_5F_base_5F_code [15] = {
  "(not built)",
  "ADDWF",
  "ANDWF",
  "COMF",
  "DECF",
  "DECFSZ",
  "INCF",
  "INCFSZ",
  "IORWF",
  "MOVF",
  "RLF",
  "RRF",
  "SUBWF",
  "SWAPF",
  "XORWF"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ADDWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_COMF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECFSZ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCFSZ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isRLF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RLF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isRRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RRF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SWAPF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::description (C_String & ioString,
                                                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @midrange_instruction_FD_base_code: " << gEnumNameArrayFor_midrange_5F_instruction_5F_FD_5F_base_5F_code [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::objectCompare (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_instruction_FD_base_code type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code ("midrange_instruction_FD_base_code",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code * p = (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FD_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension Getter '@midrange_instruction_FD_base_code mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      result_outResult = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      result_outResult = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      result_outResult = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      result_outResult = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      result_outResult = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      result_outResult = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      result_outResult = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      result_outResult = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      result_outResult = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      result_outResult = GALGAS_string ("RLF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      result_outResult = GALGAS_string ("RRF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      result_outResult = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      result_outResult = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      result_outResult = GALGAS_string ("XORWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CLRF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_midrange_5F_F_5F_instruction_5F_base_5F_code [3] = {
  "(not built)",
  "CLRF",
  "MOVWF"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::description (C_String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @midrange_F_instruction_base_code: " << gEnumNameArrayFor_midrange_5F_F_5F_instruction_5F_base_5F_code [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::objectCompare (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_F_instruction_base_code type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code ("midrange_F_instruction_base_code",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code * p = (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_F_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension Getter '@midrange_F_instruction_base_code mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      result_outResult = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      result_outResult = GALGAS_string ("MOVWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bit_5F_oriented_5F_op::GALGAS_midrange_5F_bit_5F_oriented_5F_op (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BCF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BSF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_midrange_5F_bit_5F_oriented_5F_op [3] = {
  "(not built)",
  "BCF",
  "BSF"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BCF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BSF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_bit_5F_oriented_5F_op::description (C_String & ioString,
                                                            const int32_t /* inIndentation */) const {
  ioString << "<enum @midrange_bit_oriented_op: " << gEnumNameArrayFor_midrange_5F_bit_5F_oriented_5F_op [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_bit_5F_oriented_5F_op::objectCompare (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_bit_oriented_op type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_bit_5F_oriented_5F_op ("midrange_bit_oriented_op",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bit_5F_oriented_5F_op ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_bit_5F_oriented_5F_op::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bit_5F_oriented_5F_op result ;
  const GALGAS_midrange_5F_bit_5F_oriented_5F_op * p = (const GALGAS_midrange_5F_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension Getter '@midrange_bit_oriented_op mnemonic'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      result_outResult = GALGAS_string ("BCF") ;
    }
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      result_outResult = GALGAS_string ("BSF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_CLRWDT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_CLRWDT * p = (const cPtr_midrange_5F_instruction_5F_CLRWDT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CLRWDT) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_CLRWDT::objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRWDT & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_CLRWDT::GALGAS_midrange_5F_instruction_5F_CLRWDT (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_instruction_5F_CLRWDT::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_CLRWDT::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_CLRWDT::GALGAS_midrange_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_instruction_5F_CLRWDT * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CLRWDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_instruction_5F_CLRWDT::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRWDT result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CLRWDT (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @midrange_instruction_CLRWDT class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_instruction_5F_CLRWDT (const GALGAS_location & in_mInstructionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_CLRWDT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;
}

void cPtr_midrange_5F_instruction_5F_CLRWDT::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_CLRWDT:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_CLRWDT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CLRWDT (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @midrange_instruction_CLRWDT type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ("midrange_instruction_CLRWDT",
                                                          & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CLRWDT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CLRWDT::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CLRWDT (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_instruction_5F_CLRWDT::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRWDT result ;
  const GALGAS_midrange_5F_instruction_5F_CLRWDT * p = (const GALGAS_midrange_5F_instruction_5F_CLRWDT *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CLRWDT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRWDT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_CLRW::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_CLRW * p = (const cPtr_midrange_5F_instruction_5F_CLRW *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CLRW) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_CLRW::objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRW & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_CLRW::GALGAS_midrange_5F_instruction_5F_CLRW (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_CLRW GALGAS_midrange_5F_instruction_5F_CLRW::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_CLRW::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_CLRW::GALGAS_midrange_5F_instruction_5F_CLRW (const cPtr_midrange_5F_instruction_5F_CLRW * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CLRW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_CLRW GALGAS_midrange_5F_instruction_5F_CLRW::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRW result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CLRW (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @midrange_instruction_CLRW class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_CLRW::cPtr_midrange_5F_instruction_5F_CLRW (const GALGAS_location & in_mInstructionLocation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_CLRW::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;
}

void cPtr_midrange_5F_instruction_5F_CLRW::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_CLRW:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_CLRW::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CLRW (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_instruction_CLRW type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ("midrange_instruction_CLRW",
                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CLRW::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CLRW::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CLRW (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_CLRW GALGAS_midrange_5F_instruction_5F_CLRW::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRW result ;
  const GALGAS_midrange_5F_instruction_5F_CLRW * p = (const GALGAS_midrange_5F_instruction_5F_CLRW *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CLRW *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRW", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_NOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_NOP * p = (const cPtr_midrange_5F_instruction_5F_NOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_NOP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_NOP::objectCompare (const GALGAS_midrange_5F_instruction_5F_NOP & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_NOP::GALGAS_midrange_5F_instruction_5F_NOP (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_NOP GALGAS_midrange_5F_instruction_5F_NOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_NOP::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_NOP::GALGAS_midrange_5F_instruction_5F_NOP (const cPtr_midrange_5F_instruction_5F_NOP * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_NOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_NOP GALGAS_midrange_5F_instruction_5F_NOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_NOP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_NOP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @midrange_instruction_NOP class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_NOP::cPtr_midrange_5F_instruction_5F_NOP (const GALGAS_location & in_mInstructionLocation
                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_NOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;
}

void cPtr_midrange_5F_instruction_5F_NOP::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_NOP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_NOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_NOP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_instruction_NOP type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ("midrange_instruction_NOP",
                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_NOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_NOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_NOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_NOP GALGAS_midrange_5F_instruction_5F_NOP::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_NOP result ;
  const GALGAS_midrange_5F_instruction_5F_NOP * p = (const GALGAS_midrange_5F_instruction_5F_NOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_NOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_NOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_SLEEP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_SLEEP * p = (const cPtr_midrange_5F_instruction_5F_SLEEP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_SLEEP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_SLEEP::objectCompare (const GALGAS_midrange_5F_instruction_5F_SLEEP & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_SLEEP::GALGAS_midrange_5F_instruction_5F_SLEEP (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_SLEEP GALGAS_midrange_5F_instruction_5F_SLEEP::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_SLEEP::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_SLEEP::GALGAS_midrange_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_instruction_5F_SLEEP * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_SLEEP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_SLEEP GALGAS_midrange_5F_instruction_5F_SLEEP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_SLEEP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_SLEEP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @midrange_instruction_SLEEP class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_SLEEP::cPtr_midrange_5F_instruction_5F_SLEEP (const GALGAS_location & in_mInstructionLocation
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_SLEEP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;
}

void cPtr_midrange_5F_instruction_5F_SLEEP::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_SLEEP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_SLEEP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_SLEEP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @midrange_instruction_SLEEP type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ("midrange_instruction_SLEEP",
                                                         & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_SLEEP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_SLEEP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_SLEEP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_SLEEP GALGAS_midrange_5F_instruction_5F_SLEEP::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_SLEEP result ;
  const GALGAS_midrange_5F_instruction_5F_SLEEP * p = (const GALGAS_midrange_5F_instruction_5F_SLEEP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_SLEEP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_SLEEP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::GALGAS_midrange_5F_literal_5F_instruction_5F_opcode (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_ADDLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_ADDLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_ANDLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_ANDLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_IORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_IORLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_MOVLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_RETLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_SUBLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_SUBLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_XORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_XORLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_midrange_5F_literal_5F_instruction_5F_opcode [8] = {
  "(not built)",
  "ADDLW",
  "ANDLW",
  "IORLW",
  "MOVLW",
  "RETLW",
  "SUBLW",
  "XORLW"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isADDLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ADDLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isRETLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RETLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isSUBLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::description (C_String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @midrange_literal_instruction_opcode: " << gEnumNameArrayFor_midrange_5F_literal_5F_instruction_5F_opcode [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::objectCompare (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_literal_instruction_opcode type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_literal_5F_instruction_5F_opcode ("midrange_literal_instruction_opcode",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_literal_5F_instruction_5F_opcode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode * p = (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension Getter '@midrange_literal_instruction_opcode mnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      result_outResult = GALGAS_string ("ADDLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      result_outResult = GALGAS_string ("ANDLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      result_outResult = GALGAS_string ("IORLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      result_outResult = GALGAS_string ("MOVLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      result_outResult = GALGAS_string ("RETLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      result_outResult = GALGAS_string ("SUBLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      result_outResult = GALGAS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_literalOperation * p = (const cPtr_midrange_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInstruction.objectCompare (p->mProperty_mLiteralInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImmediatExpression.objectCompare (p->mProperty_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_midrange_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_literalOperation::GALGAS_midrange_5F_instruction_5F_literalOperation (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_literalOperation::GALGAS_midrange_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_literalOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_literalOperation GALGAS_midrange_5F_instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inAttribute_mLiteralInstruction,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralInstruction.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mLiteralInstruction, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_instruction_5F_literalOperation::getter_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_literalOperation * p = (const cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    result = p->mProperty_mLiteralInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode cPtr_midrange_5F_instruction_5F_literalOperation::getter_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_literalOperation::getter_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_literalOperation * p = (const cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    result = p->mProperty_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_midrange_5F_instruction_5F_literalOperation::getter_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @midrange_instruction_literalOperation class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_literalOperation::cPtr_midrange_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                    const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralInstruction (in_mLiteralInstruction),
mProperty_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;
}

void cPtr_midrange_5F_instruction_5F_literalOperation::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_literalOperation:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @midrange_instruction_literalOperation type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ("midrange_instruction_literalOperation",
                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_literalOperation GALGAS_midrange_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_literalOperation result ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation * p = (const GALGAS_midrange_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_MNOP * p = (const cPtr_midrange_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_MNOP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOccurrenceFactor.objectCompare (p->mProperty_mOccurrenceFactor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_MNOP::objectCompare (const GALGAS_midrange_5F_instruction_5F_MNOP & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_MNOP::GALGAS_midrange_5F_instruction_5F_MNOP (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_MNOP GALGAS_midrange_5F_instruction_5F_MNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_MNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_luint::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_MNOP::GALGAS_midrange_5F_instruction_5F_MNOP (const cPtr_midrange_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_MNOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_MNOP GALGAS_midrange_5F_instruction_5F_MNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_midrange_5F_instruction_5F_MNOP::getter_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_MNOP * p = (const cPtr_midrange_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_MNOP) ;
    result = p->mProperty_mOccurrenceFactor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_midrange_5F_instruction_5F_MNOP::getter_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOccurrenceFactor ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @midrange_instruction_MNOP class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_MNOP::cPtr_midrange_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_luint & in_mOccurrenceFactor
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;
}

void cPtr_midrange_5F_instruction_5F_MNOP::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_MNOP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_instruction_MNOP type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ("midrange_instruction_MNOP",
                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_MNOP GALGAS_midrange_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_MNOP result ;
  const GALGAS_midrange_5F_instruction_5F_MNOP * p = (const GALGAS_midrange_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_FOREVER::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_FOREVER * p = (const cPtr_midrange_5F_instruction_5F_FOREVER *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInstructionList.objectCompare (p->mProperty_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_FOREVER::objectCompare (const GALGAS_midrange_5F_instruction_5F_FOREVER & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_FOREVER::GALGAS_midrange_5F_instruction_5F_FOREVER (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FOREVER GALGAS_midrange_5F_instruction_5F_FOREVER::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_FOREVER::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_midrange_5F_instructionList::constructor_emptyList (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FOREVER::GALGAS_midrange_5F_instruction_5F_FOREVER (const cPtr_midrange_5F_instruction_5F_FOREVER * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FOREVER) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FOREVER GALGAS_midrange_5F_instruction_5F_FOREVER::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_midrange_5F_instructionList & inAttribute_mInstructionList,
                                                                                                      const GALGAS_location & inAttribute_mEndOfInstructionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FOREVER result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FOREVER (inAttribute_mInstructionLocation, inAttribute_mInstructionList, inAttribute_mEndOfInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_FOREVER::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_FOREVER * p = (const cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList cPtr_midrange_5F_instruction_5F_FOREVER::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_instruction_5F_FOREVER::getter_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_FOREVER * p = (const cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    result = p->mProperty_mEndOfInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_midrange_5F_instruction_5F_FOREVER::getter_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @midrange_instruction_FOREVER class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_FOREVER::cPtr_midrange_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfInstructionList (in_mEndOfInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;
}

void cPtr_midrange_5F_instruction_5F_FOREVER::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_FOREVER:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_FOREVER::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FOREVER (mProperty_mInstructionLocation, mProperty_mInstructionList, mProperty_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @midrange_instruction_FOREVER type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ("midrange_instruction_FOREVER",
                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FOREVER GALGAS_midrange_5F_instruction_5F_FOREVER::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FOREVER result ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER * p = (const GALGAS_midrange_5F_instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @midrange_instruction_IF_SEMI_COLON class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                          const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (in_mInstruction) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_instruction_IF_SEMI_COLON type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ("midrange_instruction_IF_SEMI_COLON",
                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_midrange_5F_conditionExpression::objectCompare (const GALGAS_midrange_5F_conditionExpression & inOperand) const {
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

GALGAS_midrange_5F_conditionExpression::GALGAS_midrange_5F_conditionExpression (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression::GALGAS_midrange_5F_conditionExpression (const cPtr_midrange_5F_conditionExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_conditionExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @midrange_conditionExpression class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_conditionExpression::cPtr_midrange_5F_conditionExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @midrange_conditionExpression type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ("midrange_conditionExpression",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_conditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_conditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_conditionExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_conditionExpression::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_conditionExpression result ;
  const GALGAS_midrange_5F_conditionExpression * p = (const GALGAS_midrange_5F_conditionExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_conditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_conditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_negateCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_negateCondition * p = (const cPtr_midrange_5F_negateCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_negateCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mCondition.objectCompare (p->mProperty_mCondition) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_negateCondition::objectCompare (const GALGAS_midrange_5F_negateCondition & inOperand) const {
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

GALGAS_midrange_5F_negateCondition::GALGAS_midrange_5F_negateCondition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_negateCondition::GALGAS_midrange_5F_negateCondition (const cPtr_midrange_5F_negateCondition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_negateCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_negateCondition GALGAS_midrange_5F_negateCondition::constructor_new (const GALGAS_midrange_5F_conditionExpression & inAttribute_mCondition
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_negateCondition result ;
  if (inAttribute_mCondition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_negateCondition (inAttribute_mCondition COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_negateCondition::getter_mCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_negateCondition * p = (const cPtr_midrange_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_negateCondition) ;
    result = p->mProperty_mCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression cPtr_midrange_5F_negateCondition::getter_mCondition (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @midrange_negateCondition class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_negateCondition::cPtr_midrange_5F_negateCondition (const GALGAS_midrange_5F_conditionExpression & in_mCondition
                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mCondition (in_mCondition) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_negateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;
}

void cPtr_midrange_5F_negateCondition::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@midrange_negateCondition:" ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_negateCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_negateCondition (mProperty_mCondition COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_negateCondition type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_negateCondition ("midrange_negateCondition",
                                                    & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_negateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_negateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_negateCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_negateCondition GALGAS_midrange_5F_negateCondition::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_negateCondition result ;
  const GALGAS_midrange_5F_negateCondition * p = (const GALGAS_midrange_5F_negateCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_negateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_negateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_andCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_andCondition * p = (const cPtr_midrange_5F_andCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_andCondition::objectCompare (const GALGAS_midrange_5F_andCondition & inOperand) const {
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

GALGAS_midrange_5F_andCondition::GALGAS_midrange_5F_andCondition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_andCondition::GALGAS_midrange_5F_andCondition (const cPtr_midrange_5F_andCondition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_andCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_andCondition GALGAS_midrange_5F_andCondition::constructor_new (const GALGAS_midrange_5F_conditionExpression & inAttribute_mLeftExpression,
                                                                                  const GALGAS_midrange_5F_conditionExpression & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_andCondition result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_andCondition (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_andCondition::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_andCondition * p = (const cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression cPtr_midrange_5F_andCondition::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_andCondition::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_andCondition * p = (const cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression cPtr_midrange_5F_andCondition::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @midrange_andCondition class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_andCondition::cPtr_midrange_5F_andCondition (const GALGAS_midrange_5F_conditionExpression & in_mLeftExpression,
                                                              const GALGAS_midrange_5F_conditionExpression & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_andCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition ;
}

void cPtr_midrange_5F_andCondition::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@midrange_andCondition:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_andCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_andCondition (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @midrange_andCondition type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_andCondition ("midrange_andCondition",
                                                 & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_andCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_andCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_andCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_andCondition GALGAS_midrange_5F_andCondition::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_andCondition result ;
  const GALGAS_midrange_5F_andCondition * p = (const GALGAS_midrange_5F_andCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_andCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_andCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_structured_5F_if::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
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

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_instruction_5F_structured_5F_if::getter_mIfCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    result = p->mProperty_mIfCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression cPtr_midrange_5F_instruction_5F_structured_5F_if::getter_mIfCondition (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIfCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_structured_5F_if::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    result = p->mProperty_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList cPtr_midrange_5F_instruction_5F_structured_5F_if::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_structured_5F_if::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList cPtr_midrange_5F_instruction_5F_structured_5F_if::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_instruction_5F_structured_5F_if::getter_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    result = p->mProperty_mEndOfElsePartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_midrange_5F_instruction_5F_structured_5F_if::getter_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfElsePartLocation ;
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
mProperty_mIfCondition (in_mIfCondition),
mProperty_mThenInstructionList (in_mThenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfElsePartLocation (in_mEndOfElsePartLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;
}

void cPtr_midrange_5F_instruction_5F_structured_5F_if::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_structured_if:" ;
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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation COMMA_THERE)) ;
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
//                                                                                                                     *
//                                  Class for element of '@midrange_5F_partList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_midrange_5F_partList : public cCollectionElement {
  public : GALGAS_midrange_5F_partList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_midrange_5F_partList (const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfPartLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_midrange_5F_partList::cCollectionElement_midrange_5F_partList (const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                                                  const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfPartLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_midrange_5F_partList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_midrange_5F_partList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_midrange_5F_partList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_midrange_5F_partList::description (C_String & ioString, const int32_t inIndentation) const {
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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_midrange_5F_partList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_midrange_5F_partList * operand = (cCollectionElement_midrange_5F_partList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_midrange_5F_partList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList::GALGAS_midrange_5F_partList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList::GALGAS_midrange_5F_partList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_partList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::constructor_listWithValue (const GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                                    const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                    const GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_midrange_5F_partList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_midrange_5F_partList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                             const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfPartLocation
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_partList * p = NULL ;
  macroMyNew (p, cCollectionElement_midrange_5F_partList (in_mCondition,
                                                          in_mInstructionList,
                                                          in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList::addAssign_operation (const GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                       const GALGAS_midrange_5F_instructionList & inOperand1,
                                                       const GALGAS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_midrange_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList::setter_insertAtIndex (const GALGAS_midrange_5F_conditionExpression inOperand0,
                                                        const GALGAS_midrange_5F_instructionList inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_midrange_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList::setter_removeAtIndex (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                                        GALGAS_midrange_5F_instructionList & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
      outOperand0 = p->mObject.mProperty_mCondition ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList::setter_popFirst (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                                   GALGAS_midrange_5F_instructionList & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList::setter_popLast (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                                  GALGAS_midrange_5F_instructionList & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList::method_first (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                                GALGAS_midrange_5F_instructionList & outOperand1,
                                                GALGAS_location & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList::method_last (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                               GALGAS_midrange_5F_instructionList & outOperand1,
                                               GALGAS_location & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::add_operation (const GALGAS_midrange_5F_partList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_partList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_partList result = GALGAS_midrange_5F_partList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_partList result = GALGAS_midrange_5F_partList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_partList result = GALGAS_midrange_5F_partList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList::plusAssign_operation (const GALGAS_midrange_5F_partList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_partList::getter_mConditionAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  GALGAS_midrange_5F_conditionExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    result = p->mObject.mProperty_mCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_partList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_partList::getter_mEndOfPartLocationAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    result = p->mObject.mProperty_mEndOfPartLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_midrange_5F_partList::cEnumerator_midrange_5F_partList (const GALGAS_midrange_5F_partList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList_2D_element cEnumerator_midrange_5F_partList::current (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_partList * p = (const cCollectionElement_midrange_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression cEnumerator_midrange_5F_partList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_partList * p = (const cCollectionElement_midrange_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
  return p->mObject.mProperty_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList cEnumerator_midrange_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_partList * p = (const cCollectionElement_midrange_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_midrange_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_partList * p = (const cCollectionElement_midrange_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
  return p->mObject.mProperty_mEndOfPartLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @midrange_partList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_partList ("midrange_partList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_partList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_partList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_partList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_partList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList result ;
  const GALGAS_midrange_5F_partList * p = (const GALGAS_midrange_5F_partList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_partList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_partList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_do_5F_while::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_do_5F_while * p = (const cPtr_midrange_5F_instruction_5F_do_5F_while *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_do_5F_while::objectCompare (const GALGAS_midrange_5F_instruction_5F_do_5F_while & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_do_5F_while::GALGAS_midrange_5F_instruction_5F_do_5F_while (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_do_5F_while GALGAS_midrange_5F_instruction_5F_do_5F_while::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_do_5F_while::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_midrange_5F_instructionList::constructor_emptyList (HERE),
                                                                         GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_midrange_5F_partList::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_do_5F_while::GALGAS_midrange_5F_instruction_5F_do_5F_while (const cPtr_midrange_5F_instruction_5F_do_5F_while * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_do_5F_while GALGAS_midrange_5F_instruction_5F_do_5F_while::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                              const GALGAS_midrange_5F_instructionList & inAttribute_mRepeatedInstructionList,
                                                                                                              const GALGAS_location & inAttribute_mEndOfRepeatedInstructionList,
                                                                                                              const GALGAS_midrange_5F_partList & inAttribute_mWhilePartList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_do_5F_while result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mEndOfRepeatedInstructionList.isValid () && inAttribute_mWhilePartList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_do_5F_while (inAttribute_mInstructionLocation, inAttribute_mRepeatedInstructionList, inAttribute_mEndOfRepeatedInstructionList, inAttribute_mWhilePartList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_do_5F_while::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_do_5F_while * p = (const cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    result = p->mProperty_mRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList cPtr_midrange_5F_instruction_5F_do_5F_while::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_instruction_5F_do_5F_while::getter_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_do_5F_while * p = (const cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    result = p->mProperty_mEndOfRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_midrange_5F_instruction_5F_do_5F_while::getter_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList GALGAS_midrange_5F_instruction_5F_do_5F_while::getter_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_partList result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_do_5F_while * p = (const cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    result = p->mProperty_mWhilePartList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList cPtr_midrange_5F_instruction_5F_do_5F_while::getter_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhilePartList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @midrange_instruction_do_while class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_do_5F_while::cPtr_midrange_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                                                          const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                          const GALGAS_midrange_5F_partList & in_mWhilePartList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRepeatedInstructionList (in_mRepeatedInstructionList),
mProperty_mEndOfRepeatedInstructionList (in_mEndOfRepeatedInstructionList),
mProperty_mWhilePartList (in_mWhilePartList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;
}

void cPtr_midrange_5F_instruction_5F_do_5F_while::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_do_while:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @midrange_instruction_do_while type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ("midrange_instruction_do_while",
                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_do_5F_while GALGAS_midrange_5F_instruction_5F_do_5F_while::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_do_5F_while result ;
  const GALGAS_midrange_5F_instruction_5F_do_5F_while * p = (const GALGAS_midrange_5F_instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

