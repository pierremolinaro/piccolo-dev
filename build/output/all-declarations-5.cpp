#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_SimpleConstantCaseItem::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_SimpleConstantCaseItem * p = (const cPtr_pic_31__38_SimpleConstantCaseItem *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
  if (kOperandEqual == result) {
    result = mProperty_mCaseExpression.objectCompare (p->mProperty_mCaseExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseExpressionLocation.objectCompare (p->mProperty_mCaseExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem::GALGAS_pic_31__38_SimpleConstantCaseItem (void) :
GALGAS_pic_31__38_AbstractCaseItem () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem::GALGAS_pic_31__38_SimpleConstantCaseItem (const cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) :
GALGAS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_SimpleConstantCaseItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem GALGAS_pic_31__38_SimpleConstantCaseItem::constructor_new (const GALGAS_immediatExpression & inAttribute_mCaseExpression,
                                                                                                    const GALGAS_location & inAttribute_mCaseExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SimpleConstantCaseItem result ;
  if (inAttribute_mCaseExpression.isValid () && inAttribute_mCaseExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_SimpleConstantCaseItem (inAttribute_mCaseExpression, inAttribute_mCaseExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_SimpleConstantCaseItem::getter_mCaseExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_SimpleConstantCaseItem * p = (const cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    result = p->mProperty_mCaseExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression cPtr_pic_31__38_SimpleConstantCaseItem::getter_mCaseExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_SimpleConstantCaseItem::getter_mCaseExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_SimpleConstantCaseItem * p = (const cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    result = p->mProperty_mCaseExpressionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_pic_31__38_SimpleConstantCaseItem::getter_mCaseExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseExpressionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SimpleConstantCaseItem::setter_setMCaseExpression (GALGAS_immediatExpression inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    p->mProperty_mCaseExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::setter_setMCaseExpression (GALGAS_immediatExpression inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCaseExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SimpleConstantCaseItem::setter_setMCaseExpressionLocation (GALGAS_location inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    p->mProperty_mCaseExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::setter_setMCaseExpressionLocation (GALGAS_location inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCaseExpressionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18SimpleConstantCaseItem class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_SimpleConstantCaseItem::cPtr_pic_31__38_SimpleConstantCaseItem (const GALGAS_immediatExpression & in_mCaseExpression,
                                                                                const GALGAS_location & in_mCaseExpressionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (THERE),
mProperty_mCaseExpression (in_mCaseExpression),
mProperty_mCaseExpressionLocation (in_mCaseExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_SimpleConstantCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

void cPtr_pic_31__38_SimpleConstantCaseItem::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@pic18SimpleConstantCaseItem:" ;
  mProperty_mCaseExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_SimpleConstantCaseItem::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_SimpleConstantCaseItem (mProperty_mCaseExpression, mProperty_mCaseExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18SimpleConstantCaseItem type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ("pic18SimpleConstantCaseItem",
                                                          & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_SimpleConstantCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_SimpleConstantCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_SimpleConstantCaseItem (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_IntervalCaseItem::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_IntervalCaseItem * p = (const cPtr_pic_31__38_IntervalCaseItem *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
  if (kOperandEqual == result) {
    result = mProperty_mMinExpression.objectCompare (p->mProperty_mMinExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMaxExpression.objectCompare (p->mProperty_mMaxExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseExpressionLocation.objectCompare (p->mProperty_mCaseExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem::GALGAS_pic_31__38_IntervalCaseItem (void) :
GALGAS_pic_31__38_AbstractCaseItem () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem::GALGAS_pic_31__38_IntervalCaseItem (const cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) :
GALGAS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_IntervalCaseItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_IntervalCaseItem::getter_mMinExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IntervalCaseItem * p = (const cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    result = p->mProperty_mMinExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression cPtr_pic_31__38_IntervalCaseItem::getter_mMinExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMinExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_IntervalCaseItem::getter_mMaxExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IntervalCaseItem * p = (const cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    result = p->mProperty_mMaxExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression cPtr_pic_31__38_IntervalCaseItem::getter_mMaxExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMaxExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_IntervalCaseItem::getter_mCaseExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IntervalCaseItem * p = (const cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    result = p->mProperty_mCaseExpressionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_pic_31__38_IntervalCaseItem::getter_mCaseExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseExpressionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IntervalCaseItem::setter_setMMinExpression (GALGAS_immediatExpression inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    p->mProperty_mMinExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::setter_setMMinExpression (GALGAS_immediatExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMinExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IntervalCaseItem::setter_setMMaxExpression (GALGAS_immediatExpression inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    p->mProperty_mMaxExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::setter_setMMaxExpression (GALGAS_immediatExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMaxExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IntervalCaseItem::setter_setMCaseExpressionLocation (GALGAS_location inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    p->mProperty_mCaseExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::setter_setMCaseExpressionLocation (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCaseExpressionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18IntervalCaseItem class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_IntervalCaseItem::cPtr_pic_31__38_IntervalCaseItem (const GALGAS_immediatExpression & in_mMinExpression,
                                                                    const GALGAS_immediatExpression & in_mMaxExpression,
                                                                    const GALGAS_location & in_mCaseExpressionLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (THERE),
mProperty_mMinExpression (in_mMinExpression),
mProperty_mMaxExpression (in_mMaxExpression),
mProperty_mCaseExpressionLocation (in_mCaseExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_IntervalCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

void cPtr_pic_31__38_IntervalCaseItem::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@pic18IntervalCaseItem:" ;
  mProperty_mMinExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMaxExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_IntervalCaseItem::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_IntervalCaseItem (mProperty_mMinExpression, mProperty_mMaxExpression, mProperty_mCaseExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18IntervalCaseItem type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ("pic18IntervalCaseItem",
                                                    & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_IntervalCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_IntervalCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_IntervalCaseItem (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_CaseExpressionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_CaseExpressionList : public cCollectionElement {
  public: GALGAS_pic_31__38_CaseExpressionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_pic_31__38_CaseExpressionList::cCollectionElement_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseItem) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_CaseExpressionList::cCollectionElement_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCaseItem) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_CaseExpressionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_CaseExpressionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_pic_31__38_CaseExpressionList (mObject.mProperty_mCaseItem COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_pic_31__38_CaseExpressionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseItem" ":" ;
  mObject.mProperty_mCaseItem.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_CaseExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_CaseExpressionList * operand = (cCollectionElement_pic_31__38_CaseExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_CaseExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList::GALGAS_pic_31__38_CaseExpressionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList::GALGAS_pic_31__38_CaseExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_CaseExpressionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::constructor_listWithValue (const GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_pic_31__38_CaseExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_CaseExpressionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_CaseExpressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_pic_31__38_CaseExpressionList (in_mCaseItem COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::addAssign_operation (const GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_CaseExpressionList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_CaseExpressionList::setter_append (GALGAS_pic_31__38_CaseExpressionList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_CaseExpressionList (inElement COMMA_THERE)) ;
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

void GALGAS_pic_31__38_CaseExpressionList::setter_insertAtIndex (const GALGAS_pic_31__38_AbstractCaseItem inOperand0,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_CaseExpressionList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_CaseExpressionList::setter_removeAtIndex (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
        outOperand0 = p->mObject.mProperty_mCaseItem ;
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

void GALGAS_pic_31__38_CaseExpressionList::setter_popFirst (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    outOperand0 = p->mObject.mProperty_mCaseItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::setter_popLast (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    outOperand0 = p->mObject.mProperty_mCaseItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::method_first (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    outOperand0 = p->mObject.mProperty_mCaseItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::method_last (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    outOperand0 = p->mObject.mProperty_mCaseItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::add_operation (const GALGAS_pic_31__38_CaseExpressionList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_CaseExpressionList result = GALGAS_pic_31__38_CaseExpressionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_CaseExpressionList result = GALGAS_pic_31__38_CaseExpressionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_CaseExpressionList result = GALGAS_pic_31__38_CaseExpressionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::plusAssign_operation (const GALGAS_pic_31__38_CaseExpressionList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::setter_setMCaseItemAtIndex (GALGAS_pic_31__38_AbstractCaseItem inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseItem = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem GALGAS_pic_31__38_CaseExpressionList::getter_mCaseItemAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  GALGAS_pic_31__38_AbstractCaseItem result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    result = p->mObject.mProperty_mCaseItem ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_CaseExpressionList::cEnumerator_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element cEnumerator_pic_31__38_CaseExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_CaseExpressionList * p = (const cCollectionElement_pic_31__38_CaseExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem cEnumerator_pic_31__38_CaseExpressionList::current_mCaseItem (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_CaseExpressionList * p = (const cCollectionElement_pic_31__38_CaseExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
  return p->mObject.mProperty_mCaseItem ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@pic18CaseExpressionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ("pic18CaseExpressionList",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_CaseExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_CaseExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_CaseExpressionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList result ;
  const GALGAS_pic_31__38_CaseExpressionList * p = (const GALGAS_pic_31__38_CaseExpressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_CaseExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18CaseExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_SwitchInstructionCaseList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_SwitchInstructionCaseList : public cCollectionElement {
  public: GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GALGAS_location & in_mStartOfCase,
                                                                   const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_pic_31__38_SwitchInstructionCaseList::cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GALGAS_location & in_mStartOfCase,
                                                                                                                  const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartOfCase, in_mCaseExpressionList, in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_SwitchInstructionCaseList::cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStartOfCase, inElement.mProperty_mCaseExpressionList, inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_SwitchInstructionCaseList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_SwitchInstructionCaseList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_pic_31__38_SwitchInstructionCaseList (mObject.mProperty_mStartOfCase, mObject.mProperty_mCaseExpressionList, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_pic_31__38_SwitchInstructionCaseList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartOfCase" ":" ;
  mObject.mProperty_mStartOfCase.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCaseExpressionList" ":" ;
  mObject.mProperty_mCaseExpressionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_SwitchInstructionCaseList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * operand = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList::GALGAS_pic_31__38_SwitchInstructionCaseList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList::GALGAS_pic_31__38_SwitchInstructionCaseList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_SwitchInstructionCaseList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                                                                    const GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                                    const GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_SwitchInstructionCaseList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_SwitchInstructionCaseList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_location & in_mStartOfCase,
                                                                             const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = NULL ;
  macroMyNew (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList (in_mStartOfCase,
                                                                          in_mCaseExpressionList,
                                                                          in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::addAssign_operation (const GALGAS_location & inOperand0,
                                                                       const GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                       const GALGAS_pic_31__38_InstructionList & inOperand2
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_append (GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList (inElement COMMA_THERE)) ;
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

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                                        const GALGAS_pic_31__38_CaseExpressionList inOperand1,
                                                                        const GALGAS_pic_31__38_InstructionList inOperand2,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                                        GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                                        GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
        outOperand0 = p->mObject.mProperty_mStartOfCase ;
        outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
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

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_popFirst (GALGAS_location & outOperand0,
                                                                   GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                                   GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    outOperand0 = p->mObject.mProperty_mStartOfCase ;
    outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_popLast (GALGAS_location & outOperand0,
                                                                  GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                                  GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    outOperand0 = p->mObject.mProperty_mStartOfCase ;
    outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::method_first (GALGAS_location & outOperand0,
                                                                GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                                GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    outOperand0 = p->mObject.mProperty_mStartOfCase ;
    outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::method_last (GALGAS_location & outOperand0,
                                                               GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                               GALGAS_pic_31__38_InstructionList & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    outOperand0 = p->mObject.mProperty_mStartOfCase ;
    outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::add_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result = GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result = GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result = GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::plusAssign_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_setMStartOfCaseAtIndex (GALGAS_location inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStartOfCase = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_SwitchInstructionCaseList::getter_mStartOfCaseAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    result = p->mObject.mProperty_mStartOfCase ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_setMCaseExpressionListAtIndex (GALGAS_pic_31__38_CaseExpressionList inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseExpressionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_mCaseExpressionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  GALGAS_pic_31__38_CaseExpressionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    result = p->mObject.mProperty_mCaseExpressionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_SwitchInstructionCaseList::cEnumerator_pic_31__38_SwitchInstructionCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element cEnumerator_pic_31__38_SwitchInstructionCaseList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (const cCollectionElement_pic_31__38_SwitchInstructionCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_pic_31__38_SwitchInstructionCaseList::current_mStartOfCase (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (const cCollectionElement_pic_31__38_SwitchInstructionCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return p->mObject.mProperty_mStartOfCase ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList cEnumerator_pic_31__38_SwitchInstructionCaseList::current_mCaseExpressionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (const cCollectionElement_pic_31__38_SwitchInstructionCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return p->mObject.mProperty_mCaseExpressionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_SwitchInstructionCaseList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (const cCollectionElement_pic_31__38_SwitchInstructionCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@pic18SwitchInstructionCaseList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ("pic18SwitchInstructionCaseList",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_SwitchInstructionCaseList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_SwitchInstructionCaseList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_SwitchInstructionCaseList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList result ;
  const GALGAS_pic_31__38_SwitchInstructionCaseList * p = (const GALGAS_pic_31__38_SwitchInstructionCaseList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_SwitchInstructionCaseList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SwitchInstructionCaseList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_switch::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseList.objectCompare (p->mProperty_mCaseList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseBranchStartLocation.objectCompare (p->mProperty_mElseBranchStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch::GALGAS_pic_31__38_Instruction_5F_switch (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_switch::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_emptyList (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch::GALGAS_pic_31__38_Instruction_5F_switch (const cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_switch) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_Instruction_5F_switch::getter_mCaseList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    result = p->mProperty_mCaseList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList cPtr_pic_31__38_Instruction_5F_switch::getter_mCaseList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_switch::getter_mElseBranchStartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    result = p->mProperty_mElseBranchStartLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_pic_31__38_Instruction_5F_switch::getter_mElseBranchStartLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseBranchStartLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_switch::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_switch::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_switch::setter_setMCaseList (GALGAS_pic_31__38_SwitchInstructionCaseList inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    p->mProperty_mCaseList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::setter_setMCaseList (GALGAS_pic_31__38_SwitchInstructionCaseList inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCaseList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_switch::setter_setMElseBranchStartLocation (GALGAS_location inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    p->mProperty_mElseBranchStartLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::setter_setMElseBranchStartLocation (GALGAS_location inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseBranchStartLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_switch::setter_setMElseInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::setter_setMElseInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_switch class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_switch::cPtr_pic_31__38_Instruction_5F_switch (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                                              const GALGAS_location & in_mElseBranchStartLocation,
                                                                              const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mCaseList (in_mCaseList),
mProperty_mElseBranchStartLocation (in_mElseBranchStartLocation),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_switch::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

void cPtr_pic_31__38_Instruction_5F_switch::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_switch:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCaseList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseBranchStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_switch::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_switch (mProperty_mInstructionLocation, mProperty_mCaseList, mProperty_mElseBranchStartLocation, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_switch type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ("pic18Instruction_switch",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_switch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_switch::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_switch (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_caseConstantMap::cMapElement_caseConstantMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_caseConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_caseConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_caseConstantMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_caseConstantMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_caseConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_caseConstantMap * operand = (cMapElement_caseConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap::GALGAS_caseConstantMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap::GALGAS_caseConstantMap (const GALGAS_caseConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap & GALGAS_caseConstantMap::operator = (const GALGAS_caseConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap GALGAS_caseConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_caseConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap GALGAS_caseConstantMap::constructor_mapWithMapToOverride (const GALGAS_caseConstantMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_caseConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap GALGAS_caseConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_caseConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_caseConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_caseConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_caseConstantMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@caseConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_caseConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_caseConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_caseConstantMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_caseConstantMap * GALGAS_caseConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_caseConstantMap * result = (cMapElement_caseConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_caseConstantMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_caseConstantMap::cEnumerator_caseConstantMap (const GALGAS_caseConstantMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element cEnumerator_caseConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_caseConstantMap * p = (const cMapElement_caseConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_caseConstantMap) ;
  return GALGAS_caseConstantMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_caseConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_caseConstantMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_caseConstantMap * p = (const cMapElement_caseConstantMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_caseConstantMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@caseConstantMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_caseConstantMap ("caseConstantMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_caseConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_caseConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_caseConstantMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap GALGAS_caseConstantMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_caseConstantMap result ;
  const GALGAS_caseConstantMap * p = (const GALGAS_caseConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_caseConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18AbstractCaseItem analyzeCaseItem'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem> gExtensionMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeCaseItem (const int32_t inClassIndex,
                                           extensionMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem inMethod) {
  gExtensionMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_pic_31__38_AbstractCaseItem_analyzeCaseItem (void) {
  gExtensionMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_AbstractCaseItem_analyzeCaseItem (NULL,
                                                                        freeExtensionMethod_pic_31__38_AbstractCaseItem_analyzeCaseItem) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                          const GALGAS_registerTable constin_inRegisterTable,
                                          const GALGAS_constantMap constin_inConstantMap,
                                          const GALGAS_lstring constin_inConditionTrueLabel,
                                          const GALGAS_string constin_inIndexForLabels,
                                          GALGAS_stringset & io_ioUsedRegisters,
                                          GALGAS_caseConstantMap & io_ioCaseConstantMap,
                                          GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                          GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                          GALGAS_lstring & io_ioBlockLabel,
                                          GALGAS_sint_36__34_ & io_ioLastComparisonValue,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_AbstractCaseItem) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem f = NULL ;
    if (classIndex < gExtensionMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.count ()) {
      f = gExtensionMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.count ()) {
          f = gExtensionMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, constin_inConditionTrueLabel, constin_inIndexForLabels, io_ioUsedRegisters, io_ioCaseConstantMap, io_ioGeneratedInstructionList, io_ioGeneratedBlockList, io_ioBlockLabel, io_ioLastComparisonValue, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_pic_31__38__5F_dataMap::cMapElement_pic_31__38__5F_dataMap (const GALGAS_lstring & inKey,
                                                                        const GALGAS_uintlist & in_mData,
                                                                        const GALGAS_bool & in_mIsData_38_
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mData (in_mData),
mProperty_mIsData_38_ (in_mIsData_38_) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_pic_31__38__5F_dataMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mData.isValid () && mProperty_mIsData_38_.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_pic_31__38__5F_dataMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_pic_31__38__5F_dataMap (mProperty_lkey, mProperty_mData, mProperty_mIsData_38_ COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_pic_31__38__5F_dataMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mData" ":" ;
  mProperty_mData.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsData8" ":" ;
  mProperty_mIsData_38_.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_pic_31__38__5F_dataMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_pic_31__38__5F_dataMap * operand = (cMapElement_pic_31__38__5F_dataMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mData.objectCompare (operand->mProperty_mData) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsData_38_.objectCompare (operand->mProperty_mIsData_38_) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap::GALGAS_pic_31__38__5F_dataMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap::GALGAS_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap & GALGAS_pic_31__38__5F_dataMap::operator = (const GALGAS_pic_31__38__5F_dataMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap GALGAS_pic_31__38__5F_dataMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap GALGAS_pic_31__38__5F_dataMap::constructor_mapWithMapToOverride (const GALGAS_pic_31__38__5F_dataMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap GALGAS_pic_31__38__5F_dataMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38__5F_dataMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         const GALGAS_uintlist & inArgument0,
                                                         const GALGAS_bool & inArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataMap * p = NULL ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@pic_31__38__5F_dataMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::setter_insertKey (GALGAS_lstring inKey,
                                                      GALGAS_uintlist inArgument0,
                                                      GALGAS_bool inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataMap * p = NULL ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_pic_31__38__5F_dataMap_searchKey = "the '%K' data is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::method_searchKey (GALGAS_lstring inKey,
                                                      GALGAS_uintlist & outArgument0,
                                                      GALGAS_bool & outArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_pic_31__38__5F_dataMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    outArgument0 = p->mProperty_mData ;
    outArgument1 = p->mProperty_mIsData_38_ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_pic_31__38__5F_dataMap::getter_mDataForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) attributes ;
  GALGAS_uintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    result = p->mProperty_mData ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38__5F_dataMap::getter_mIsData_38_ForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    result = p->mProperty_mIsData_38_ ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::setter_setMDataForKey (GALGAS_uintlist inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38__5F_dataMap * p = (cMapElement_pic_31__38__5F_dataMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    p->mProperty_mData = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::setter_setMIsData_38_ForKey (GALGAS_bool inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38__5F_dataMap * p = (cMapElement_pic_31__38__5F_dataMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    p->mProperty_mIsData_38_ = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_pic_31__38__5F_dataMap * GALGAS_pic_31__38__5F_dataMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataMap * result = (cMapElement_pic_31__38__5F_dataMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_pic_31__38__5F_dataMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38__5F_dataMap::cEnumerator_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element cEnumerator_pic_31__38__5F_dataMap::current (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
  return GALGAS_pic_31__38__5F_dataMap_2D_element (p->mProperty_lkey, p->mProperty_mData, p->mProperty_mIsData_38_) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38__5F_dataMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_pic_31__38__5F_dataMap::current_mData (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
  return p->mProperty_mData ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_pic_31__38__5F_dataMap::current_mIsData_38_ (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
  return p->mProperty_mIsData_38_ ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38__5F_dataMap::optional_searchKey (const GALGAS_string & inKey,
                                                        GALGAS_uintlist & outArgument0,
                                                        GALGAS_bool & outArgument1) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    outArgument0 = p->mProperty_mData ;
    outArgument1 = p->mProperty_mIsData_38_ ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18_dataMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ("pic18_dataMap",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap GALGAS_pic_31__38__5F_dataMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap result ;
  const GALGAS_pic_31__38__5F_dataMap * p = (const GALGAS_pic_31__38__5F_dataMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38__5F_dataMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38_SequentialInstruction::objectCompare (const GALGAS_ipic_31__38_SequentialInstruction & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction::GALGAS_ipic_31__38_SequentialInstruction (void) :
AC_GALGAS_class (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction::GALGAS_ipic_31__38_SequentialInstruction (const cPtr_ipic_31__38_SequentialInstruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, true) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SequentialInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ipic_31__38_SequentialInstruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_SequentialInstruction * p = (const cPtr_ipic_31__38_SequentialInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_SequentialInstruction) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_ipic_31__38_SequentialInstruction::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstruction::setter_setMInstructionLocation (GALGAS_location inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_SequentialInstruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::setter_setMInstructionLocation (GALGAS_location inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SequentialInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SequentialInstruction::cPtr_ipic_31__38_SequentialInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18SequentialInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ("ipic18SequentialInstruction",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SequentialInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SequentialInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SequentialInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_ipic_31__38_SequentialInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstruction result ;
  const GALGAS_ipic_31__38_SequentialInstruction * p = (const GALGAS_ipic_31__38_SequentialInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_SequentialInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@ipic_31__38_SequentialInstructionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_ipic_31__38_SequentialInstructionList : public cCollectionElement {
  public: GALGAS_ipic_31__38_SequentialInstructionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                    const GALGAS_uint & in_mMin,
                                                                    const GALGAS_uint & in_mMax
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_ipic_31__38_SequentialInstructionList::cCollectionElement_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                                                    const GALGAS_uint & in_mMin,
                                                                                                                    const GALGAS_uint & in_mMax
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction, in_mMin, in_mMax) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_SequentialInstructionList::cCollectionElement_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction, inElement.mProperty_mMin, inElement.mProperty_mMax) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_ipic_31__38_SequentialInstructionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ipic_31__38_SequentialInstructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ipic_31__38_SequentialInstructionList (mObject.mProperty_mInstruction, mObject.mProperty_mMin, mObject.mProperty_mMax COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_ipic_31__38_SequentialInstructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMin" ":" ;
  mObject.mProperty_mMin.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMax" ":" ;
  mObject.mProperty_mMax.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_ipic_31__38_SequentialInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ipic_31__38_SequentialInstructionList * operand = (cCollectionElement_ipic_31__38_SequentialInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList::GALGAS_ipic_31__38_SequentialInstructionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList::GALGAS_ipic_31__38_SequentialInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ipic_31__38_SequentialInstructionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::constructor_listWithValue (const GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                                      const GALGAS_uint & inOperand2
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ipic_31__38_SequentialInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ipic_31__38_SequentialInstructionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                              const GALGAS_uint & in_mMin,
                                                                              const GALGAS_uint & in_mMax
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (in_mInstruction,
                                                                           in_mMin,
                                                                           in_mMax COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::addAssign_operation (const GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_uint & inOperand2
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_ipic_31__38_SequentialInstructionList::setter_append (GALGAS_ipic_31__38_SequentialInstructionList_2D_element inElement,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (inElement COMMA_THERE)) ;
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

void GALGAS_ipic_31__38_SequentialInstructionList::setter_insertAtIndex (const GALGAS_ipic_31__38_SequentialInstruction inOperand0,
                                                                         const GALGAS_uint inOperand1,
                                                                         const GALGAS_uint inOperand2,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_ipic_31__38_SequentialInstructionList::setter_removeAtIndex (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                         GALGAS_uint & outOperand1,
                                                                         GALGAS_uint & outOperand2,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
        outOperand1 = p->mObject.mProperty_mMin ;
        outOperand2 = p->mObject.mProperty_mMax ;
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

void GALGAS_ipic_31__38_SequentialInstructionList::setter_popFirst (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                    GALGAS_uint & outOperand1,
                                                                    GALGAS_uint & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
    outOperand1 = p->mObject.mProperty_mMin ;
    outOperand2 = p->mObject.mProperty_mMax ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_popLast (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                   GALGAS_uint & outOperand1,
                                                                   GALGAS_uint & outOperand2,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
    outOperand1 = p->mObject.mProperty_mMin ;
    outOperand2 = p->mObject.mProperty_mMax ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::method_first (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                 GALGAS_uint & outOperand1,
                                                                 GALGAS_uint & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
    outOperand1 = p->mObject.mProperty_mMin ;
    outOperand2 = p->mObject.mProperty_mMax ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::method_last (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                GALGAS_uint & outOperand1,
                                                                GALGAS_uint & outOperand2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
    outOperand1 = p->mObject.mProperty_mMin ;
    outOperand2 = p->mObject.mProperty_mMax ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::add_operation (const GALGAS_ipic_31__38_SequentialInstructionList & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstructionList result = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstructionList result = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstructionList result = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::plusAssign_operation (const GALGAS_ipic_31__38_SequentialInstructionList inOperand,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_setMInstructionAtIndex (GALGAS_ipic_31__38_SequentialInstruction inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_ipic_31__38_SequentialInstructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  GALGAS_ipic_31__38_SequentialInstruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_setMMinAtIndex (GALGAS_uint inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMin = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38_SequentialInstructionList::getter_mMinAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    result = p->mObject.mProperty_mMin ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_setMMaxAtIndex (GALGAS_uint inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMax = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38_SequentialInstructionList::getter_mMaxAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    result = p->mObject.mProperty_mMax ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_ipic_31__38_SequentialInstructionList::cEnumerator_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element cEnumerator_ipic_31__38_SequentialInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_SequentialInstructionList * p = (const cCollectionElement_ipic_31__38_SequentialInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction cEnumerator_ipic_31__38_SequentialInstructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_SequentialInstructionList * p = (const cCollectionElement_ipic_31__38_SequentialInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return p->mObject.mProperty_mInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ipic_31__38_SequentialInstructionList::current_mMin (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_SequentialInstructionList * p = (const cCollectionElement_ipic_31__38_SequentialInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return p->mObject.mProperty_mMin ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ipic_31__38_SequentialInstructionList::current_mMax (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_SequentialInstructionList * p = (const cCollectionElement_ipic_31__38_SequentialInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return p->mObject.mProperty_mMax ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18SequentialInstructionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ("ipic18SequentialInstructionList",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SequentialInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SequentialInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SequentialInstructionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList result ;
  const GALGAS_ipic_31__38_SequentialInstructionList * p = (const GALGAS_ipic_31__38_SequentialInstructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_SequentialInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38_AbstractBlockTerminator::objectCompare (const GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator::GALGAS_ipic_31__38_AbstractBlockTerminator (void) :
AC_GALGAS_class (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator::GALGAS_ipic_31__38_AbstractBlockTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, true) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_AbstractBlockTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ipic_31__38_AbstractBlockTerminator::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_AbstractBlockTerminator * p = (const cPtr_ipic_31__38_AbstractBlockTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_ipic_31__38_AbstractBlockTerminator::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_AbstractBlockTerminator::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractBlockTerminator::setter_setMInstructionLocation (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18AbstractBlockTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractBlockTerminator::cPtr_ipic_31__38_AbstractBlockTerminator (const GALGAS_location & in_mInstructionLocation
                                                                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18AbstractBlockTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ("ipic18AbstractBlockTerminator",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_AbstractBlockTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_AbstractBlockTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_AbstractBlockTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator GALGAS_ipic_31__38_AbstractBlockTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_AbstractBlockTerminator result ;
  const GALGAS_ipic_31__38_AbstractBlockTerminator * p = (const GALGAS_ipic_31__38_AbstractBlockTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_AbstractBlockTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractBlockTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@ipic_31__38_BlockList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_ipic_31__38_BlockList : public cCollectionElement {
  public: GALGAS_ipic_31__38_BlockList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_ipic_31__38_BlockList (const GALGAS_ipic_31__38_Block & in_mBlock
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_ipic_31__38_BlockList::cCollectionElement_ipic_31__38_BlockList (const GALGAS_ipic_31__38_Block & in_mBlock
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBlock) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_BlockList::cCollectionElement_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBlock) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_ipic_31__38_BlockList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ipic_31__38_BlockList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ipic_31__38_BlockList (mObject.mProperty_mBlock COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_ipic_31__38_BlockList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBlock" ":" ;
  mObject.mProperty_mBlock.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_ipic_31__38_BlockList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ipic_31__38_BlockList * operand = (cCollectionElement_ipic_31__38_BlockList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ipic_31__38_BlockList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList::GALGAS_ipic_31__38_BlockList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList::GALGAS_ipic_31__38_BlockList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ipic_31__38_BlockList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::constructor_listWithValue (const GALGAS_ipic_31__38_Block & inOperand0
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ipic_31__38_BlockList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ipic_31__38_BlockList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_ipic_31__38_Block & in_mBlock
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_BlockList * p = NULL ;
  macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (in_mBlock COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::addAssign_operation (const GALGAS_ipic_31__38_Block & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_ipic_31__38_BlockList::setter_append (GALGAS_ipic_31__38_BlockList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (inElement COMMA_THERE)) ;
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

void GALGAS_ipic_31__38_BlockList::setter_insertAtIndex (const GALGAS_ipic_31__38_Block inOperand0,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_ipic_31__38_BlockList::setter_removeAtIndex (GALGAS_ipic_31__38_Block & outOperand0,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
        outOperand0 = p->mObject.mProperty_mBlock ;
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

void GALGAS_ipic_31__38_BlockList::setter_popFirst (GALGAS_ipic_31__38_Block & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    outOperand0 = p->mObject.mProperty_mBlock ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::setter_popLast (GALGAS_ipic_31__38_Block & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    outOperand0 = p->mObject.mProperty_mBlock ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::method_first (GALGAS_ipic_31__38_Block & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    outOperand0 = p->mObject.mProperty_mBlock ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::method_last (GALGAS_ipic_31__38_Block & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    outOperand0 = p->mObject.mProperty_mBlock ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::add_operation (const GALGAS_ipic_31__38_BlockList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_BlockList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_BlockList result = GALGAS_ipic_31__38_BlockList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_BlockList result = GALGAS_ipic_31__38_BlockList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_BlockList result = GALGAS_ipic_31__38_BlockList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::plusAssign_operation (const GALGAS_ipic_31__38_BlockList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::setter_setMBlockAtIndex (GALGAS_ipic_31__38_Block inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBlock = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_BlockList::getter_mBlockAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  GALGAS_ipic_31__38_Block result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    result = p->mObject.mProperty_mBlock ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_ipic_31__38_BlockList::cEnumerator_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element cEnumerator_ipic_31__38_BlockList::current (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_BlockList * p = (const cCollectionElement_ipic_31__38_BlockList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block cEnumerator_ipic_31__38_BlockList::current_mBlock (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_BlockList * p = (const cCollectionElement_ipic_31__38_BlockList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
  return p->mObject.mProperty_mBlock ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18BlockList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_BlockList ("ipic18BlockList",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_BlockList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_BlockList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_BlockList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList result ;
  const GALGAS_ipic_31__38_BlockList * p = (const GALGAS_ipic_31__38_BlockList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_BlockList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18BlockList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38_SingleInstructionTerminator::objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator::GALGAS_ipic_31__38_SingleInstructionTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator::GALGAS_ipic_31__38_SingleInstructionTerminator (const cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SingleInstructionTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SingleInstructionTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SingleInstructionTerminator::cPtr_ipic_31__38_SingleInstructionTerminator (const GALGAS_location & in_mInstructionLocation
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18SingleInstructionTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ("ipic18SingleInstructionTerminator",
                                                                & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SingleInstructionTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SingleInstructionTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SingleInstructionTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator GALGAS_ipic_31__38_SingleInstructionTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SingleInstructionTerminator result ;
  const GALGAS_ipic_31__38_SingleInstructionTerminator * p = (const GALGAS_ipic_31__38_SingleInstructionTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_SingleInstructionTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SingleInstructionTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_ReturnTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ReturnTerminator * p = (const cPtr_ipic_31__38_ReturnTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ReturnTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_ReturnTerminator::objectCompare (const GALGAS_ipic_31__38_ReturnTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator::GALGAS_ipic_31__38_ReturnTerminator (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator GALGAS_ipic_31__38_ReturnTerminator::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator::GALGAS_ipic_31__38_ReturnTerminator (const cPtr_ipic_31__38_ReturnTerminator * inSourcePtr) :
GALGAS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ReturnTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator GALGAS_ipic_31__38_ReturnTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ReturnTerminator result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ReturnTerminator (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ReturnTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ReturnTerminator::cPtr_ipic_31__38_ReturnTerminator (const GALGAS_location & in_mInstructionLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ReturnTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;
}

void cPtr_ipic_31__38_ReturnTerminator::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@ipic18ReturnTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ReturnTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_ReturnTerminator (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18ReturnTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ("ipic18ReturnTerminator",
                                                     & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ReturnTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ReturnTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ReturnTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator GALGAS_ipic_31__38_ReturnTerminator::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ReturnTerminator result ;
  const GALGAS_ipic_31__38_ReturnTerminator * p = (const GALGAS_ipic_31__38_ReturnTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_ReturnTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ReturnTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_RetlwTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_RetlwTerminator * p = (const cPtr_ipic_31__38_RetlwTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_RetlwTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralValue.objectCompare (p->mProperty_mLiteralValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_RetlwTerminator::objectCompare (const GALGAS_ipic_31__38_RetlwTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator::GALGAS_ipic_31__38_RetlwTerminator (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator GALGAS_ipic_31__38_RetlwTerminator::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38_RetlwTerminator::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_uint::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator::GALGAS_ipic_31__38_RetlwTerminator (const cPtr_ipic_31__38_RetlwTerminator * inSourcePtr) :
GALGAS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_RetlwTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator GALGAS_ipic_31__38_RetlwTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_uint & inAttribute_mLiteralValue
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetlwTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_RetlwTerminator (inAttribute_mInstructionLocation, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38_RetlwTerminator::getter_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_RetlwTerminator * p = (const cPtr_ipic_31__38_RetlwTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetlwTerminator) ;
    result = p->mProperty_mLiteralValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_RetlwTerminator::getter_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_RetlwTerminator::setter_setMLiteralValue (GALGAS_uint inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_RetlwTerminator * p = (cPtr_ipic_31__38_RetlwTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetlwTerminator) ;
    p->mProperty_mLiteralValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::setter_setMLiteralValue (GALGAS_uint inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLiteralValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18RetlwTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetlwTerminator::cPtr_ipic_31__38_RetlwTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_uint & in_mLiteralValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralValue (in_mLiteralValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_RetlwTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;
}

void cPtr_ipic_31__38_RetlwTerminator::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@ipic18RetlwTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_RetlwTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_RetlwTerminator (mProperty_mInstructionLocation, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18RetlwTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ("ipic18RetlwTerminator",
                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_RetlwTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_RetlwTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_RetlwTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator GALGAS_ipic_31__38_RetlwTerminator::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetlwTerminator result ;
  const GALGAS_ipic_31__38_RetlwTerminator * p = (const GALGAS_ipic_31__38_RetlwTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_RetlwTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetlwTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_RetfieTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_RetfieTerminator * p = (const cPtr_ipic_31__38_RetfieTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_RetfieTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFastReturn.objectCompare (p->mProperty_mFastReturn) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_RetfieTerminator::objectCompare (const GALGAS_ipic_31__38_RetfieTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator::GALGAS_ipic_31__38_RetfieTerminator (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator GALGAS_ipic_31__38_RetfieTerminator::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38_RetfieTerminator::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator::GALGAS_ipic_31__38_RetfieTerminator (const cPtr_ipic_31__38_RetfieTerminator * inSourcePtr) :
GALGAS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_RetfieTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator GALGAS_ipic_31__38_RetfieTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_bool & inAttribute_mFastReturn
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetfieTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFastReturn.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_RetfieTerminator (inAttribute_mInstructionLocation, inAttribute_mFastReturn COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_RetfieTerminator::getter_mFastReturn (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_RetfieTerminator * p = (const cPtr_ipic_31__38_RetfieTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetfieTerminator) ;
    result = p->mProperty_mFastReturn ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_RetfieTerminator::getter_mFastReturn (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFastReturn ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_RetfieTerminator::setter_setMFastReturn (GALGAS_bool inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_RetfieTerminator * p = (cPtr_ipic_31__38_RetfieTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetfieTerminator) ;
    p->mProperty_mFastReturn = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::setter_setMFastReturn (GALGAS_bool inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFastReturn = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18RetfieTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetfieTerminator::cPtr_ipic_31__38_RetfieTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_bool & in_mFastReturn
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mFastReturn (in_mFastReturn) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_RetfieTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;
}

void cPtr_ipic_31__38_RetfieTerminator::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@ipic18RetfieTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFastReturn.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_RetfieTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_RetfieTerminator (mProperty_mInstructionLocation, mProperty_mFastReturn COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18RetfieTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ("ipic18RetfieTerminator",
                                                     & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_RetfieTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_RetfieTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_RetfieTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator GALGAS_ipic_31__38_RetfieTerminator::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetfieTerminator result ;
  const GALGAS_ipic_31__38_RetfieTerminator * p = (const GALGAS_ipic_31__38_RetfieTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_RetfieTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetfieTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_ComputedGotoTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ComputedGotoTerminator * p = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabels.objectCompare (p->mProperty_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRCALL.objectCompare (p->mProperty_mUsesRCALL) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_ComputedGotoTerminator::objectCompare (const GALGAS_ipic_31__38_ComputedGotoTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator::GALGAS_ipic_31__38_ComputedGotoTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator::GALGAS_ipic_31__38_ComputedGotoTerminator (const cPtr_ipic_31__38_ComputedGotoTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedGotoTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                      const GALGAS_bool & inAttribute_mUsesRCALL
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedGotoTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRCALL.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ComputedGotoTerminator (inAttribute_mInstructionLocation, inAttribute_mTargetLabels, inAttribute_mUsesRCALL COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_ipic_31__38_ComputedGotoTerminator::getter_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ComputedGotoTerminator * p = (const cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    result = p->mProperty_mTargetLabels ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_ipic_31__38_ComputedGotoTerminator::getter_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetLabels ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_ComputedGotoTerminator::getter_mUsesRCALL (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ComputedGotoTerminator * p = (const cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    result = p->mProperty_mUsesRCALL ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_mUsesRCALL (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsesRCALL ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedGotoTerminator::setter_setMTargetLabels (GALGAS_lstringlist inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    p->mProperty_mTargetLabels = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::setter_setMTargetLabels (GALGAS_lstringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetLabels = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedGotoTerminator::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    p->mProperty_mUsesRCALL = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUsesRCALL = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedGotoTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedGotoTerminator::cPtr_ipic_31__38_ComputedGotoTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_lstringlist & in_mTargetLabels,
                                                                                  const GALGAS_bool & in_mUsesRCALL
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabels (in_mTargetLabels),
mProperty_mUsesRCALL (in_mUsesRCALL) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ComputedGotoTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;
}

void cPtr_ipic_31__38_ComputedGotoTerminator::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@ipic18ComputedGotoTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedGotoTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedGotoTerminator (mProperty_mInstructionLocation, mProperty_mTargetLabels, mProperty_mUsesRCALL COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18ComputedGotoTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ("ipic18ComputedGotoTerminator",
                                                           & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ComputedGotoTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ComputedGotoTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ComputedGotoTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator GALGAS_ipic_31__38_ComputedGotoTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedGotoTerminator result ;
  const GALGAS_ipic_31__38_ComputedGotoTerminator * p = (const GALGAS_ipic_31__38_ComputedGotoTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_ComputedGotoTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedGotoTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_ComputedRETLWTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ComputedRETLWTerminator * p = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralValues.objectCompare (p->mProperty_mLiteralValues) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRCALL.objectCompare (p->mProperty_mUsesRCALL) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_ComputedRETLWTerminator::objectCompare (const GALGAS_ipic_31__38_ComputedRETLWTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator::GALGAS_ipic_31__38_ComputedRETLWTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_uintlist::constructor_emptyList (HERE),
                                                                      GALGAS_bool::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator::GALGAS_ipic_31__38_ComputedRETLWTerminator (const cPtr_ipic_31__38_ComputedRETLWTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_uintlist & inAttribute_mLiteralValues,
                                                                                                        const GALGAS_bool & inAttribute_mUsesRCALL
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedRETLWTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralValues.isValid () && inAttribute_mUsesRCALL.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ComputedRETLWTerminator (inAttribute_mInstructionLocation, inAttribute_mLiteralValues, inAttribute_mUsesRCALL COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_ipic_31__38_ComputedRETLWTerminator::getter_mLiteralValues (UNUSED_LOCATION_ARGS) const {
  GALGAS_uintlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ComputedRETLWTerminator * p = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    result = p->mProperty_mLiteralValues ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist cPtr_ipic_31__38_ComputedRETLWTerminator::getter_mLiteralValues (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralValues ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_ComputedRETLWTerminator::getter_mUsesRCALL (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ComputedRETLWTerminator * p = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    result = p->mProperty_mUsesRCALL ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_mUsesRCALL (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsesRCALL ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedRETLWTerminator::setter_setMLiteralValues (GALGAS_uintlist inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    p->mProperty_mLiteralValues = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::setter_setMLiteralValues (GALGAS_uintlist inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLiteralValues = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedRETLWTerminator::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    p->mProperty_mUsesRCALL = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUsesRCALL = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedRETLWTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedRETLWTerminator::cPtr_ipic_31__38_ComputedRETLWTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_uintlist & in_mLiteralValues,
                                                                                    const GALGAS_bool & in_mUsesRCALL
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralValues (in_mLiteralValues),
mProperty_mUsesRCALL (in_mUsesRCALL) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ComputedRETLWTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;
}

void cPtr_ipic_31__38_ComputedRETLWTerminator::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@ipic18ComputedRETLWTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralValues.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedRETLWTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedRETLWTerminator (mProperty_mInstructionLocation, mProperty_mLiteralValues, mProperty_mUsesRCALL COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18ComputedRETLWTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ("ipic18ComputedRETLWTerminator",
                                                            & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ComputedRETLWTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ComputedRETLWTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ComputedRETLWTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator GALGAS_ipic_31__38_ComputedRETLWTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedRETLWTerminator result ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator * p = (const GALGAS_ipic_31__38_ComputedRETLWTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_ComputedRETLWTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedRETLWTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode::GALGAS_conditionalBranchMode (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_conditionalBranchMode::constructor_native (UNUSED_LOCATION_ARGS) {
  GALGAS_conditionalBranchMode result ;
  result.mEnum = kEnum_native ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_conditionalBranchMode::constructor_ipicBRA (UNUSED_LOCATION_ARGS) {
  GALGAS_conditionalBranchMode result ;
  result.mEnum = kEnum_ipicBRA ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_conditionalBranchMode::constructor_ipicGOTO (UNUSED_LOCATION_ARGS) {
  GALGAS_conditionalBranchMode result ;
  result.mEnum = kEnum_ipicGOTO ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_conditionalBranchMode::optional_native () const {
  const bool ok = mEnum == kEnum_native ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_conditionalBranchMode::optional_ipicBRA () const {
  const bool ok = mEnum == kEnum_ipicBRA ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_conditionalBranchMode::optional_ipicGOTO () const {
  const bool ok = mEnum == kEnum_ipicGOTO ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_conditionalBranchMode [4] = {
  "(not built)",
  "native",
  "ipicBRA",
  "ipicGOTO"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditionalBranchMode::getter_isNative (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_native == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditionalBranchMode::getter_isIpicBRA (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ipicBRA == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditionalBranchMode::getter_isIpicGOTO (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ipicGOTO == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_conditionalBranchMode::description (C_String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString << "<enum @conditionalBranchMode: " << gEnumNameArrayFor_conditionalBranchMode [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_conditionalBranchMode::objectCompare (const GALGAS_conditionalBranchMode & inOperand) const {
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
//@conditionalBranchMode type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_conditionalBranchMode ("conditionalBranchMode",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_conditionalBranchMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_conditionalBranchMode ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_conditionalBranchMode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_conditionalBranchMode (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_conditionalBranchMode::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_conditionalBranchMode result ;
  const GALGAS_conditionalBranchMode * p = (const GALGAS_conditionalBranchMode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_conditionalBranchMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("conditionalBranchMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_ComputedBraTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ComputedBraTerminator * p = (const cPtr_ipic_31__38_ComputedBraTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabels.objectCompare (p->mProperty_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRCALL.objectCompare (p->mProperty_mUsesRCALL) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_ComputedBraTerminator::objectCompare (const GALGAS_ipic_31__38_ComputedBraTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator::GALGAS_ipic_31__38_ComputedBraTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator GALGAS_ipic_31__38_ComputedBraTerminator::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                    GALGAS_bool::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator::GALGAS_ipic_31__38_ComputedBraTerminator (const cPtr_ipic_31__38_ComputedBraTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedBraTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                    const GALGAS_bool & inAttribute_mUsesRCALL
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedBraTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRCALL.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ComputedBraTerminator (inAttribute_mInstructionLocation, inAttribute_mTargetLabels, inAttribute_mUsesRCALL COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_ipic_31__38_ComputedBraTerminator::getter_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ComputedBraTerminator * p = (const cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    result = p->mProperty_mTargetLabels ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_ipic_31__38_ComputedBraTerminator::getter_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetLabels ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_ComputedBraTerminator::getter_mUsesRCALL (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ComputedBraTerminator * p = (const cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    result = p->mProperty_mUsesRCALL ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_mUsesRCALL (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsesRCALL ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedBraTerminator::setter_setMTargetLabels (GALGAS_lstringlist inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    p->mProperty_mTargetLabels = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::setter_setMTargetLabels (GALGAS_lstringlist inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetLabels = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedBraTerminator::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    p->mProperty_mUsesRCALL = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUsesRCALL = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedBraTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedBraTerminator::cPtr_ipic_31__38_ComputedBraTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_lstringlist & in_mTargetLabels,
                                                                                const GALGAS_bool & in_mUsesRCALL
                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabels (in_mTargetLabels),
mProperty_mUsesRCALL (in_mUsesRCALL) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ComputedBraTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;
}

void cPtr_ipic_31__38_ComputedBraTerminator::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@ipic18ComputedBraTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedBraTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedBraTerminator (mProperty_mInstructionLocation, mProperty_mTargetLabels, mProperty_mUsesRCALL COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18ComputedBraTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ("ipic18ComputedBraTerminator",
                                                          & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ComputedBraTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ComputedBraTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ComputedBraTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator GALGAS_ipic_31__38_ComputedBraTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedBraTerminator result ;
  const GALGAS_ipic_31__38_ComputedBraTerminator * p = (const GALGAS_ipic_31__38_ComputedBraTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_ComputedBraTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedBraTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison::GALGAS_ipic_31__38_RegisterComparison (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_registerEqualsToW ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_registerGreaterThanW ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_registerLowerThanW ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_RegisterComparison::optional_registerEqualsToW () const {
  const bool ok = mEnum == kEnum_registerEqualsToW ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_RegisterComparison::optional_registerGreaterThanW () const {
  const bool ok = mEnum == kEnum_registerGreaterThanW ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_RegisterComparison::optional_registerLowerThanW () const {
  const bool ok = mEnum == kEnum_registerLowerThanW ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ipic_31__38_RegisterComparison [4] = {
  "(not built)",
  "registerEqualsToW",
  "registerGreaterThanW",
  "registerLowerThanW"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_RegisterComparison::getter_isRegisterEqualsToW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerEqualsToW == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_RegisterComparison::getter_isRegisterGreaterThanW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerGreaterThanW == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_RegisterComparison::getter_isRegisterLowerThanW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerLowerThanW == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_RegisterComparison::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "<enum @ipic18RegisterComparison: " << gEnumNameArrayFor_ipic_31__38_RegisterComparison [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_RegisterComparison::objectCompare (const GALGAS_ipic_31__38_RegisterComparison & inOperand) const {
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
//@ipic18RegisterComparison type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ("ipic18RegisterComparison",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_RegisterComparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_RegisterComparison::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_RegisterComparison (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_ipic_31__38_RegisterComparison::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RegisterComparison result ;
  const GALGAS_ipic_31__38_RegisterComparison * p = (const GALGAS_ipic_31__38_RegisterComparison *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_RegisterComparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RegisterComparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38_AbstractConditionTerminator::objectCompare (const GALGAS_ipic_31__38_AbstractConditionTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator::GALGAS_ipic_31__38_AbstractConditionTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator::GALGAS_ipic_31__38_AbstractConditionTerminator (const cPtr_ipic_31__38_AbstractConditionTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_AbstractConditionTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator GALGAS_ipic_31__38_AbstractConditionTerminator::getter_mSingleInstructionTerminatorIfConditionTrue (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SingleInstructionTerminator result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_AbstractConditionTerminator * p = (const cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    result = p->mProperty_mSingleInstructionTerminatorIfConditionTrue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator cPtr_ipic_31__38_AbstractConditionTerminator::getter_mSingleInstructionTerminatorIfConditionTrue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSingleInstructionTerminatorIfConditionTrue ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator GALGAS_ipic_31__38_AbstractConditionTerminator::getter_mSingleInstructionTerminatorIfConditionFalse (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SingleInstructionTerminator result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_AbstractConditionTerminator * p = (const cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    result = p->mProperty_mSingleInstructionTerminatorIfConditionFalse ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator cPtr_ipic_31__38_AbstractConditionTerminator::getter_mSingleInstructionTerminatorIfConditionFalse (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSingleInstructionTerminatorIfConditionFalse ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_AbstractConditionTerminator::setter_setMSingleInstructionTerminatorIfConditionTrue (GALGAS_ipic_31__38_SingleInstructionTerminator inValue
                                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    p->mProperty_mSingleInstructionTerminatorIfConditionTrue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::setter_setMSingleInstructionTerminatorIfConditionTrue (GALGAS_ipic_31__38_SingleInstructionTerminator inValue
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSingleInstructionTerminatorIfConditionTrue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_AbstractConditionTerminator::setter_setMSingleInstructionTerminatorIfConditionFalse (GALGAS_ipic_31__38_SingleInstructionTerminator inValue
                                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    p->mProperty_mSingleInstructionTerminatorIfConditionFalse = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::setter_setMSingleInstructionTerminatorIfConditionFalse (GALGAS_ipic_31__38_SingleInstructionTerminator inValue
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSingleInstructionTerminatorIfConditionFalse = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18AbstractConditionTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractConditionTerminator::cPtr_ipic_31__38_AbstractConditionTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                            const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mSingleInstructionTerminatorIfConditionTrue (in_mSingleInstructionTerminatorIfConditionTrue),
mProperty_mSingleInstructionTerminatorIfConditionFalse (in_mSingleInstructionTerminatorIfConditionFalse) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18AbstractConditionTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ("ipic18AbstractConditionTerminator",
                                                                & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_AbstractConditionTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_AbstractConditionTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_AbstractConditionTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator GALGAS_ipic_31__38_AbstractConditionTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_AbstractConditionTerminator result ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator * p = (const GALGAS_ipic_31__38_AbstractConditionTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_AbstractConditionTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractConditionTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress (),
mProperty_mNeedsBSR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                                      const GALGAS_bool & inOperand2) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mNeedsBSR (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_uint::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                                                      const GALGAS_bool & inOperand2 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAssemblyString.objectCompare (inOperand.mProperty_mAssemblyString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsBSR.objectCompare (inOperand.mProperty_mNeedsBSR) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mNeedsBSR.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mNeedsBSR.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @ipic18_intermediate_registerExpression:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeedsBSR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::getter_mAssemblyString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssemblyString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::getter_mNeedsBSR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsBSR ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_registerExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ("ipic18_intermediate_registerExpression",
                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_IncDecRegisterTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_IncDecRegisterTerminator * p = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionTrue.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionTrue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionFalse.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionFalse) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_IncDecRegisterTerminator::objectCompare (const GALGAS_ipic_31__38_IncDecRegisterTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator::GALGAS_ipic_31__38_IncDecRegisterTerminator (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator::GALGAS_ipic_31__38_IncDecRegisterTerminator (const cPtr_ipic_31__38_IncDecRegisterTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                          const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionTrue,
                                                                                                          const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionFalse,
                                                                                                          const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                          const GALGAS_bool & inAttribute_mIncrement,
                                                                                                          const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_IncDecRegisterTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionTrue.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionFalse.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_IncDecRegisterTerminator (inAttribute_mInstructionLocation, inAttribute_mSingleInstructionTerminatorIfConditionTrue, inAttribute_mSingleInstructionTerminatorIfConditionFalse, inAttribute_mRegisterDescription, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38_IncDecRegisterTerminator::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_IncDecRegisterTerminator * p = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_ipic_31__38_IncDecRegisterTerminator::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_IncDecRegisterTerminator::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_IncDecRegisterTerminator * p = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_IncDecRegisterTerminator::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_IncDecRegisterTerminator::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_IncDecRegisterTerminator * p = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_IncDecRegisterTerminator::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_IncDecRegisterTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_IncDecRegisterTerminator::setter_setMIncrement (GALGAS_bool inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::setter_setMIncrement (GALGAS_bool inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIncrement = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_IncDecRegisterTerminator::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_W_5F_isDestination = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18IncDecRegisterTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_IncDecRegisterTerminator::cPtr_ipic_31__38_IncDecRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                      const GALGAS_bool & in_mIncrement,
                                                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_IncDecRegisterTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;
}

void cPtr_ipic_31__38_IncDecRegisterTerminator::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@ipic18IncDecRegisterTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_IncDecRegisterTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_IncDecRegisterTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18IncDecRegisterTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ("ipic18IncDecRegisterTerminator",
                                                             & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_IncDecRegisterTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_IncDecRegisterTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_IncDecRegisterTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator GALGAS_ipic_31__38_IncDecRegisterTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_IncDecRegisterTerminator result ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator * p = (const GALGAS_ipic_31__38_IncDecRegisterTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_IncDecRegisterTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18IncDecRegisterTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_TestRegisterTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_TestRegisterTerminator * p = (const cPtr_pic_31__38_TestRegisterTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_TestRegisterTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionTrue.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionTrue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionFalse.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionFalse) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_TestRegisterTerminator::objectCompare (const GALGAS_pic_31__38_TestRegisterTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator::GALGAS_pic_31__38_TestRegisterTerminator (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator::GALGAS_pic_31__38_TestRegisterTerminator (const cPtr_pic_31__38_TestRegisterTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_TestRegisterTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionTrue,
                                                                                                    const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionFalse,
                                                                                                    const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_TestRegisterTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionTrue.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionFalse.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_TestRegisterTerminator (inAttribute_mInstructionLocation, inAttribute_mSingleInstructionTerminatorIfConditionTrue, inAttribute_mSingleInstructionTerminatorIfConditionFalse, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_pic_31__38_TestRegisterTerminator::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_TestRegisterTerminator * p = (const cPtr_pic_31__38_TestRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_TestRegisterTerminator) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_pic_31__38_TestRegisterTerminator::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_TestRegisterTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_TestRegisterTerminator * p = (cPtr_pic_31__38_TestRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_TestRegisterTerminator) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18TestRegisterTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_TestRegisterTerminator::cPtr_pic_31__38_TestRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_TestRegisterTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;
}

void cPtr_pic_31__38_TestRegisterTerminator::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@pic18TestRegisterTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_TestRegisterTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_TestRegisterTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18TestRegisterTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ("pic18TestRegisterTerminator",
                                                          & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_TestRegisterTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_TestRegisterTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_TestRegisterTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator GALGAS_pic_31__38_TestRegisterTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_TestRegisterTerminator result ;
  const GALGAS_pic_31__38_TestRegisterTerminator * p = (const GALGAS_pic_31__38_TestRegisterTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_TestRegisterTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18TestRegisterTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_BitTestTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_BitTestTerminator * p = (const cPtr_pic_31__38_BitTestTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionTrue.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionTrue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionFalse.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionFalse) ;
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


typeComparisonResult GALGAS_pic_31__38_BitTestTerminator::objectCompare (const GALGAS_pic_31__38_BitTestTerminator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator::GALGAS_pic_31__38_BitTestTerminator (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator::GALGAS_pic_31__38_BitTestTerminator (const cPtr_pic_31__38_BitTestTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BitTestTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator GALGAS_pic_31__38_BitTestTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionTrue,
                                                                                          const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionFalse,
                                                                                          const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                          const GALGAS_uint & inAttribute_mBitNumber
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionTrue.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionFalse.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_BitTestTerminator (inAttribute_mInstructionLocation, inAttribute_mSingleInstructionTerminatorIfConditionTrue, inAttribute_mSingleInstructionTerminatorIfConditionFalse, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_pic_31__38_BitTestTerminator::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BitTestTerminator * p = (const cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_pic_31__38_BitTestTerminator::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_pic_31__38_BitTestTerminator::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BitTestTerminator * p = (const cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_pic_31__38_BitTestTerminator::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BitTestTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BitTestTerminator::setter_setMBitNumber (GALGAS_uint inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::setter_setMBitNumber (GALGAS_uint inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitNumber = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18BitTestTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BitTestTerminator::cPtr_pic_31__38_BitTestTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GALGAS_uint & in_mBitNumber
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_BitTestTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;
}

void cPtr_pic_31__38_BitTestTerminator::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@pic18BitTestTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_BitTestTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_BitTestTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18BitTestTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ("pic18BitTestTerminator",
                                                     & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BitTestTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BitTestTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BitTestTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator GALGAS_pic_31__38_BitTestTerminator::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestTerminator result ;
  const GALGAS_pic_31__38_BitTestTerminator * p = (const GALGAS_pic_31__38_BitTestTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_BitTestTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_InstructionWithNoOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_InstructionWithNoOperand * p = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_InstructionWithNoOperand::objectCompare (const GALGAS_ipic_31__38_InstructionWithNoOperand & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand::GALGAS_ipic_31__38_InstructionWithNoOperand (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand::GALGAS_ipic_31__38_InstructionWithNoOperand (const cPtr_ipic_31__38_InstructionWithNoOperand * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_InstructionWithNoOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                          const GALGAS_pic_31__38_InstructionWithNoOperandKind & inAttribute_mKind
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_InstructionWithNoOperand result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_InstructionWithNoOperand (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_ipic_31__38_InstructionWithNoOperand::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_InstructionWithNoOperand * p = (const cPtr_ipic_31__38_InstructionWithNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_InstructionWithNoOperand) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind cPtr_ipic_31__38_InstructionWithNoOperand::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_InstructionWithNoOperand::setter_setMKind (GALGAS_pic_31__38_InstructionWithNoOperandKind inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38_InstructionWithNoOperand * p = (cPtr_ipic_31__38_InstructionWithNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_InstructionWithNoOperand) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_InstructionWithNoOperand::setter_setMKind (GALGAS_pic_31__38_InstructionWithNoOperandKind inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18InstructionWithNoOperand class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_InstructionWithNoOperand::cPtr_ipic_31__38_InstructionWithNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_InstructionWithNoOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;
}

void cPtr_ipic_31__38_InstructionWithNoOperand::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@ipic18InstructionWithNoOperand:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_InstructionWithNoOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_InstructionWithNoOperand (mProperty_mInstructionLocation, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18InstructionWithNoOperand type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ("ipic18InstructionWithNoOperand",
                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_InstructionWithNoOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_InstructionWithNoOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_InstructionWithNoOperand (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand GALGAS_ipic_31__38_InstructionWithNoOperand::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_InstructionWithNoOperand result ;
  const GALGAS_ipic_31__38_InstructionWithNoOperand * p = (const GALGAS_ipic_31__38_InstructionWithNoOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_InstructionWithNoOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18InstructionWithNoOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@ipic18_intermediate_registerExpression isEqualToRegister'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isEqualToRegister (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                               const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument_inRegister,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression temp_0 = inObject ;
  result_outResult = GALGAS_bool (kIsEqual, temp_0.getter_mAssemblyString (HERE).objectCompare (constinArgument_inRegister.getter_mAssemblyString (HERE))) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression temp_2 = inObject ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.getter_mRegisterAddress (HERE).objectCompare (constinArgument_inRegister.getter_mRegisterAddress (HERE))) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression temp_4 = inObject ;
      result_outResult = GALGAS_bool (kIsEqual, temp_4.getter_mNeedsBSR (HERE).objectCompare (constinArgument_inRegister.getter_mNeedsBSR (HERE))) ;
    }
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
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


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                      const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inAttribute_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                      const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FDA_5F_base_5F_code, inAttribute_mRegisterDescription, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    result = p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inValue
                                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    p->mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inValue
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_W_5F_isDestination = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FDA class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                                                                  const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (in_mInstruction_5F_FDA_5F_base_5F_code),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_FDA:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_FDA type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ("ipic18_intermediate_instruction_FDA",
                                                                           & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CLRF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVWF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MULWF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MULWF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_NEGF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_NEGF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_SETF ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_CLRF () const {
  const bool ok = mEnum == kEnum_CLRF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_MOVWF () const {
  const bool ok = mEnum == kEnum_MOVWF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_MULWF () const {
  const bool ok = mEnum == kEnum_MULWF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_NEGF () const {
  const bool ok = mEnum == kEnum_NEGF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_SETF () const {
  const bool ok = mEnum == kEnum_SETF ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_FA_5F_sequential_5F_instruction_5F_base_5F_code [6] = {
  "(not built)",
  "CLRF",
  "MOVWF",
  "MULWF",
  "NEGF",
  "SETF"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVWF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isMULWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MULWF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isNEGF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_NEGF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isSETF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SETF == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::description (C_String & ioString,
                                                                          const int32_t /* inIndentation */) const {
  ioString << "<enum @FA_sequential_instruction_base_code: " << gEnumNameArrayFor_FA_5F_sequential_5F_instruction_5F_base_5F_code [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::objectCompare (const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand) const {
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
//@FA_sequential_instruction_base_code type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ("FA_sequential_instruction_base_code",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code * p = (const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("FA_sequential_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFAinstruction.objectCompare (p->mProperty_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                    const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                                                                    const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    result = p->mProperty_mFAinstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFAinstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::setter_setMFAinstruction (GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::setter_setMFAinstruction (GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFAinstruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FA class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                                                                const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                                                const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFAinstruction (in_mFAinstruction),
mProperty_mRegisterDescription (in_mRegisterDescription) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_FA:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_FA type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ("ipic18_intermediate_instruction_FA",
                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GALGAS_string & inOperand0,
                                                                                                                                                              const GALGAS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (GALGAS_string::constructor_default (HERE),
                                                                                        GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                                              const GALGAS_uint & inOperand1 
                                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAssemblyString.objectCompare (inOperand.mProperty_mAssemblyString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::description (C_String & ioString,
                                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @ipic18_intermediate_registerExpressionWithoutBSRIndication:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::getter_mAssemblyString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssemblyString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterAddress ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_registerExpressionWithoutBSRIndication type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ("ipic18_intermediate_registerExpressionWithoutBSRIndication",
                                                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_registerExpressionWithoutBSRIndication", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceRegisterDescription.objectCompare (p->mProperty_mSourceRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationRegisterDescription.objectCompare (p->mProperty_mDestinationRegisterDescription) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                       GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_default (HERE),
                                                                                       GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_default (HERE)
                                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                          const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inAttribute_mSourceRegisterDescription,
                                                                                                                                          const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inAttribute_mDestinationRegisterDescription
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSourceRegisterDescription.isValid () && inAttribute_mDestinationRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (inAttribute_mInstructionLocation, inAttribute_mSourceRegisterDescription, inAttribute_mDestinationRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_mSourceRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    result = p->mProperty_mSourceRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_mSourceRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceRegisterDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_mDestinationRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    result = p->mProperty_mDestinationRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_mDestinationRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationRegisterDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::setter_setMSourceRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    p->mProperty_mSourceRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::setter_setMSourceRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::setter_setMDestinationRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication inValue
                                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    p->mProperty_mDestinationRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::setter_setMDestinationRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication inValue
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDestinationRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MOVFF class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSourceRegisterDescription (in_mSourceRegisterDescription),
mProperty_mDestinationRegisterDescription (in_mDestinationRegisterDescription) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_MOVFF:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (mProperty_mInstructionLocation, mProperty_mSourceRegisterDescription, mProperty_mDestinationRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_MOVFF type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ("ipic18_intermediate_instruction_MOVFF",
                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVFF", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInstruction.objectCompare (p->mProperty_mLiteralInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralValue.objectCompare (p->mProperty_mLiteralValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                                const GALGAS_literal_5F_instruction_5F_opcode & inAttribute_mLiteralInstruction,
                                                                                                                                                                const GALGAS_uint & inAttribute_mLiteralValue
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralInstruction.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mLiteralInstruction, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::getter_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    result = p->mProperty_mLiteralInstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::getter_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::getter_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    result = p->mProperty_mLiteralValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::getter_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::setter_setMLiteralInstruction (GALGAS_literal_5F_instruction_5F_opcode inValue
                                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::setter_setMLiteralInstruction (GALGAS_literal_5F_instruction_5F_opcode inValue
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLiteralInstruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::setter_setMLiteralValue (GALGAS_uint inValue
                                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::setter_setMLiteralValue (GALGAS_uint inValue
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLiteralValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_literalOperation class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                            const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                                            const GALGAS_uint & in_mLiteralValue
                                                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralInstruction (in_mLiteralInstruction),
mProperty_mLiteralValue (in_mLiteralValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_literalOperation:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_literalOperation type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ("ipic18_intermediate_instruction_literalOperation",
                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFSRindex.objectCompare (p->mProperty_mFSRindex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                      GALGAS_luint::constructor_default (HERE),
                                                                                      GALGAS_uint::constructor_default (HERE)
                                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_luint & inAttribute_mFSRindex,
                                                                                                                                        const GALGAS_uint & inAttribute_mValue
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFSRindex.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (inAttribute_mInstructionLocation, inAttribute_mFSRindex, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_mFSRindex (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    result = p->mProperty_mFSRindex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_mFSRindex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFSRindex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::setter_setMFSRindex (GALGAS_luint inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    p->mProperty_mFSRindex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::setter_setMFSRindex (GALGAS_luint inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFSRindex = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::setter_setMValue (GALGAS_uint inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::setter_setMValue (GALGAS_uint inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_LFSR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_luint & in_mFSRindex,
                                                                                                                    const GALGAS_uint & in_mValue
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFSRindex (in_mFSRindex),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_LFSR:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFSRindex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (mProperty_mInstructionLocation, mProperty_mFSRindex, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_LFSR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ("ipic18_intermediate_instruction_LFSR",
                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_LFSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
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


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                      const GALGAS_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                      const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    result = p->mProperty_mBitOrientedOp ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitOrientedOp ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    result = p->mProperty_mRegisterDescription ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::setter_setMBitOrientedOp (GALGAS_bit_5F_oriented_5F_op inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::setter_setMBitOrientedOp (GALGAS_bit_5F_oriented_5F_op inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitOrientedOp = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::setter_setMBitNumber (GALGAS_uint inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::setter_setMBitNumber (GALGAS_uint inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitNumber = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FBA class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                                                                  const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GALGAS_uint & in_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBitOrientedOp (in_mBitOrientedOp),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_FBA:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_FBA type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ("ipic18_intermediate_instruction_FBA",
                                                                           & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FBA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBankIndex.objectCompare (p->mProperty_mBankIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                       GALGAS_luint::constructor_default (HERE)
                                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                          const GALGAS_luint & inAttribute_mBankIndex
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (inAttribute_mInstructionLocation, inAttribute_mBankIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::getter_mBankIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
    result = p->mProperty_mBankIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::getter_mBankIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBankIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::setter_setMBankIndex (GALGAS_luint inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
    p->mProperty_mBankIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::setter_setMBankIndex (GALGAS_luint inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBankIndex = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MOVLB class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_luint & in_mBankIndex
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBankIndex (in_mBankIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_MOVLB:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (mProperty_mInstructionLocation, mProperty_mBankIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_MOVLB type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ("ipic18_intermediate_instruction_MOVLB",
                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVLB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlankValue.objectCompare (p->mProperty_mBlankValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                      GALGAS_uint::constructor_default (HERE)
                                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_uint & inAttribute_mBlankValue
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBlankValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (inAttribute_mInstructionLocation, inAttribute_mBlankValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::getter_mBlankValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
    result = p->mProperty_mBlankValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::getter_mBlankValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBlankValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::setter_setMBlankValue (GALGAS_uint inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
    p->mProperty_mBlankValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::setter_setMBlankValue (GALGAS_uint inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBlankValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FNOP class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_uint & in_mBlankValue
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBlankValue (in_mBlankValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_FNOP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBlankValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (mProperty_mInstructionLocation, mProperty_mBlankValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_FNOP type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ("ipic18_intermediate_instruction_FNOP",
                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlankValue.objectCompare (p->mProperty_mBlankValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                       GALGAS_uint::constructor_default (HERE)
                                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                          const GALGAS_uint & inAttribute_mBlankValue
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBlankValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (inAttribute_mInstructionLocation, inAttribute_mBlankValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::getter_mBlankValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
    result = p->mProperty_mBlankValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::getter_mBlankValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBlankValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::setter_setMBlankValue (GALGAS_uint inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
    p->mProperty_mBlankValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::setter_setMBlankValue (GALGAS_uint inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBlankValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_BLANK class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_uint & in_mBlankValue
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBlankValue (in_mBlankValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_BLANK:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBlankValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (mProperty_mInstructionLocation, mProperty_mBlankValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_BLANK type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ("ipic18_intermediate_instruction_BLANK",
                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_BLANK", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                          const GALGAS_tableAccessOption & inAttribute_mOption
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (inAttribute_mInstructionLocation, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::getter_mOption (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableAccessOption result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
    result = p->mProperty_mOption ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::getter_mOption (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOption ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::setter_setMOption (GALGAS_tableAccessOption inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
    p->mProperty_mOption = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::setter_setMOption (GALGAS_tableAccessOption inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOption = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_TBLRD class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_tableAccessOption & in_mOption
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOption (in_mOption) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_TBLRD:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (mProperty_mInstructionLocation, mProperty_mOption COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_TBLRD type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ("ipic18_intermediate_instruction_TBLRD",
                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLRD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                          const GALGAS_tableAccessOption & inAttribute_mOption
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (inAttribute_mInstructionLocation, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::getter_mOption (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableAccessOption result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
    result = p->mProperty_mOption ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::getter_mOption (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOption ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::setter_setMOption (GALGAS_tableAccessOption inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
    p->mProperty_mOption = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::setter_setMOption (GALGAS_tableAccessOption inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOption = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_TBLWT class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_tableAccessOption & in_mOption
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOption (in_mOption) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_TBLWT:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (mProperty_mInstructionLocation, mProperty_mOption COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_TBLWT type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ("ipic18_intermediate_instruction_TBLWT",
                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLWT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOccurrenceFactor.objectCompare (p->mProperty_mOccurrenceFactor) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                      GALGAS_luint::constructor_default (HERE)
                                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
    result = p->mProperty_mOccurrenceFactor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOccurrenceFactor ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::setter_setMOccurrenceFactor (GALGAS_luint inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::setter_setMOccurrenceFactor (GALGAS_luint inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOccurrenceFactor = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MNOP class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_luint & in_mOccurrenceFactor
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_MNOP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_MNOP type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ("ipic18_intermediate_instruction_MNOP",
                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOccurrenceFactor.objectCompare (p->mProperty_mOccurrenceFactor) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                        GALGAS_luint::constructor_default (HERE)
                                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                            const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
    result = p->mProperty_mOccurrenceFactor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOccurrenceFactor ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::setter_setMOccurrenceFactor (GALGAS_luint inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::setter_setMOccurrenceFactor (GALGAS_luint inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOccurrenceFactor = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_NOPBRA class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const GALGAS_location & in_mInstructionLocation,
                                                                                                                        const GALGAS_luint & in_mOccurrenceFactor
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_NOPBRA:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_NOPBRA type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ("ipic18_intermediate_instruction_NOPBRA",
                                                                              & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_NOPBRA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetInstructions.objectCompare (p->mProperty_mTargetInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRCALL.objectCompare (p->mProperty_mUsesRCALL) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                                   GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (HERE),
                                                                                                   GALGAS_bool::constructor_default (HERE)
                                                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                                  const GALGAS_ipic_31__38_SequentialInstructionList & inAttribute_mTargetInstructions,
                                                                                                                                                                  const GALGAS_bool & inAttribute_mUsesRCALL
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetInstructions.isValid () && inAttribute_mUsesRCALL.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (inAttribute_mInstructionLocation, inAttribute_mTargetInstructions, inAttribute_mUsesRCALL COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_mTargetInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    result = p->mProperty_mTargetInstructions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_mTargetInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetInstructions ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_mUsesRCALL (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    result = p->mProperty_mUsesRCALL ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_mUsesRCALL (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsesRCALL ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::setter_setMTargetInstructions (GALGAS_ipic_31__38_SequentialInstructionList inValue
                                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    p->mProperty_mTargetInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::setter_setMTargetInstructions (GALGAS_ipic_31__38_SequentialInstructionList inValue
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetInstructions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    p->mProperty_mUsesRCALL = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUsesRCALL = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_computed_rcall class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                              const GALGAS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                                                                              const GALGAS_bool & in_mUsesRCALL
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetInstructions (in_mTargetInstructions),
mProperty_mUsesRCALL (in_mUsesRCALL) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::description (C_String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_instruction_computed_rcall:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (mProperty_mInstructionLocation, mProperty_mTargetInstructions, mProperty_mUsesRCALL COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_instruction_computed_rcall type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ("ipic18_intermediate_instruction_computed_rcall",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_computed_rcall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::objectCompare (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::getter_mEmbeddedInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstruction result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
    result = p->mProperty_mEmbeddedInstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::getter_mEmbeddedInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEmbeddedInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::setter_setMEmbeddedInstruction (GALGAS_ipic_31__38_SequentialInstruction inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
    p->mProperty_mEmbeddedInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::setter_setMEmbeddedInstruction (GALGAS_ipic_31__38_SequentialInstruction inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEmbeddedInstruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_condition_skip_instruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GALGAS_location & in_mInstructionLocation,
                                                                                                              const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mEmbeddedInstruction (in_mEmbeddedInstruction) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_condition_skip_instruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ("ipic18_condition_skip_instruction",
                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_condition_skip_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

GALGAS_bool cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSkipIfSet ;
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

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
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

GALGAS_uint cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSkipIfSet = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMBitNumber (GALGAS_uint inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMBitNumber (GALGAS_uint inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitNumber = inValue ;
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

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::getter_mCompareInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCompareInstruction ;
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

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::setter_setMCompareInstruction (GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code inValue
                                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    p->mProperty_mCompareInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::setter_setMCompareInstruction (GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code inValue
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCompareInstruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterDescription = inValue ;
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

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
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

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterDescription ;
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

GALGAS_bool cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code inValue
                                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code inValue
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterDescription = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_W_5F_isDestination = inValue ;
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

