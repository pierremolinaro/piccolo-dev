#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_InstructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_pic_31__38_InstructionList : public CollectionElementPtr {
  public: GGS_pic_31__38_InstructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_pic_31__38_InstructionList (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_pic_31__38_InstructionList (const GGS_pic_31__38_InstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_InstructionList::CollectionElementPtr_pic_31__38_InstructionList (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_InstructionList::CollectionElementPtr_pic_31__38_InstructionList (const GGS_pic_31__38_InstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_pic_31__38_InstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_pic_31__38_InstructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_pic_31__38_InstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_InstructionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList::GGS_pic_31__38_InstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList::GGS_pic_31__38_InstructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_pic_31__38_InstructionList * p = (CollectionElementPtr_pic_31__38_InstructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_pic_31__38_InstructionList) ;
    const GGS_pic_31__38_InstructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_pic_31__38_InstructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_pic_31__38_InstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_InstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_InstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList::description (String & ioString,
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
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_InstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList::plusPlusAssignOperation (const GGS_pic_31__38_InstructionList_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_InstructionList::class_func_listWithValue (const GGS_pic_31__38_PiccoloInstruction & inOperand0
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InstructionList_2E_element element (inOperand0) ;
  GGS_pic_31__38_InstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList::addAssignOperation (const GGS_pic_31__38_PiccoloInstruction & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InstructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList::setter_append (const GGS_pic_31__38_PiccoloInstruction inOperand0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InstructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList::setter_insertAtIndex (const GGS_pic_31__38_PiccoloInstruction inOperand0,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InstructionList_2E_element newElement (inOperand0) ;
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

void GGS_pic_31__38_InstructionList::setter_removeAtIndex (GGS_pic_31__38_PiccoloInstruction & outOperand0,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
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

void GGS_pic_31__38_InstructionList::setter_popFirst (GGS_pic_31__38_PiccoloInstruction & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_pic_31__38_InstructionList::setter_popLast (GGS_pic_31__38_PiccoloInstruction & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

void GGS_pic_31__38_InstructionList::method_first (GGS_pic_31__38_PiccoloInstruction & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_pic_31__38_InstructionList::method_last (GGS_pic_31__38_PiccoloInstruction & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

GGS_pic_31__38_InstructionList GGS_pic_31__38_InstructionList::add_operation (const GGS_pic_31__38_InstructionList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
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

GGS_pic_31__38_InstructionList GGS_pic_31__38_InstructionList::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
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

GGS_pic_31__38_InstructionList GGS_pic_31__38_InstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_InstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_InstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList::plusAssignOperation (const GGS_pic_31__38_InstructionList inList,
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

void GGS_pic_31__38_InstructionList::setter_setMInstructionAtIndex (GGS_pic_31__38_PiccoloInstruction inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
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
  
GGS_pic_31__38_PiccoloInstruction GGS_pic_31__38_InstructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_PiccoloInstruction result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
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
// Down Enumerator for @pic_31__38_InstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_InstructionList::DownEnumerator_pic_31__38_InstructionList (const GGS_pic_31__38_InstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element DownEnumerator_pic_31__38_InstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction DownEnumerator_pic_31__38_InstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_InstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_InstructionList::UpEnumerator_pic_31__38_InstructionList (const GGS_pic_31__38_InstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element UpEnumerator_pic_31__38_InstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction UpEnumerator_pic_31__38_InstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18InstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList ("pic18InstructionList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_InstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_InstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_InstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_InstructionList::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList result ;
  const GGS_pic_31__38_InstructionList * p = (const GGS_pic_31__38_InstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_InstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_PiccoloInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_PiccoloInstruction::objectCompare (const GGS_pic_31__38_PiccoloInstruction & inOperand) const {
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

GGS_pic_31__38_PiccoloInstruction::GGS_pic_31__38_PiccoloInstruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_pic_31__38_PiccoloInstruction::
pic_31__38_PiccoloInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction::GGS_pic_31__38_PiccoloInstruction (const cPtr_pic_31__38_PiccoloInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_PiccoloInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_PiccoloInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_PiccoloInstruction * p = (cPtr_pic_31__38_PiccoloInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_PiccoloInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18PiccoloInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_PiccoloInstruction::cPtr_pic_31__38_PiccoloInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_PiccoloInstruction::cPtr_pic_31__38_PiccoloInstruction (const GGS_location & in_mInstructionLocation,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18PiccoloInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ("pic18PiccoloInstruction",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_PiccoloInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_PiccoloInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_PiccoloInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction GGS_pic_31__38_PiccoloInstruction::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_PiccoloInstruction result ;
  const GGS_pic_31__38_PiccoloInstruction * p = (const GGS_pic_31__38_PiccoloInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_PiccoloInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_PiccoloInstruction_2E_weak::objectCompare (const GGS_pic_31__38_PiccoloInstruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_pic_31__38_PiccoloInstruction_2E_weak::GGS_pic_31__38_PiccoloInstruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction_2E_weak & GGS_pic_31__38_PiccoloInstruction_2E_weak::operator = (const GGS_pic_31__38_PiccoloInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction_2E_weak::GGS_pic_31__38_PiccoloInstruction_2E_weak (const GGS_pic_31__38_PiccoloInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction_2E_weak GGS_pic_31__38_PiccoloInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_PiccoloInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction GGS_pic_31__38_PiccoloInstruction_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_PiccoloInstruction result ;
  if (isValid ()) {
    const cPtr_pic_31__38_PiccoloInstruction * p = (cPtr_pic_31__38_PiccoloInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_PiccoloInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction GGS_pic_31__38_PiccoloInstruction_2E_weak::bang_pic_31__38_PiccoloInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_PiccoloInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_PiccoloInstruction) ;
      result = GGS_pic_31__38_PiccoloInstruction ((cPtr_pic_31__38_PiccoloInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18PiccoloInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak ("pic18PiccoloInstruction.weak",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_PiccoloInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_PiccoloInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_PiccoloInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloInstruction_2E_weak GGS_pic_31__38_PiccoloInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_PiccoloInstruction_2E_weak result ;
  const GGS_pic_31__38_PiccoloInstruction_2E_weak * p = (const GGS_pic_31__38_PiccoloInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_PiccoloInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @caseConstantMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap::GGS_caseConstantMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap::~ GGS_caseConstantMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap::GGS_caseConstantMap (const GGS_caseConstantMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap & GGS_caseConstantMap::operator = (const GGS_caseConstantMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap GGS_caseConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_caseConstantMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_caseConstantMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_caseConstantMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_caseConstantMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_caseConstantMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_caseConstantMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_caseConstantMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_caseConstantMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::performInsert (const GGS_caseConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_caseConstantMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>
GGS_caseConstantMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_caseConstantMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>>
GGS_caseConstantMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_caseConstantMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_ GGS_caseConstantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_caseConstantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_caseConstantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_caseConstantMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap GGS_caseConstantMap::class_func_mapWithMapToOverride (const GGS_caseConstantMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_caseConstantMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap GGS_caseConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_caseConstantMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_caseConstantMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_caseConstantMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>> & inArray,
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

void GGS_caseConstantMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>> array = sortedInfoArray () ;
    GGS_caseConstantMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_caseConstantMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_caseConstantMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @caseConstantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_caseConstantMap::DownEnumerator_caseConstantMap (const GGS_caseConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element DownEnumerator_caseConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_caseConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @caseConstantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_caseConstantMap::UpEnumerator_caseConstantMap (const GGS_caseConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element UpEnumerator_caseConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_caseConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @caseConstantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_caseConstantMap ("caseConstantMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_caseConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_caseConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_caseConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap GGS_caseConstantMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap result ;
  const GGS_caseConstantMap * p = (const GGS_caseConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_caseConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18AbstractCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCaseItem (cPtr_pic_31__38_AbstractCaseItem * inObject,
                                          const GGS_registerTable constin_inRegisterTable,
                                          const GGS_constantMap constin_inConstantMap,
                                          const GGS_lstring constin_inConditionTrueLabel,
                                          const GGS_string constin_inIndexForLabels,
                                          GGS_stringset & io_ioUsedRegisters,
                                          GGS_caseConstantMap & io_ioCaseConstantMap,
                                          GGS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                          GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                          GGS_lstring & io_ioBlockLabel,
                                          GGS_sint_36__34_ & io_ioLastComparisonValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_AbstractCaseItem) ;
    inObject->method_analyzeCaseItem (constin_inRegisterTable, constin_inConstantMap, constin_inConditionTrueLabel, constin_inIndexForLabels, io_ioUsedRegisters, io_ioCaseConstantMap, io_ioGeneratedInstructionList, io_ioGeneratedBlockList, io_ioBlockLabel, io_ioLastComparisonValue, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
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
  utf32 (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__2D_ = {
  utf32 ('-'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__2F_ = {
  utf32 ('/'),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__30_x = {
  utf32 ('0'),
  utf32 ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__3C_ = {
  utf32 ('<'),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__3E_ = {
  utf32 ('>'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__5B_ = {
  utf32 ('['),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__5D_ = {
  utf32 (']'),
} ;

//--- Unicode string for '$at$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_at = {
  utf32 ('a'),
  utf32 ('t'),
} ;

//--- Unicode string for '$bank$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_bank = {
  utf32 ('b'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('k'),
} ;

//--- Unicode string for '$configuration$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_configuration = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('g'),
  utf32 ('u'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$controller$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_controller = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$description$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_description = {
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('c'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$eepromsize$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_eepromsize = {
  utf32 ('e'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('z'),
  utf32 ('e'),
} ;

//--- Unicode string for '$illegal$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_illegal = {
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('g'),
  utf32 ('a'),
  utf32 ('l'),
} ;

//--- Unicode string for '$mask$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_mask = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('k'),
} ;

//--- Unicode string for '$message$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_message = {
  utf32 ('m'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('a'),
  utf32 ('g'),
  utf32 ('e'),
} ;

//--- Unicode string for '$mirrorat$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_mirrorat = {
  utf32 ('m'),
  utf32 ('i'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
} ;

//--- Unicode string for '$processor$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_processor = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$ram$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_ram = {
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('m'),
} ;

//--- Unicode string for '$register$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_register = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('g'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$romsize$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_romsize = {
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('z'),
  utf32 ('e'),
} ;

//--- Unicode string for '$setting$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_setting = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$to$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_to = {
  utf32 ('t'),
  utf32 ('o'),
} ;

//--- Unicode string for '$unusedregister$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_unusedregister = {
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('d'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('g'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$width$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique_width = {
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('d'),
  utf32 ('t'),
  utf32 ('h'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_piccoloDevice_5F_lexique__7D_ = {
  utf32 ('}'),
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
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_string:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("string") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_controller:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("controller") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_processor:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("processor") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_romsize:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("romsize") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_eepromsize:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("eepromsize") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bank:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bank") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_unusedregister:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("unusedregister") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mirrorat:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mirrorat") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ram:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ram") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_register:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("register") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_at:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("at") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_to:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("to") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_configuration:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("configuration") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_width:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("width") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_description:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("description") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mask:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mask") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_illegal:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("illegal") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_message:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("message") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_setting:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("setting") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (";") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (utf32 ('$')) ;
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
  token.mLexicalAttribute_charValue = utf32 (0) ;
  token.mLexicalAttribute_identifierString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
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
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('f'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
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
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32Char (utf32 ('\\'))) {
          if (testForInputUTF32Char (utf32 ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\f')) ;
          }else if (testForInputUTF32Char (utf32 ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\n')) ;
          }else if (testForInputUTF32Char (utf32 ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\r')) ;
          }else if (testForInputUTF32Char (utf32 ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\t')) ;
          }else if (testForInputUTF32Char (utf32 ('v'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\v')) ;
          }else if (testForInputUTF32Char (utf32 ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32Char (utf32 ('0'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\0')) ;
          }else if (testForInputUTF32Char (utf32 ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
          }else if (testForInputUTF32Char (utf32 ('\''))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\'')) ;
          }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
            do {
              ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_piccoloDevice_5F_lexique_ASCIIcodeTooLargeError, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
          }else{
            lexicalError (gLexicalMessage_piccoloDevice_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 ('~'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_piccoloDevice_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (utf32 ('#'))) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
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
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
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
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
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
//  Map type @baselineSymbolTableForOptimizations
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations::GGS_baselineSymbolTableForOptimizations (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations::~ GGS_baselineSymbolTableForOptimizations (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations::GGS_baselineSymbolTableForOptimizations (const GGS_baselineSymbolTableForOptimizations & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations & GGS_baselineSymbolTableForOptimizations::operator = (const GGS_baselineSymbolTableForOptimizations & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baselineSymbolTableForOptimizations::getter_hasKey (const GGS_string & inKey
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baselineSymbolTableForOptimizations::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                        const GGS_uint & inLevel
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baselineSymbolTableForOptimizations::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baselineSymbolTableForOptimizations::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baselineSymbolTableForOptimizations::getter_locationForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_baselineSymbolTableForOptimizations::getter_keyList (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineSymbolTableForOptimizations::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baselineSymbolTableForOptimizations_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::performInsert (const GGS_baselineSymbolTableForOptimizations_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_baselineSymbolTableForOptimizations_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element>
GGS_baselineSymbolTableForOptimizations::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_baselineSymbolTableForOptimizations::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element>>
GGS_baselineSymbolTableForOptimizations::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_baselineSymbolTableForOptimizations::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_ GGS_baselineSymbolTableForOptimizations
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baselineSymbolTableForOptimizations_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_baselineSymbolTableForOptimizations_2E_element_3F_::init_nil () ;
    }else{
      GGS_baselineSymbolTableForOptimizations_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mDefinitionLineIndex = info->mProperty_mDefinitionLineIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::class_func_mapWithMapToOverride (const GGS_baselineSymbolTableForOptimizations & inMapToOverride
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baselineSymbolTableForOptimizations_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::getter_overriddenMap (Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_baselineSymbolTableForOptimizations result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::setter_insertKey (GGS_lstring inLKey,
                                                                GGS_uint inArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  const GGS_baselineSymbolTableForOptimizations_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::method_searchKey (GGS_lstring inLKey,
                                                                GGS_uint & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element> info ;
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
    outArgument0 = info->mProperty_mDefinitionLineIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::setter_removeKey (GGS_lstring inLKey,
                                                                GGS_uint & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "the '%K' label is not declared" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mDefinitionLineIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baselineSymbolTableForOptimizations::getter_mDefinitionLineIndexForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDefinitionLineIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::setter_setMDefinitionLineIndexForKey (GGS_uint inValue,
                                                                                    GGS_string inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_baselineSymbolTableForOptimizations_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDefinitionLineIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_baselineSymbolTableForOptimizations_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element>> & inArray,
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
    ioString.appendString ("mDefinitionLineIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mDefinitionLineIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element>> array = sortedInfoArray () ;
    GGS_baselineSymbolTableForOptimizations_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_baselineSymbolTableForOptimizations_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_baselineSymbolTableForOptimizations_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @baselineSymbolTableForOptimizations
//--------------------------------------------------------------------------------------------------

DownEnumerator_baselineSymbolTableForOptimizations::DownEnumerator_baselineSymbolTableForOptimizations (const GGS_baselineSymbolTableForOptimizations & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element DownEnumerator_baselineSymbolTableForOptimizations::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_baselineSymbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_baselineSymbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefinitionLineIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @baselineSymbolTableForOptimizations
//--------------------------------------------------------------------------------------------------

UpEnumerator_baselineSymbolTableForOptimizations::UpEnumerator_baselineSymbolTableForOptimizations (const GGS_baselineSymbolTableForOptimizations & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element UpEnumerator_baselineSymbolTableForOptimizations::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_baselineSymbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_baselineSymbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefinitionLineIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @baselineSymbolTableForOptimizations generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ("baselineSymbolTableForOptimizations",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineSymbolTableForOptimizations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineSymbolTableForOptimizations::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineSymbolTableForOptimizations (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations result ;
  const GGS_baselineSymbolTableForOptimizations * p = (const GGS_baselineSymbolTableForOptimizations *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineSymbolTableForOptimizations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction::GGS_baseline_5F_intermediate_5F_instruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_baseline_5F_intermediate_5F_instruction::
baseline_5F_intermediate_5F_instruction_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction::GGS_baseline_5F_intermediate_5F_instruction (const cPtr_baseline_5F_intermediate_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction::cPtr_baseline_5F_intermediate_5F_instruction (Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ("baseline_intermediate_instruction",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instruction::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction result ;
  const GGS_baseline_5F_intermediate_5F_instruction * p = (const GGS_baseline_5F_intermediate_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isLABEL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_isLABEL (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GGS_bool (false) ;
//---
  return result_outIsLABEL ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isLABEL (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isNULL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_isNULL (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GGS_bool (false) ;
//---
  return result_outIsNULL ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isNULL (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GGS_bool (false) ;
//---
  return result_outIsSkipping ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isSkippingInstruction (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (true) ;
//---
  return result_outIsReachable ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_nextInstructionIsReachable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_intermediate_instruction enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction::method_enterReferencedLabel (GGS_stringset & /* ioArgument_ioReferencedLabelSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               GGS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_enterReferencedLabel (io_ioReferencedLabelSet, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_intermediate_instruction defineLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction::method_defineLabel (GGS_baselineSymbolTableForOptimizations & /* ioArgument_ioRoutineSymbolTable */,
                                                                       const GGS_uint /* constinArgument_inLineIndex */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      GGS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const GGS_uint constin_inLineIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_defineLabel (io_ioRoutineSymbolTable, constin_inLineIndex, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerExpression_2E_weak::objectCompare (const GGS_registerExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_registerExpression_2E_weak::GGS_registerExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak & GGS_registerExpression_2E_weak::operator = (const GGS_registerExpression & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak::GGS_registerExpression_2E_weak (const GGS_registerExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak GGS_registerExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_registerExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_registerExpression_2E_weak::unwrappedValue (void) const {
  GGS_registerExpression result ;
  if (isValid ()) {
    const cPtr_registerExpression * p = (cPtr_registerExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_registerExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_registerExpression_2E_weak::bang_registerExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_registerExpression result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_registerExpression) ;
      result = GGS_registerExpression ((cPtr_registerExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @registerExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerExpression_2E_weak ("registerExpression.weak",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak GGS_registerExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_registerExpression_2E_weak result ;
  const GGS_registerExpression_2E_weak * p = (const GGS_registerExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @declarationInRam reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_declarationInRam::objectCompare (const GGS_declarationInRam & inOperand) const {
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

GGS_declarationInRam::GGS_declarationInRam (void) :
AC_GALGAS_reference_class () {
}


void cPtr_declarationInRam::
declarationInRam_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam::GGS_declarationInRam (const cPtr_declarationInRam * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_declarationInRam) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @declarationInRam class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_declarationInRam::cPtr_declarationInRam (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_declarationInRam::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @declarationInRam generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationInRam ("declarationInRam",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationInRam::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRam ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationInRam::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationInRam (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam GGS_declarationInRam::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_declarationInRam result ;
  const GGS_declarationInRam * p = (const GGS_declarationInRam *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationInRam *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRam", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_declarationInRam_2E_weak::objectCompare (const GGS_declarationInRam_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_declarationInRam_2E_weak::GGS_declarationInRam_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak & GGS_declarationInRam_2E_weak::operator = (const GGS_declarationInRam & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak::GGS_declarationInRam_2E_weak (const GGS_declarationInRam & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak GGS_declarationInRam_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_declarationInRam_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam GGS_declarationInRam_2E_weak::unwrappedValue (void) const {
  GGS_declarationInRam result ;
  if (isValid ()) {
    const cPtr_declarationInRam * p = (cPtr_declarationInRam *) ptr () ;
    if (nullptr != p) {
      result = GGS_declarationInRam (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam GGS_declarationInRam_2E_weak::bang_declarationInRam_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_declarationInRam result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_declarationInRam) ;
      result = GGS_declarationInRam ((cPtr_declarationInRam *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @declarationInRam.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationInRam_2E_weak ("declarationInRam.weak",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationInRam_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRam_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationInRam_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationInRam_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak GGS_declarationInRam_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_declarationInRam_2E_weak result ;
  const GGS_declarationInRam_2E_weak * p = (const GGS_declarationInRam_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationInRam_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRam.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_byteDeclarationInRam_2E_weak::objectCompare (const GGS_byteDeclarationInRam_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_byteDeclarationInRam_2E_weak::GGS_byteDeclarationInRam_2E_weak (void) :
GGS_declarationInRam_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak & GGS_byteDeclarationInRam_2E_weak::operator = (const GGS_byteDeclarationInRam & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak::GGS_byteDeclarationInRam_2E_weak (const GGS_byteDeclarationInRam & inSource) :
GGS_declarationInRam_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak GGS_byteDeclarationInRam_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_byteDeclarationInRam_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam GGS_byteDeclarationInRam_2E_weak::unwrappedValue (void) const {
  GGS_byteDeclarationInRam result ;
  if (isValid ()) {
    const cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) ptr () ;
    if (nullptr != p) {
      result = GGS_byteDeclarationInRam (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam GGS_byteDeclarationInRam_2E_weak::bang_byteDeclarationInRam_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_byteDeclarationInRam result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_byteDeclarationInRam) ;
      result = GGS_byteDeclarationInRam ((cPtr_byteDeclarationInRam *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @byteDeclarationInRam.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_byteDeclarationInRam_2E_weak ("byteDeclarationInRam.weak",
                                                                                 & kTypeDescriptor_GALGAS_declarationInRam_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_byteDeclarationInRam_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_byteDeclarationInRam_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_byteDeclarationInRam_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak GGS_byteDeclarationInRam_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_byteDeclarationInRam_2E_weak result ;
  const GGS_byteDeclarationInRam_2E_weak * p = (const GGS_byteDeclarationInRam_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_byteDeclarationInRam_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("byteDeclarationInRam.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@declarationInRamList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_declarationInRamList : public CollectionElementPtr {
  public: GGS_declarationInRamList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_declarationInRamList (const GGS_declarationInRam & in_mDeclarationInRAM
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_declarationInRamList (const GGS_declarationInRamList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_declarationInRamList::CollectionElementPtr_declarationInRamList (const GGS_declarationInRam & in_mDeclarationInRAM
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mDeclarationInRAM) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_declarationInRamList::CollectionElementPtr_declarationInRamList (const GGS_declarationInRamList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mDeclarationInRAM) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_declarationInRamList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_declarationInRamList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_declarationInRamList (mObject.mProperty_mDeclarationInRAM COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @declarationInRamList
//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList::GGS_declarationInRamList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList::GGS_declarationInRamList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_declarationInRamList * p = (CollectionElementPtr_declarationInRamList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_declarationInRamList) ;
    const GGS_declarationInRamList_2E_element element (p->mObject.mProperty_mDeclarationInRAM) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_declarationInRam & in_mDeclarationInRAM
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_declarationInRamList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_declarationInRamList (in_mDeclarationInRAM COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declarationInRamList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_declarationInRamList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::description (String & ioString,
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
      ioString.appendString ("mDeclarationInRAM:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDeclarationInRAM.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationInRamList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::plusPlusAssignOperation (const GGS_declarationInRamList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::class_func_listWithValue (const GGS_declarationInRam & inOperand0
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_declarationInRamList_2E_element element (inOperand0) ;
  GGS_declarationInRamList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::addAssignOperation (const GGS_declarationInRam & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  const GGS_declarationInRamList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::setter_append (const GGS_declarationInRam inOperand0,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_declarationInRamList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::setter_insertAtIndex (const GGS_declarationInRam inOperand0,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_declarationInRamList_2E_element newElement (inOperand0) ;
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

void GGS_declarationInRamList::setter_removeAtIndex (GGS_declarationInRam & outOperand0,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDeclarationInRAM ;
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

void GGS_declarationInRamList::setter_popFirst (GGS_declarationInRam & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclarationInRAM ;
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

void GGS_declarationInRamList::setter_popLast (GGS_declarationInRam & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclarationInRAM ;
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

void GGS_declarationInRamList::method_first (GGS_declarationInRam & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclarationInRAM ;
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

void GGS_declarationInRamList::method_last (GGS_declarationInRam & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclarationInRAM ;
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

GGS_declarationInRamList GGS_declarationInRamList::add_operation (const GGS_declarationInRamList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declarationInRamList result ;
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

GGS_declarationInRamList GGS_declarationInRamList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_declarationInRamList result ;
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

GGS_declarationInRamList GGS_declarationInRamList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_declarationInRamList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_declarationInRamList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_declarationInRamList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::plusAssignOperation (const GGS_declarationInRamList inList,
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

void GGS_declarationInRamList::setter_setMDeclarationInRAMAtIndex (GGS_declarationInRam inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclarationInRAM = inOperand ;
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
  
GGS_declarationInRam GGS_declarationInRamList::getter_mDeclarationInRAMAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_declarationInRam result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclarationInRAM ;
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
// Down Enumerator for @declarationInRamList
//--------------------------------------------------------------------------------------------------

DownEnumerator_declarationInRamList::DownEnumerator_declarationInRamList (const GGS_declarationInRamList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element DownEnumerator_declarationInRamList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam DownEnumerator_declarationInRamList::current_mDeclarationInRAM (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclarationInRAM ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @declarationInRamList
//--------------------------------------------------------------------------------------------------

UpEnumerator_declarationInRamList::UpEnumerator_declarationInRamList (const GGS_declarationInRamList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element UpEnumerator_declarationInRamList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam UpEnumerator_declarationInRamList::current_mDeclarationInRAM (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclarationInRAM ;
}




//--------------------------------------------------------------------------------------------------
//     @declarationInRamList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationInRamList ("declarationInRamList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationInRamList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRamList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationInRamList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationInRamList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_declarationInRamList result ;
  const GGS_declarationInRamList * p = (const GGS_declarationInRamList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationInRamList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRamList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ramDefinitionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_ramDefinitionList : public CollectionElementPtr {
  public: GGS_ramDefinitionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_ramDefinitionList (const GGS_lstring & in_mBankName,
                                                  const GGS_declarationInRamList & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_ramDefinitionList (const GGS_ramDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ramDefinitionList::CollectionElementPtr_ramDefinitionList (const GGS_lstring & in_mBankName,
                                                                                const GGS_declarationInRamList & in_mDeclaration
                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mBankName, in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ramDefinitionList::CollectionElementPtr_ramDefinitionList (const GGS_ramDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mBankName, inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_ramDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_ramDefinitionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_ramDefinitionList (mObject.mProperty_mBankName, mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ramDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList::GGS_ramDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList::GGS_ramDefinitionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_ramDefinitionList * p = (CollectionElementPtr_ramDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_ramDefinitionList) ;
    const GGS_ramDefinitionList_2E_element element (p->mObject.mProperty_mBankName, p->mObject.mProperty_mDeclaration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                       const GGS_lstring & in_mBankName,
                                                       const GGS_declarationInRamList & in_mDeclaration
                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_ramDefinitionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_ramDefinitionList (in_mBankName, in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ramDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::description (String & ioString,
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
      ioString.appendString ("mBankName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBankName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDeclaration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ramDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::plusPlusAssignOperation (const GGS_ramDefinitionList_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_declarationInRamList & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_ramDefinitionList_2E_element element (inOperand0, inOperand1) ;
  GGS_ramDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_declarationInRamList & inOperand1
                                                COMMA_LOCATION_ARGS) {
  const GGS_ramDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_declarationInRamList inOperand1,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_ramDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_declarationInRamList inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_ramDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_ramDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_declarationInRamList & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBankName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mDeclaration ;
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

void GGS_ramDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_declarationInRamList & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBankName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
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

void GGS_ramDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_declarationInRamList & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBankName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDeclaration ;
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

void GGS_ramDefinitionList::method_first (GGS_lstring & outOperand0,
                                          GGS_declarationInRamList & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBankName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
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

void GGS_ramDefinitionList::method_last (GGS_lstring & outOperand0,
                                         GGS_declarationInRamList & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBankName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDeclaration ;
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

GGS_ramDefinitionList GGS_ramDefinitionList::add_operation (const GGS_ramDefinitionList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ramDefinitionList result ;
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

GGS_ramDefinitionList GGS_ramDefinitionList::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_ramDefinitionList result ;
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

GGS_ramDefinitionList GGS_ramDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_ramDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_ramDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_ramDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::plusAssignOperation (const GGS_ramDefinitionList inList,
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

void GGS_ramDefinitionList::setter_setMBankNameAtIndex (GGS_lstring inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBankName = inOperand ;
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
  
GGS_lstring GGS_ramDefinitionList::getter_mBankNameAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBankName ;
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

void GGS_ramDefinitionList::setter_setMDeclarationAtIndex (GGS_declarationInRamList inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration = inOperand ;
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
  
GGS_declarationInRamList GGS_ramDefinitionList::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_declarationInRamList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration ;
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
// Down Enumerator for @ramDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ramDefinitionList::DownEnumerator_ramDefinitionList (const GGS_ramDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element DownEnumerator_ramDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_ramDefinitionList::current_mBankName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBankName ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList DownEnumerator_ramDefinitionList::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ramDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ramDefinitionList::UpEnumerator_ramDefinitionList (const GGS_ramDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element UpEnumerator_ramDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_ramDefinitionList::current_mBankName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBankName ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList UpEnumerator_ramDefinitionList::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @ramDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramDefinitionList ("ramDefinitionList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ramDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ramDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ramDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_ramDefinitionList result ;
  const GGS_ramDefinitionList * p = (const GGS_ramDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ramDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@configSettingList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_configSettingList : public CollectionElementPtr {
  public: GGS_configSettingList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_configSettingList (const GGS_lstring & in_mSettingName,
                                                  const GGS_lstring & in_mSettingValue
                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_configSettingList (const GGS_configSettingList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_configSettingList::CollectionElementPtr_configSettingList (const GGS_lstring & in_mSettingName,
                                                                                const GGS_lstring & in_mSettingValue
                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSettingName, in_mSettingValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_configSettingList::CollectionElementPtr_configSettingList (const GGS_configSettingList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSettingName, inElement.mProperty_mSettingValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_configSettingList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_configSettingList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_configSettingList (mObject.mProperty_mSettingName, mObject.mProperty_mSettingValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @configSettingList
//--------------------------------------------------------------------------------------------------

GGS_configSettingList::GGS_configSettingList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList::GGS_configSettingList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_configSettingList * p = (CollectionElementPtr_configSettingList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_configSettingList) ;
    const GGS_configSettingList_2E_element element (p->mObject.mProperty_mSettingName, p->mObject.mProperty_mSettingValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                       const GGS_lstring & in_mSettingName,
                                                       const GGS_lstring & in_mSettingValue
                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_configSettingList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_configSettingList (in_mSettingName, in_mSettingValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configSettingList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_configSettingList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::description (String & ioString,
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
      ioString.appendString ("mSettingName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSettingName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSettingValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSettingValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configSettingList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::plusPlusAssignOperation (const GGS_configSettingList_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_configSettingList_2E_element element (inOperand0, inOperand1) ;
  GGS_configSettingList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_lstring & inOperand1
                                                COMMA_LOCATION_ARGS) {
  const GGS_configSettingList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_lstring inOperand1,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_configSettingList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_configSettingList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_configSettingList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSettingName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSettingValue ;
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

void GGS_configSettingList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSettingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSettingValue ;
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

void GGS_configSettingList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_lstring & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSettingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSettingValue ;
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

void GGS_configSettingList::method_first (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSettingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSettingValue ;
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

void GGS_configSettingList::method_last (GGS_lstring & outOperand0,
                                         GGS_lstring & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSettingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSettingValue ;
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

GGS_configSettingList GGS_configSettingList::add_operation (const GGS_configSettingList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configSettingList result ;
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

GGS_configSettingList GGS_configSettingList::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_configSettingList result ;
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

GGS_configSettingList GGS_configSettingList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_configSettingList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_configSettingList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_configSettingList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::plusAssignOperation (const GGS_configSettingList inList,
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

void GGS_configSettingList::setter_setMSettingNameAtIndex (GGS_lstring inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSettingName = inOperand ;
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
  
GGS_lstring GGS_configSettingList::getter_mSettingNameAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSettingName ;
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

void GGS_configSettingList::setter_setMSettingValueAtIndex (GGS_lstring inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSettingValue = inOperand ;
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
  
GGS_lstring GGS_configSettingList::getter_mSettingValueAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSettingValue ;
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
// Down Enumerator for @configSettingList
//--------------------------------------------------------------------------------------------------

DownEnumerator_configSettingList::DownEnumerator_configSettingList (const GGS_configSettingList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element DownEnumerator_configSettingList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configSettingList::current_mSettingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSettingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configSettingList::current_mSettingValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSettingValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @configSettingList
//--------------------------------------------------------------------------------------------------

UpEnumerator_configSettingList::UpEnumerator_configSettingList (const GGS_configSettingList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element UpEnumerator_configSettingList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configSettingList::current_mSettingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSettingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configSettingList::current_mSettingValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSettingValue ;
}




//--------------------------------------------------------------------------------------------------
//     @configSettingList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configSettingList ("configSettingList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configSettingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configSettingList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configSettingList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_configSettingList result ;
  const GGS_configSettingList * p = (const GGS_configSettingList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configSettingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configSettingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@configDefinitionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_configDefinitionList : public CollectionElementPtr {
  public: GGS_configDefinitionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_configDefinitionList (const GGS_location & in_mDefinitionLocation,
                                                     const GGS_configSettingList & in_mSettingList
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_configDefinitionList (const GGS_configDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_configDefinitionList::CollectionElementPtr_configDefinitionList (const GGS_location & in_mDefinitionLocation,
                                                                                      const GGS_configSettingList & in_mSettingList
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mDefinitionLocation, in_mSettingList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_configDefinitionList::CollectionElementPtr_configDefinitionList (const GGS_configDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mDefinitionLocation, inElement.mProperty_mSettingList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_configDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_configDefinitionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_configDefinitionList (mObject.mProperty_mDefinitionLocation, mObject.mProperty_mSettingList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @configDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList::GGS_configDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList::GGS_configDefinitionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_configDefinitionList * p = (CollectionElementPtr_configDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_configDefinitionList) ;
    const GGS_configDefinitionList_2E_element element (p->mObject.mProperty_mDefinitionLocation, p->mObject.mProperty_mSettingList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_location & in_mDefinitionLocation,
                                                          const GGS_configSettingList & in_mSettingList
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_configDefinitionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_configDefinitionList (in_mDefinitionLocation, in_mSettingList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_configDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::description (String & ioString,
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
      ioString.appendString ("mDefinitionLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDefinitionLocation.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSettingList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSettingList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::plusPlusAssignOperation (const GGS_configDefinitionList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::class_func_listWithValue (const GGS_location & inOperand0,
                                                                             const GGS_configSettingList & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_configDefinitionList_2E_element element (inOperand0, inOperand1) ;
  GGS_configDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::addAssignOperation (const GGS_location & inOperand0,
                                                   const GGS_configSettingList & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  const GGS_configDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::setter_append (const GGS_location inOperand0,
                                              const GGS_configSettingList inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_configDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::setter_insertAtIndex (const GGS_location inOperand0,
                                                     const GGS_configSettingList inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_configDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_configDefinitionList::setter_removeAtIndex (GGS_location & outOperand0,
                                                     GGS_configSettingList & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDefinitionLocation ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSettingList ;
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

void GGS_configDefinitionList::setter_popFirst (GGS_location & outOperand0,
                                                GGS_configSettingList & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDefinitionLocation ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSettingList ;
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

void GGS_configDefinitionList::setter_popLast (GGS_location & outOperand0,
                                               GGS_configSettingList & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDefinitionLocation ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSettingList ;
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

void GGS_configDefinitionList::method_first (GGS_location & outOperand0,
                                             GGS_configSettingList & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDefinitionLocation ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSettingList ;
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

void GGS_configDefinitionList::method_last (GGS_location & outOperand0,
                                            GGS_configSettingList & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDefinitionLocation ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSettingList ;
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

GGS_configDefinitionList GGS_configDefinitionList::add_operation (const GGS_configDefinitionList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configDefinitionList result ;
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

GGS_configDefinitionList GGS_configDefinitionList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_configDefinitionList result ;
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

GGS_configDefinitionList GGS_configDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_configDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_configDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_configDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::plusAssignOperation (const GGS_configDefinitionList inList,
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

void GGS_configDefinitionList::setter_setMDefinitionLocationAtIndex (GGS_location inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDefinitionLocation = inOperand ;
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
  
GGS_location GGS_configDefinitionList::getter_mDefinitionLocationAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDefinitionLocation ;
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

void GGS_configDefinitionList::setter_setMSettingListAtIndex (GGS_configSettingList inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSettingList = inOperand ;
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
  
GGS_configSettingList GGS_configDefinitionList::getter_mSettingListAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_configSettingList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSettingList ;
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
// Down Enumerator for @configDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_configDefinitionList::DownEnumerator_configDefinitionList (const GGS_configDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList_2E_element DownEnumerator_configDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_configDefinitionList::current_mDefinitionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDefinitionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList DownEnumerator_configDefinitionList::current_mSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSettingList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @configDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_configDefinitionList::UpEnumerator_configDefinitionList (const GGS_configDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList_2E_element UpEnumerator_configDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_configDefinitionList::current_mDefinitionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDefinitionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList UpEnumerator_configDefinitionList::current_mSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSettingList ;
}




//--------------------------------------------------------------------------------------------------
//     @configDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configDefinitionList ("configDefinitionList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_configDefinitionList result ;
  const GGS_configDefinitionList * p = (const GGS_configDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatExpression_2E_weak::objectCompare (const GGS_immediatExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatExpression_2E_weak::GGS_immediatExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak & GGS_immediatExpression_2E_weak::operator = (const GGS_immediatExpression & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak::GGS_immediatExpression_2E_weak (const GGS_immediatExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak GGS_immediatExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatExpression_2E_weak::unwrappedValue (void) const {
  GGS_immediatExpression result ;
  if (isValid ()) {
    const cPtr_immediatExpression * p = (cPtr_immediatExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatExpression_2E_weak::bang_immediatExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatExpression result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatExpression) ;
      result = GGS_immediatExpression ((cPtr_immediatExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpression_2E_weak ("immediatExpression.weak",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak GGS_immediatExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatExpression_2E_weak result ;
  const GGS_immediatExpression_2E_weak * p = (const GGS_immediatExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@immediatExpressionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_immediatExpressionList : public CollectionElementPtr {
  public: GGS_immediatExpressionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_immediatExpressionList (const GGS_immediatExpression & in_mExpression,
                                                       const GGS_location & in_mErrorLocation
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_immediatExpressionList (const GGS_immediatExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_immediatExpressionList::CollectionElementPtr_immediatExpressionList (const GGS_immediatExpression & in_mExpression,
                                                                                          const GGS_location & in_mErrorLocation
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mExpression, in_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_immediatExpressionList::CollectionElementPtr_immediatExpressionList (const GGS_immediatExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_immediatExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_immediatExpressionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_immediatExpressionList (mObject.mProperty_mExpression, mObject.mProperty_mErrorLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @immediatExpressionList
//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList::GGS_immediatExpressionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList::GGS_immediatExpressionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_immediatExpressionList * p = (CollectionElementPtr_immediatExpressionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_immediatExpressionList) ;
    const GGS_immediatExpressionList_2E_element element (p->mObject.mProperty_mExpression, p->mObject.mProperty_mErrorLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_immediatExpression & in_mExpression,
                                                            const GGS_location & in_mErrorLocation
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_immediatExpressionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_immediatExpressionList (in_mExpression, in_mErrorLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_immediatExpressionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_immediatExpressionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::description (String & ioString,
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
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mErrorLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mErrorLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_immediatExpressionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::plusPlusAssignOperation (const GGS_immediatExpressionList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::class_func_listWithValue (const GGS_immediatExpression & inOperand0,
                                                                                 const GGS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_immediatExpressionList_2E_element element (inOperand0, inOperand1) ;
  GGS_immediatExpressionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::addAssignOperation (const GGS_immediatExpression & inOperand0,
                                                     const GGS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_immediatExpressionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::setter_append (const GGS_immediatExpression inOperand0,
                                                const GGS_location inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_immediatExpressionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::setter_insertAtIndex (const GGS_immediatExpression inOperand0,
                                                       const GGS_location inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_immediatExpressionList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_immediatExpressionList::setter_removeAtIndex (GGS_immediatExpression & outOperand0,
                                                       GGS_location & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mErrorLocation ;
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

void GGS_immediatExpressionList::setter_popFirst (GGS_immediatExpression & outOperand0,
                                                  GGS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mErrorLocation ;
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

void GGS_immediatExpressionList::setter_popLast (GGS_immediatExpression & outOperand0,
                                                 GGS_location & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mErrorLocation ;
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

void GGS_immediatExpressionList::method_first (GGS_immediatExpression & outOperand0,
                                               GGS_location & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mErrorLocation ;
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

void GGS_immediatExpressionList::method_last (GGS_immediatExpression & outOperand0,
                                              GGS_location & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mErrorLocation ;
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

GGS_immediatExpressionList GGS_immediatExpressionList::add_operation (const GGS_immediatExpressionList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_immediatExpressionList result ;
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

GGS_immediatExpressionList GGS_immediatExpressionList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_immediatExpressionList result ;
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

GGS_immediatExpressionList GGS_immediatExpressionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_immediatExpressionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_immediatExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_immediatExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::plusAssignOperation (const GGS_immediatExpressionList inList,
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

void GGS_immediatExpressionList::setter_setMExpressionAtIndex (GGS_immediatExpression inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
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
  
GGS_immediatExpression GGS_immediatExpressionList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_immediatExpression result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
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

void GGS_immediatExpressionList::setter_setMErrorLocationAtIndex (GGS_location inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorLocation = inOperand ;
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
  
GGS_location GGS_immediatExpressionList::getter_mErrorLocationAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorLocation ;
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
// Down Enumerator for @immediatExpressionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_immediatExpressionList::DownEnumerator_immediatExpressionList (const GGS_immediatExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList_2E_element DownEnumerator_immediatExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression DownEnumerator_immediatExpressionList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_immediatExpressionList::current_mErrorLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @immediatExpressionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_immediatExpressionList::UpEnumerator_immediatExpressionList (const GGS_immediatExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList_2E_element UpEnumerator_immediatExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression UpEnumerator_immediatExpressionList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_immediatExpressionList::current_mErrorLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @immediatExpressionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpressionList ("immediatExpressionList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_immediatExpressionList result ;
  const GGS_immediatExpressionList * p = (const GGS_immediatExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatInteger_2E_weak::objectCompare (const GGS_immediatInteger_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatInteger_2E_weak::GGS_immediatInteger_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak & GGS_immediatInteger_2E_weak::operator = (const GGS_immediatInteger & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak::GGS_immediatInteger_2E_weak (const GGS_immediatInteger & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak GGS_immediatInteger_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatInteger_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger GGS_immediatInteger_2E_weak::unwrappedValue (void) const {
  GGS_immediatInteger result ;
  if (isValid ()) {
    const cPtr_immediatInteger * p = (cPtr_immediatInteger *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatInteger (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger GGS_immediatInteger_2E_weak::bang_immediatInteger_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatInteger result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatInteger) ;
      result = GGS_immediatInteger ((cPtr_immediatInteger *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatInteger.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatInteger_2E_weak ("immediatInteger.weak",
                                                                            & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatInteger_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatInteger_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatInteger_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak GGS_immediatInteger_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_immediatInteger_2E_weak result ;
  const GGS_immediatInteger_2E_weak * p = (const GGS_immediatInteger_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatInteger_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatInteger.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatRegister_2E_weak::objectCompare (const GGS_immediatRegister_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatRegister_2E_weak::GGS_immediatRegister_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak & GGS_immediatRegister_2E_weak::operator = (const GGS_immediatRegister & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak::GGS_immediatRegister_2E_weak (const GGS_immediatRegister & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak GGS_immediatRegister_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatRegister_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister GGS_immediatRegister_2E_weak::unwrappedValue (void) const {
  GGS_immediatRegister result ;
  if (isValid ()) {
    const cPtr_immediatRegister * p = (cPtr_immediatRegister *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatRegister (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister GGS_immediatRegister_2E_weak::bang_immediatRegister_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatRegister result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatRegister) ;
      result = GGS_immediatRegister ((cPtr_immediatRegister *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatRegister.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRegister_2E_weak ("immediatRegister.weak",
                                                                             & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatRegister_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatRegister_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatRegister_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak GGS_immediatRegister_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_immediatRegister_2E_weak result ;
  const GGS_immediatRegister_2E_weak * p = (const GGS_immediatRegister_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatRegister_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRegister.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatAdd reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatAdd::objectCompare (const GGS_immediatAdd & inOperand) const {
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

GGS_immediatAdd::GGS_immediatAdd (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatAdd GGS_immediatAdd::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatAdd * object = nullptr ;
  macroMyNew (object, cPtr_immediatAdd (inCompiler COMMA_THERE)) ;
  object->immediatAdd_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatAdd result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatAdd::
immediatAdd_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd::GGS_immediatAdd (const cPtr_immediatAdd * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatAdd) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatAdd::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatAdd::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatAdd class
//--------------------------------------------------------------------------------------------------

cPtr_immediatAdd::cPtr_immediatAdd (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatAdd::cPtr_immediatAdd (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatAdd::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd ;
}

void cPtr_immediatAdd::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatAdd:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatAdd::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatAdd (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatAdd::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatAdd generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAdd ("immediatAdd",
                                                                & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatAdd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatAdd::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatAdd (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd GGS_immediatAdd::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatAdd result ;
  const GGS_immediatAdd * p = (const GGS_immediatAdd *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatAdd *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAdd", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatAdd_2E_weak::objectCompare (const GGS_immediatAdd_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatAdd_2E_weak::GGS_immediatAdd_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak & GGS_immediatAdd_2E_weak::operator = (const GGS_immediatAdd & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak::GGS_immediatAdd_2E_weak (const GGS_immediatAdd & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak GGS_immediatAdd_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatAdd_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd GGS_immediatAdd_2E_weak::unwrappedValue (void) const {
  GGS_immediatAdd result ;
  if (isValid ()) {
    const cPtr_immediatAdd * p = (cPtr_immediatAdd *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatAdd (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd GGS_immediatAdd_2E_weak::bang_immediatAdd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatAdd result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatAdd) ;
      result = GGS_immediatAdd ((cPtr_immediatAdd *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatAdd.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAdd_2E_weak ("immediatAdd.weak",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatAdd_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatAdd_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatAdd_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak GGS_immediatAdd_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatAdd_2E_weak result ;
  const GGS_immediatAdd_2E_weak * p = (const GGS_immediatAdd_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatAdd_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAdd.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatSub reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatSub::objectCompare (const GGS_immediatSub & inOperand) const {
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

GGS_immediatSub::GGS_immediatSub (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatSub GGS_immediatSub::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatSub * object = nullptr ;
  macroMyNew (object, cPtr_immediatSub (inCompiler COMMA_THERE)) ;
  object->immediatSub_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatSub result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatSub::
immediatSub_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub::GGS_immediatSub (const cPtr_immediatSub * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatSub) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatSub::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatSub::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatSub class
//--------------------------------------------------------------------------------------------------

cPtr_immediatSub::cPtr_immediatSub (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatSub::cPtr_immediatSub (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatSub::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSub ;
}

void cPtr_immediatSub::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatSub:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatSub::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatSub (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatSub::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatSub generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSub ("immediatSub",
                                                                & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatSub::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSub ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSub::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSub (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub GGS_immediatSub::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatSub result ;
  const GGS_immediatSub * p = (const GGS_immediatSub *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSub *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSub", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatSub_2E_weak::objectCompare (const GGS_immediatSub_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatSub_2E_weak::GGS_immediatSub_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak & GGS_immediatSub_2E_weak::operator = (const GGS_immediatSub & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak::GGS_immediatSub_2E_weak (const GGS_immediatSub & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak GGS_immediatSub_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatSub_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub GGS_immediatSub_2E_weak::unwrappedValue (void) const {
  GGS_immediatSub result ;
  if (isValid ()) {
    const cPtr_immediatSub * p = (cPtr_immediatSub *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatSub (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub GGS_immediatSub_2E_weak::bang_immediatSub_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatSub result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatSub) ;
      result = GGS_immediatSub ((cPtr_immediatSub *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatSub.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSub_2E_weak ("immediatSub.weak",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatSub_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSub_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSub_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSub_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak GGS_immediatSub_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatSub_2E_weak result ;
  const GGS_immediatSub_2E_weak * p = (const GGS_immediatSub_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSub_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSub.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatMul reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatMul::objectCompare (const GGS_immediatMul & inOperand) const {
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

GGS_immediatMul::GGS_immediatMul (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatMul GGS_immediatMul::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatMul * object = nullptr ;
  macroMyNew (object, cPtr_immediatMul (inCompiler COMMA_THERE)) ;
  object->immediatMul_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatMul result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatMul::
immediatMul_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul::GGS_immediatMul (const cPtr_immediatMul * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatMul) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatMul::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatMul::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatMul class
//--------------------------------------------------------------------------------------------------

cPtr_immediatMul::cPtr_immediatMul (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatMul::cPtr_immediatMul (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatMul::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMul ;
}

void cPtr_immediatMul::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatMul:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatMul::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatMul (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatMul::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatMul generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMul ("immediatMul",
                                                                & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatMul::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMul ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatMul::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatMul (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul GGS_immediatMul::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatMul result ;
  const GGS_immediatMul * p = (const GGS_immediatMul *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatMul *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMul", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatMul_2E_weak::objectCompare (const GGS_immediatMul_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatMul_2E_weak::GGS_immediatMul_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak & GGS_immediatMul_2E_weak::operator = (const GGS_immediatMul & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak::GGS_immediatMul_2E_weak (const GGS_immediatMul & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak GGS_immediatMul_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatMul_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul GGS_immediatMul_2E_weak::unwrappedValue (void) const {
  GGS_immediatMul result ;
  if (isValid ()) {
    const cPtr_immediatMul * p = (cPtr_immediatMul *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatMul (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul GGS_immediatMul_2E_weak::bang_immediatMul_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatMul result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatMul) ;
      result = GGS_immediatMul ((cPtr_immediatMul *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatMul.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMul_2E_weak ("immediatMul.weak",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatMul_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMul_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatMul_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatMul_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak GGS_immediatMul_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatMul_2E_weak result ;
  const GGS_immediatMul_2E_weak * p = (const GGS_immediatMul_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatMul_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMul.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatDiv reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatDiv::objectCompare (const GGS_immediatDiv & inOperand) const {
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

GGS_immediatDiv::GGS_immediatDiv (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatDiv GGS_immediatDiv::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatDiv * object = nullptr ;
  macroMyNew (object, cPtr_immediatDiv (inCompiler COMMA_THERE)) ;
  object->immediatDiv_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatDiv result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatDiv::
immediatDiv_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv::GGS_immediatDiv (const cPtr_immediatDiv * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatDiv) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatDiv::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatDiv::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatDiv class
//--------------------------------------------------------------------------------------------------

cPtr_immediatDiv::cPtr_immediatDiv (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatDiv::cPtr_immediatDiv (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatDiv::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv ;
}

void cPtr_immediatDiv::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatDiv:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatDiv::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatDiv (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatDiv::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatDiv generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatDiv ("immediatDiv",
                                                                & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatDiv::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatDiv::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatDiv (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv GGS_immediatDiv::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatDiv result ;
  const GGS_immediatDiv * p = (const GGS_immediatDiv *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatDiv *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatDiv", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatDiv_2E_weak::objectCompare (const GGS_immediatDiv_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatDiv_2E_weak::GGS_immediatDiv_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak & GGS_immediatDiv_2E_weak::operator = (const GGS_immediatDiv & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak::GGS_immediatDiv_2E_weak (const GGS_immediatDiv & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak GGS_immediatDiv_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatDiv_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv GGS_immediatDiv_2E_weak::unwrappedValue (void) const {
  GGS_immediatDiv result ;
  if (isValid ()) {
    const cPtr_immediatDiv * p = (cPtr_immediatDiv *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatDiv (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv GGS_immediatDiv_2E_weak::bang_immediatDiv_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatDiv result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatDiv) ;
      result = GGS_immediatDiv ((cPtr_immediatDiv *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatDiv.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatDiv_2E_weak ("immediatDiv.weak",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatDiv_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatDiv_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatDiv_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak GGS_immediatDiv_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatDiv_2E_weak result ;
  const GGS_immediatDiv_2E_weak * p = (const GGS_immediatDiv_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatDiv_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatDiv.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatMod reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatMod::objectCompare (const GGS_immediatMod & inOperand) const {
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

GGS_immediatMod::GGS_immediatMod (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatMod GGS_immediatMod::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatMod * object = nullptr ;
  macroMyNew (object, cPtr_immediatMod (inCompiler COMMA_THERE)) ;
  object->immediatMod_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatMod result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatMod::
immediatMod_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod::GGS_immediatMod (const cPtr_immediatMod * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatMod) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatMod::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatMod::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatMod class
//--------------------------------------------------------------------------------------------------

cPtr_immediatMod::cPtr_immediatMod (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatMod::cPtr_immediatMod (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatMod::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMod ;
}

void cPtr_immediatMod::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatMod:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatMod::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatMod (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatMod::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatMod generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMod ("immediatMod",
                                                                & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatMod::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMod ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatMod::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatMod (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod GGS_immediatMod::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatMod result ;
  const GGS_immediatMod * p = (const GGS_immediatMod *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatMod *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMod", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatMod_2E_weak::objectCompare (const GGS_immediatMod_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatMod_2E_weak::GGS_immediatMod_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak & GGS_immediatMod_2E_weak::operator = (const GGS_immediatMod & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak::GGS_immediatMod_2E_weak (const GGS_immediatMod & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak GGS_immediatMod_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatMod_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod GGS_immediatMod_2E_weak::unwrappedValue (void) const {
  GGS_immediatMod result ;
  if (isValid ()) {
    const cPtr_immediatMod * p = (cPtr_immediatMod *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatMod (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod GGS_immediatMod_2E_weak::bang_immediatMod_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatMod result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatMod) ;
      result = GGS_immediatMod ((cPtr_immediatMod *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatMod.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMod_2E_weak ("immediatMod.weak",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatMod_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMod_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatMod_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatMod_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak GGS_immediatMod_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatMod_2E_weak result ;
  const GGS_immediatMod_2E_weak * p = (const GGS_immediatMod_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatMod_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMod.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatOr reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatOr::objectCompare (const GGS_immediatOr & inOperand) const {
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

GGS_immediatOr::GGS_immediatOr (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatOr GGS_immediatOr::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatOr * object = nullptr ;
  macroMyNew (object, cPtr_immediatOr (inCompiler COMMA_THERE)) ;
  object->immediatOr_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatOr result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatOr::
immediatOr_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                         const GGS_immediatExpression & in_mRightExpression,
                         Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr::GGS_immediatOr (const cPtr_immediatOr * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatOr) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatOr::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatOr::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatOr class
//--------------------------------------------------------------------------------------------------

cPtr_immediatOr::cPtr_immediatOr (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatOr::cPtr_immediatOr (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatOr::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatOr ;
}

void cPtr_immediatOr::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatOr:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatOr::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatOr (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatOr::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatOr generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatOr ("immediatOr",
                                                               & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatOr::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatOr ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatOr::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatOr (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr GGS_immediatOr::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_immediatOr result ;
  const GGS_immediatOr * p = (const GGS_immediatOr *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatOr *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatOr", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatOr_2E_weak::objectCompare (const GGS_immediatOr_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatOr_2E_weak::GGS_immediatOr_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak & GGS_immediatOr_2E_weak::operator = (const GGS_immediatOr & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak::GGS_immediatOr_2E_weak (const GGS_immediatOr & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak GGS_immediatOr_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatOr_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr GGS_immediatOr_2E_weak::unwrappedValue (void) const {
  GGS_immediatOr result ;
  if (isValid ()) {
    const cPtr_immediatOr * p = (cPtr_immediatOr *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatOr (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr GGS_immediatOr_2E_weak::bang_immediatOr_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatOr result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatOr) ;
      result = GGS_immediatOr ((cPtr_immediatOr *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatOr.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatOr_2E_weak ("immediatOr.weak",
                                                                       & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatOr_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatOr_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatOr_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatOr_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak GGS_immediatOr_2E_weak::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatOr_2E_weak result ;
  const GGS_immediatOr_2E_weak * p = (const GGS_immediatOr_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatOr_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatOr.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatAnd reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatAnd::objectCompare (const GGS_immediatAnd & inOperand) const {
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

GGS_immediatAnd::GGS_immediatAnd (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatAnd GGS_immediatAnd::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatAnd * object = nullptr ;
  macroMyNew (object, cPtr_immediatAnd (inCompiler COMMA_THERE)) ;
  object->immediatAnd_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatAnd result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatAnd::
immediatAnd_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd::GGS_immediatAnd (const cPtr_immediatAnd * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatAnd) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatAnd::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatAnd::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatAnd class
//--------------------------------------------------------------------------------------------------

cPtr_immediatAnd::cPtr_immediatAnd (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatAnd::cPtr_immediatAnd (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatAnd::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd ;
}

void cPtr_immediatAnd::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatAnd:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatAnd::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatAnd (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatAnd::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatAnd generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAnd ("immediatAnd",
                                                                & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatAnd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatAnd::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatAnd (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd GGS_immediatAnd::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatAnd result ;
  const GGS_immediatAnd * p = (const GGS_immediatAnd *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatAnd *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAnd", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatAnd_2E_weak::objectCompare (const GGS_immediatAnd_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatAnd_2E_weak::GGS_immediatAnd_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak & GGS_immediatAnd_2E_weak::operator = (const GGS_immediatAnd & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak::GGS_immediatAnd_2E_weak (const GGS_immediatAnd & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak GGS_immediatAnd_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatAnd_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd GGS_immediatAnd_2E_weak::unwrappedValue (void) const {
  GGS_immediatAnd result ;
  if (isValid ()) {
    const cPtr_immediatAnd * p = (cPtr_immediatAnd *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatAnd (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd GGS_immediatAnd_2E_weak::bang_immediatAnd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatAnd result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatAnd) ;
      result = GGS_immediatAnd ((cPtr_immediatAnd *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatAnd.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAnd_2E_weak ("immediatAnd.weak",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatAnd_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatAnd_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatAnd_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak GGS_immediatAnd_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatAnd_2E_weak result ;
  const GGS_immediatAnd_2E_weak * p = (const GGS_immediatAnd_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatAnd_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAnd.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatXor reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatXor::objectCompare (const GGS_immediatXor & inOperand) const {
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

GGS_immediatXor::GGS_immediatXor (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatXor GGS_immediatXor::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatXor * object = nullptr ;
  macroMyNew (object, cPtr_immediatXor (inCompiler COMMA_THERE)) ;
  object->immediatXor_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatXor result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatXor::
immediatXor_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor::GGS_immediatXor (const cPtr_immediatXor * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatXor) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatXor::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatXor::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatXor class
//--------------------------------------------------------------------------------------------------

cPtr_immediatXor::cPtr_immediatXor (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatXor::cPtr_immediatXor (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatXor::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatXor ;
}

void cPtr_immediatXor::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatXor:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatXor::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatXor (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatXor::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatXor generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatXor ("immediatXor",
                                                                & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatXor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatXor ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatXor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatXor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor GGS_immediatXor::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatXor result ;
  const GGS_immediatXor * p = (const GGS_immediatXor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatXor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatXor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatXor_2E_weak::objectCompare (const GGS_immediatXor_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatXor_2E_weak::GGS_immediatXor_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak & GGS_immediatXor_2E_weak::operator = (const GGS_immediatXor & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak::GGS_immediatXor_2E_weak (const GGS_immediatXor & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak GGS_immediatXor_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatXor_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor GGS_immediatXor_2E_weak::unwrappedValue (void) const {
  GGS_immediatXor result ;
  if (isValid ()) {
    const cPtr_immediatXor * p = (cPtr_immediatXor *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatXor (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor GGS_immediatXor_2E_weak::bang_immediatXor_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatXor result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatXor) ;
      result = GGS_immediatXor ((cPtr_immediatXor *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatXor.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatXor_2E_weak ("immediatXor.weak",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatXor_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatXor_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatXor_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatXor_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak GGS_immediatXor_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatXor_2E_weak result ;
  const GGS_immediatXor_2E_weak * p = (const GGS_immediatXor_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatXor_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatXor.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatLeftShift reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLeftShift::objectCompare (const GGS_immediatLeftShift & inOperand) const {
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

GGS_immediatLeftShift::GGS_immediatLeftShift (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatLeftShift GGS_immediatLeftShift::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatLeftShift * object = nullptr ;
  macroMyNew (object, cPtr_immediatLeftShift (inCompiler COMMA_THERE)) ;
  object->immediatLeftShift_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatLeftShift result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatLeftShift::
immediatLeftShift_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                const GGS_immediatExpression & in_mRightExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift::GGS_immediatLeftShift (const cPtr_immediatLeftShift * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLeftShift) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLeftShift::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLeftShift::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatLeftShift class
//--------------------------------------------------------------------------------------------------

cPtr_immediatLeftShift::cPtr_immediatLeftShift (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatLeftShift::cPtr_immediatLeftShift (const GGS_immediatExpression & in_mLeftExpression,
                                                const GGS_immediatExpression & in_mRightExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatLeftShift::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift ;
}

void cPtr_immediatLeftShift::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatLeftShift:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatLeftShift::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatLeftShift (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatLeftShift::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatLeftShift generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLeftShift ("immediatLeftShift",
                                                                      & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatLeftShift::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLeftShift::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLeftShift (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift GGS_immediatLeftShift::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatLeftShift result ;
  const GGS_immediatLeftShift * p = (const GGS_immediatLeftShift *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLeftShift *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLeftShift", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLeftShift_2E_weak::objectCompare (const GGS_immediatLeftShift_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatLeftShift_2E_weak::GGS_immediatLeftShift_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak & GGS_immediatLeftShift_2E_weak::operator = (const GGS_immediatLeftShift & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak::GGS_immediatLeftShift_2E_weak (const GGS_immediatLeftShift & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak GGS_immediatLeftShift_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatLeftShift_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift GGS_immediatLeftShift_2E_weak::unwrappedValue (void) const {
  GGS_immediatLeftShift result ;
  if (isValid ()) {
    const cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatLeftShift (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift GGS_immediatLeftShift_2E_weak::bang_immediatLeftShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatLeftShift result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatLeftShift) ;
      result = GGS_immediatLeftShift ((cPtr_immediatLeftShift *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatLeftShift.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLeftShift_2E_weak ("immediatLeftShift.weak",
                                                                              & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatLeftShift_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLeftShift_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLeftShift_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak GGS_immediatLeftShift_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatLeftShift_2E_weak result ;
  const GGS_immediatLeftShift_2E_weak * p = (const GGS_immediatLeftShift_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLeftShift_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLeftShift.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatRightShift reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatRightShift::objectCompare (const GGS_immediatRightShift & inOperand) const {
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

GGS_immediatRightShift::GGS_immediatRightShift (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatRightShift GGS_immediatRightShift::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatRightShift * object = nullptr ;
  macroMyNew (object, cPtr_immediatRightShift (inCompiler COMMA_THERE)) ;
  object->immediatRightShift_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatRightShift result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatRightShift::
immediatRightShift_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                 const GGS_immediatExpression & in_mRightExpression,
                                 Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift::GGS_immediatRightShift (const cPtr_immediatRightShift * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatRightShift) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatRightShift::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatRightShift::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatRightShift class
//--------------------------------------------------------------------------------------------------

cPtr_immediatRightShift::cPtr_immediatRightShift (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatRightShift::cPtr_immediatRightShift (const GGS_immediatExpression & in_mLeftExpression,
                                                  const GGS_immediatExpression & in_mRightExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatRightShift::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRightShift ;
}

void cPtr_immediatRightShift::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatRightShift:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatRightShift::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatRightShift (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatRightShift::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatRightShift generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRightShift ("immediatRightShift",
                                                                       & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatRightShift::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRightShift ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatRightShift::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatRightShift (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift GGS_immediatRightShift::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatRightShift result ;
  const GGS_immediatRightShift * p = (const GGS_immediatRightShift *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatRightShift *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRightShift", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatRightShift_2E_weak::objectCompare (const GGS_immediatRightShift_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatRightShift_2E_weak::GGS_immediatRightShift_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak & GGS_immediatRightShift_2E_weak::operator = (const GGS_immediatRightShift & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak::GGS_immediatRightShift_2E_weak (const GGS_immediatRightShift & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak GGS_immediatRightShift_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatRightShift_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift GGS_immediatRightShift_2E_weak::unwrappedValue (void) const {
  GGS_immediatRightShift result ;
  if (isValid ()) {
    const cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatRightShift (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift GGS_immediatRightShift_2E_weak::bang_immediatRightShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatRightShift result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatRightShift) ;
      result = GGS_immediatRightShift ((cPtr_immediatRightShift *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatRightShift.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRightShift_2E_weak ("immediatRightShift.weak",
                                                                               & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatRightShift_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRightShift_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatRightShift_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatRightShift_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak GGS_immediatRightShift_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatRightShift_2E_weak result ;
  const GGS_immediatRightShift_2E_weak * p = (const GGS_immediatRightShift_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatRightShift_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRightShift.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatEqualTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatEqualTest::objectCompare (const GGS_immediatEqualTest & inOperand) const {
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

GGS_immediatEqualTest::GGS_immediatEqualTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatEqualTest GGS_immediatEqualTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatEqualTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatEqualTest (inCompiler COMMA_THERE)) ;
  object->immediatEqualTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatEqualTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatEqualTest::
immediatEqualTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                const GGS_immediatExpression & in_mRightExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest::GGS_immediatEqualTest (const cPtr_immediatEqualTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatEqualTest::cPtr_immediatEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatEqualTest::cPtr_immediatEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                                const GGS_immediatExpression & in_mRightExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest ;
}

void cPtr_immediatEqualTest::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatEqualTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatEqualTest ("immediatEqualTest",
                                                                      & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest GGS_immediatEqualTest::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatEqualTest result ;
  const GGS_immediatEqualTest * p = (const GGS_immediatEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatEqualTest_2E_weak::objectCompare (const GGS_immediatEqualTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatEqualTest_2E_weak::GGS_immediatEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak & GGS_immediatEqualTest_2E_weak::operator = (const GGS_immediatEqualTest & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak::GGS_immediatEqualTest_2E_weak (const GGS_immediatEqualTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak GGS_immediatEqualTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatEqualTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest GGS_immediatEqualTest_2E_weak::unwrappedValue (void) const {
  GGS_immediatEqualTest result ;
  if (isValid ()) {
    const cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatEqualTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest GGS_immediatEqualTest_2E_weak::bang_immediatEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatEqualTest result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatEqualTest) ;
      result = GGS_immediatEqualTest ((cPtr_immediatEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatEqualTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatEqualTest_2E_weak ("immediatEqualTest.weak",
                                                                              & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatEqualTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatEqualTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatEqualTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak GGS_immediatEqualTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatEqualTest_2E_weak result ;
  const GGS_immediatEqualTest_2E_weak * p = (const GGS_immediatEqualTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatEqualTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatEqualTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatNotEqualTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatNotEqualTest::objectCompare (const GGS_immediatNotEqualTest & inOperand) const {
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

GGS_immediatNotEqualTest::GGS_immediatNotEqualTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatNotEqualTest GGS_immediatNotEqualTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatNotEqualTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatNotEqualTest (inCompiler COMMA_THERE)) ;
  object->immediatNotEqualTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatNotEqualTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatNotEqualTest::
immediatNotEqualTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                   const GGS_immediatExpression & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest::GGS_immediatNotEqualTest (const cPtr_immediatNotEqualTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatNotEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatNotEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatNotEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatNotEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatNotEqualTest::cPtr_immediatNotEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatNotEqualTest::cPtr_immediatNotEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                                      const GGS_immediatExpression & in_mRightExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatNotEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNotEqualTest ;
}

void cPtr_immediatNotEqualTest::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatNotEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatNotEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatNotEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatNotEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatNotEqualTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNotEqualTest ("immediatNotEqualTest",
                                                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatNotEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNotEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatNotEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatNotEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest GGS_immediatNotEqualTest::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_immediatNotEqualTest result ;
  const GGS_immediatNotEqualTest * p = (const GGS_immediatNotEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatNotEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNotEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatNotEqualTest_2E_weak::objectCompare (const GGS_immediatNotEqualTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatNotEqualTest_2E_weak::GGS_immediatNotEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak & GGS_immediatNotEqualTest_2E_weak::operator = (const GGS_immediatNotEqualTest & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak::GGS_immediatNotEqualTest_2E_weak (const GGS_immediatNotEqualTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak GGS_immediatNotEqualTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatNotEqualTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest GGS_immediatNotEqualTest_2E_weak::unwrappedValue (void) const {
  GGS_immediatNotEqualTest result ;
  if (isValid ()) {
    const cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatNotEqualTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest GGS_immediatNotEqualTest_2E_weak::bang_immediatNotEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatNotEqualTest result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatNotEqualTest) ;
      result = GGS_immediatNotEqualTest ((cPtr_immediatNotEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatNotEqualTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNotEqualTest_2E_weak ("immediatNotEqualTest.weak",
                                                                                 & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatNotEqualTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNotEqualTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatNotEqualTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatNotEqualTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak GGS_immediatNotEqualTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_immediatNotEqualTest_2E_weak result ;
  const GGS_immediatNotEqualTest_2E_weak * p = (const GGS_immediatNotEqualTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatNotEqualTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNotEqualTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatGreaterTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatGreaterTest::objectCompare (const GGS_immediatGreaterTest & inOperand) const {
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

GGS_immediatGreaterTest::GGS_immediatGreaterTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatGreaterTest GGS_immediatGreaterTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatGreaterTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatGreaterTest (inCompiler COMMA_THERE)) ;
  object->immediatGreaterTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatGreaterTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterTest::
immediatGreaterTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
                                  Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest::GGS_immediatGreaterTest (const cPtr_immediatGreaterTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatGreaterTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatGreaterTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatGreaterTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatGreaterTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterTest::cPtr_immediatGreaterTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterTest::cPtr_immediatGreaterTest (const GGS_immediatExpression & in_mLeftExpression,
                                                    const GGS_immediatExpression & in_mRightExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatGreaterTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest ;
}

void cPtr_immediatGreaterTest::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatGreaterTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatGreaterTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatGreaterTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatGreaterTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatGreaterTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterTest ("immediatGreaterTest",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatGreaterTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatGreaterTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatGreaterTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest GGS_immediatGreaterTest::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterTest result ;
  const GGS_immediatGreaterTest * p = (const GGS_immediatGreaterTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatGreaterTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatGreaterTest_2E_weak::objectCompare (const GGS_immediatGreaterTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatGreaterTest_2E_weak::GGS_immediatGreaterTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak & GGS_immediatGreaterTest_2E_weak::operator = (const GGS_immediatGreaterTest & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak::GGS_immediatGreaterTest_2E_weak (const GGS_immediatGreaterTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak GGS_immediatGreaterTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatGreaterTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest GGS_immediatGreaterTest_2E_weak::unwrappedValue (void) const {
  GGS_immediatGreaterTest result ;
  if (isValid ()) {
    const cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatGreaterTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest GGS_immediatGreaterTest_2E_weak::bang_immediatGreaterTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatGreaterTest result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatGreaterTest) ;
      result = GGS_immediatGreaterTest ((cPtr_immediatGreaterTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatGreaterTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterTest_2E_weak ("immediatGreaterTest.weak",
                                                                                & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatGreaterTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatGreaterTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatGreaterTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak GGS_immediatGreaterTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterTest_2E_weak result ;
  const GGS_immediatGreaterTest_2E_weak * p = (const GGS_immediatGreaterTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatGreaterTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatGreaterOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatGreaterOrEqualTest::objectCompare (const GGS_immediatGreaterOrEqualTest & inOperand) const {
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

GGS_immediatGreaterOrEqualTest::GGS_immediatGreaterOrEqualTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest GGS_immediatGreaterOrEqualTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatGreaterOrEqualTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatGreaterOrEqualTest (inCompiler COMMA_THERE)) ;
  object->immediatGreaterOrEqualTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatGreaterOrEqualTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterOrEqualTest::
immediatGreaterOrEqualTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                         const GGS_immediatExpression & in_mRightExpression,
                                         Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest::GGS_immediatGreaterOrEqualTest (const cPtr_immediatGreaterOrEqualTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatGreaterOrEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatGreaterOrEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatGreaterOrEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatGreaterOrEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterOrEqualTest::cPtr_immediatGreaterOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterOrEqualTest::cPtr_immediatGreaterOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                                                  const GGS_immediatExpression & in_mRightExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatGreaterOrEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;
}

void cPtr_immediatGreaterOrEqualTest::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatGreaterOrEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatGreaterOrEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatGreaterOrEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatGreaterOrEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatGreaterOrEqualTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ("immediatGreaterOrEqualTest",
                                                                               & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatGreaterOrEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatGreaterOrEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatGreaterOrEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest GGS_immediatGreaterOrEqualTest::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterOrEqualTest result ;
  const GGS_immediatGreaterOrEqualTest * p = (const GGS_immediatGreaterOrEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatGreaterOrEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterOrEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatGreaterOrEqualTest_2E_weak::objectCompare (const GGS_immediatGreaterOrEqualTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatGreaterOrEqualTest_2E_weak::GGS_immediatGreaterOrEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak & GGS_immediatGreaterOrEqualTest_2E_weak::operator = (const GGS_immediatGreaterOrEqualTest & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak::GGS_immediatGreaterOrEqualTest_2E_weak (const GGS_immediatGreaterOrEqualTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak GGS_immediatGreaterOrEqualTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatGreaterOrEqualTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest GGS_immediatGreaterOrEqualTest_2E_weak::unwrappedValue (void) const {
  GGS_immediatGreaterOrEqualTest result ;
  if (isValid ()) {
    const cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatGreaterOrEqualTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest GGS_immediatGreaterOrEqualTest_2E_weak::bang_immediatGreaterOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatGreaterOrEqualTest result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatGreaterOrEqualTest) ;
      result = GGS_immediatGreaterOrEqualTest ((cPtr_immediatGreaterOrEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatGreaterOrEqualTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2E_weak ("immediatGreaterOrEqualTest.weak",
                                                                                       & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatGreaterOrEqualTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatGreaterOrEqualTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatGreaterOrEqualTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak GGS_immediatGreaterOrEqualTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterOrEqualTest_2E_weak result ;
  const GGS_immediatGreaterOrEqualTest_2E_weak * p = (const GGS_immediatGreaterOrEqualTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatGreaterOrEqualTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterOrEqualTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatLowerTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLowerTest::objectCompare (const GGS_immediatLowerTest & inOperand) const {
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

GGS_immediatLowerTest::GGS_immediatLowerTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatLowerTest GGS_immediatLowerTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatLowerTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatLowerTest (inCompiler COMMA_THERE)) ;
  object->immediatLowerTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatLowerTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerTest::
immediatLowerTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                const GGS_immediatExpression & in_mRightExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest::GGS_immediatLowerTest (const cPtr_immediatLowerTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLowerTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLowerTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLowerTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatLowerTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerTest::cPtr_immediatLowerTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerTest::cPtr_immediatLowerTest (const GGS_immediatExpression & in_mLeftExpression,
                                                const GGS_immediatExpression & in_mRightExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatLowerTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerTest ;
}

void cPtr_immediatLowerTest::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatLowerTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatLowerTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatLowerTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatLowerTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatLowerTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerTest ("immediatLowerTest",
                                                                      & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatLowerTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLowerTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLowerTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest GGS_immediatLowerTest::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatLowerTest result ;
  const GGS_immediatLowerTest * p = (const GGS_immediatLowerTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLowerTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLowerTest_2E_weak::objectCompare (const GGS_immediatLowerTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatLowerTest_2E_weak::GGS_immediatLowerTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak & GGS_immediatLowerTest_2E_weak::operator = (const GGS_immediatLowerTest & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak::GGS_immediatLowerTest_2E_weak (const GGS_immediatLowerTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak GGS_immediatLowerTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatLowerTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest GGS_immediatLowerTest_2E_weak::unwrappedValue (void) const {
  GGS_immediatLowerTest result ;
  if (isValid ()) {
    const cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatLowerTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest GGS_immediatLowerTest_2E_weak::bang_immediatLowerTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatLowerTest result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatLowerTest) ;
      result = GGS_immediatLowerTest ((cPtr_immediatLowerTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatLowerTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerTest_2E_weak ("immediatLowerTest.weak",
                                                                              & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatLowerTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLowerTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLowerTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak GGS_immediatLowerTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatLowerTest_2E_weak result ;
  const GGS_immediatLowerTest_2E_weak * p = (const GGS_immediatLowerTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLowerTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatLowerOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLowerOrEqualTest::objectCompare (const GGS_immediatLowerOrEqualTest & inOperand) const {
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

GGS_immediatLowerOrEqualTest::GGS_immediatLowerOrEqualTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatLowerOrEqualTest GGS_immediatLowerOrEqualTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatLowerOrEqualTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatLowerOrEqualTest (inCompiler COMMA_THERE)) ;
  object->immediatLowerOrEqualTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatLowerOrEqualTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerOrEqualTest::
immediatLowerOrEqualTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                       const GGS_immediatExpression & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest::GGS_immediatLowerOrEqualTest (const cPtr_immediatLowerOrEqualTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLowerOrEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLowerOrEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLowerOrEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatLowerOrEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerOrEqualTest::cPtr_immediatLowerOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerOrEqualTest::cPtr_immediatLowerOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                                              const GGS_immediatExpression & in_mRightExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatLowerOrEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;
}

void cPtr_immediatLowerOrEqualTest::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatLowerOrEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatLowerOrEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatLowerOrEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatLowerOrEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatLowerOrEqualTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ("immediatLowerOrEqualTest",
                                                                             & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatLowerOrEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLowerOrEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLowerOrEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest GGS_immediatLowerOrEqualTest::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_immediatLowerOrEqualTest result ;
  const GGS_immediatLowerOrEqualTest * p = (const GGS_immediatLowerOrEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLowerOrEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerOrEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLowerOrEqualTest_2E_weak::objectCompare (const GGS_immediatLowerOrEqualTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatLowerOrEqualTest_2E_weak::GGS_immediatLowerOrEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak & GGS_immediatLowerOrEqualTest_2E_weak::operator = (const GGS_immediatLowerOrEqualTest & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak::GGS_immediatLowerOrEqualTest_2E_weak (const GGS_immediatLowerOrEqualTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak GGS_immediatLowerOrEqualTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatLowerOrEqualTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest GGS_immediatLowerOrEqualTest_2E_weak::unwrappedValue (void) const {
  GGS_immediatLowerOrEqualTest result ;
  if (isValid ()) {
    const cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatLowerOrEqualTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest GGS_immediatLowerOrEqualTest_2E_weak::bang_immediatLowerOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatLowerOrEqualTest result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatLowerOrEqualTest) ;
      result = GGS_immediatLowerOrEqualTest ((cPtr_immediatLowerOrEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatLowerOrEqualTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2E_weak ("immediatLowerOrEqualTest.weak",
                                                                                     & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatLowerOrEqualTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLowerOrEqualTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLowerOrEqualTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak GGS_immediatLowerOrEqualTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_immediatLowerOrEqualTest_2E_weak result ;
  const GGS_immediatLowerOrEqualTest_2E_weak * p = (const GGS_immediatLowerOrEqualTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLowerOrEqualTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerOrEqualTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatNegate reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatNegate::objectCompare (const GGS_immediatNegate & inOperand) const {
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

GGS_immediatNegate::GGS_immediatNegate (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatNegate GGS_immediatNegate::
init_21_ (const GGS_immediatExpression & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_immediatNegate * object = nullptr ;
  macroMyNew (object, cPtr_immediatNegate (inCompiler COMMA_THERE)) ;
  object->immediatNegate_init_21_ (in_mExpression, inCompiler) ;
  const GGS_immediatNegate result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatNegate::
immediatNegate_init_21_ (const GGS_immediatExpression & in_mExpression,
                         Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate::GGS_immediatNegate (const cPtr_immediatNegate * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatNegate) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatNegate::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatNegate * p = (cPtr_immediatNegate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNegate) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatNegate class
//--------------------------------------------------------------------------------------------------

cPtr_immediatNegate::cPtr_immediatNegate (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatNegate::cPtr_immediatNegate (const GGS_immediatExpression & in_mExpression,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatNegate::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNegate ;
}

void cPtr_immediatNegate::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatNegate:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatNegate::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatNegate (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatNegate::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatNegate generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNegate ("immediatNegate",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatNegate::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNegate ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatNegate::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatNegate (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate GGS_immediatNegate::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_immediatNegate result ;
  const GGS_immediatNegate * p = (const GGS_immediatNegate *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatNegate *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNegate", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatNegate_2E_weak::objectCompare (const GGS_immediatNegate_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatNegate_2E_weak::GGS_immediatNegate_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak & GGS_immediatNegate_2E_weak::operator = (const GGS_immediatNegate & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak::GGS_immediatNegate_2E_weak (const GGS_immediatNegate & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak GGS_immediatNegate_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatNegate_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate GGS_immediatNegate_2E_weak::unwrappedValue (void) const {
  GGS_immediatNegate result ;
  if (isValid ()) {
    const cPtr_immediatNegate * p = (cPtr_immediatNegate *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatNegate (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate GGS_immediatNegate_2E_weak::bang_immediatNegate_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatNegate result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatNegate) ;
      result = GGS_immediatNegate ((cPtr_immediatNegate *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatNegate.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNegate_2E_weak ("immediatNegate.weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatNegate_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNegate_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatNegate_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatNegate_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak GGS_immediatNegate_2E_weak::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_immediatNegate_2E_weak result ;
  const GGS_immediatNegate_2E_weak * p = (const GGS_immediatNegate_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatNegate_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNegate.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatComplement reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatComplement::objectCompare (const GGS_immediatComplement & inOperand) const {
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

GGS_immediatComplement::GGS_immediatComplement (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatComplement GGS_immediatComplement::
init_21_ (const GGS_immediatExpression & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_immediatComplement * object = nullptr ;
  macroMyNew (object, cPtr_immediatComplement (inCompiler COMMA_THERE)) ;
  object->immediatComplement_init_21_ (in_mExpression, inCompiler) ;
  const GGS_immediatComplement result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatComplement::
immediatComplement_init_21_ (const GGS_immediatExpression & in_mExpression,
                             Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement::GGS_immediatComplement (const cPtr_immediatComplement * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatComplement) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatComplement::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatComplement * p = (cPtr_immediatComplement *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatComplement) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatComplement class
//--------------------------------------------------------------------------------------------------

cPtr_immediatComplement::cPtr_immediatComplement (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatComplement::cPtr_immediatComplement (const GGS_immediatExpression & in_mExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatComplement::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement ;
}

void cPtr_immediatComplement::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatComplement:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatComplement::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatComplement (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatComplement::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatComplement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatComplement ("immediatComplement",
                                                                       & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatComplement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatComplement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatComplement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement GGS_immediatComplement::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatComplement result ;
  const GGS_immediatComplement * p = (const GGS_immediatComplement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatComplement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatComplement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatComplement_2E_weak::objectCompare (const GGS_immediatComplement_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatComplement_2E_weak::GGS_immediatComplement_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak & GGS_immediatComplement_2E_weak::operator = (const GGS_immediatComplement & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak::GGS_immediatComplement_2E_weak (const GGS_immediatComplement & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak GGS_immediatComplement_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatComplement_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement GGS_immediatComplement_2E_weak::unwrappedValue (void) const {
  GGS_immediatComplement result ;
  if (isValid ()) {
    const cPtr_immediatComplement * p = (cPtr_immediatComplement *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatComplement (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement GGS_immediatComplement_2E_weak::bang_immediatComplement_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatComplement result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatComplement) ;
      result = GGS_immediatComplement ((cPtr_immediatComplement *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatComplement.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatComplement_2E_weak ("immediatComplement.weak",
                                                                               & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatComplement_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatComplement_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatComplement_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak GGS_immediatComplement_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatComplement_2E_weak result ;
  const GGS_immediatComplement_2E_weak * p = (const GGS_immediatComplement_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatComplement_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatComplement.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@immediatSliceExpressionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_immediatSliceExpressionList : public CollectionElementPtr {
  public: GGS_immediatSliceExpressionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_immediatSliceExpressionList (const GGS_lstring & in_mSliceName,
                                                            const GGS_immediatExpression & in_mExpression
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_immediatSliceExpressionList (const GGS_immediatSliceExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_immediatSliceExpressionList::CollectionElementPtr_immediatSliceExpressionList (const GGS_lstring & in_mSliceName,
                                                                                                    const GGS_immediatExpression & in_mExpression
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSliceName, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_immediatSliceExpressionList::CollectionElementPtr_immediatSliceExpressionList (const GGS_immediatSliceExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSliceName, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_immediatSliceExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_immediatSliceExpressionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_immediatSliceExpressionList (mObject.mProperty_mSliceName, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @immediatSliceExpressionList
//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList::GGS_immediatSliceExpressionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList::GGS_immediatSliceExpressionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_immediatSliceExpressionList * p = (CollectionElementPtr_immediatSliceExpressionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_immediatSliceExpressionList) ;
    const GGS_immediatSliceExpressionList_2E_element element (p->mObject.mProperty_mSliceName, p->mObject.mProperty_mExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mSliceName,
                                                                 const GGS_immediatExpression & in_mExpression
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_immediatSliceExpressionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_immediatSliceExpressionList (in_mSliceName, in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_immediatSliceExpressionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_immediatSliceExpressionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::description (String & ioString,
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
      ioString.appendString ("mSliceName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSliceName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::plusPlusAssignOperation (const GGS_immediatSliceExpressionList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_immediatExpression & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_immediatSliceExpressionList_2E_element element (inOperand0, inOperand1) ;
  GGS_immediatSliceExpressionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_immediatExpression & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  const GGS_immediatSliceExpressionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_immediatExpression inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_immediatSliceExpressionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_immediatExpression inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_immediatSliceExpressionList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_immediatSliceExpressionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_immediatExpression & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSliceName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mExpression ;
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

void GGS_immediatSliceExpressionList::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_immediatExpression & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_immediatSliceExpressionList::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_immediatExpression & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
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

void GGS_immediatSliceExpressionList::method_first (GGS_lstring & outOperand0,
                                                    GGS_immediatExpression & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_immediatSliceExpressionList::method_last (GGS_lstring & outOperand0,
                                                   GGS_immediatExpression & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
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

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::add_operation (const GGS_immediatSliceExpressionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_immediatSliceExpressionList result ;
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

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_immediatSliceExpressionList result ;
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

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_immediatSliceExpressionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_immediatSliceExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_immediatSliceExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::plusAssignOperation (const GGS_immediatSliceExpressionList inList,
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

void GGS_immediatSliceExpressionList::setter_setMSliceNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceName = inOperand ;
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
  
GGS_lstring GGS_immediatSliceExpressionList::getter_mSliceNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceName ;
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

void GGS_immediatSliceExpressionList::setter_setMExpressionAtIndex (GGS_immediatExpression inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
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
  
GGS_immediatExpression GGS_immediatSliceExpressionList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_immediatExpression result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
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
// Down Enumerator for @immediatSliceExpressionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_immediatSliceExpressionList::DownEnumerator_immediatSliceExpressionList (const GGS_immediatSliceExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element DownEnumerator_immediatSliceExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_immediatSliceExpressionList::current_mSliceName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression DownEnumerator_immediatSliceExpressionList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @immediatSliceExpressionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_immediatSliceExpressionList::UpEnumerator_immediatSliceExpressionList (const GGS_immediatSliceExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element UpEnumerator_immediatSliceExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_immediatSliceExpressionList::current_mSliceName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression UpEnumerator_immediatSliceExpressionList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @immediatSliceExpressionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList ("immediatSliceExpressionList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatSliceExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSliceExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSliceExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList result ;
  const GGS_immediatSliceExpressionList * p = (const GGS_immediatSliceExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSliceExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSliceExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatSlice_2E_weak::objectCompare (const GGS_immediatSlice_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_immediatSlice_2E_weak::GGS_immediatSlice_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak & GGS_immediatSlice_2E_weak::operator = (const GGS_immediatSlice & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak::GGS_immediatSlice_2E_weak (const GGS_immediatSlice & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak GGS_immediatSlice_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatSlice_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice GGS_immediatSlice_2E_weak::unwrappedValue (void) const {
  GGS_immediatSlice result ;
  if (isValid ()) {
    const cPtr_immediatSlice * p = (cPtr_immediatSlice *) ptr () ;
    if (nullptr != p) {
      result = GGS_immediatSlice (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice GGS_immediatSlice_2E_weak::bang_immediatSlice_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatSlice result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatSlice) ;
      result = GGS_immediatSlice ((cPtr_immediatSlice *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatSlice.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSlice_2E_weak ("immediatSlice.weak",
                                                                          & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatSlice_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSlice_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSlice_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak GGS_immediatSlice_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_immediatSlice_2E_weak result ;
  const GGS_immediatSlice_2E_weak * p = (const GGS_immediatSlice_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSlice_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSlice.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@constantDefinitionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_constantDefinitionList : public CollectionElementPtr {
  public: GGS_constantDefinitionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_constantDefinitionList (const GGS_lstring & in_mConstantName,
                                                       const GGS_immediatExpression & in_mExpression
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_constantDefinitionList (const GGS_constantDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_constantDefinitionList::CollectionElementPtr_constantDefinitionList (const GGS_lstring & in_mConstantName,
                                                                                          const GGS_immediatExpression & in_mExpression
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mConstantName, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_constantDefinitionList::CollectionElementPtr_constantDefinitionList (const GGS_constantDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mConstantName, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_constantDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_constantDefinitionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_constantDefinitionList (mObject.mProperty_mConstantName, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @constantDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList::GGS_constantDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList::GGS_constantDefinitionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_constantDefinitionList * p = (CollectionElementPtr_constantDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_constantDefinitionList) ;
    const GGS_constantDefinitionList_2E_element element (p->mObject.mProperty_mConstantName, p->mObject.mProperty_mExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_lstring & in_mConstantName,
                                                            const GGS_immediatExpression & in_mExpression
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_constantDefinitionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_constantDefinitionList (in_mConstantName, in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_constantDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::description (String & ioString,
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
      ioString.appendString ("mConstantName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mConstantName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::plusPlusAssignOperation (const GGS_constantDefinitionList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_immediatExpression & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_constantDefinitionList_2E_element element (inOperand0, inOperand1) ;
  GGS_constantDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                     const GGS_immediatExpression & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_constantDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                const GGS_immediatExpression inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_constantDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                       const GGS_immediatExpression inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_constantDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_constantDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                       GGS_immediatExpression & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mConstantName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mExpression ;
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

void GGS_constantDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                  GGS_immediatExpression & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mConstantName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_constantDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                 GGS_immediatExpression & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mConstantName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
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

void GGS_constantDefinitionList::method_first (GGS_lstring & outOperand0,
                                               GGS_immediatExpression & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mConstantName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_constantDefinitionList::method_last (GGS_lstring & outOperand0,
                                              GGS_immediatExpression & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mConstantName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
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

GGS_constantDefinitionList GGS_constantDefinitionList::add_operation (const GGS_constantDefinitionList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constantDefinitionList result ;
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

GGS_constantDefinitionList GGS_constantDefinitionList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_constantDefinitionList result ;
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

GGS_constantDefinitionList GGS_constantDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_constantDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_constantDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_constantDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::plusAssignOperation (const GGS_constantDefinitionList inList,
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

void GGS_constantDefinitionList::setter_setMConstantNameAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mConstantName = inOperand ;
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
  
GGS_lstring GGS_constantDefinitionList::getter_mConstantNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mConstantName ;
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

void GGS_constantDefinitionList::setter_setMExpressionAtIndex (GGS_immediatExpression inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
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
  
GGS_immediatExpression GGS_constantDefinitionList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_immediatExpression result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
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
// Down Enumerator for @constantDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_constantDefinitionList::DownEnumerator_constantDefinitionList (const GGS_constantDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element DownEnumerator_constantDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantDefinitionList::current_mConstantName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression DownEnumerator_constantDefinitionList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @constantDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_constantDefinitionList::UpEnumerator_constantDefinitionList (const GGS_constantDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element UpEnumerator_constantDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantDefinitionList::current_mConstantName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression UpEnumerator_constantDefinitionList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @constantDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantDefinitionList ("constantDefinitionList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_constantDefinitionList result ;
  const GGS_constantDefinitionList * p = (const GGS_constantDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @actualConfigurationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap::GGS_actualConfigurationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap::~ GGS_actualConfigurationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap::GGS_actualConfigurationMap (const GGS_actualConfigurationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap & GGS_actualConfigurationMap::operator = (const GGS_actualConfigurationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap GGS_actualConfigurationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_actualConfigurationMap::getter_hasKey (const GGS_string & inKey
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_actualConfigurationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                           const GGS_uint & inLevel
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actualConfigurationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actualConfigurationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_actualConfigurationMap::getter_locationForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_actualConfigurationMap::getter_keyList (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualConfigurationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_actualConfigurationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::performInsert (const GGS_actualConfigurationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_actualConfigurationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>
GGS_actualConfigurationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_actualConfigurationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>>
GGS_actualConfigurationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_actualConfigurationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_ GGS_actualConfigurationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualConfigurationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_actualConfigurationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_actualConfigurationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRegisterAddress = info->mProperty_mRegisterAddress ;
      element.mProperty_mRegisterValue = info->mProperty_mRegisterValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap GGS_actualConfigurationMap::class_func_mapWithMapToOverride (const GGS_actualConfigurationMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_actualConfigurationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap GGS_actualConfigurationMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_actualConfigurationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::setter_insertKey (GGS_lstring inLKey,
                                                   GGS_uint inArgument0,
                                                   GGS_uint inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_actualConfigurationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' configuration register is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::method_searchKey (GGS_lstring inLKey,
                                                   GGS_uint & outArgument0,
                                                   GGS_uint & outArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element> info ;
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
  }else{
    outArgument0 = info->mProperty_mRegisterAddress ;
    outArgument1 = info->mProperty_mRegisterValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actualConfigurationMap::getter_mRegisterAddressForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element> info = infoForKey (key) ;
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

GGS_uint GGS_actualConfigurationMap::getter_mRegisterValueForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::setter_setMRegisterAddressForKey (GGS_uint inValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_actualConfigurationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_actualConfigurationMap::setter_setMRegisterValueForKey (GGS_uint inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_actualConfigurationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_actualConfigurationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>> & inArray,
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
    ioString.appendString ("mRegisterValue:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>> array = sortedInfoArray () ;
    GGS_actualConfigurationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_actualConfigurationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_actualConfigurationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @actualConfigurationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_actualConfigurationMap::DownEnumerator_actualConfigurationMap (const GGS_actualConfigurationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element DownEnumerator_actualConfigurationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_actualConfigurationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_actualConfigurationMap::current_mRegisterAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_actualConfigurationMap::current_mRegisterValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @actualConfigurationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_actualConfigurationMap::UpEnumerator_actualConfigurationMap (const GGS_actualConfigurationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element UpEnumerator_actualConfigurationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_actualConfigurationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_actualConfigurationMap::current_mRegisterAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_actualConfigurationMap::current_mRegisterValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterValue ;
}


//--------------------------------------------------------------------------------------------------
//     @actualConfigurationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap ("actualConfigurationMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualConfigurationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualConfigurationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualConfigurationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap GGS_actualConfigurationMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap result ;
  const GGS_actualConfigurationMap * p = (const GGS_actualConfigurationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualConfigurationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberExpression_2E_weak::objectCompare (const GGS_bitNumberExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_bitNumberExpression_2E_weak::GGS_bitNumberExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak & GGS_bitNumberExpression_2E_weak::operator = (const GGS_bitNumberExpression & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak::GGS_bitNumberExpression_2E_weak (const GGS_bitNumberExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak GGS_bitNumberExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitNumberExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_bitNumberExpression_2E_weak::unwrappedValue (void) const {
  GGS_bitNumberExpression result ;
  if (isValid ()) {
    const cPtr_bitNumberExpression * p = (cPtr_bitNumberExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_bitNumberExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_bitNumberExpression_2E_weak::bang_bitNumberExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitNumberExpression result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberExpression) ;
      result = GGS_bitNumberExpression ((cPtr_bitNumberExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitNumberExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak ("bitNumberExpression.weak",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitNumberExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak GGS_bitNumberExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_bitNumberExpression_2E_weak result ;
  const GGS_bitNumberExpression_2E_weak * p = (const GGS_bitNumberExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitNumberLiteralExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLiteralExpression::objectCompare (const GGS_bitNumberLiteralExpression & inOperand) const {
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

GGS_bitNumberLiteralExpression::GGS_bitNumberLiteralExpression (void) :
GGS_bitNumberExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitNumberLiteralExpression GGS_bitNumberLiteralExpression::
init_21__21_ (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
              const GGS_location & in_mEndOfExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_bitNumberLiteralExpression * object = nullptr ;
  macroMyNew (object, cPtr_bitNumberLiteralExpression (inCompiler COMMA_THERE)) ;
  object->bitNumberLiteralExpression_init_21__21_ (in_mBitNumberLiteralExpression, in_mEndOfExpression, inCompiler) ;
  const GGS_bitNumberLiteralExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralExpression::
bitNumberLiteralExpression_init_21__21_ (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
                                         const GGS_location & in_mEndOfExpression,
                                         Compiler * /* inCompiler */) {
  mProperty_mBitNumberLiteralExpression = in_mBitNumberLiteralExpression ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression::GGS_bitNumberLiteralExpression (const cPtr_bitNumberLiteralExpression * inSourcePtr) :
GGS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLiteralExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_bitNumberLiteralExpression::readProperty_mBitNumberLiteralExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    return p->mProperty_mBitNumberLiteralExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bitNumberLiteralExpression::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLiteralExpression class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralExpression::cPtr_bitNumberLiteralExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLiteralExpression (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralExpression::cPtr_bitNumberLiteralExpression (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
                                                                  const GGS_location & in_mEndOfExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLiteralExpression (),
mProperty_mEndOfExpression () {
  mProperty_mBitNumberLiteralExpression = in_mBitNumberLiteralExpression ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_bitNumberLiteralExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;
}

void cPtr_bitNumberLiteralExpression::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@bitNumberLiteralExpression:") ;
  mProperty_mBitNumberLiteralExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_bitNumberLiteralExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLiteralExpression (mProperty_mBitNumberLiteralExpression, mProperty_mEndOfExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberLiteralExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_bitNumberExpression::printNonNullClassInstanceProperties () ;
    mProperty_mBitNumberLiteralExpression.printNonNullClassInstanceProperties ("mBitNumberLiteralExpression") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bitNumberLiteralExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression ("bitNumberLiteralExpression",
                                                                               & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitNumberLiteralExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLiteralExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLiteralExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression GGS_bitNumberLiteralExpression::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralExpression result ;
  const GGS_bitNumberLiteralExpression * p = (const GGS_bitNumberLiteralExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLiteralExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLiteralExpression_2E_weak::objectCompare (const GGS_bitNumberLiteralExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_bitNumberLiteralExpression_2E_weak::GGS_bitNumberLiteralExpression_2E_weak (void) :
GGS_bitNumberExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak & GGS_bitNumberLiteralExpression_2E_weak::operator = (const GGS_bitNumberLiteralExpression & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak::GGS_bitNumberLiteralExpression_2E_weak (const GGS_bitNumberLiteralExpression & inSource) :
GGS_bitNumberExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak GGS_bitNumberLiteralExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitNumberLiteralExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression GGS_bitNumberLiteralExpression_2E_weak::unwrappedValue (void) const {
  GGS_bitNumberLiteralExpression result ;
  if (isValid ()) {
    const cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_bitNumberLiteralExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression GGS_bitNumberLiteralExpression_2E_weak::bang_bitNumberLiteralExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitNumberLiteralExpression result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLiteralExpression) ;
      result = GGS_bitNumberLiteralExpression ((cPtr_bitNumberLiteralExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitNumberLiteralExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2E_weak ("bitNumberLiteralExpression.weak",
                                                                                       & kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitNumberLiteralExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLiteralExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLiteralExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak GGS_bitNumberLiteralExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralExpression_2E_weak result ;
  const GGS_bitNumberLiteralExpression_2E_weak * p = (const GGS_bitNumberLiteralExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLiteralExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLiteralValue_2E_weak::objectCompare (const GGS_bitNumberLiteralValue_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_bitNumberLiteralValue_2E_weak::GGS_bitNumberLiteralValue_2E_weak (void) :
GGS_bitNumberExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak & GGS_bitNumberLiteralValue_2E_weak::operator = (const GGS_bitNumberLiteralValue & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak::GGS_bitNumberLiteralValue_2E_weak (const GGS_bitNumberLiteralValue & inSource) :
GGS_bitNumberExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak GGS_bitNumberLiteralValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitNumberLiteralValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue GGS_bitNumberLiteralValue_2E_weak::unwrappedValue (void) const {
  GGS_bitNumberLiteralValue result ;
  if (isValid ()) {
    const cPtr_bitNumberLiteralValue * p = (cPtr_bitNumberLiteralValue *) ptr () ;
    if (nullptr != p) {
      result = GGS_bitNumberLiteralValue (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue GGS_bitNumberLiteralValue_2E_weak::bang_bitNumberLiteralValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitNumberLiteralValue result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLiteralValue) ;
      result = GGS_bitNumberLiteralValue ((cPtr_bitNumberLiteralValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitNumberLiteralValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue_2E_weak ("bitNumberLiteralValue.weak",
                                                                                  & kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitNumberLiteralValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLiteralValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLiteralValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak GGS_bitNumberLiteralValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralValue_2E_weak result ;
  const GGS_bitNumberLiteralValue_2E_weak * p = (const GGS_bitNumberLiteralValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLiteralValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLabelValue_2E_weak::objectCompare (const GGS_bitNumberLabelValue_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_bitNumberLabelValue_2E_weak::GGS_bitNumberLabelValue_2E_weak (void) :
GGS_bitNumberExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak & GGS_bitNumberLabelValue_2E_weak::operator = (const GGS_bitNumberLabelValue & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak::GGS_bitNumberLabelValue_2E_weak (const GGS_bitNumberLabelValue & inSource) :
GGS_bitNumberExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak GGS_bitNumberLabelValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitNumberLabelValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue GGS_bitNumberLabelValue_2E_weak::unwrappedValue (void) const {
  GGS_bitNumberLabelValue result ;
  if (isValid ()) {
    const cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) ptr () ;
    if (nullptr != p) {
      result = GGS_bitNumberLabelValue (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue GGS_bitNumberLabelValue_2E_weak::bang_bitNumberLabelValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitNumberLabelValue result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLabelValue) ;
      result = GGS_bitNumberLabelValue ((cPtr_bitNumberLabelValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitNumberLabelValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLabelValue_2E_weak ("bitNumberLabelValue.weak",
                                                                                & kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitNumberLabelValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLabelValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLabelValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak GGS_bitNumberLabelValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_bitNumberLabelValue_2E_weak result ;
  const GGS_bitNumberLabelValue_2E_weak * p = (const GGS_bitNumberLabelValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLabelValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLabelValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @labelMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_labelMap::GGS_labelMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap::~ GGS_labelMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap::GGS_labelMap (const GGS_labelMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap & GGS_labelMap::operator = (const GGS_labelMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap GGS_labelMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_labelMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_labelMap::getter_hasKey (const GGS_string & inKey
                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_labelMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                             const GGS_uint & inLevel
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_labelMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_labelMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_labelMap::getter_locationForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_labelMap::getter_keyList (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_labelMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_labelMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap::performInsert (const GGS_labelMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_labelMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>
GGS_labelMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_labelMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>>
GGS_labelMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_labelMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_ GGS_labelMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_labelMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_labelMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_labelMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap GGS_labelMap::class_func_mapWithMapToOverride (const GGS_labelMap & inMapToOverride
                                                            COMMA_LOCATION_ARGS) {
  GGS_labelMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_labelMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap GGS_labelMap::getter_overriddenMap (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_labelMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap::setter_insertKey (GGS_lstring inLKey,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  const GGS_labelMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' label is already in use" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_labelMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>> & inArray,
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

void GGS_labelMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>> array = sortedInfoArray () ;
    GGS_labelMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_labelMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_labelMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @labelMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_labelMap::DownEnumerator_labelMap (const GGS_labelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element DownEnumerator_labelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_labelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @labelMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_labelMap::UpEnumerator_labelMap (const GGS_labelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element UpEnumerator_labelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_labelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @labelMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap ("labelMap",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_labelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_labelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_labelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap GGS_labelMap::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_labelMap result ;
  const GGS_labelMap * p = (const GGS_labelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_labelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @pic_31__38__5F_dataMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap::GGS_pic_31__38__5F_dataMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap::~ GGS_pic_31__38__5F_dataMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap::GGS_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap & GGS_pic_31__38__5F_dataMap::operator = (const GGS_pic_31__38__5F_dataMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataMap::getter_hasKey (const GGS_string & inKey
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                           const GGS_uint & inLevel
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38__5F_dataMap::getter_locationForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_pic_31__38__5F_dataMap::getter_keyList (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::performInsert (const GGS_pic_31__38__5F_dataMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>
GGS_pic_31__38__5F_dataMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_pic_31__38__5F_dataMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>>
GGS_pic_31__38__5F_dataMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_pic_31__38__5F_dataMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_ GGS_pic_31__38__5F_dataMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_pic_31__38__5F_dataMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_pic_31__38__5F_dataMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mData = info->mProperty_mData ;
      element.mProperty_mIsData_38_ = info->mProperty_mIsData_38_ ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::class_func_mapWithMapToOverride (const GGS_pic_31__38__5F_dataMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::setter_insertKey (GGS_lstring inLKey,
                                                   GGS_uintlist inArgument0,
                                                   GGS_bool inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38__5F_dataMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::method_searchKey (GGS_lstring inLKey,
                                                   GGS_uintlist & outArgument0,
                                                   GGS_bool & outArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info ;
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
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mData ;
    outArgument1 = info->mProperty_mIsData_38_ ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_pic_31__38__5F_dataMap::getter_mDataForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mData ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataMap::getter_mIsData_38_ForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsData_38_ ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::setter_setMDataForKey (GGS_uintlist inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mData = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::setter_setMIsData_38_ForKey (GGS_bool inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsData_38_ = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_pic_31__38__5F_dataMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> & inArray,
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
    ioString.appendString ("mData:") ;
    inArray (i COMMA_HERE)->mProperty_mData.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsData8:") ;
    inArray (i COMMA_HERE)->mProperty_mIsData_38_.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> array = sortedInfoArray () ;
    GGS_pic_31__38__5F_dataMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_pic_31__38__5F_dataMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @pic_31__38__5F_dataMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38__5F_dataMap::DownEnumerator_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element DownEnumerator_pic_31__38__5F_dataMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38__5F_dataMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_pic_31__38__5F_dataMap::current_mData (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mData ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_pic_31__38__5F_dataMap::current_mIsData_38_ (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsData_38_ ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @pic_31__38__5F_dataMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38__5F_dataMap::UpEnumerator_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element UpEnumerator_pic_31__38__5F_dataMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38__5F_dataMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_pic_31__38__5F_dataMap::current_mData (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mData ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_pic_31__38__5F_dataMap::current_mIsData_38_ (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsData_38_ ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18_dataMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ("pic18_dataMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  const GGS_pic_31__38__5F_dataMap * p = (const GGS_pic_31__38__5F_dataMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SequentialInstruction_2E_weak::objectCompare (const GGS_ipic_31__38_SequentialInstruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38_SequentialInstruction_2E_weak::GGS_ipic_31__38_SequentialInstruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak & GGS_ipic_31__38_SequentialInstruction_2E_weak::operator = (const GGS_ipic_31__38_SequentialInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak::GGS_ipic_31__38_SequentialInstruction_2E_weak (const GGS_ipic_31__38_SequentialInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak GGS_ipic_31__38_SequentialInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstruction_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_SequentialInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstruction_2E_weak::bang_ipic_31__38_SequentialInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_SequentialInstruction) ;
      result = GGS_ipic_31__38_SequentialInstruction ((cPtr_ipic_31__38_SequentialInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18SequentialInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak ("ipic18SequentialInstruction.weak",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SequentialInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SequentialInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SequentialInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak GGS_ipic_31__38_SequentialInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction_2E_weak result ;
  const GGS_ipic_31__38_SequentialInstruction_2E_weak * p = (const GGS_ipic_31__38_SequentialInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SequentialInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ipic_31__38_SequentialInstructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_ipic_31__38_SequentialInstructionList : public CollectionElementPtr {
  public: GGS_ipic_31__38_SequentialInstructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                      const GGS_uint & in_mMin,
                                                                      const GGS_uint & in_mMax
                                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ipic_31__38_SequentialInstructionList::CollectionElementPtr_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                                                        const GGS_uint & in_mMin,
                                                                                                                        const GGS_uint & in_mMax
                                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction, in_mMin, in_mMax) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ipic_31__38_SequentialInstructionList::CollectionElementPtr_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction, inElement.mProperty_mMin, inElement.mProperty_mMax) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_ipic_31__38_SequentialInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_ipic_31__38_SequentialInstructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_ipic_31__38_SequentialInstructionList (mObject.mProperty_mInstruction, mObject.mProperty_mMin, mObject.mProperty_mMax COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ipic_31__38_SequentialInstructionList
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList::GGS_ipic_31__38_SequentialInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList::GGS_ipic_31__38_SequentialInstructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_ipic_31__38_SequentialInstructionList * p = (CollectionElementPtr_ipic_31__38_SequentialInstructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_ipic_31__38_SequentialInstructionList) ;
    const GGS_ipic_31__38_SequentialInstructionList_2E_element element (p->mObject.mProperty_mInstruction, p->mObject.mProperty_mMin, p->mObject.mProperty_mMax) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                           const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                           const GGS_uint & in_mMin,
                                                                           const GGS_uint & in_mMax
                                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_ipic_31__38_SequentialInstructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_ipic_31__38_SequentialInstructionList (in_mInstruction, in_mMin, in_mMax COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38_SequentialInstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ipic_31__38_SequentialInstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::description (String & ioString,
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
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mMin:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mMin.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mMax:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mMax.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::plusPlusAssignOperation (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::class_func_listWithValue (const GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                               const GGS_uint & inOperand1,
                                                                                                               const GGS_uint & inOperand2
                                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_ipic_31__38_SequentialInstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::addAssignOperation (const GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                    const GGS_uint & inOperand1,
                                                                    const GGS_uint & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::setter_append (const GGS_ipic_31__38_SequentialInstruction inOperand0,
                                                               const GGS_uint inOperand1,
                                                               const GGS_uint inOperand2,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::setter_insertAtIndex (const GGS_ipic_31__38_SequentialInstruction inOperand0,
                                                                      const GGS_uint inOperand1,
                                                                      const GGS_uint inOperand2,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_removeAtIndex (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                      GGS_uint & outOperand1,
                                                                      GGS_uint & outOperand2,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mMin ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mMax ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_popFirst (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                 GGS_uint & outOperand1,
                                                                 GGS_uint & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mMin ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mMax ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_popLast (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                GGS_uint & outOperand1,
                                                                GGS_uint & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mMin ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mMax ;
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

void GGS_ipic_31__38_SequentialInstructionList::method_first (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                              GGS_uint & outOperand1,
                                                              GGS_uint & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mMin ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mMax ;
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

void GGS_ipic_31__38_SequentialInstructionList::method_last (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                             GGS_uint & outOperand1,
                                                             GGS_uint & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mMin ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mMax ;
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

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::add_operation (const GGS_ipic_31__38_SequentialInstructionList & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
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

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::subList (const int32_t inStart,
                                                                                              const int32_t inLength,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
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

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::plusAssignOperation (const GGS_ipic_31__38_SequentialInstructionList inList,
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

void GGS_ipic_31__38_SequentialInstructionList::setter_setMInstructionAtIndex (GGS_ipic_31__38_SequentialInstruction inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
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
  
GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_setMMinAtIndex (GGS_uint inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mMin = inOperand ;
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
  
GGS_uint GGS_ipic_31__38_SequentialInstructionList::getter_mMinAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mMin ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_setMMaxAtIndex (GGS_uint inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mMax = inOperand ;
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
  
GGS_uint GGS_ipic_31__38_SequentialInstructionList::getter_mMaxAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mMax ;
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
// Down Enumerator for @ipic_31__38_SequentialInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ipic_31__38_SequentialInstructionList::DownEnumerator_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList_2E_element DownEnumerator_ipic_31__38_SequentialInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction DownEnumerator_ipic_31__38_SequentialInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ipic_31__38_SequentialInstructionList::current_mMin (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMin ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ipic_31__38_SequentialInstructionList::current_mMax (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMax ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ipic_31__38_SequentialInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ipic_31__38_SequentialInstructionList::UpEnumerator_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList_2E_element UpEnumerator_ipic_31__38_SequentialInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction UpEnumerator_ipic_31__38_SequentialInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ipic_31__38_SequentialInstructionList::current_mMin (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMin ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ipic_31__38_SequentialInstructionList::current_mMax (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMax ;
}




//--------------------------------------------------------------------------------------------------
//     @ipic18SequentialInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ("ipic18SequentialInstructionList",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SequentialInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SequentialInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SequentialInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstructionList result ;
  const GGS_ipic_31__38_SequentialInstructionList * p = (const GGS_ipic_31__38_SequentialInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SequentialInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak & GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::operator = (const GGS_ipic_31__38_AbstractBlockTerminator & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (const GGS_ipic_31__38_AbstractBlockTerminator & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_AbstractBlockTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_AbstractBlockTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::bang_ipic_31__38_AbstractBlockTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_AbstractBlockTerminator result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_AbstractBlockTerminator) ;
      result = GGS_ipic_31__38_AbstractBlockTerminator ((cPtr_ipic_31__38_AbstractBlockTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractBlockTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak ("ipic18AbstractBlockTerminator.weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator_2E_weak result ;
  const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak * p = (const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractBlockTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ipic_31__38_BlockList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_ipic_31__38_BlockList : public CollectionElementPtr {
  public: GGS_ipic_31__38_BlockList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_ipic_31__38_BlockList (const GGS_ipic_31__38_Block & in_mBlock
                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ipic_31__38_BlockList::CollectionElementPtr_ipic_31__38_BlockList (const GGS_ipic_31__38_Block & in_mBlock
                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mBlock) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ipic_31__38_BlockList::CollectionElementPtr_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_ipic_31__38_BlockList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_ipic_31__38_BlockList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_ipic_31__38_BlockList (mObject.mProperty_mBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ipic_31__38_BlockList
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList::GGS_ipic_31__38_BlockList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList::GGS_ipic_31__38_BlockList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_ipic_31__38_BlockList * p = (CollectionElementPtr_ipic_31__38_BlockList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_ipic_31__38_BlockList) ;
    const GGS_ipic_31__38_BlockList_2E_element element (p->mObject.mProperty_mBlock) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                           const GGS_ipic_31__38_Block & in_mBlock
                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_ipic_31__38_BlockList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_ipic_31__38_BlockList (in_mBlock COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38_BlockList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ipic_31__38_BlockList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::description (String & ioString,
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
      ioString.appendString ("mBlock:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBlock.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::plusPlusAssignOperation (const GGS_ipic_31__38_BlockList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::class_func_listWithValue (const GGS_ipic_31__38_Block & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList_2E_element element (inOperand0) ;
  GGS_ipic_31__38_BlockList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::addAssignOperation (const GGS_ipic_31__38_Block & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::setter_append (const GGS_ipic_31__38_Block inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::setter_insertAtIndex (const GGS_ipic_31__38_Block inOperand0,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList_2E_element newElement (inOperand0) ;
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

void GGS_ipic_31__38_BlockList::setter_removeAtIndex (GGS_ipic_31__38_Block & outOperand0,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBlock ;
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

void GGS_ipic_31__38_BlockList::setter_popFirst (GGS_ipic_31__38_Block & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBlock ;
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

void GGS_ipic_31__38_BlockList::setter_popLast (GGS_ipic_31__38_Block & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBlock ;
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

void GGS_ipic_31__38_BlockList::method_first (GGS_ipic_31__38_Block & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBlock ;
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

void GGS_ipic_31__38_BlockList::method_last (GGS_ipic_31__38_Block & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBlock ;
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

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::add_operation (const GGS_ipic_31__38_BlockList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
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

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
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

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::plusAssignOperation (const GGS_ipic_31__38_BlockList inList,
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

void GGS_ipic_31__38_BlockList::setter_setMBlockAtIndex (GGS_ipic_31__38_Block inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBlock = inOperand ;
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
  
GGS_ipic_31__38_Block GGS_ipic_31__38_BlockList::getter_mBlockAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_Block result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBlock ;
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
// Down Enumerator for @ipic_31__38_BlockList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ipic_31__38_BlockList::DownEnumerator_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element DownEnumerator_ipic_31__38_BlockList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block DownEnumerator_ipic_31__38_BlockList::current_mBlock (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlock ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ipic_31__38_BlockList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ipic_31__38_BlockList::UpEnumerator_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element UpEnumerator_ipic_31__38_BlockList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block UpEnumerator_ipic_31__38_BlockList::current_mBlock (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlock ;
}




//--------------------------------------------------------------------------------------------------
//     @ipic18BlockList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList ("ipic18BlockList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_BlockList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_BlockList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_BlockList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList result ;
  const GGS_ipic_31__38_BlockList * p = (const GGS_ipic_31__38_BlockList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_BlockList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18BlockList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak & GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::operator = (const GGS_ipic_31__38_SingleInstructionTerminator & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (const GGS_ipic_31__38_SingleInstructionTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_SingleInstructionTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_SingleInstructionTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_SingleInstructionTerminator * p = (cPtr_ipic_31__38_SingleInstructionTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_SingleInstructionTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::bang_ipic_31__38_SingleInstructionTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SingleInstructionTerminator result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_SingleInstructionTerminator) ;
      result = GGS_ipic_31__38_SingleInstructionTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18SingleInstructionTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak ("ipic18SingleInstructionTerminator.weak",
                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SingleInstructionTerminator_2E_weak result ;
  const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak * p = (const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SingleInstructionTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ReturnTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ReturnTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38_ReturnTerminator_2E_weak::GGS_ipic_31__38_ReturnTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak & GGS_ipic_31__38_ReturnTerminator_2E_weak::operator = (const GGS_ipic_31__38_ReturnTerminator & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak::GGS_ipic_31__38_ReturnTerminator_2E_weak (const GGS_ipic_31__38_ReturnTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak GGS_ipic_31__38_ReturnTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ReturnTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ReturnTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ReturnTerminator * p = (cPtr_ipic_31__38_ReturnTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ReturnTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator_2E_weak::bang_ipic_31__38_ReturnTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ReturnTerminator result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ReturnTerminator) ;
      result = GGS_ipic_31__38_ReturnTerminator ((cPtr_ipic_31__38_ReturnTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ReturnTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2E_weak ("ipic18ReturnTerminator.weak",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ReturnTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ReturnTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ReturnTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak GGS_ipic_31__38_ReturnTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ReturnTerminator_2E_weak result ;
  const GGS_ipic_31__38_ReturnTerminator_2E_weak * p = (const GGS_ipic_31__38_ReturnTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ReturnTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ReturnTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetlwTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_RetlwTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38_RetlwTerminator_2E_weak::GGS_ipic_31__38_RetlwTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak & GGS_ipic_31__38_RetlwTerminator_2E_weak::operator = (const GGS_ipic_31__38_RetlwTerminator & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak::GGS_ipic_31__38_RetlwTerminator_2E_weak (const GGS_ipic_31__38_RetlwTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak GGS_ipic_31__38_RetlwTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_RetlwTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_RetlwTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_RetlwTerminator * p = (cPtr_ipic_31__38_RetlwTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_RetlwTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator_2E_weak::bang_ipic_31__38_RetlwTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_RetlwTerminator result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_RetlwTerminator) ;
      result = GGS_ipic_31__38_RetlwTerminator ((cPtr_ipic_31__38_RetlwTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18RetlwTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2E_weak ("ipic18RetlwTerminator.weak",
                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetlwTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetlwTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetlwTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak GGS_ipic_31__38_RetlwTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetlwTerminator_2E_weak result ;
  const GGS_ipic_31__38_RetlwTerminator_2E_weak * p = (const GGS_ipic_31__38_RetlwTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetlwTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetlwTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetfieTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_RetfieTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38_RetfieTerminator_2E_weak::GGS_ipic_31__38_RetfieTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak & GGS_ipic_31__38_RetfieTerminator_2E_weak::operator = (const GGS_ipic_31__38_RetfieTerminator & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak::GGS_ipic_31__38_RetfieTerminator_2E_weak (const GGS_ipic_31__38_RetfieTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak GGS_ipic_31__38_RetfieTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_RetfieTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_RetfieTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_RetfieTerminator * p = (cPtr_ipic_31__38_RetfieTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_RetfieTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator_2E_weak::bang_ipic_31__38_RetfieTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_RetfieTerminator result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_RetfieTerminator) ;
      result = GGS_ipic_31__38_RetfieTerminator ((cPtr_ipic_31__38_RetfieTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18RetfieTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2E_weak ("ipic18RetfieTerminator.weak",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetfieTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetfieTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetfieTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak GGS_ipic_31__38_RetfieTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetfieTerminator_2E_weak result ;
  const GGS_ipic_31__38_RetfieTerminator_2E_weak * p = (const GGS_ipic_31__38_RetfieTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetfieTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetfieTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_ipic_31__38_JumpTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_JumpTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38_JumpTerminator_2E_weak::GGS_ipic_31__38_JumpTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak & GGS_ipic_31__38_JumpTerminator_2E_weak::operator = (const GGS_ipic_31__38_JumpTerminator & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak::GGS_ipic_31__38_JumpTerminator_2E_weak (const GGS_ipic_31__38_JumpTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak GGS_ipic_31__38_JumpTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_JumpTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator GGS_ipic_31__38_JumpTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_JumpTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_JumpTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator GGS_ipic_31__38_JumpTerminator_2E_weak::bang_ipic_31__38_JumpTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_JumpTerminator result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_JumpTerminator) ;
      result = GGS_ipic_31__38_JumpTerminator ((cPtr_ipic_31__38_JumpTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18JumpTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2E_weak ("ipic18JumpTerminator.weak",
                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_JumpTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_JumpTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_JumpTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak GGS_ipic_31__38_JumpTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_JumpTerminator_2E_weak result ;
  const GGS_ipic_31__38_JumpTerminator_2E_weak * p = (const GGS_ipic_31__38_JumpTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_JumpTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18JumpTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak & GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::operator = (const GGS_ipic_31__38_ComputedGotoTerminator & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (const GGS_ipic_31__38_ComputedGotoTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedGotoTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ComputedGotoTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ComputedGotoTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::bang_ipic_31__38_ComputedGotoTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ComputedGotoTerminator result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedGotoTerminator) ;
      result = GGS_ipic_31__38_ComputedGotoTerminator ((cPtr_ipic_31__38_ComputedGotoTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedGotoTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2E_weak ("ipic18ComputedGotoTerminator.weak",
                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedGotoTerminator_2E_weak result ;
  const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak * p = (const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedGotoTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

