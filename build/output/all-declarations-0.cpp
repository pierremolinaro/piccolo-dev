#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                              const GGS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                        const GGS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement__32_lstringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @_32_lstringlist
//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    const GGS__32_lstringlist_2E_element element (p->mObject.mProperty_mValue_30_, p->mObject.mProperty_mValue_31_) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_, in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__32_lstringlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS__32_lstringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::description (String & ioString,
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
      ioString.appendString ("mValue0:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_30_.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue1:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_31_.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element element (inOperand0, inOperand1) ;
  GGS__32_lstringlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
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

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
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

GGS__32_lstringlist GGS__32_lstringlist::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
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

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssignOperation (const GGS__32_lstringlist inList,
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

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ = inOperand ;
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
  
GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ ;
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

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ = inOperand ;
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
  
GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ ;
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
// Down Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_lstringlist::DownEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element DownEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_lstringlist::UpEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element UpEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @2lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  const GGS__32_lstringlist * p = (const GGS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction::GGS_midrange_5F_intermediate_5F_instruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_midrange_5F_intermediate_5F_instruction::
midrange_5F_intermediate_5F_instruction_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction::GGS_midrange_5F_intermediate_5F_instruction (const cPtr_midrange_5F_intermediate_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction::cPtr_midrange_5F_intermediate_5F_instruction (Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ("midrange_intermediate_instruction",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction GGS_midrange_5F_intermediate_5F_instruction::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction result ;
  const GGS_midrange_5F_intermediate_5F_instruction * p = (const GGS_midrange_5F_intermediate_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_2E_weak GGS_midrange_5F_intermediate_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction GGS_midrange_5F_intermediate_5F_instruction_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction * p = (cPtr_midrange_5F_intermediate_5F_instruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction GGS_midrange_5F_intermediate_5F_instruction_2E_weak::bang_midrange_5F_intermediate_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction) ;
      result = GGS_midrange_5F_intermediate_5F_instruction ((cPtr_midrange_5F_intermediate_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2E_weak ("midrange_intermediate_instruction.weak",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_2E_weak GGS_midrange_5F_intermediate_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@midrange_5F_intermediate_5F_instructionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_midrange_5F_intermediate_5F_instructionList : public cCollectionElement {
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_intermediate_5F_instructionList::cCollectionElement_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_intermediate_5F_instructionList::cCollectionElement_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_midrange_5F_intermediate_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_midrange_5F_intermediate_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_midrange_5F_intermediate_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @midrange_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList::GGS_midrange_5F_intermediate_5F_instructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList::GGS_midrange_5F_intermediate_5F_instructionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (cCollectionElement_midrange_5F_intermediate_5F_instructionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
    const GGS_midrange_5F_intermediate_5F_instructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_intermediate_5F_instructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_midrange_5F_intermediate_5F_instructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList::description (String & ioString,
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

GGS_midrange_5F_intermediate_5F_instructionList GGS_midrange_5F_intermediate_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList GGS_midrange_5F_intermediate_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList::plusPlusAssignOperation (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList GGS_midrange_5F_intermediate_5F_instructionList::class_func_listWithValue (const GGS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instructionList_2E_element element (inOperand0) ;
  GGS_midrange_5F_intermediate_5F_instructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList::addAssignOperation (const GGS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList::setter_append (const GGS_midrange_5F_intermediate_5F_instruction inOperand0,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList::setter_insertAtIndex (const GGS_midrange_5F_intermediate_5F_instruction inOperand0,
                                                                            const GGS_uint inInsertionIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instructionList_2E_element newElement (inOperand0) ;
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

void GGS_midrange_5F_intermediate_5F_instructionList::setter_removeAtIndex (GGS_midrange_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_midrange_5F_intermediate_5F_instructionList::setter_popFirst (GGS_midrange_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_midrange_5F_intermediate_5F_instructionList::setter_popLast (GGS_midrange_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_midrange_5F_intermediate_5F_instructionList::method_first (GGS_midrange_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_midrange_5F_intermediate_5F_instructionList::method_last (GGS_midrange_5F_intermediate_5F_instruction & outOperand0,
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

GGS_midrange_5F_intermediate_5F_instructionList GGS_midrange_5F_intermediate_5F_instructionList::add_operation (const GGS_midrange_5F_intermediate_5F_instructionList & inOperand,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instructionList result ;
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

GGS_midrange_5F_intermediate_5F_instructionList GGS_midrange_5F_intermediate_5F_instructionList::subList (const int32_t inStart,
                                                                                                          const int32_t inLength,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instructionList result ;
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

GGS_midrange_5F_intermediate_5F_instructionList GGS_midrange_5F_intermediate_5F_instructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList GGS_midrange_5F_intermediate_5F_instructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList GGS_midrange_5F_intermediate_5F_instructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList::plusAssignOperation (const GGS_midrange_5F_intermediate_5F_instructionList inList,
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

void GGS_midrange_5F_intermediate_5F_instructionList::setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_instruction inOperand,
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
  
GGS_midrange_5F_intermediate_5F_instruction GGS_midrange_5F_intermediate_5F_instructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction result ;
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
// Down Enumerator for @midrange_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_intermediate_5F_instructionList::DownEnumerator_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList_2E_element DownEnumerator_midrange_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction DownEnumerator_midrange_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @midrange_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_intermediate_5F_instructionList::UpEnumerator_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList_2E_element UpEnumerator_midrange_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction UpEnumerator_midrange_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList ("midrange_intermediate_instructionList",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList GGS_midrange_5F_intermediate_5F_instructionList::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instructionList result ;
  const GGS_midrange_5F_intermediate_5F_instructionList * p = (const GGS_midrange_5F_intermediate_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_NULL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_NULL::objectCompare (const GGS_midrange_5F_intermediate_5F_NULL & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_NULL::GGS_midrange_5F_intermediate_5F_NULL (void) :
GGS_midrange_5F_intermediate_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL GGS_midrange_5F_intermediate_5F_NULL::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_NULL * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_NULL_init (inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_NULL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::
midrange_5F_intermediate_5F_NULL_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL::GGS_midrange_5F_intermediate_5F_NULL (const cPtr_midrange_5F_intermediate_5F_NULL * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_NULL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL GGS_midrange_5F_intermediate_5F_NULL::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_NULL result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_NULL class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_NULL::cPtr_midrange_5F_intermediate_5F_NULL (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_NULL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;
}

void cPtr_midrange_5F_intermediate_5F_NULL::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@midrange_intermediate_NULL]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_NULL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_NULL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_NULL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ("midrange_intermediate_NULL",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_NULL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_NULL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_NULL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL GGS_midrange_5F_intermediate_5F_NULL::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_NULL result ;
  const GGS_midrange_5F_intermediate_5F_NULL * p = (const GGS_midrange_5F_intermediate_5F_NULL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_NULL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_NULL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_NULL_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_NULL_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_NULL_2E_weak::GGS_midrange_5F_intermediate_5F_NULL_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL_2E_weak & GGS_midrange_5F_intermediate_5F_NULL_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_NULL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL_2E_weak::GGS_midrange_5F_intermediate_5F_NULL_2E_weak (const GGS_midrange_5F_intermediate_5F_NULL & inSource) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL_2E_weak GGS_midrange_5F_intermediate_5F_NULL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_NULL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL GGS_midrange_5F_intermediate_5F_NULL_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_NULL result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_NULL * p = (cPtr_midrange_5F_intermediate_5F_NULL *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_NULL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL GGS_midrange_5F_intermediate_5F_NULL_2E_weak::bang_midrange_5F_intermediate_5F_NULL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_NULL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_NULL) ;
      result = GGS_midrange_5F_intermediate_5F_NULL ((cPtr_midrange_5F_intermediate_5F_NULL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_NULL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL_2E_weak ("midrange_intermediate_NULL.weak",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_NULL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_NULL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_NULL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL_2E_weak GGS_midrange_5F_intermediate_5F_NULL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_NULL_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_NULL_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_NULL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_NULL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_NULL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_pseudo_5F_ORG reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (void) :
GGS_midrange_5F_intermediate_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::
init_21_ (const GGS_uint & in_mOrigin,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_pseudo_5F_ORG_init_21_ (in_mOrigin, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::
midrange_5F_intermediate_5F_pseudo_5F_ORG_init_21_ (const GGS_uint & in_mOrigin,
                                                    Compiler * /* inCompiler */) {
  mProperty_mOrigin = in_mOrigin ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::class_func_new (const GGS_uint & in_mOrigin,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (in_mOrigin,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::readProperty_mOrigin (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
    return p->mProperty_mOrigin ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_pseudo_ORG class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOrigin () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (const GGS_uint & in_mOrigin,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOrigin () {
  mProperty_mOrigin = in_mOrigin ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;
}

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_pseudo_ORG:") ;
  mProperty_mOrigin.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (mProperty_mOrigin, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOrigin.printNonNullClassInstanceProperties ("mOrigin") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_pseudo_ORG generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ("midrange_intermediate_pseudo_ORG",
                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG result ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG * p = (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_pseudo_ORG", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak & GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inSource) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::bang_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
      result = GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_pseudo_ORG.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak ("midrange_intermediate_pseudo_ORG.weak",
                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_pseudo_ORG.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::bang_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_pseudo_LABEL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ("midrange_intermediate_pseudo_LABEL.weak",
                                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_pseudo_LABEL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_actualInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (const GGS_midrange_5F_intermediate_5F_actualInstruction & inSource) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_actualInstruction GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_actualInstruction result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_actualInstruction * p = (cPtr_midrange_5F_intermediate_5F_actualInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_actualInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_actualInstruction GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::bang_midrange_5F_intermediate_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_actualInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
      result = GGS_midrange_5F_intermediate_5F_actualInstruction ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_actualInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak ("midrange_intermediate_actualInstruction.weak",
                                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_actualInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum midrange_instruction_FD_base_code
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_ADDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_ANDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_COMF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DECF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DECFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INCFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_IORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_RLF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_RRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SUBWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SWAPF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
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

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_COMF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isRLF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RLF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isRRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SWAPF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::description (String & ioString,
                                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_instruction_FD_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_instruction_5F_FD_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::objectCompare (const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const {
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
//     @midrange_instruction_FD_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code ("midrange_instruction_FD_base_code",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code * p = (const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FD_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FD result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_FD (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_FD ((cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_FD.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak ("midrange_intermediate_instruction_FD.weak",
                                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum midrange_F_instruction_base_code
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::GGS_midrange_5F_F_5F_instruction_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_F_5F_instruction_5F_base_5F_code GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_F_5F_instruction_5F_base_5F_code GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_midrange_5F_F_5F_instruction_5F_base_5F_code [3] = {
  "(not built)",
  "CLRF",
  "MOVWF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_F_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_F_5F_instruction_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @midrange_F_instruction_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code ("midrange_F_instruction_base_code",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_F_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_F_5F_instruction_5F_base_5F_code GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code * p = (const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_F_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_F result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_F (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_F ((cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_F.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak ("midrange_intermediate_instruction_F.weak",
                                                                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_F.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum midrange_bit_oriented_op
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bit_5F_oriented_5F_op::GGS_midrange_5F_bit_5F_oriented_5F_op (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bit_5F_oriented_5F_op GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bit_5F_oriented_5F_op GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BSF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_midrange_5F_bit_5F_oriented_5F_op [3] = {
  "(not built)",
  "BCF",
  "BSF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BSF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_bit_5F_oriented_5F_op::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_bit_oriented_op: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_bit_5F_oriented_5F_op [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @midrange_bit_oriented_op generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_bit_5F_oriented_5F_op ("midrange_bit_oriented_op",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bit_5F_oriented_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bit_5F_oriented_5F_op GGS_midrange_5F_bit_5F_oriented_5F_op::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_bit_5F_oriented_5F_op result ;
  const GGS_midrange_5F_bit_5F_oriented_5F_op * p = (const GGS_midrange_5F_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FB result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_FB (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_FB ((cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_FB.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak ("midrange_intermediate_instruction_FB.weak",
                                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_BitTestSkip.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ("midrange_intermediate_instruction_BitTestSkip.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_BitTestSkip.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum midrange_call_goto_bit
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_call_5F_goto_5F_bit::GGS_midrange_5F_call_5F_goto_5F_bit (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_call_5F_goto_5F_bit GGS_midrange_5F_call_5F_goto_5F_bit::class_func_set (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_call_5F_goto_5F_bit result ;
  result.mEnum = Enumeration::enum_set ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_call_5F_goto_5F_bit GGS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_call_5F_goto_5F_bit result ;
  result.mEnum = Enumeration::enum_clear ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_call_5F_goto_5F_bit GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_call_5F_goto_5F_bit result ;
  result.mEnum = Enumeration::enum_noChange ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_midrange_5F_call_5F_goto_5F_bit [4] = {
  "(not built)",
  "set",
  "clear",
  "noChange"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_call_5F_goto_5F_bit::getter_isSet (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_set == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_call_5F_goto_5F_bit::getter_isClear (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_clear == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_call_5F_goto_5F_bit::getter_isNoChange (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noChange == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_call_5F_goto_5F_bit::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_call_goto_bit: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_call_5F_goto_5F_bit [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_call_5F_goto_5F_bit::objectCompare (const GGS_midrange_5F_call_5F_goto_5F_bit & inOperand) const {
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
//     @midrange_call_goto_bit generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ("midrange_call_goto_bit",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_call_5F_goto_5F_bit::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_call_5F_goto_5F_bit::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_call_5F_goto_5F_bit (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_call_5F_goto_5F_bit GGS_midrange_5F_call_5F_goto_5F_bit::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_call_5F_goto_5F_bit result ;
  const GGS_midrange_5F_call_5F_goto_5F_bit * p = (const GGS_midrange_5F_call_5F_goto_5F_bit *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_call_5F_goto_5F_bit *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_call_goto_bit", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_JUMP_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP_2E_weak & GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (const GGS_midrange_5F_intermediate_5F_JUMP & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP_2E_weak GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_JUMP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_JUMP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_JUMP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::bang_midrange_5F_intermediate_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
      result = GGS_midrange_5F_intermediate_5F_JUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_JUMP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2E_weak ("midrange_intermediate_JUMP.weak",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP_2E_weak GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_JUMP_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_JUMP_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_JUMP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_JUMP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JUMP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_GOTO_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO_2E_weak & GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (const GGS_midrange_5F_intermediate_5F_GOTO & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO_2E_weak GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_GOTO_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_GOTO result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_GOTO * p = (cPtr_midrange_5F_intermediate_5F_GOTO *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_GOTO (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::bang_midrange_5F_intermediate_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_GOTO) ;
      result = GGS_midrange_5F_intermediate_5F_GOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_GOTO.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2E_weak ("midrange_intermediate_GOTO.weak",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO_2E_weak GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_GOTO_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_GOTO_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_GOTO_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_GOTO_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_GOTO.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_CALL_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_CALL_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_CALL_2E_weak::GGS_midrange_5F_intermediate_5F_CALL_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL_2E_weak & GGS_midrange_5F_intermediate_5F_CALL_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL_2E_weak::GGS_midrange_5F_intermediate_5F_CALL_2E_weak (const GGS_midrange_5F_intermediate_5F_CALL & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL_2E_weak GGS_midrange_5F_intermediate_5F_CALL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_CALL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL GGS_midrange_5F_intermediate_5F_CALL_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_CALL result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_CALL * p = (cPtr_midrange_5F_intermediate_5F_CALL *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_CALL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL GGS_midrange_5F_intermediate_5F_CALL_2E_weak::bang_midrange_5F_intermediate_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_CALL) ;
      result = GGS_midrange_5F_intermediate_5F_CALL ((cPtr_midrange_5F_intermediate_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_CALL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2E_weak ("midrange_intermediate_CALL.weak",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_CALL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_CALL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_CALL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL_2E_weak GGS_midrange_5F_intermediate_5F_CALL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_CALL_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_CALL_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_CALL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_CALL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_CALL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_JSR_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_JSR_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_JSR_2E_weak::GGS_midrange_5F_intermediate_5F_JSR_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR_2E_weak & GGS_midrange_5F_intermediate_5F_JSR_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR_2E_weak::GGS_midrange_5F_intermediate_5F_JSR_2E_weak (const GGS_midrange_5F_intermediate_5F_JSR & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR_2E_weak GGS_midrange_5F_intermediate_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR GGS_midrange_5F_intermediate_5F_JSR_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_JSR result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_JSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR GGS_midrange_5F_intermediate_5F_JSR_2E_weak::bang_midrange_5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_JSR) ;
      result = GGS_midrange_5F_intermediate_5F_JSR ((cPtr_midrange_5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_JSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2E_weak ("midrange_intermediate_JSR.weak",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR_2E_weak GGS_midrange_5F_intermediate_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_JSR_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_JSR_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ((cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_CLRWDT.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak ("midrange_intermediate_instruction_CLRWDT.weak",
                                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRWDT.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW ((cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_CLRW.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak ("midrange_intermediate_instruction_CLRW.weak",
                                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRW.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_NOP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_NOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_NOP ((cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_NOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak ("midrange_intermediate_instruction_NOP.weak",
                                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_NOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN ((cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_RETURN.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak ("midrange_intermediate_instruction_RETURN.weak",
                                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETURN.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ((cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_RETFIE.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak ("midrange_intermediate_instruction_RETFIE.weak",
                                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETFIE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ((cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_SLEEP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak ("midrange_intermediate_instruction_SLEEP.weak",
                                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_SLEEP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum midrange_literal_instruction_opcode
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode::GGS_midrange_5F_literal_5F_instruction_5F_opcode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ADDLW (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_ADDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_ANDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_IORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_MOVLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_RETLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_SUBLW (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_SUBLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_literal_5F_instruction_5F_opcode result ;
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

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isADDLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isRETLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RETLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isSUBLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_literal_5F_instruction_5F_opcode::description (String & ioString,
                                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_literal_instruction_opcode: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_literal_5F_instruction_5F_opcode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_literal_5F_instruction_5F_opcode::objectCompare (const GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand) const {
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
//     @midrange_literal_instruction_opcode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_literal_5F_instruction_5F_opcode ("midrange_literal_instruction_opcode",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_literal_5F_instruction_5F_opcode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_literal_5F_instruction_5F_opcode::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  const GGS_midrange_5F_literal_5F_instruction_5F_opcode * p = (const GGS_midrange_5F_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ("midrange_intermediate_instruction_literalOperation.weak",
                                                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::bang_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
      result = GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP ((cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_MNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ("midrange_intermediate_instruction_MNOP.weak",
                                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (isValid ()) {
    const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::bang_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
      result = GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_incDecRegisterInCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ("midrange_intermediate_incDecRegisterInCondition.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak * p = (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_incDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//Class for element of '@ipic_31__38_BlockList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ipic_31__38_BlockList : public cCollectionElement {
  public: GGS_ipic_31__38_BlockList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ipic_31__38_BlockList (const GGS_ipic_31__38_Block & in_mBlock
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_BlockList::cCollectionElement_ipic_31__38_BlockList (const GGS_ipic_31__38_Block & in_mBlock
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBlock) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_BlockList::cCollectionElement_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ipic_31__38_BlockList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ipic_31__38_BlockList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ipic_31__38_BlockList (mObject.mProperty_mBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ipic_31__38_BlockList
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList::GGS_ipic_31__38_BlockList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList::GGS_ipic_31__38_BlockList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    const GGS_ipic_31__38_BlockList_2E_element element (p->mObject.mProperty_mBlock) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_ipic_31__38_Block & in_mBlock
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_BlockList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (in_mBlock COMMA_THERE)) ;
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

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
// @ipic_31__38_AbstractBlockTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractBlockTerminator::objectCompare (const GGS_ipic_31__38_AbstractBlockTerminator & inOperand) const {
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

GGS_ipic_31__38_AbstractBlockTerminator::GGS_ipic_31__38_AbstractBlockTerminator (void) :
AC_GALGAS_reference_class () {
}


void cPtr_ipic_31__38_AbstractBlockTerminator::
ipic_31__38_AbstractBlockTerminator_init_21_ (const GGS_location & in_mInstructionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator::GGS_ipic_31__38_AbstractBlockTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_AbstractBlockTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_ipic_31__38_AbstractBlockTerminator::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18AbstractBlockTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractBlockTerminator::cPtr_ipic_31__38_AbstractBlockTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractBlockTerminator::cPtr_ipic_31__38_AbstractBlockTerminator (const GGS_location & in_mInstructionLocation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractBlockTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ("ipic18AbstractBlockTerminator",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractBlockTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractBlockTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractBlockTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator GGS_ipic_31__38_AbstractBlockTerminator::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator result ;
  const GGS_ipic_31__38_AbstractBlockTerminator * p = (const GGS_ipic_31__38_AbstractBlockTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractBlockTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractBlockTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_SingleInstructionTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SingleInstructionTerminator::objectCompare (const GGS_ipic_31__38_SingleInstructionTerminator & inOperand) const {
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

GGS_ipic_31__38_SingleInstructionTerminator::GGS_ipic_31__38_SingleInstructionTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}


void cPtr_ipic_31__38_SingleInstructionTerminator::
ipic_31__38_SingleInstructionTerminator_init_21_ (const GGS_location & in_mInstructionLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator::GGS_ipic_31__38_SingleInstructionTerminator (const cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SingleInstructionTerminator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SingleInstructionTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SingleInstructionTerminator::cPtr_ipic_31__38_SingleInstructionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SingleInstructionTerminator::cPtr_ipic_31__38_SingleInstructionTerminator (const GGS_location & in_mInstructionLocation,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18SingleInstructionTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ("ipic18SingleInstructionTerminator",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SingleInstructionTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SingleInstructionTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SingleInstructionTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_SingleInstructionTerminator::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SingleInstructionTerminator result ;
  const GGS_ipic_31__38_SingleInstructionTerminator * p = (const GGS_ipic_31__38_SingleInstructionTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SingleInstructionTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SingleInstructionTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_SequentialInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SequentialInstruction::objectCompare (const GGS_ipic_31__38_SequentialInstruction & inOperand) const {
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

GGS_ipic_31__38_SequentialInstruction::GGS_ipic_31__38_SequentialInstruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_ipic_31__38_SequentialInstruction::
ipic_31__38_SequentialInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction::GGS_ipic_31__38_SequentialInstruction (const cPtr_ipic_31__38_SequentialInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SequentialInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_ipic_31__38_SequentialInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_SequentialInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SequentialInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SequentialInstruction::cPtr_ipic_31__38_SequentialInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SequentialInstruction::cPtr_ipic_31__38_SequentialInstruction (const GGS_location & in_mInstructionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18SequentialInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ("ipic18SequentialInstruction",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SequentialInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SequentialInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SequentialInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstruction::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction result ;
  const GGS_ipic_31__38_SequentialInstruction * p = (const GGS_ipic_31__38_SequentialInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SequentialInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
// @ipic_31__38_AbstractConditionTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractConditionTerminator::objectCompare (const GGS_ipic_31__38_AbstractConditionTerminator & inOperand) const {
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

GGS_ipic_31__38_AbstractConditionTerminator::GGS_ipic_31__38_AbstractConditionTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}


void cPtr_ipic_31__38_AbstractConditionTerminator::
ipic_31__38_AbstractConditionTerminator_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator::GGS_ipic_31__38_AbstractConditionTerminator (const cPtr_ipic_31__38_AbstractConditionTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_AbstractConditionTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_AbstractConditionTerminator::readProperty_mSingleInstructionTerminatorIfConditionTrue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38_SingleInstructionTerminator () ;
  }else{
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    return p->mProperty_mSingleInstructionTerminatorIfConditionTrue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_AbstractConditionTerminator::readProperty_mSingleInstructionTerminatorIfConditionFalse (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38_SingleInstructionTerminator () ;
  }else{
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    return p->mProperty_mSingleInstructionTerminatorIfConditionFalse ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18AbstractConditionTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractConditionTerminator::cPtr_ipic_31__38_AbstractConditionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE),
mProperty_mSingleInstructionTerminatorIfConditionTrue (),
mProperty_mSingleInstructionTerminatorIfConditionFalse () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractConditionTerminator::cPtr_ipic_31__38_AbstractConditionTerminator (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                            const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSingleInstructionTerminatorIfConditionTrue (),
mProperty_mSingleInstructionTerminatorIfConditionFalse () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mSingleInstructionTerminatorIfConditionTrue.printNonNullClassInstanceProperties ("mSingleInstructionTerminatorIfConditionTrue") ;
    mProperty_mSingleInstructionTerminatorIfConditionFalse.printNonNullClassInstanceProperties ("mSingleInstructionTerminatorIfConditionFalse") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractConditionTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ("ipic18AbstractConditionTerminator",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractConditionTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractConditionTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractConditionTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator GGS_ipic_31__38_AbstractConditionTerminator::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractConditionTerminator result ;
  const GGS_ipic_31__38_AbstractConditionTerminator * p = (const GGS_ipic_31__38_AbstractConditionTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractConditionTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractConditionTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//Class for element of '@ipic_31__38_SequentialInstructionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ipic_31__38_SequentialInstructionList : public cCollectionElement {
  public: GGS_ipic_31__38_SequentialInstructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                    const GGS_uint & in_mMin,
                                                                    const GGS_uint & in_mMax
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_SequentialInstructionList::cCollectionElement_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                                                    const GGS_uint & in_mMin,
                                                                                                                    const GGS_uint & in_mMax
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction, in_mMin, in_mMax) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_SequentialInstructionList::cCollectionElement_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction, inElement.mProperty_mMin, inElement.mProperty_mMax) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ipic_31__38_SequentialInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ipic_31__38_SequentialInstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ipic_31__38_SequentialInstructionList (mObject.mProperty_mInstruction, mObject.mProperty_mMin, mObject.mProperty_mMax COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ipic_31__38_SequentialInstructionList
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList::GGS_ipic_31__38_SequentialInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList::GGS_ipic_31__38_SequentialInstructionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    const GGS_ipic_31__38_SequentialInstructionList_2E_element element (p->mObject.mProperty_mInstruction, p->mObject.mProperty_mMin, p->mObject.mProperty_mMax) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                           const GGS_uint & in_mMin,
                                                                           const GGS_uint & in_mMax
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (in_mInstruction, in_mMin, in_mMax COMMA_THERE)) ;
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

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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
//  Map type @configFieldMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap::GGS_configFieldMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap::~ GGS_configFieldMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap::GGS_configFieldMap (const GGS_configFieldMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap & GGS_configFieldMap::operator = (const GGS_configFieldMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_configFieldMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_configFieldMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configFieldMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configFieldMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configFieldMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configFieldMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_configFieldMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_configFieldMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configFieldMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configFieldMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::performInsert (const GGS_configFieldMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>
GGS_configFieldMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_configFieldMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>>
GGS_configFieldMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_configFieldMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_ GGS_configFieldMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configFieldMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_configFieldMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_configFieldMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRegisterName = info->mProperty_mRegisterName ;
      element.mProperty_mMaskValue = info->mProperty_mMaskValue ;
      element.mProperty_mDescription = info->mProperty_mDescription ;
      element.mProperty_mFieldSettingMap = info->mProperty_mFieldSettingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::class_func_mapWithMapToOverride (const GGS_configFieldMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_configFieldMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configFieldMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_configFieldMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_lstring inArgument0,
                                           GGS_luint inArgument1,
                                           GGS_lstring inArgument2,
                                           GGS_fieldSettingMap inArgument3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_configFieldMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' configuration field is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_lstring & outArgument0,
                                           GGS_luint & outArgument1,
                                           GGS_lstring & outArgument2,
                                           GGS_fieldSettingMap & outArgument3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' configuration field is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mRegisterName ;
    outArgument1 = info->mProperty_mMaskValue ;
    outArgument2 = info->mProperty_mDescription ;
    outArgument3 = info->mProperty_mFieldSettingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configFieldMap::getter_mRegisterNameForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configFieldMap::getter_mMaskValueForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (key) ;
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

GGS_lstring GGS_configFieldMap::getter_mDescriptionForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (key) ;
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

GGS_fieldSettingMap GGS_configFieldMap::getter_mFieldSettingMapForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_fieldSettingMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (key) ;
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

void GGS_configFieldMap::setter_setMRegisterNameForKey (GGS_lstring inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::setter_setMMaskValueForKey (GGS_luint inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_configFieldMap::setter_setMDescriptionForKey (GGS_lstring inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_configFieldMap::setter_setMFieldSettingMapForKey (GGS_fieldSettingMap inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_configFieldMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>> & inArray,
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
    ioString.appendString ("mRegisterName:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterName.description (ioString, inIndentation + 1) ;
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

void GGS_configFieldMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>> array = sortedInfoArray () ;
    GGS_configFieldMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_configFieldMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_configFieldMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @configFieldMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_configFieldMap::DownEnumerator_configFieldMap (const GGS_configFieldMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element DownEnumerator_configFieldMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configFieldMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configFieldMap::current_mRegisterName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_configFieldMap::current_mMaskValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configFieldMap::current_mDescription (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap DownEnumerator_configFieldMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @configFieldMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_configFieldMap::UpEnumerator_configFieldMap (const GGS_configFieldMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element UpEnumerator_configFieldMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configFieldMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configFieldMap::current_mRegisterName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_configFieldMap::current_mMaskValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configFieldMap::current_mDescription (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap UpEnumerator_configFieldMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFieldSettingMap ;
}


//--------------------------------------------------------------------------------------------------
//     @configFieldMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configFieldMap ("configFieldMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configFieldMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_configFieldMap result ;
  const GGS_configFieldMap * p = (const GGS_configFieldMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @fieldSettingMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap::GGS_fieldSettingMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap::~ GGS_fieldSettingMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap::GGS_fieldSettingMap (const GGS_fieldSettingMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap & GGS_fieldSettingMap::operator = (const GGS_fieldSettingMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap GGS_fieldSettingMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_fieldSettingMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap GGS_fieldSettingMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_fieldSettingMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fieldSettingMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fieldSettingMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_fieldSettingMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_fieldSettingMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_fieldSettingMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_fieldSettingMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fieldSettingMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_fieldSettingMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap::performInsert (const GGS_fieldSettingMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_fieldSettingMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element>
GGS_fieldSettingMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_fieldSettingMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element>>
GGS_fieldSettingMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_fieldSettingMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element_3F_ GGS_fieldSettingMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_fieldSettingMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_fieldSettingMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_fieldSettingMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mValue = info->mProperty_mValue ;
      element.mProperty_mMask = info->mProperty_mMask ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap GGS_fieldSettingMap::class_func_mapWithMapToOverride (const GGS_fieldSettingMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_fieldSettingMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_fieldSettingMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap GGS_fieldSettingMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_fieldSettingMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap::setter_insertKey (GGS_lstring inLKey,
                                            GGS_uint inArgument0,
                                            GGS_uint inArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_fieldSettingMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' configuration register setting is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap::method_searchKey (GGS_lstring inLKey,
                                            GGS_uint & outArgument0,
                                            GGS_uint & outArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' configuration register setting is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mValue ;
    outArgument1 = info->mProperty_mMask ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_fieldSettingMap::getter_mValueForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_fieldSettingMap::getter_mMaskForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMask ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap::setter_setMValueForKey (GGS_uint inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_fieldSettingMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap::setter_setMMaskForKey (GGS_uint inValue,
                                                 GGS_string inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_fieldSettingMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMask = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_fieldSettingMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element>> & inArray,
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
    ioString.appendString ("mValue:") ;
    inArray (i COMMA_HERE)->mProperty_mValue.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mMask:") ;
    inArray (i COMMA_HERE)->mProperty_mMask.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element>> array = sortedInfoArray () ;
    GGS_fieldSettingMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_fieldSettingMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_fieldSettingMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @fieldSettingMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_fieldSettingMap::DownEnumerator_fieldSettingMap (const GGS_fieldSettingMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element DownEnumerator_fieldSettingMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_fieldSettingMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_fieldSettingMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_fieldSettingMap::current_mMask (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMask ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @fieldSettingMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_fieldSettingMap::UpEnumerator_fieldSettingMap (const GGS_fieldSettingMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element UpEnumerator_fieldSettingMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_fieldSettingMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_fieldSettingMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_fieldSettingMap::current_mMask (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMask ;
}


//--------------------------------------------------------------------------------------------------
//     @fieldSettingMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fieldSettingMap ("fieldSettingMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fieldSettingMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fieldSettingMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fieldSettingMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap GGS_fieldSettingMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_fieldSettingMap result ;
  const GGS_fieldSettingMap * p = (const GGS_fieldSettingMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fieldSettingMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction::objectCompare (const GGS_baseline_5F_assembly_5F_instruction & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction::GGS_baseline_5F_assembly_5F_instruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_baseline_5F_assembly_5F_instruction::
baseline_5F_assembly_5F_instruction_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction::GGS_baseline_5F_assembly_5F_instruction (const cPtr_baseline_5F_assembly_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction::cPtr_baseline_5F_assembly_5F_instruction (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ("baseline_assembly_instruction",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction GGS_baseline_5F_assembly_5F_instruction::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction result ;
  const GGS_baseline_5F_assembly_5F_instruction * p = (const GGS_baseline_5F_assembly_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_2E_weak::GGS_baseline_5F_assembly_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_2E_weak & GGS_baseline_5F_assembly_5F_instruction_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_2E_weak::GGS_baseline_5F_assembly_5F_instruction_2E_weak (const GGS_baseline_5F_assembly_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_2E_weak GGS_baseline_5F_assembly_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction GGS_baseline_5F_assembly_5F_instruction_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_instruction result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_instruction * p = (cPtr_baseline_5F_assembly_5F_instruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_instruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction GGS_baseline_5F_assembly_5F_instruction_2E_weak::bang_baseline_5F_assembly_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction) ;
      result = GGS_baseline_5F_assembly_5F_instruction ((cPtr_baseline_5F_assembly_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak ("baseline_assembly_instruction.weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_2E_weak GGS_baseline_5F_assembly_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_instruction_2E_weak * p = (const GGS_baseline_5F_assembly_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@baseline_5F_assembly_5F_instructionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_assembly_5F_instructionList : public cCollectionElement {
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_assembly_5F_instructionList::cCollectionElement_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_assembly_5F_instructionList::cCollectionElement_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_assembly_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_assembly_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_assembly_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @baseline_5F_assembly_5F_instructionList
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList::GGS_baseline_5F_assembly_5F_instructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList::GGS_baseline_5F_assembly_5F_instructionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    const GGS_baseline_5F_assembly_5F_instructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_assembly_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_instructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_baseline_5F_assembly_5F_instructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::description (String & ioString,
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

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::plusPlusAssignOperation (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::class_func_listWithValue (const GGS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instructionList_2E_element element (inOperand0) ;
  GGS_baseline_5F_assembly_5F_instructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::addAssignOperation (const GGS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::setter_append (const GGS_baseline_5F_assembly_5F_instruction inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::setter_insertAtIndex (const GGS_baseline_5F_assembly_5F_instruction inOperand0,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instructionList_2E_element newElement (inOperand0) ;
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

void GGS_baseline_5F_assembly_5F_instructionList::setter_removeAtIndex (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
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

void GGS_baseline_5F_assembly_5F_instructionList::setter_popFirst (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
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

void GGS_baseline_5F_assembly_5F_instructionList::setter_popLast (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
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

void GGS_baseline_5F_assembly_5F_instructionList::method_first (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
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

void GGS_baseline_5F_assembly_5F_instructionList::method_last (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
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

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::add_operation (const GGS_baseline_5F_assembly_5F_instructionList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instructionList result ;
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

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instructionList result ;
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

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::plusAssignOperation (const GGS_baseline_5F_assembly_5F_instructionList inList,
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

void GGS_baseline_5F_assembly_5F_instructionList::setter_setMInstructionAtIndex (GGS_baseline_5F_assembly_5F_instruction inOperand,
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
  
GGS_baseline_5F_assembly_5F_instruction GGS_baseline_5F_assembly_5F_instructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instruction result ;
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
// Down Enumerator for @baseline_5F_assembly_5F_instructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_baseline_5F_assembly_5F_instructionList::DownEnumerator_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element DownEnumerator_baseline_5F_assembly_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction DownEnumerator_baseline_5F_assembly_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @baseline_5F_assembly_5F_instructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_baseline_5F_assembly_5F_instructionList::UpEnumerator_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element UpEnumerator_baseline_5F_assembly_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction UpEnumerator_baseline_5F_assembly_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ("baseline_assembly_instructionList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instructionList result ;
  const GGS_baseline_5F_assembly_5F_instructionList * p = (const GGS_baseline_5F_assembly_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_ORG reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::GGS_baseline_5F_assembly_5F_pseudo_5F_ORG (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::
init_21_ (const GGS_uint & in_mOrigin,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_ORG_init_21_ (in_mOrigin, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::
baseline_5F_assembly_5F_pseudo_5F_ORG_init_21_ (const GGS_uint & in_mOrigin,
                                                Compiler * /* inCompiler */) {
  mProperty_mOrigin = in_mOrigin ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::GGS_baseline_5F_assembly_5F_pseudo_5F_ORG (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::class_func_new (const GGS_uint & in_mOrigin,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (in_mOrigin,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::readProperty_mOrigin (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
    return p->mProperty_mOrigin ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_ORG class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOrigin () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (const GGS_uint & in_mOrigin,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOrigin () {
  mProperty_mOrigin = in_mOrigin ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_pseudo_ORG:") ;
  mProperty_mOrigin.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (mProperty_mOrigin, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOrigin.printNonNullClassInstanceProperties ("mOrigin") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_ORG generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ("baseline_assembly_pseudo_ORG",
                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_ORG (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ORG", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inSource) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_ORG (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::bang_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_ORG ((cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_ORG.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak ("baseline_assembly_pseudo_ORG.weak",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ORG.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::bang_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ((cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_BEGINOFROUTINE.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak ("baseline_assembly_pseudo_BEGINOFROUTINE.weak",
                                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_BEGINOFROUTINE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::bang_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ((cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_ENDOFROUTINE.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak ("baseline_assembly_pseudo_ENDOFROUTINE.weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ENDOFROUTINE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::bang_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL ((cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_LABEL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak ("baseline_assembly_pseudo_LABEL.weak",
                                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_LABEL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_actualInstruction::objectCompare (const GGS_baseline_5F_assembly_5F_actualInstruction & inOperand) const {
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

GGS_baseline_5F_assembly_5F_actualInstruction::GGS_baseline_5F_assembly_5F_actualInstruction (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}


void cPtr_baseline_5F_assembly_5F_actualInstruction::
baseline_5F_assembly_5F_actualInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction::GGS_baseline_5F_assembly_5F_actualInstruction (const cPtr_baseline_5F_assembly_5F_actualInstruction * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_assembly_5F_actualInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_assembly_5F_actualInstruction * p = (cPtr_baseline_5F_assembly_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_actualInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_actualInstruction::cPtr_baseline_5F_assembly_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_actualInstruction::cPtr_baseline_5F_assembly_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_actualInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ("baseline_assembly_actualInstruction",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction GGS_baseline_5F_assembly_5F_actualInstruction::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_actualInstruction result ;
  const GGS_baseline_5F_assembly_5F_actualInstruction * p = (const GGS_baseline_5F_assembly_5F_actualInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak & GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_actualInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (const GGS_baseline_5F_assembly_5F_actualInstruction & inSource) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_actualInstruction result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_actualInstruction * p = (cPtr_baseline_5F_assembly_5F_actualInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_actualInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::bang_baseline_5F_assembly_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_actualInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
      result = GGS_baseline_5F_assembly_5F_actualInstruction ((cPtr_baseline_5F_assembly_5F_actualInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_actualInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak ("baseline_assembly_actualInstruction.weak",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak * p = (const GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_actualInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum baseline_instruction_FD_base_code
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_ADDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_ANDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_COMF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DECF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DECFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INCFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_IORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_RLF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_RRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SUBWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SWAPF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
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

static const char * gEnumNameArrayFor_baseline_5F_instruction_5F_FD_5F_base_5F_code [15] = {
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

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_COMF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isRLF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RLF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isRRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SWAPF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::description (String & ioString,
                                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_instruction_FD_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_instruction_5F_FD_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::objectCompare (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const {
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
//     @baseline_instruction_FD_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ("baseline_instruction_FD_base_code",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code * p = (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression::GGS_baseline_5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression::GGS_baseline_5F_intermediate_5F_registerExpression (const GGS_baseline_5F_intermediate_5F_registerExpression & inSource) :
mProperty_mAssemblyString (inSource.mProperty_mAssemblyString),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression & GGS_baseline_5F_intermediate_5F_registerExpression::operator = (const GGS_baseline_5F_intermediate_5F_registerExpression & inSource) {
  mProperty_mAssemblyString = inSource.mProperty_mAssemblyString ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_registerExpression::init_21__21_ (const GGS_string & in_mAssemblyString,
                                                                                                                     const GGS_uint & in_mRegisterAddress,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_registerExpression::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression::GGS_baseline_5F_intermediate_5F_registerExpression (const GGS_string & inOperand0,
                                                                                                        const GGS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_registerExpression::class_func_new (const GGS_string & in_mAssemblyString,
                                                                                                                       const GGS_uint & in_mRegisterAddress,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_registerExpression::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_intermediate_registerExpression:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_registerExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ("baseline_intermediate_registerExpression",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_registerExpression::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_registerExpression result ;
  const GGS_baseline_5F_intermediate_5F_registerExpression * p = (const GGS_baseline_5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (const GGS_baseline_5F_assembly_5F_instruction_5F_FD & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FD GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_instruction_5F_FD (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FD GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::bang_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
      result = GGS_baseline_5F_assembly_5F_instruction_5F_FD ((cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_FD.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak ("baseline_assembly_instruction_FD.weak",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum baseline_F_instruction_base_code
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::GGS_baseline_5F_F_5F_instruction_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_F_5F_instruction_5F_base_5F_code [3] = {
  "(not built)",
  "CLRF",
  "MOVWF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_F_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_F_5F_instruction_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @baseline_F_instruction_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ("baseline_F_instruction_base_code",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_F_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code * p = (const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_F_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (const GGS_baseline_5F_assembly_5F_instruction_5F_F & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_F result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_F *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_instruction_5F_F (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::bang_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
      result = GGS_baseline_5F_assembly_5F_instruction_5F_F ((cPtr_baseline_5F_assembly_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_F.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak ("baseline_assembly_instruction_F.weak",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_F.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum baseline_bit_oriented_op
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op::GGS_baseline_5F_bit_5F_oriented_5F_op (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BSF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_bit_5F_oriented_5F_op [3] = {
  "(not built)",
  "BCF",
  "BSF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BSF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_bit_5F_oriented_5F_op::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_bit_oriented_op: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_bit_5F_oriented_5F_op [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @baseline_bit_oriented_op generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ("baseline_bit_oriented_op",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_bit_5F_oriented_5F_op::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_bit_5F_oriented_5F_op result ;
  const GGS_baseline_5F_bit_5F_oriented_5F_op * p = (const GGS_baseline_5F_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (const GGS_baseline_5F_assembly_5F_instruction_5F_FB & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FB GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_instruction_5F_FB (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FB GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::bang_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
      result = GGS_baseline_5F_assembly_5F_instruction_5F_FB ((cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_FB.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak ("baseline_assembly_instruction_FB.weak",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_bool & in_mSkipIfSet,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::
baseline_5F_assembly_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                         const GGS_bool & in_mSkipIfSet,
                                                                         const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                         const GGS_uint & in_mBitNumber,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                               const GGS_bool & in_mSkipIfSet,
                                                                                                                               const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                               const GGS_uint & in_mBitNumber,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                                                                  const GGS_bool & in_mSkipIfSet,
                                                                                                                  const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GGS_uint & in_mBitNumber,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_BitTestSkip:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_BitTestSkip generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ("baseline_assembly_instruction_BitTestSkip",
                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::bang_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
      result = GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ((cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_BitTestSkip.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak ("baseline_assembly_instruction_BitTestSkip.weak",
                                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_BitTestSkip.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_GOTO_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_GOTO_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_GOTO_2E_weak::GGS_baseline_5F_assembly_5F_GOTO_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO_2E_weak & GGS_baseline_5F_assembly_5F_GOTO_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO_2E_weak::GGS_baseline_5F_assembly_5F_GOTO_2E_weak (const GGS_baseline_5F_assembly_5F_GOTO & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO_2E_weak GGS_baseline_5F_assembly_5F_GOTO_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_GOTO_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO GGS_baseline_5F_assembly_5F_GOTO_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_GOTO result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_GOTO * p = (cPtr_baseline_5F_assembly_5F_GOTO *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_GOTO (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO GGS_baseline_5F_assembly_5F_GOTO_2E_weak::bang_baseline_5F_assembly_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
      result = GGS_baseline_5F_assembly_5F_GOTO ((cPtr_baseline_5F_assembly_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_GOTO.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO_2E_weak ("baseline_assembly_GOTO.weak",
                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_GOTO_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_GOTO_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_GOTO_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO_2E_weak GGS_baseline_5F_assembly_5F_GOTO_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_GOTO_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_GOTO_2E_weak * p = (const GGS_baseline_5F_assembly_5F_GOTO_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_GOTO_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_GOTO.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_SKIP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_SKIP::objectCompare (const GGS_baseline_5F_assembly_5F_SKIP & inOperand) const {
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

GGS_baseline_5F_assembly_5F_SKIP::GGS_baseline_5F_assembly_5F_SKIP (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP GGS_baseline_5F_assembly_5F_SKIP::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_SKIP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_SKIP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_SKIP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_SKIP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::
baseline_5F_assembly_5F_SKIP_init_21_ (const GGS_location & in_mInstructionLocation,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP::GGS_baseline_5F_assembly_5F_SKIP (const cPtr_baseline_5F_assembly_5F_SKIP * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_SKIP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP GGS_baseline_5F_assembly_5F_SKIP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_SKIP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_SKIP (in_mInstructionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_SKIP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_SKIP::cPtr_baseline_5F_assembly_5F_SKIP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_SKIP::cPtr_baseline_5F_assembly_5F_SKIP (const GGS_location & in_mInstructionLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_SKIP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

void cPtr_baseline_5F_assembly_5F_SKIP::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_SKIP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_SKIP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_SKIP (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_SKIP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_SKIP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ("baseline_assembly_SKIP",
                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_SKIP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_SKIP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_SKIP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP GGS_baseline_5F_assembly_5F_SKIP::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_SKIP result ;
  const GGS_baseline_5F_assembly_5F_SKIP * p = (const GGS_baseline_5F_assembly_5F_SKIP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_SKIP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_SKIP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_SKIP_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_SKIP_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_SKIP_2E_weak::GGS_baseline_5F_assembly_5F_SKIP_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP_2E_weak & GGS_baseline_5F_assembly_5F_SKIP_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_SKIP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP_2E_weak::GGS_baseline_5F_assembly_5F_SKIP_2E_weak (const GGS_baseline_5F_assembly_5F_SKIP & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP_2E_weak GGS_baseline_5F_assembly_5F_SKIP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_SKIP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP GGS_baseline_5F_assembly_5F_SKIP_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_SKIP result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_SKIP * p = (cPtr_baseline_5F_assembly_5F_SKIP *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_SKIP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP GGS_baseline_5F_assembly_5F_SKIP_2E_weak::bang_baseline_5F_assembly_5F_SKIP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_SKIP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_SKIP) ;
      result = GGS_baseline_5F_assembly_5F_SKIP ((cPtr_baseline_5F_assembly_5F_SKIP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_SKIP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP_2E_weak ("baseline_assembly_SKIP.weak",
                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_SKIP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_SKIP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_SKIP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP_2E_weak GGS_baseline_5F_assembly_5F_SKIP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_SKIP_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_SKIP_2E_weak * p = (const GGS_baseline_5F_assembly_5F_SKIP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_SKIP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_SKIP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_CALL_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_CALL_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_CALL_2E_weak::GGS_baseline_5F_assembly_5F_CALL_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL_2E_weak & GGS_baseline_5F_assembly_5F_CALL_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL_2E_weak::GGS_baseline_5F_assembly_5F_CALL_2E_weak (const GGS_baseline_5F_assembly_5F_CALL & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL_2E_weak GGS_baseline_5F_assembly_5F_CALL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_CALL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL GGS_baseline_5F_assembly_5F_CALL_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_CALL result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_CALL * p = (cPtr_baseline_5F_assembly_5F_CALL *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_CALL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL GGS_baseline_5F_assembly_5F_CALL_2E_weak::bang_baseline_5F_assembly_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_CALL) ;
      result = GGS_baseline_5F_assembly_5F_CALL ((cPtr_baseline_5F_assembly_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_CALL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL_2E_weak ("baseline_assembly_CALL.weak",
                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_CALL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_CALL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_CALL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL_2E_weak GGS_baseline_5F_assembly_5F_CALL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_CALL_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_CALL_2E_weak * p = (const GGS_baseline_5F_assembly_5F_CALL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_CALL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_CALL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum baseline_WO_OPERAND_group
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group::GGS_baseline_5F_WO_5F_OPERAND_5F_group (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_CLRW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_CLRW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_NOP (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_NOP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_CLRWDT (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_CLRWDT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_OPTION_5F_ (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_OPTION_5F_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_SLEEP (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_SLEEP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_WO_5F_OPERAND_5F_group [6] = {
  "(not built)",
  "CLRW",
  "NOP",
  "CLRWDT",
  "OPTION_",
  "SLEEP"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isCLRW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isNOP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_NOP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isCLRWDT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRWDT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isOPTION_5F_ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_OPTION_5F_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isSLEEP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SLEEP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_WO_5F_OPERAND_5F_group::description (String & ioString,
                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_WO_OPERAND_group: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_WO_5F_OPERAND_5F_group [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @baseline_WO_OPERAND_group generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ("baseline_WO_OPERAND_group",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_WO_5F_OPERAND_5F_group::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_WO_5F_OPERAND_5F_group::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_WO_5F_OPERAND_5F_group (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  const GGS_baseline_5F_WO_5F_OPERAND_5F_group * p = (const GGS_baseline_5F_WO_5F_OPERAND_5F_group *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_WO_5F_OPERAND_5F_group *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_WO_OPERAND_group", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak & GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_WO_5F_OPERAND (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::bang_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
      result = GGS_baseline_5F_assembly_5F_WO_5F_OPERAND ((cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_WO_OPERAND.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak ("baseline_assembly_WO_OPERAND.weak",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak * p = (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_WO_OPERAND.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_TRIS_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_TRIS_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_TRIS_2E_weak::GGS_baseline_5F_assembly_5F_TRIS_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS_2E_weak & GGS_baseline_5F_assembly_5F_TRIS_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_TRIS & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS_2E_weak::GGS_baseline_5F_assembly_5F_TRIS_2E_weak (const GGS_baseline_5F_assembly_5F_TRIS & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS_2E_weak GGS_baseline_5F_assembly_5F_TRIS_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_TRIS_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS GGS_baseline_5F_assembly_5F_TRIS_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_TRIS result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_TRIS (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS GGS_baseline_5F_assembly_5F_TRIS_2E_weak::bang_baseline_5F_assembly_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_TRIS result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
      result = GGS_baseline_5F_assembly_5F_TRIS ((cPtr_baseline_5F_assembly_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_TRIS.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS_2E_weak ("baseline_assembly_TRIS.weak",
                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_TRIS_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_TRIS_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_TRIS_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS_2E_weak GGS_baseline_5F_assembly_5F_TRIS_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_TRIS_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_TRIS_2E_weak * p = (const GGS_baseline_5F_assembly_5F_TRIS_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_TRIS_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_TRIS.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum baseline_literal_instruction_opcode
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode::GGS_baseline_5F_literal_5F_instruction_5F_opcode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_ANDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_IORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_MOVLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_RETLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_XORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_literal_5F_instruction_5F_opcode [6] = {
  "(not built)",
  "ANDLW",
  "IORLW",
  "MOVLW",
  "RETLW",
  "XORLW"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isRETLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RETLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_literal_5F_instruction_5F_opcode::description (String & ioString,
                                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_literal_instruction_opcode: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_literal_5F_instruction_5F_opcode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_literal_5F_instruction_5F_opcode::objectCompare (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand) const {
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
//     @baseline_literal_instruction_opcode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ("baseline_literal_instruction_opcode",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  const GGS_baseline_5F_literal_5F_instruction_5F_opcode * p = (const GGS_baseline_5F_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::bang_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
      result = GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation ((cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak ("baseline_assembly_instruction_literalOperation.weak",
                                                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::objectCompare (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inOperand) const {
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

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_bool & in_mIncrement,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_incDecRegisterInCondition_init_21__21__21__21_ (in_mInstructionLocation, in_mRegisterDescription, in_mIncrement, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::
baseline_5F_assembly_5F_incDecRegisterInCondition_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                        const GGS_bool & in_mIncrement,
                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                             const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                             const GGS_bool & in_mIncrement,
                                                                                                                             const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (in_mInstructionLocation, in_mRegisterDescription, in_mIncrement, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                                                                const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                const GGS_bool & in_mIncrement,
                                                                                                                const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_incDecRegisterInCondition:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_incDecRegisterInCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ("baseline_assembly_incDecRegisterInCondition",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak & GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inSource) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  if (isValid ()) {
    const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::bang_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
      result = GGS_baseline_5F_assembly_5F_incDecRegisterInCondition ((cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_incDecRegisterInCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak ("baseline_assembly_incDecRegisterInCondition.weak",
                                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak * p = (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_incDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @bitSliceTable
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable::GGS_bitSliceTable (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable::~ GGS_bitSliceTable (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable::GGS_bitSliceTable (const GGS_bitSliceTable & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable & GGS_bitSliceTable::operator = (const GGS_bitSliceTable & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::class_func_emptyMap (LOCATION_ARGS) {
  GGS_bitSliceTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bitSliceTable::getter_hasKey (const GGS_string & inKey
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bitSliceTable::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                  const GGS_uint & inLevel
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bitSliceTable::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bitSliceTable::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bitSliceTable::getter_locationForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_bitSliceTable::getter_keyList (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bitSliceTable::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_bitSliceTable_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::performInsert (const GGS_bitSliceTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_bitSliceTable_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element>
GGS_bitSliceTable::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_bitSliceTable::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element>>
GGS_bitSliceTable::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_bitSliceTable::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_ GGS_bitSliceTable
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bitSliceTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_bitSliceTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_bitSliceTable_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSliceIndex = info->mProperty_mSliceIndex ;
      element.mProperty_mSliceSize = info->mProperty_mSliceSize ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::class_func_mapWithMapToOverride (const GGS_bitSliceTable & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_bitSliceTable_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bitSliceTable result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::setter_insertKey (GGS_lstring inLKey,
                                          GGS_uint inArgument0,
                                          GGS_uint inArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const GGS_bitSliceTable_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' slice is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::method_searchKey (GGS_lstring inLKey,
                                          GGS_uint & outArgument0,
                                          GGS_uint & outArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' slice is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mSliceIndex ;
    outArgument1 = info->mProperty_mSliceSize ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bitSliceTable::getter_mSliceIndexForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSliceIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bitSliceTable::getter_mSliceSizeForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSliceSize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::setter_setMSliceIndexForKey (GGS_uint inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_bitSliceTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSliceIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::setter_setMSliceSizeForKey (GGS_uint inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_bitSliceTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSliceSize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_bitSliceTable_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element>> & inArray,
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
    ioString.appendString ("mSliceIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mSliceIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSliceSize:") ;
    inArray (i COMMA_HERE)->mProperty_mSliceSize.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element>> array = sortedInfoArray () ;
    GGS_bitSliceTable_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_bitSliceTable_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_bitSliceTable_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @bitSliceTable
//--------------------------------------------------------------------------------------------------

DownEnumerator_bitSliceTable::DownEnumerator_bitSliceTable (const GGS_bitSliceTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element DownEnumerator_bitSliceTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_bitSliceTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_bitSliceTable::current_mSliceIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSliceIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_bitSliceTable::current_mSliceSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSliceSize ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @bitSliceTable
//--------------------------------------------------------------------------------------------------

UpEnumerator_bitSliceTable::UpEnumerator_bitSliceTable (const GGS_bitSliceTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element UpEnumerator_bitSliceTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_bitSliceTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_bitSliceTable::current_mSliceIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSliceIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_bitSliceTable::current_mSliceSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSliceSize ;
}


//--------------------------------------------------------------------------------------------------
//     @bitSliceTable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitSliceTable ("bitSliceTable",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitSliceTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitSliceTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitSliceTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable result ;
  const GGS_bitSliceTable * p = (const GGS_bitSliceTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitSliceTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatExpression::objectCompare (const GGS_immediatExpression & inOperand) const {
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

GGS_immediatExpression::GGS_immediatExpression (void) :
AC_GALGAS_reference_class () {
}


void cPtr_immediatExpression::
immediatExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression::GGS_immediatExpression (const cPtr_immediatExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_immediatExpression::cPtr_immediatExpression (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpression ("immediatExpression",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatExpression::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatExpression result ;
  const GGS_immediatExpression * p = (const GGS_immediatExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerExpression_2E_weak::objectCompare (const GGS_registerExpression_2E_weak & inOperand) const {
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

GGS_registerExpression_2E_weak::GGS_registerExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak & GGS_registerExpression_2E_weak::operator = (const GGS_registerExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_declarationInRam::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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

GGS_declarationInRam_2E_weak::GGS_declarationInRam_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak & GGS_declarationInRam_2E_weak::operator = (const GGS_declarationInRam & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum registerProtection
//--------------------------------------------------------------------------------------------------

GGS_registerProtection::GGS_registerProtection (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerProtection::class_func_publicRegister (UNUSED_LOCATION_ARGS) {
  GGS_registerProtection result ;
  result.mEnum = Enumeration::enum_publicRegister ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerProtection::class_func_protectedRegister (UNUSED_LOCATION_ARGS) {
  GGS_registerProtection result ;
  result.mEnum = Enumeration::enum_protectedRegister ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerProtection::class_func_privateRegister (UNUSED_LOCATION_ARGS) {
  GGS_registerProtection result ;
  result.mEnum = Enumeration::enum_privateRegister ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerProtection [4] = {
  "(not built)",
  "publicRegister",
  "protectedRegister",
  "privateRegister"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerProtection::getter_isPublicRegister (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_publicRegister == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerProtection::getter_isProtectedRegister (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedRegister == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerProtection::getter_isPrivateRegister (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateRegister == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerProtection::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @registerProtection: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerProtection [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @registerProtection generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerProtection ("registerProtection",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerProtection::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerProtection ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerProtection::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerProtection (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerProtection::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_registerProtection result ;
  const GGS_registerProtection * p = (const GGS_registerProtection *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerProtection *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerProtection", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_byteDeclarationInRam_2E_weak::objectCompare (const GGS_byteDeclarationInRam_2E_weak & inOperand) const {
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

GGS_byteDeclarationInRam_2E_weak::GGS_byteDeclarationInRam_2E_weak (void) :
GGS_declarationInRam_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak & GGS_byteDeclarationInRam_2E_weak::operator = (const GGS_byteDeclarationInRam & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

class cCollectionElement_declarationInRamList : public cCollectionElement {
  public: GGS_declarationInRamList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationInRamList (const GGS_declarationInRam & in_mDeclarationInRAM
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationInRamList (const GGS_declarationInRamList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationInRamList::cCollectionElement_declarationInRamList (const GGS_declarationInRam & in_mDeclarationInRAM
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclarationInRAM) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationInRamList::cCollectionElement_declarationInRamList (const GGS_declarationInRamList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclarationInRAM) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_declarationInRamList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_declarationInRamList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_declarationInRamList (mObject.mProperty_mDeclarationInRAM COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @declarationInRamList
//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList::GGS_declarationInRamList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList::GGS_declarationInRamList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    const GGS_declarationInRamList_2E_element element (p->mObject.mProperty_mDeclarationInRAM) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_declarationInRam & in_mDeclarationInRAM
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationInRamList * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationInRamList (in_mDeclarationInRAM COMMA_THERE)) ;
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

GGS_declarationInRamList GGS_declarationInRamList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_declarationInRamList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

