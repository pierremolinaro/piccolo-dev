#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr__32_lstringlist : public CollectionElementPtr {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                const GGS_lstring & in_mValue_31_
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr__32_lstringlist::CollectionElementPtr__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                            const GGS_lstring & in_mValue_31_
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr__32_lstringlist::CollectionElementPtr__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr__32_lstringlist::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @_32_lstringlist
//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr__32_lstringlist * p = (CollectionElementPtr__32_lstringlist *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr__32_lstringlist) ;
    const GGS__32_lstringlist_2E_element element (p->mObject.mProperty_mValue_30_, p->mObject.mProperty_mValue_31_) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr__32_lstringlist * p = nullptr ;
  macroMyNew (p, CollectionElementPtr__32_lstringlist (in_mValue_30_, in_mValue_31_ COMMA_THERE)) ;
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
//  Map type @declaredByteMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap::GGS_declaredByteMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap::~ GGS_declaredByteMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap::GGS_declaredByteMap (const GGS_declaredByteMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap & GGS_declaredByteMap::operator = (const GGS_declaredByteMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredByteMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredByteMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declaredByteMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declaredByteMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_declaredByteMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_declaredByteMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredByteMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_declaredByteMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::performInsert (const GGS_declaredByteMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_declaredByteMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>
GGS_declaredByteMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_declaredByteMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>>
GGS_declaredByteMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_declaredByteMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_ GGS_declaredByteMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declaredByteMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_declaredByteMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_declaredByteMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::class_func_mapWithMapToOverride (const GGS_declaredByteMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_declaredByteMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap GGS_declaredByteMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_declaredByteMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_declaredByteMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' byte is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap::method_searchKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' byte is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_declaredByteMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> & inArray,
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

void GGS_declaredByteMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> array = sortedInfoArray () ;
    GGS_declaredByteMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_declaredByteMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_declaredByteMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @declaredByteMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_declaredByteMap::DownEnumerator_declaredByteMap (const GGS_declaredByteMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element DownEnumerator_declaredByteMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_declaredByteMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @declaredByteMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_declaredByteMap::UpEnumerator_declaredByteMap (const GGS_declaredByteMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element UpEnumerator_declaredByteMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_declaredByteMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @declaredByteMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap ("declaredByteMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredByteMap::staticTypeDescriptor (void) const {
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
//  Map type @registerTable
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_registerTable::GGS_registerTable (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable::~ GGS_registerTable (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable::GGS_registerTable (const GGS_registerTable & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable & GGS_registerTable::operator = (const GGS_registerTable & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_registerTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerTable::getter_hasKey (const GGS_string & inKey
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerTable::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                  const GGS_uint & inLevel
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_registerTable::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_registerTable::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_registerTable::getter_locationForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_registerTable::getter_keyList (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerTable::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_registerTable_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::performInsert (const GGS_registerTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>
GGS_registerTable::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_registerTable::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>>
GGS_registerTable::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_registerTable::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_ GGS_registerTable
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_registerTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_registerTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_registerTable_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRegisterAddressList = info->mProperty_mRegisterAddressList ;
      element.mProperty_mSize = info->mProperty_mSize ;
      element.mProperty_mBitSliceTable = info->mProperty_mBitSliceTable ;
      element.mProperty_mBitDefinitionString = info->mProperty_mBitDefinitionString ;
      element.mProperty_mProtection = info->mProperty_mProtection ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::class_func_mapWithMapToOverride (const GGS_registerTable & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_registerTable result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_registerTable_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable GGS_registerTable::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_registerTable result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_insertKey (GGS_lstring inLKey,
                                          GGS_uintlist inArgument0,
                                          GGS_uint inArgument1,
                                          GGS_bitSliceTable inArgument2,
                                          GGS_string inArgument3,
                                          GGS_registerProtection inArgument4,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const GGS_registerTable_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4) ;
  const char * kInsertErrorMessage = "the '%K' register is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::method_searchKey (GGS_lstring inLKey,
                                          GGS_uintlist & outArgument0,
                                          GGS_uint & outArgument1,
                                          GGS_bitSliceTable & outArgument2,
                                          GGS_string & outArgument3,
                                          GGS_registerProtection & outArgument4,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' register is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    outArgument0 = info->mProperty_mRegisterAddressList ;
    outArgument1 = info->mProperty_mSize ;
    outArgument2 = info->mProperty_mBitSliceTable ;
    outArgument3 = info->mProperty_mBitDefinitionString ;
    outArgument4 = info->mProperty_mProtection ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_registerTable::getter_mRegisterAddressListForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterAddressList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_registerTable::getter_mSizeForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_registerTable::getter_mBitSliceTableForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_bitSliceTable result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitSliceTable ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_registerTable::getter_mBitDefinitionStringForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitDefinitionString ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerTable::getter_mProtectionForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_registerProtection result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mProtection ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMRegisterAddressListForKey (GGS_uintlist inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterAddressList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMSizeForKey (GGS_uint inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMBitSliceTableForKey (GGS_bitSliceTable inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitSliceTable = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMBitDefinitionStringForKey (GGS_string inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitDefinitionString = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_registerTable::setter_setMProtectionForKey (GGS_registerProtection inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_registerTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mProtection = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_registerTable_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>> & inArray,
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
    ioString.appendString ("mRegisterAddressList:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterAddressList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSize:") ;
    inArray (i COMMA_HERE)->mProperty_mSize.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBitSliceTable:") ;
    inArray (i COMMA_HERE)->mProperty_mBitSliceTable.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBitDefinitionString:") ;
    inArray (i COMMA_HERE)->mProperty_mBitDefinitionString.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mProtection:") ;
    inArray (i COMMA_HERE)->mProperty_mProtection.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>> array = sortedInfoArray () ;
    GGS_registerTable_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_registerTable_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_registerTable_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @registerTable
//--------------------------------------------------------------------------------------------------

DownEnumerator_registerTable::DownEnumerator_registerTable (const GGS_registerTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element DownEnumerator_registerTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_registerTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_registerTable::current_mRegisterAddressList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddressList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_registerTable::current_mSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable DownEnumerator_registerTable::current_mBitSliceTable (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitSliceTable ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_registerTable::current_mBitDefinitionString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitDefinitionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection DownEnumerator_registerTable::current_mProtection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mProtection ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @registerTable
//--------------------------------------------------------------------------------------------------

UpEnumerator_registerTable::UpEnumerator_registerTable (const GGS_registerTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element UpEnumerator_registerTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_registerTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_registerTable::current_mRegisterAddressList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddressList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_registerTable::current_mSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable UpEnumerator_registerTable::current_mBitSliceTable (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitSliceTable ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_registerTable::current_mBitDefinitionString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitDefinitionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection UpEnumerator_registerTable::current_mProtection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mProtection ;
}


//--------------------------------------------------------------------------------------------------
//     @registerTable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable ("registerTable",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerTable::staticTypeDescriptor (void) const {
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
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_bool test_1 = constinArgument_inWriteAccess ;
        if (GalgasBool::boolTrue == test_1.boolEnum ()) {
          const GGS_registerTable temp_2 = inObject ;
          test_1 = temp_2.getter_hasKey (constinArgument_inKey.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 30)) ;
        }
        test_0 = test_1.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          const GGS_registerTable temp_3 = inObject ;
          GGS_location var_declarationLocation_1020 = temp_3.getter_locationForKey (constinArgument_inKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 31)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::notEqual, var_declarationLocation_1020.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 32)).objectCompare (constinArgument_inKey.readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 32)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inKey.readProperty_location (), GGS_string ("register is protected, write is reserved to instructions in declaration file"), fixItArray5  COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 33)) ;
            }
          }
        }
      }
    }
    break ;
  case GGS_registerProtection::Enumeration::enum_privateRegister:
    {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_registerTable temp_7 = inObject ;
        test_6 = temp_7.getter_hasKey (constinArgument_inKey.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 37)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_registerTable temp_8 = inObject ;
          GGS_location var_declarationLocation_1322 = temp_8.getter_locationForKey (constinArgument_inKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 38)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::notEqual, var_declarationLocation_1322.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 39)).objectCompare (constinArgument_inKey.readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 39)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (constinArgument_inKey.readProperty_location (), GGS_string ("register is private to declaration file"), fixItArray10  COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas3", 40)) ;
            }
          }
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Map type @ramBankTable
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable::GGS_ramBankTable (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable::~ GGS_ramBankTable (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable::GGS_ramBankTable (const GGS_ramBankTable & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable & GGS_ramBankTable::operator = (const GGS_ramBankTable & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_ramBankTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ramBankTable::getter_hasKey (const GGS_string & inKey
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ramBankTable::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                 const GGS_uint & inLevel
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ramBankTable::getter_locationForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_ramBankTable::getter_keyList (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramBankTable::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_ramBankTable_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::performInsert (const GGS_ramBankTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>
GGS_ramBankTable::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_ramBankTable::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>>
GGS_ramBankTable::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_ramBankTable::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_ GGS_ramBankTable
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ramBankTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_ramBankTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_ramBankTable_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFirstAddress = info->mProperty_mFirstAddress ;
      element.mProperty_mFirstFreeAddress = info->mProperty_mFirstFreeAddress ;
      element.mProperty_mLastAddressPlusOne = info->mProperty_mLastAddressPlusOne ;
      element.mProperty_mMirrorOffsetList = info->mProperty_mMirrorOffsetList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::class_func_mapWithMapToOverride (const GGS_ramBankTable & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GGS_ramBankTable result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_ramBankTable_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable GGS_ramBankTable::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_ramBankTable result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_insertKey (GGS_lstring inLKey,
                                         GGS_uint inArgument0,
                                         GGS_uint inArgument1,
                                         GGS_uint inArgument2,
                                         GGS_uintlist inArgument3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_ramBankTable_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' bank ram is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::method_searchKey (GGS_lstring inLKey,
                                         GGS_uint & outArgument0,
                                         GGS_uint & outArgument1,
                                         GGS_uint & outArgument2,
                                         GGS_uintlist & outArgument3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' bank ram is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mFirstAddress ;
    outArgument1 = info->mProperty_mFirstFreeAddress ;
    outArgument2 = info->mProperty_mLastAddressPlusOne ;
    outArgument3 = info->mProperty_mMirrorOffsetList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_mFirstAddressForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFirstAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_mFirstFreeAddressForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFirstFreeAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ramBankTable::getter_mLastAddressPlusOneForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLastAddressPlusOne ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_ramBankTable::getter_mMirrorOffsetListForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMirrorOffsetList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMFirstAddressForKey (GGS_uint inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFirstAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMFirstFreeAddressForKey (GGS_uint inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFirstFreeAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMLastAddressPlusOneForKey (GGS_uint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLastAddressPlusOne = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::setter_setMMirrorOffsetListForKey (GGS_uintlist inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_ramBankTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMirrorOffsetList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_ramBankTable_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> & inArray,
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
    ioString.appendString ("mFirstAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mFirstAddress.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFirstFreeAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mFirstFreeAddress.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLastAddressPlusOne:") ;
    inArray (i COMMA_HERE)->mProperty_mLastAddressPlusOne.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mMirrorOffsetList:") ;
    inArray (i COMMA_HERE)->mProperty_mMirrorOffsetList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> array = sortedInfoArray () ;
    GGS_ramBankTable_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_ramBankTable_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_ramBankTable_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @ramBankTable
//--------------------------------------------------------------------------------------------------

DownEnumerator_ramBankTable::DownEnumerator_ramBankTable (const GGS_ramBankTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element DownEnumerator_ramBankTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_ramBankTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ramBankTable::current_mFirstAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFirstAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ramBankTable::current_mFirstFreeAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFirstFreeAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ramBankTable::current_mLastAddressPlusOne (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLastAddressPlusOne ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_ramBankTable::current_mMirrorOffsetList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMirrorOffsetList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @ramBankTable
//--------------------------------------------------------------------------------------------------

UpEnumerator_ramBankTable::UpEnumerator_ramBankTable (const GGS_ramBankTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element UpEnumerator_ramBankTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_ramBankTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ramBankTable::current_mFirstAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFirstAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ramBankTable::current_mFirstFreeAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFirstFreeAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ramBankTable::current_mLastAddressPlusOne (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLastAddressPlusOne ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_ramBankTable::current_mMirrorOffsetList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMirrorOffsetList ;
}


//--------------------------------------------------------------------------------------------------
//     @ramBankTable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable ("ramBankTable",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ramBankTable::staticTypeDescriptor (void) const {
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
//     @processorType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_processorType ("processorType",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_processorType::staticTypeDescriptor (void) const {
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
//Class for element of '@illegalMaskList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_illegalMaskList : public CollectionElementPtr {
  public: GGS_illegalMaskList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_illegalMaskList (const GGS_luint & in_mIllegalValue,
                                                const GGS_luint & in_mIllegalMask,
                                                const GGS_lstring & in_mDescription
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_illegalMaskList (const GGS_illegalMaskList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_illegalMaskList::CollectionElementPtr_illegalMaskList (const GGS_luint & in_mIllegalValue,
                                                                            const GGS_luint & in_mIllegalMask,
                                                                            const GGS_lstring & in_mDescription
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mIllegalValue, in_mIllegalMask, in_mDescription) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_illegalMaskList::CollectionElementPtr_illegalMaskList (const GGS_illegalMaskList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mIllegalValue, inElement.mProperty_mIllegalMask, inElement.mProperty_mDescription) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_illegalMaskList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_illegalMaskList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_illegalMaskList (mObject.mProperty_mIllegalValue, mObject.mProperty_mIllegalMask, mObject.mProperty_mDescription COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @illegalMaskList
//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList::GGS_illegalMaskList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList::GGS_illegalMaskList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_illegalMaskList * p = (CollectionElementPtr_illegalMaskList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_illegalMaskList) ;
    const GGS_illegalMaskList_2E_element element (p->mObject.mProperty_mIllegalValue, p->mObject.mProperty_mIllegalMask, p->mObject.mProperty_mDescription) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_luint & in_mIllegalValue,
                                                     const GGS_luint & in_mIllegalMask,
                                                     const GGS_lstring & in_mDescription
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr_illegalMaskList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_illegalMaskList (in_mIllegalValue, in_mIllegalMask, in_mDescription COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_illegalMaskList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_illegalMaskList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::description (String & ioString,
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
      ioString.appendString ("mIllegalValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIllegalValue.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIllegalMask:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIllegalMask.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDescription:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDescription.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_illegalMaskList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::plusPlusAssignOperation (const GGS_illegalMaskList_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::class_func_listWithValue (const GGS_luint & inOperand0,
                                                                   const GGS_luint & inOperand1,
                                                                   const GGS_lstring & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_illegalMaskList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_illegalMaskList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::addAssignOperation (const GGS_luint & inOperand0,
                                              const GGS_luint & inOperand1,
                                              const GGS_lstring & inOperand2
                                              COMMA_LOCATION_ARGS) {
  const GGS_illegalMaskList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_append (const GGS_luint inOperand0,
                                         const GGS_luint inOperand1,
                                         const GGS_lstring inOperand2,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_illegalMaskList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::setter_insertAtIndex (const GGS_luint inOperand0,
                                                const GGS_luint inOperand1,
                                                const GGS_lstring inOperand2,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_illegalMaskList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_illegalMaskList::setter_removeAtIndex (GGS_luint & outOperand0,
                                                GGS_luint & outOperand1,
                                                GGS_lstring & outOperand2,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mIllegalValue ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mIllegalMask ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mDescription ;
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

void GGS_illegalMaskList::setter_popFirst (GGS_luint & outOperand0,
                                           GGS_luint & outOperand1,
                                           GGS_lstring & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mIllegalValue ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIllegalMask ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDescription ;
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

void GGS_illegalMaskList::setter_popLast (GGS_luint & outOperand0,
                                          GGS_luint & outOperand1,
                                          GGS_lstring & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mIllegalValue ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIllegalMask ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDescription ;
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

void GGS_illegalMaskList::method_first (GGS_luint & outOperand0,
                                        GGS_luint & outOperand1,
                                        GGS_lstring & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mIllegalValue ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIllegalMask ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDescription ;
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

void GGS_illegalMaskList::method_last (GGS_luint & outOperand0,
                                       GGS_luint & outOperand1,
                                       GGS_lstring & outOperand2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mIllegalValue ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIllegalMask ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDescription ;
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

GGS_illegalMaskList GGS_illegalMaskList::add_operation (const GGS_illegalMaskList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
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

GGS_illegalMaskList GGS_illegalMaskList::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
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

GGS_illegalMaskList GGS_illegalMaskList::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_illegalMaskList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList::plusAssignOperation (const GGS_illegalMaskList inList,
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

void GGS_illegalMaskList::setter_setMIllegalValueAtIndex (GGS_luint inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIllegalValue = inOperand ;
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
  
GGS_luint GGS_illegalMaskList::getter_mIllegalValueAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIllegalValue ;
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

void GGS_illegalMaskList::setter_setMIllegalMaskAtIndex (GGS_luint inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIllegalMask = inOperand ;
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
  
GGS_luint GGS_illegalMaskList::getter_mIllegalMaskAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIllegalMask ;
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

void GGS_illegalMaskList::setter_setMDescriptionAtIndex (GGS_lstring inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDescription = inOperand ;
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
  
GGS_lstring GGS_illegalMaskList::getter_mDescriptionAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDescription ;
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
// Down Enumerator for @illegalMaskList
//--------------------------------------------------------------------------------------------------

DownEnumerator_illegalMaskList::DownEnumerator_illegalMaskList (const GGS_illegalMaskList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element DownEnumerator_illegalMaskList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_illegalMaskList::current_mIllegalValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIllegalValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_illegalMaskList::current_mIllegalMask (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIllegalMask ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_illegalMaskList::current_mDescription (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDescription ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @illegalMaskList
//--------------------------------------------------------------------------------------------------

UpEnumerator_illegalMaskList::UpEnumerator_illegalMaskList (const GGS_illegalMaskList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element UpEnumerator_illegalMaskList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_illegalMaskList::current_mIllegalValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIllegalValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_illegalMaskList::current_mIllegalMask (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIllegalMask ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_illegalMaskList::current_mDescription (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDescription ;
}




//--------------------------------------------------------------------------------------------------
//     @illegalMaskList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_illegalMaskList ("illegalMaskList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_illegalMaskList::staticTypeDescriptor (void) const {
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
//  Map type @configRegisterMaskMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap::GGS_configRegisterMaskMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap::~ GGS_configRegisterMaskMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap::GGS_configRegisterMaskMap (const GGS_configRegisterMaskMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap & GGS_configRegisterMaskMap::operator = (const GGS_configRegisterMaskMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configRegisterMaskMap::getter_hasKey (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configRegisterMaskMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                          const GGS_uint & inLevel
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configRegisterMaskMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configRegisterMaskMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_configRegisterMaskMap::getter_locationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_configRegisterMaskMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMaskMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configRegisterMaskMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::performInsert (const GGS_configRegisterMaskMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMaskMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>
GGS_configRegisterMaskMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_configRegisterMaskMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>>
GGS_configRegisterMaskMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_configRegisterMaskMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_ GGS_configRegisterMaskMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configRegisterMaskMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_configRegisterMaskMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_configRegisterMaskMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mMaskValue = info->mProperty_mMaskValue ;
      element.mProperty_mDescription = info->mProperty_mDescription ;
      element.mProperty_mFieldSettingMap = info->mProperty_mFieldSettingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::class_func_mapWithMapToOverride (const GGS_configRegisterMaskMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configRegisterMaskMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMaskMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMaskMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::setter_insertKey (GGS_lstring inLKey,
                                                  GGS_luint inArgument0,
                                                  GGS_lstring inArgument1,
                                                  GGS_fieldSettingMap inArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_configRegisterMaskMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' configuration register mask is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap::method_searchKey (GGS_lstring inLKey,
                                                  GGS_luint & outArgument0,
                                                  GGS_lstring & outArgument1,
                                                  GGS_fieldSettingMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' configuration register mask is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mMaskValue ;
    outArgument1 = info->mProperty_mDescription ;
    outArgument2 = info->mProperty_mFieldSettingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configRegisterMaskMap::getter_mMaskValueForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (key) ;
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

GGS_lstring GGS_configRegisterMaskMap::getter_mDescriptionForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (key) ;
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

GGS_fieldSettingMap GGS_configRegisterMaskMap::getter_mFieldSettingMapForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_fieldSettingMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> info = infoForKey (key) ;
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

void GGS_configRegisterMaskMap::setter_setMMaskValueForKey (GGS_luint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMaskMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_configRegisterMaskMap::setter_setMDescriptionForKey (GGS_lstring inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMaskMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_configRegisterMaskMap::setter_setMFieldSettingMapForKey (GGS_fieldSettingMap inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMaskMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_configRegisterMaskMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> & inArray,
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

void GGS_configRegisterMaskMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> array = sortedInfoArray () ;
    GGS_configRegisterMaskMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_configRegisterMaskMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_configRegisterMaskMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @configRegisterMaskMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_configRegisterMaskMap::DownEnumerator_configRegisterMaskMap (const GGS_configRegisterMaskMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element DownEnumerator_configRegisterMaskMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configRegisterMaskMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_configRegisterMaskMap::current_mMaskValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configRegisterMaskMap::current_mDescription (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap DownEnumerator_configRegisterMaskMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @configRegisterMaskMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_configRegisterMaskMap::UpEnumerator_configRegisterMaskMap (const GGS_configRegisterMaskMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element UpEnumerator_configRegisterMaskMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configRegisterMaskMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_configRegisterMaskMap::current_mMaskValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configRegisterMaskMap::current_mDescription (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap UpEnumerator_configRegisterMaskMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFieldSettingMap ;
}


//--------------------------------------------------------------------------------------------------
//     @configRegisterMaskMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap ("configRegisterMaskMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMaskMap::staticTypeDescriptor (void) const {
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
//  Map type @configRegisterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap::GGS_configRegisterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap::~ GGS_configRegisterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap::GGS_configRegisterMap (const GGS_configRegisterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap & GGS_configRegisterMap::operator = (const GGS_configRegisterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configRegisterMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configRegisterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configRegisterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configRegisterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_configRegisterMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_configRegisterMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configRegisterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::performInsert (const GGS_configRegisterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>
GGS_configRegisterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_configRegisterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>>
GGS_configRegisterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_configRegisterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_ GGS_configRegisterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configRegisterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_configRegisterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_configRegisterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRegisterAddress = info->mProperty_mRegisterAddress ;
      element.mProperty_mRegisterWidth = info->mProperty_mRegisterWidth ;
      element.mProperty_mConfigRegisterMaskMap = info->mProperty_mConfigRegisterMaskMap ;
      element.mProperty_mIllegalMaskList = info->mProperty_mIllegalMaskList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::class_func_mapWithMapToOverride (const GGS_configRegisterMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configRegisterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap GGS_configRegisterMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_luint inArgument0,
                                              GGS_luint inArgument1,
                                              GGS_configRegisterMaskMap inArgument2,
                                              GGS_illegalMaskList inArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_configRegisterMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' configuration register is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_luint & outArgument0,
                                              GGS_luint & outArgument1,
                                              GGS_configRegisterMaskMap & outArgument2,
                                              GGS_illegalMaskList & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info ;
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
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mRegisterAddress ;
    outArgument1 = info->mProperty_mRegisterWidth ;
    outArgument2 = info->mProperty_mConfigRegisterMaskMap ;
    outArgument3 = info->mProperty_mIllegalMaskList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configRegisterMap::getter_mRegisterAddressForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (key) ;
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

GGS_luint GGS_configRegisterMap::getter_mRegisterWidthForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterWidth ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap GGS_configRegisterMap::getter_mConfigRegisterMaskMapForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_configRegisterMaskMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mConfigRegisterMaskMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList GGS_configRegisterMap::getter_mIllegalMaskListForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_illegalMaskList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIllegalMaskList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMRegisterAddressForKey (GGS_luint inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_configRegisterMap::setter_setMRegisterWidthForKey (GGS_luint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterWidth = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMConfigRegisterMaskMapForKey (GGS_configRegisterMaskMap inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mConfigRegisterMaskMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::setter_setMIllegalMaskListForKey (GGS_illegalMaskList inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIllegalMaskList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_configRegisterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> & inArray,
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
    ioString.appendString ("mRegisterWidth:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterWidth.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mConfigRegisterMaskMap:") ;
    inArray (i COMMA_HERE)->mProperty_mConfigRegisterMaskMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIllegalMaskList:") ;
    inArray (i COMMA_HERE)->mProperty_mIllegalMaskList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> array = sortedInfoArray () ;
    GGS_configRegisterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_configRegisterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_configRegisterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @configRegisterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_configRegisterMap::DownEnumerator_configRegisterMap (const GGS_configRegisterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element DownEnumerator_configRegisterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configRegisterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_configRegisterMap::current_mRegisterAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_configRegisterMap::current_mRegisterWidth (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap DownEnumerator_configRegisterMap::current_mConfigRegisterMaskMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConfigRegisterMaskMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList DownEnumerator_configRegisterMap::current_mIllegalMaskList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIllegalMaskList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @configRegisterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_configRegisterMap::UpEnumerator_configRegisterMap (const GGS_configRegisterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element UpEnumerator_configRegisterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configRegisterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_configRegisterMap::current_mRegisterAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_configRegisterMap::current_mRegisterWidth (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap UpEnumerator_configRegisterMap::current_mConfigRegisterMaskMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConfigRegisterMaskMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList UpEnumerator_configRegisterMap::current_mIllegalMaskList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIllegalMaskList ;
}


//--------------------------------------------------------------------------------------------------
//     @configRegisterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap ("configRegisterMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMap::staticTypeDescriptor (void) const {
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
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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
//  Map type @blockMapForStackComputation
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation::GGS_blockMapForStackComputation (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation::~ GGS_blockMapForStackComputation (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation::GGS_blockMapForStackComputation (const GGS_blockMapForStackComputation & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation & GGS_blockMapForStackComputation::operator = (const GGS_blockMapForStackComputation & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockMapForStackComputation::getter_hasKey (const GGS_string & inKey
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockMapForStackComputation::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                const GGS_uint & inLevel
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockMapForStackComputation::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockMapForStackComputation::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockMapForStackComputation::getter_locationForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_blockMapForStackComputation::getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockMapForStackComputation_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::performInsert (const GGS_blockMapForStackComputation_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_blockMapForStackComputation_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>
GGS_blockMapForStackComputation::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_blockMapForStackComputation::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>>
GGS_blockMapForStackComputation::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_blockMapForStackComputation::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_ GGS_blockMapForStackComputation
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockMapForStackComputation_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_blockMapForStackComputation_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockMapForStackComputation_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mBlock = info->mProperty_mBlock ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::class_func_mapWithMapToOverride (const GGS_blockMapForStackComputation & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockMapForStackComputation_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation GGS_blockMapForStackComputation::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_blockMapForStackComputation result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::setter_insertKey (GGS_lstring inLKey,
                                                        GGS_ipic_31__38_Block inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_blockMapForStackComputation_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::method_searchKey (GGS_lstring inLKey,
                                                        GGS_ipic_31__38_Block & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' block is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mBlock ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block GGS_blockMapForStackComputation::getter_mBlockForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_Block result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBlock ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::setter_setMBlockForKey (GGS_ipic_31__38_Block inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockMapForStackComputation_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBlock = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_blockMapForStackComputation_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> & inArray,
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
    ioString.appendString ("mBlock:") ;
    inArray (i COMMA_HERE)->mProperty_mBlock.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> array = sortedInfoArray () ;
    GGS_blockMapForStackComputation_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_blockMapForStackComputation_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_blockMapForStackComputation_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @blockMapForStackComputation
//--------------------------------------------------------------------------------------------------

DownEnumerator_blockMapForStackComputation::DownEnumerator_blockMapForStackComputation (const GGS_blockMapForStackComputation & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element DownEnumerator_blockMapForStackComputation::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_blockMapForStackComputation::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block DownEnumerator_blockMapForStackComputation::current_mBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBlock ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @blockMapForStackComputation
//--------------------------------------------------------------------------------------------------

UpEnumerator_blockMapForStackComputation::UpEnumerator_blockMapForStackComputation (const GGS_blockMapForStackComputation & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element UpEnumerator_blockMapForStackComputation::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_blockMapForStackComputation::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block UpEnumerator_blockMapForStackComputation::current_mBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBlock ;
}


//--------------------------------------------------------------------------------------------------
//     @blockMapForStackComputation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation ("blockMapForStackComputation",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockMapForStackComputation::staticTypeDescriptor (void) const {
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
//  Map type @routineCallMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap::GGS_routineCallMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap::~ GGS_routineCallMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap::GGS_routineCallMap (const GGS_routineCallMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap & GGS_routineCallMap::operator = (const GGS_routineCallMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineCallMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineCallMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineCallMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineCallMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineCallMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_routineCallMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_routineCallMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineCallMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineCallMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::performInsert (const GGS_routineCallMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_routineCallMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>
GGS_routineCallMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_routineCallMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>>
GGS_routineCallMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineCallMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_ GGS_routineCallMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineCallMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_routineCallMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineCallMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mCalledRoutineSet = info->mProperty_mCalledRoutineSet ;
      element.mProperty_mTerminatorStackNeeds = info->mProperty_mTerminatorStackNeeds ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::class_func_mapWithMapToOverride (const GGS_routineCallMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_routineCallMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineCallMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap GGS_routineCallMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_routineCallMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_stringset inArgument0,
                                           GGS_uint inArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_routineCallMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineCallMap::getter_mCalledRoutineSetForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mCalledRoutineSet ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineCallMap::getter_mTerminatorStackNeedsForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTerminatorStackNeeds ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::setter_setMCalledRoutineSetForKey (GGS_stringset inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineCallMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mCalledRoutineSet = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::setter_setMTerminatorStackNeedsForKey (GGS_uint inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineCallMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTerminatorStackNeeds = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_routineCallMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> & inArray,
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
    ioString.appendString ("mCalledRoutineSet:") ;
    inArray (i COMMA_HERE)->mProperty_mCalledRoutineSet.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTerminatorStackNeeds:") ;
    inArray (i COMMA_HERE)->mProperty_mTerminatorStackNeeds.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> array = sortedInfoArray () ;
    GGS_routineCallMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_routineCallMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_routineCallMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineCallMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineCallMap::DownEnumerator_routineCallMap (const GGS_routineCallMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element DownEnumerator_routineCallMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineCallMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset DownEnumerator_routineCallMap::current_mCalledRoutineSet (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCalledRoutineSet ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_routineCallMap::current_mTerminatorStackNeeds (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminatorStackNeeds ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineCallMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineCallMap::UpEnumerator_routineCallMap (const GGS_routineCallMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element UpEnumerator_routineCallMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineCallMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset UpEnumerator_routineCallMap::current_mCalledRoutineSet (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCalledRoutineSet ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_routineCallMap::current_mTerminatorStackNeeds (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminatorStackNeeds ;
}


//--------------------------------------------------------------------------------------------------
//     @routineCallMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap ("routineCallMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineCallMap::staticTypeDescriptor (void) const {
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
//  Map type @routineStackRequirementMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap::GGS_routineStackRequirementMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap::~ GGS_routineStackRequirementMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap::GGS_routineStackRequirementMap (const GGS_routineStackRequirementMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap & GGS_routineStackRequirementMap::operator = (const GGS_routineStackRequirementMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineStackRequirementMap::getter_hasKey (const GGS_string & inKey
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineStackRequirementMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                               const GGS_uint & inLevel
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineStackRequirementMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineStackRequirementMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_routineStackRequirementMap::getter_locationForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_routineStackRequirementMap::getter_keyList (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineStackRequirementMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineStackRequirementMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::performInsert (const GGS_routineStackRequirementMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_routineStackRequirementMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>
GGS_routineStackRequirementMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_routineStackRequirementMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>>
GGS_routineStackRequirementMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineStackRequirementMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_ GGS_routineStackRequirementMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineStackRequirementMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_routineStackRequirementMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineStackRequirementMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLevels = info->mProperty_mLevels ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::class_func_mapWithMapToOverride (const GGS_routineStackRequirementMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineStackRequirementMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap GGS_routineStackRequirementMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_routineStackRequirementMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::setter_insertKey (GGS_lstring inLKey,
                                                       GGS_uint inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_routineStackRequirementMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::method_searchKey (GGS_lstring inLKey,
                                                       GGS_uint & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> info ;
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
  }else{
    outArgument0 = info->mProperty_mLevels ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineStackRequirementMap::getter_mLevelsForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLevels ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::setter_setMLevelsForKey (GGS_uint inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineStackRequirementMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLevels = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_routineStackRequirementMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> & inArray,
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
    ioString.appendString ("mLevels:") ;
    inArray (i COMMA_HERE)->mProperty_mLevels.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> array = sortedInfoArray () ;
    GGS_routineStackRequirementMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_routineStackRequirementMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_routineStackRequirementMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineStackRequirementMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineStackRequirementMap::DownEnumerator_routineStackRequirementMap (const GGS_routineStackRequirementMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element DownEnumerator_routineStackRequirementMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineStackRequirementMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_routineStackRequirementMap::current_mLevels (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLevels ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineStackRequirementMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineStackRequirementMap::UpEnumerator_routineStackRequirementMap (const GGS_routineStackRequirementMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element UpEnumerator_routineStackRequirementMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineStackRequirementMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_routineStackRequirementMap::current_mLevels (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLevels ;
}


//--------------------------------------------------------------------------------------------------
//     @routineStackRequirementMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap ("routineStackRequirementMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineStackRequirementMap::staticTypeDescriptor (void) const {
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
//  Extension Getter '@uint x4String'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_x_34_String (const GGS_uint & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_uint temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.objectCompare (GGS_uint (uint32_t (65535U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult = GGS_string ("****") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_uint temp_2 = inObject ;
    result_outResult = temp_2.right_shift_operation (GGS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 29)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas3", 29)) ;
    const GGS_uint temp_3 = inObject ;
    result_outResult.plusAssignOperation(temp_3.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 30)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 30)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas3", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 30)) ;
    const GGS_uint temp_4 = inObject ;
    result_outResult.plusAssignOperation(temp_4.right_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 31)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 31)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas3", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 31)) ;
    const GGS_uint temp_5 = inObject ;
    result_outResult.plusAssignOperation(temp_5.operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 32)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas3", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 32)) ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Map type @constantMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::~ GGS_constantMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (const GGS_constantMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap & GGS_constantMap::operator = (const GGS_constantMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constantMap::getter_hasKey (const GGS_string & inKey
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constantMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                const GGS_uint & inLevel
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_constantMap::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_constantMap::getter_keyList (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::performInsert (const GGS_constantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_constantMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>
GGS_constantMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_constantMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>>
GGS_constantMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_constantMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_constantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constantMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mValue = info->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::class_func_mapWithMapToOverride (const GGS_constantMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_constantMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_insertKey (GGS_lstring inLKey,
                                        GGS_sint_36__34_ inArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_constantMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::method_searchKey (GGS_lstring inLKey,
                                        GGS_sint_36__34_ & outArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' constant is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_constantMap::getter_mValueForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_sint_36__34_ result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (key) ;
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

void GGS_constantMap::setter_setMValueForKey (GGS_sint_36__34_ inValue,
                                              GGS_string inKey,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constantMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_constantMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> & inArray,
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> array = sortedInfoArray () ;
    GGS_constantMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_constantMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @constantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_constantMap::DownEnumerator_constantMap (const GGS_constantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element DownEnumerator_constantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ DownEnumerator_constantMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @constantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_constantMap::UpEnumerator_constantMap (const GGS_constantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element UpEnumerator_constantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ UpEnumerator_constantMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}


//--------------------------------------------------------------------------------------------------
//     @constantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  const GGS_constantMap * p = (const GGS_constantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @routineMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::~ GGS_routineMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (const GGS_routineMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap & GGS_routineMap::operator = (const GGS_routineMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMap::getter_hasKey (const GGS_string & inKey
                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                               const GGS_uint & inLevel
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_routineMap::getter_locationForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_routineMap::getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::performInsert (const GGS_routineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_routineMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element>
GGS_routineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_routineMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element>>
GGS_routineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_ GGS_routineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_routineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIsNoReturn = info->mProperty_mIsNoReturn ;
      element.mProperty_mRequiredBank = info->mProperty_mRequiredBank ;
      element.mProperty_mReturnedBank = info->mProperty_mReturnedBank ;
      element.mProperty_mPreservesBank = info->mProperty_mPreservesBank ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::class_func_mapWithMapToOverride (const GGS_routineMap & inMapToOverride
                                                                COMMA_LOCATION_ARGS) {
  GGS_routineMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_routineMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setter_insertKey (GGS_lstring inLKey,
                                       GGS_bool inArgument0,
                                       GGS_uint inArgument1,
                                       GGS_uint inArgument2,
                                       GGS_bool inArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  const GGS_routineMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::method_searchKey (GGS_lstring inLKey,
                                       GGS_bool & outArgument0,
                                       GGS_uint & outArgument1,
                                       GGS_uint & outArgument2,
                                       GGS_bool & outArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' routine is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mIsNoReturn ;
    outArgument1 = info->mProperty_mRequiredBank ;
    outArgument2 = info->mProperty_mReturnedBank ;
    outArgument3 = info->mProperty_mPreservesBank ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMap::getter_mIsNoReturnForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsNoReturn ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineMap::getter_mRequiredBankForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRequiredBank ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineMap::getter_mReturnedBankForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReturnedBank ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMap::getter_mPreservesBankForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPreservesBank ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setter_setMIsNoReturnForKey (GGS_bool inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsNoReturn = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setter_setMRequiredBankForKey (GGS_uint inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRequiredBank = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setter_setMReturnedBankForKey (GGS_uint inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReturnedBank = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setter_setMPreservesBankForKey (GGS_bool inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPreservesBank = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_routineMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element>> & inArray,
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
    ioString.appendString ("mIsNoReturn:") ;
    inArray (i COMMA_HERE)->mProperty_mIsNoReturn.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRequiredBank:") ;
    inArray (i COMMA_HERE)->mProperty_mRequiredBank.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mReturnedBank:") ;
    inArray (i COMMA_HERE)->mProperty_mReturnedBank.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPreservesBank:") ;
    inArray (i COMMA_HERE)->mProperty_mPreservesBank.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element>> array = sortedInfoArray () ;
    GGS_routineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_routineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_routineMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineMap::DownEnumerator_routineMap (const GGS_routineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element DownEnumerator_routineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_routineMap::current_mRequiredBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_routineMap::current_mReturnedBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineMap::current_mPreservesBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineMap::UpEnumerator_routineMap (const GGS_routineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element UpEnumerator_routineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_routineMap::current_mRequiredBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_routineMap::current_mReturnedBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineMap::current_mPreservesBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPreservesBank ;
}


//--------------------------------------------------------------------------------------------------
//     @routineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_routineMap result ;
  const GGS_routineMap * p = (const GGS_routineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum routineKind
//--------------------------------------------------------------------------------------------------

GGS_routineKind::GGS_routineKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_regularRoutine (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_regularRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_noReturnRoutine (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_noReturnRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_interruptRoutine (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_interruptRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_routineKind [4] = {
  "(not built)",
  "regularRoutine",
  "noReturnRoutine",
  "interruptRoutine"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isRegularRoutine (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regularRoutine == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isNoReturnRoutine (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noReturnRoutine == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isInterruptRoutine (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_interruptRoutine == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineKind::description (String & ioString,
                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @routineKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_routineKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineKind::objectCompare (const GGS_routineKind & inOperand) const {
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
//     @routineKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_routineKind result ;
  const GGS_routineKind * p = (const GGS_routineKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatExpression::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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
// @bitNumberExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberExpression::objectCompare (const GGS_bitNumberExpression & inOperand) const {
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

GGS_bitNumberExpression::GGS_bitNumberExpression (void) :
AC_GALGAS_reference_class () {
}


void cPtr_bitNumberExpression::
bitNumberExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression::GGS_bitNumberExpression (const cPtr_bitNumberExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_bitNumberExpression::cPtr_bitNumberExpression (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberExpression::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bitNumberExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberExpression ("bitNumberExpression",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitNumberExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_bitNumberExpression::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_bitNumberExpression result ;
  const GGS_bitNumberExpression * p = (const GGS_bitNumberExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @symbolTableForOptimizations
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations::GGS_symbolTableForOptimizations (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations::~ GGS_symbolTableForOptimizations (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations::GGS_symbolTableForOptimizations (const GGS_symbolTableForOptimizations & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations & GGS_symbolTableForOptimizations::operator = (const GGS_symbolTableForOptimizations & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations GGS_symbolTableForOptimizations::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForOptimizations::getter_hasKey (const GGS_string & inKey
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForOptimizations::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                const GGS_uint & inLevel
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForOptimizations::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForOptimizations::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_symbolTableForOptimizations::getter_locationForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_symbolTableForOptimizations::getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForOptimizations::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForOptimizations_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::performInsert (const GGS_symbolTableForOptimizations_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForOptimizations_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element>
GGS_symbolTableForOptimizations::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_symbolTableForOptimizations::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element>>
GGS_symbolTableForOptimizations::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_symbolTableForOptimizations::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_ GGS_symbolTableForOptimizations
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForOptimizations_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_symbolTableForOptimizations_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForOptimizations_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mDefinitionLineIndex = info->mProperty_mDefinitionLineIndex ;
      element.mProperty_mIsDeletable = info->mProperty_mIsDeletable ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations GGS_symbolTableForOptimizations::class_func_mapWithMapToOverride (const GGS_symbolTableForOptimizations & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForOptimizations_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations GGS_symbolTableForOptimizations::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForOptimizations result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::setter_insertKey (GGS_lstring inLKey,
                                                        GGS_uint inArgument0,
                                                        GGS_bool inArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForOptimizations_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::method_searchKey (GGS_lstring inLKey,
                                                        GGS_uint & outArgument0,
                                                        GGS_bool & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element> info ;
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
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mDefinitionLineIndex ;
    outArgument1 = info->mProperty_mIsDeletable ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::setter_removeKey (GGS_lstring inLKey,
                                                        GGS_uint & outArgument0,
                                                        GGS_bool & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element> info ;
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
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mDefinitionLineIndex ;
    outArgument1 = info->mProperty_mIsDeletable ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForOptimizations::getter_mDefinitionLineIndexForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element> info = infoForKey (key) ;
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

GGS_bool GGS_symbolTableForOptimizations::getter_mIsDeletableForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsDeletable ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::setter_setMDefinitionLineIndexForKey (GGS_uint inValue,
                                                                            GGS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForOptimizations_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_symbolTableForOptimizations::setter_setMIsDeletableForKey (GGS_bool inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForOptimizations_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsDeletable = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_symbolTableForOptimizations_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element>> & inArray,
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
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsDeletable:") ;
    inArray (i COMMA_HERE)->mProperty_mIsDeletable.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element>> array = sortedInfoArray () ;
    GGS_symbolTableForOptimizations_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_symbolTableForOptimizations_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_symbolTableForOptimizations_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @symbolTableForOptimizations
//--------------------------------------------------------------------------------------------------

DownEnumerator_symbolTableForOptimizations::DownEnumerator_symbolTableForOptimizations (const GGS_symbolTableForOptimizations & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element DownEnumerator_symbolTableForOptimizations::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_symbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_symbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefinitionLineIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_symbolTableForOptimizations::current_mIsDeletable (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsDeletable ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @symbolTableForOptimizations
//--------------------------------------------------------------------------------------------------

UpEnumerator_symbolTableForOptimizations::UpEnumerator_symbolTableForOptimizations (const GGS_symbolTableForOptimizations & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element UpEnumerator_symbolTableForOptimizations::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_symbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_symbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefinitionLineIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_symbolTableForOptimizations::current_mIsDeletable (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsDeletable ;
}


//--------------------------------------------------------------------------------------------------
//     @symbolTableForOptimizations generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations ("symbolTableForOptimizations",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForOptimizations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForOptimizations::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForOptimizations (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations GGS_symbolTableForOptimizations::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations result ;
  const GGS_symbolTableForOptimizations * p = (const GGS_symbolTableForOptimizations *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForOptimizations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//  Extension Getter '@baseline_instruction_FD_base_code mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ADDWF:
    {
      result_outResult = GGS_string ("ADDWF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ANDWF:
    {
      result_outResult = GGS_string ("ANDWF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_COMF:
    {
      result_outResult = GGS_string ("COMF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECF:
    {
      result_outResult = GGS_string ("DECF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      result_outResult = GGS_string ("DECFSZ") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCF:
    {
      result_outResult = GGS_string ("INCF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      result_outResult = GGS_string ("INCFSZ") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_IORWF:
    {
      result_outResult = GGS_string ("IORWF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_MOVF:
    {
      result_outResult = GGS_string ("MOVF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RLF:
    {
      result_outResult = GGS_string ("RLF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RRF:
    {
      result_outResult = GGS_string ("RRF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SUBWF:
    {
      result_outResult = GGS_string ("SUBWF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SWAPF:
    {
      result_outResult = GGS_string ("SWAPF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_XORWF:
    {
      result_outResult = GGS_string ("XORWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
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
//  Extension Getter '@baseline_F_instruction_base_code mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      result_outResult = GGS_string ("CLRF") ;
    }
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      result_outResult = GGS_string ("MOVWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
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
//  Extension Getter '@baseline_bit_oriented_op mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_bit_5F_oriented_5F_op & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      result_outResult = GGS_string ("BCF") ;
    }
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      result_outResult = GGS_string ("BSF") ;
    }
    break ;
  }
//---
  return result_outResult ;
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
//  Extension Getter '@baseline_literal_instruction_opcode mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      result_outResult = GGS_string ("ANDLW") ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      result_outResult = GGS_string ("IORLW") ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      result_outResult = GGS_string ("MOVLW") ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_RETLW:
    {
      result_outResult = GGS_string ("RETLW") ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      result_outResult = GGS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
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
//  Extension Getter '@baseline_WO_OPERAND_group mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_WO_5F_OPERAND_5F_group & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_WO_5F_OPERAND_5F_group temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_NOP:
    {
      result_outResult = GGS_string ("NOP") ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRW:
    {
      result_outResult = GGS_string ("CLRW") ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRWDT:
    {
      result_outResult = GGS_string ("CLRWDT") ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_OPTION_5F_:
    {
      result_outResult = GGS_string ("OPTION") ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_SLEEP:
    {
      result_outResult = GGS_string ("SLEEP") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Map type @midrange_5F_symbolTableForConvertingRelatives
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives::GGS_midrange_5F_symbolTableForConvertingRelatives (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives::~ GGS_midrange_5F_symbolTableForConvertingRelatives (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives::GGS_midrange_5F_symbolTableForConvertingRelatives (const GGS_midrange_5F_symbolTableForConvertingRelatives & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives & GGS_midrange_5F_symbolTableForConvertingRelatives::operator = (const GGS_midrange_5F_symbolTableForConvertingRelatives & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives GGS_midrange_5F_symbolTableForConvertingRelatives::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_symbolTableForConvertingRelatives::getter_hasKey (const GGS_string & inKey
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_symbolTableForConvertingRelatives::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                                  const GGS_uint & inLevel
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_symbolTableForConvertingRelatives::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_symbolTableForConvertingRelatives::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_symbolTableForConvertingRelatives::getter_locationForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_midrange_5F_symbolTableForConvertingRelatives::getter_keyList (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTableForConvertingRelatives::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives::performInsert (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>
GGS_midrange_5F_symbolTableForConvertingRelatives::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_midrange_5F_symbolTableForConvertingRelatives::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>>
GGS_midrange_5F_symbolTableForConvertingRelatives::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_midrange_5F_symbolTableForConvertingRelatives::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ GGS_midrange_5F_symbolTableForConvertingRelatives
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::init_nil () ;
    }else{
      GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRoutineAddress = info->mProperty_mRoutineAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives GGS_midrange_5F_symbolTableForConvertingRelatives::class_func_mapWithMapToOverride (const GGS_midrange_5F_symbolTableForConvertingRelatives & inMapToOverride
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives GGS_midrange_5F_symbolTableForConvertingRelatives::getter_overriddenMap (Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_symbolTableForConvertingRelatives result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives::setter_insertKey (GGS_lstring inLKey,
                                                                          GGS_uint inArgument0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives::method_searchKey (GGS_lstring inLKey,
                                                                          GGS_uint & outArgument0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element> info ;
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
    outArgument0 = info->mProperty_mRoutineAddress ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_symbolTableForConvertingRelatives::getter_mRoutineAddressForKey (const GGS_string & inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRoutineAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives::setter_setMRoutineAddressForKey (GGS_uint inValue,
                                                                                         GGS_string inKey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRoutineAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_midrange_5F_symbolTableForConvertingRelatives_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> & inArray,
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
    ioString.appendString ("mRoutineAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mRoutineAddress.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> array = sortedInfoArray () ;
    GGS_midrange_5F_symbolTableForConvertingRelatives_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_midrange_5F_symbolTableForConvertingRelatives_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @midrange_5F_symbolTableForConvertingRelatives
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_symbolTableForConvertingRelatives::DownEnumerator_midrange_5F_symbolTableForConvertingRelatives (const GGS_midrange_5F_symbolTableForConvertingRelatives & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element DownEnumerator_midrange_5F_symbolTableForConvertingRelatives::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_midrange_5F_symbolTableForConvertingRelatives::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_midrange_5F_symbolTableForConvertingRelatives::current_mRoutineAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineAddress ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @midrange_5F_symbolTableForConvertingRelatives
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_symbolTableForConvertingRelatives::UpEnumerator_midrange_5F_symbolTableForConvertingRelatives (const GGS_midrange_5F_symbolTableForConvertingRelatives & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element UpEnumerator_midrange_5F_symbolTableForConvertingRelatives::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_midrange_5F_symbolTableForConvertingRelatives::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_midrange_5F_symbolTableForConvertingRelatives::current_mRoutineAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineAddress ;
}


//--------------------------------------------------------------------------------------------------
//     @midrange_symbolTableForConvertingRelatives generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives ("midrange_symbolTableForConvertingRelatives",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTableForConvertingRelatives::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTableForConvertingRelatives::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTableForConvertingRelatives (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives GGS_midrange_5F_symbolTableForConvertingRelatives::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives result ;
  const GGS_midrange_5F_symbolTableForConvertingRelatives * p = (const GGS_midrange_5F_symbolTableForConvertingRelatives *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTableForConvertingRelatives *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTableForConvertingRelatives", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_instruction defineLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_defineLabelAtAddress (GGS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                GGS_uint & /* ioArgument_ioAddress */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabelAtAddress (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               GGS_midrange_5F_symbolTableForConvertingRelatives & io_ioRoutineSymbolTable,
                                               GGS_uint & io_ioAddress,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_defineLabelAtAddress (io_ioRoutineSymbolTable, io_ioAddress, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction compute'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_compute (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                  const GGS_midrange_5F_symbolTableForConvertingRelatives constin_inRoutineSymbolTable,
                                  GGS_uint & io_ioAddress,
                                  GGS_bool & io_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                  GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                  const GGS_uint constin_inIndex,
                                  GGS_string & io_ioListFileContents,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_compute (constin_inRoutineSymbolTable, io_ioAddress, io_ioJUMP_5F_or_5F_JSR_5F_fixed, io_ioGeneratedInstructionList, constin_inIndex, io_ioListFileContents, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_2E_weak::GGS_baseline_5F_assembly_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_2E_weak & GGS_baseline_5F_assembly_5F_instruction_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

class CollectionElementPtr_baseline_5F_assembly_5F_instructionList : public CollectionElementPtr {
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_assembly_5F_instructionList::CollectionElementPtr_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_assembly_5F_instructionList::CollectionElementPtr_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_baseline_5F_assembly_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_baseline_5F_assembly_5F_instructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_baseline_5F_assembly_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @baseline_5F_assembly_5F_instructionList
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList::GGS_baseline_5F_assembly_5F_instructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList::GGS_baseline_5F_assembly_5F_instructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_baseline_5F_assembly_5F_instructionList * p = (CollectionElementPtr_baseline_5F_assembly_5F_instructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_baseline_5F_assembly_5F_instructionList) ;
    const GGS_baseline_5F_assembly_5F_instructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                             const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_baseline_5F_assembly_5F_instructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_baseline_5F_assembly_5F_instructionList (in_mInstruction COMMA_THERE)) ;
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

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak & GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_actualInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_FD & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_F & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_FB & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_baseline_5F_assembly_5F_GOTO_2E_weak::GGS_baseline_5F_assembly_5F_GOTO_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO_2E_weak & GGS_baseline_5F_assembly_5F_GOTO_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_GOTO & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_baseline_5F_assembly_5F_SKIP_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_SKIP_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_SKIP_2E_weak::GGS_baseline_5F_assembly_5F_SKIP_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP_2E_weak & GGS_baseline_5F_assembly_5F_SKIP_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_SKIP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_baseline_5F_assembly_5F_CALL_2E_weak::GGS_baseline_5F_assembly_5F_CALL_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL_2E_weak & GGS_baseline_5F_assembly_5F_CALL_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_CALL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak & GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_baseline_5F_assembly_5F_TRIS_2E_weak::GGS_baseline_5F_assembly_5F_TRIS_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS_2E_weak & GGS_baseline_5F_assembly_5F_TRIS_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_TRIS & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak & GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak & GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//  Map type @midrange_5F_symbolTable
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable::GGS_midrange_5F_symbolTable (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable::~ GGS_midrange_5F_symbolTable (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable::GGS_midrange_5F_symbolTable (const GGS_midrange_5F_symbolTable & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable & GGS_midrange_5F_symbolTable::operator = (const GGS_midrange_5F_symbolTable & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable GGS_midrange_5F_symbolTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_symbolTable::getter_hasKey (const GGS_string & inKey
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_symbolTable::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                            const GGS_uint & inLevel
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_symbolTable::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_symbolTable::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_symbolTable::getter_locationForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_midrange_5F_symbolTable::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTable::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTable_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable::performInsert (const GGS_midrange_5F_symbolTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_midrange_5F_symbolTable_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>
GGS_midrange_5F_symbolTable::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_midrange_5F_symbolTable::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>>
GGS_midrange_5F_symbolTable::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_midrange_5F_symbolTable::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element_3F_ GGS_midrange_5F_symbolTable
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_symbolTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_midrange_5F_symbolTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_midrange_5F_symbolTable_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRoutineAddress = info->mProperty_mRoutineAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable GGS_midrange_5F_symbolTable::class_func_mapWithMapToOverride (const GGS_midrange_5F_symbolTable & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTable_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable GGS_midrange_5F_symbolTable::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_symbolTable result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable::setter_insertKey (GGS_lstring inLKey,
                                                    GGS_uint inArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_symbolTable_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable::method_searchKey (GGS_lstring inLKey,
                                                    GGS_uint & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element> info ;
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
    outArgument0 = info->mProperty_mRoutineAddress ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_symbolTable::getter_mRoutineAddressForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRoutineAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable::setter_setMRoutineAddressForKey (GGS_uint inValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_midrange_5F_symbolTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRoutineAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_midrange_5F_symbolTable_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>> & inArray,
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
    ioString.appendString ("mRoutineAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mRoutineAddress.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>> array = sortedInfoArray () ;
    GGS_midrange_5F_symbolTable_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTable_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_midrange_5F_symbolTable_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @midrange_5F_symbolTable
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_symbolTable::DownEnumerator_midrange_5F_symbolTable (const GGS_midrange_5F_symbolTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element DownEnumerator_midrange_5F_symbolTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_midrange_5F_symbolTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_midrange_5F_symbolTable::current_mRoutineAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineAddress ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @midrange_5F_symbolTable
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_symbolTable::UpEnumerator_midrange_5F_symbolTable (const GGS_midrange_5F_symbolTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element UpEnumerator_midrange_5F_symbolTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_midrange_5F_symbolTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_midrange_5F_symbolTable::current_mRoutineAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineAddress ;
}


//--------------------------------------------------------------------------------------------------
//     @midrange_symbolTable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable ("midrange_symbolTable",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable GGS_midrange_5F_symbolTable::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable result ;
  const GGS_midrange_5F_symbolTable * p = (const GGS_midrange_5F_symbolTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_instruction enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_enterLabelAtAddress (GGS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                               GGS_uint & /* ioArgument_ioAddress */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              GGS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                              GGS_uint & io_ioAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_enterLabelAtAddress (io_ioRoutineSymbolTable, io_ioAddress, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      const GGS_registerTable constin_inRegisterTable,
                                                      const GGS_constantMap constin_inConstantMap,
                                                      const GGS_uint constin_inTotalBankCount,
                                                      const GGS_midrange_5F_symbolTable constin_inRoutineSymbolTable,
                                                      GGS_string & io_ioListFileContents,
                                                      GGS_uint & io_ioAddress,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_generateBinaryCodeAtAddress (constin_inRegisterTable, constin_inConstantMap, constin_inTotalBankCount, constin_inRoutineSymbolTable, io_ioListFileContents, io_ioAddress, inCompiler COMMA_THERE) ;
  }
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
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_AbstractCaseItem::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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

GGS_pic_31__38_AbstractCaseItem_2E_weak::GGS_pic_31__38_AbstractCaseItem_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem_2E_weak & GGS_pic_31__38_AbstractCaseItem_2E_weak::operator = (const GGS_pic_31__38_AbstractCaseItem & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @pic_31__38_IntervalCaseItem reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_IntervalCaseItem::objectCompare (const GGS_pic_31__38_IntervalCaseItem & inOperand) const {
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

GGS_pic_31__38_IntervalCaseItem::GGS_pic_31__38_IntervalCaseItem (void) :
GGS_pic_31__38_AbstractCaseItem () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem GGS_pic_31__38_IntervalCaseItem::
init_21__21__21_ (const GGS_immediatExpression & in_mMinExpression,
                  const GGS_immediatExpression & in_mMaxExpression,
                  const GGS_location & in_mCaseExpressionLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_IntervalCaseItem * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_IntervalCaseItem (inCompiler COMMA_THERE)) ;
  object->pic_31__38_IntervalCaseItem_init_21__21__21_ (in_mMinExpression, in_mMaxExpression, in_mCaseExpressionLocation, inCompiler) ;
  const GGS_pic_31__38_IntervalCaseItem result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::
pic_31__38_IntervalCaseItem_init_21__21__21_ (const GGS_immediatExpression & in_mMinExpression,
                                              const GGS_immediatExpression & in_mMaxExpression,
                                              const GGS_location & in_mCaseExpressionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mMinExpression = in_mMinExpression ;
  mProperty_mMaxExpression = in_mMaxExpression ;
  mProperty_mCaseExpressionLocation = in_mCaseExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem::GGS_pic_31__38_IntervalCaseItem (const cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) :
GGS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_IntervalCaseItem) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_IntervalCaseItem::readProperty_mMinExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    return p->mProperty_mMinExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_IntervalCaseItem::readProperty_mMaxExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    return p->mProperty_mMaxExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_IntervalCaseItem::readProperty_mCaseExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    return p->mProperty_mCaseExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18IntervalCaseItem class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_IntervalCaseItem::cPtr_pic_31__38_IntervalCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (inCompiler COMMA_THERE),
mProperty_mMinExpression (),
mProperty_mMaxExpression (),
mProperty_mCaseExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_IntervalCaseItem::cPtr_pic_31__38_IntervalCaseItem (const GGS_immediatExpression & in_mMinExpression,
                                                                    const GGS_immediatExpression & in_mMaxExpression,
                                                                    const GGS_location & in_mCaseExpressionLocation,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (inCompiler COMMA_THERE),
mProperty_mMinExpression (),
mProperty_mMaxExpression (),
mProperty_mCaseExpressionLocation () {
  mProperty_mMinExpression = in_mMinExpression ;
  mProperty_mMaxExpression = in_mMaxExpression ;
  mProperty_mCaseExpressionLocation = in_mCaseExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_IntervalCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

void cPtr_pic_31__38_IntervalCaseItem::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18IntervalCaseItem:") ;
  mProperty_mMinExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMaxExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_IntervalCaseItem::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_IntervalCaseItem (mProperty_mMinExpression, mProperty_mMaxExpression, mProperty_mCaseExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_IntervalCaseItem::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_AbstractCaseItem::printNonNullClassInstanceProperties () ;
    mProperty_mMinExpression.printNonNullClassInstanceProperties ("mMinExpression") ;
    mProperty_mMaxExpression.printNonNullClassInstanceProperties ("mMaxExpression") ;
    mProperty_mCaseExpressionLocation.printNonNullClassInstanceProperties ("mCaseExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18IntervalCaseItem generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ("pic18IntervalCaseItem",
                                                                                & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_IntervalCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_IntervalCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_IntervalCaseItem (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem GGS_pic_31__38_IntervalCaseItem::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_IntervalCaseItem result ;
  const GGS_pic_31__38_IntervalCaseItem * p = (const GGS_pic_31__38_IntervalCaseItem *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_IntervalCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IntervalCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_IntervalCaseItem_2E_weak::objectCompare (const GGS_pic_31__38_IntervalCaseItem_2E_weak & inOperand) const {
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

GGS_pic_31__38_IntervalCaseItem_2E_weak::GGS_pic_31__38_IntervalCaseItem_2E_weak (void) :
GGS_pic_31__38_AbstractCaseItem_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem_2E_weak & GGS_pic_31__38_IntervalCaseItem_2E_weak::operator = (const GGS_pic_31__38_IntervalCaseItem & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem_2E_weak::GGS_pic_31__38_IntervalCaseItem_2E_weak (const GGS_pic_31__38_IntervalCaseItem & inSource) :
GGS_pic_31__38_AbstractCaseItem_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem_2E_weak GGS_pic_31__38_IntervalCaseItem_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_IntervalCaseItem_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem GGS_pic_31__38_IntervalCaseItem_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_IntervalCaseItem result ;
  if (isValid ()) {
    const cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_IntervalCaseItem (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem GGS_pic_31__38_IntervalCaseItem_2E_weak::bang_pic_31__38_IntervalCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_IntervalCaseItem result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_IntervalCaseItem) ;
      result = GGS_pic_31__38_IntervalCaseItem ((cPtr_pic_31__38_IntervalCaseItem *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18IntervalCaseItem.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem_2E_weak ("pic18IntervalCaseItem.weak",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_IntervalCaseItem_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_IntervalCaseItem_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_IntervalCaseItem_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem_2E_weak GGS_pic_31__38_IntervalCaseItem_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_IntervalCaseItem_2E_weak result ;
  const GGS_pic_31__38_IntervalCaseItem_2E_weak * p = (const GGS_pic_31__38_IntervalCaseItem_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_IntervalCaseItem_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IntervalCaseItem.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_CaseExpressionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_pic_31__38_CaseExpressionList : public CollectionElementPtr {
  public: GGS_pic_31__38_CaseExpressionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_pic_31__38_CaseExpressionList (const GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_CaseExpressionList::CollectionElementPtr_pic_31__38_CaseExpressionList (const GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mCaseItem) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_CaseExpressionList::CollectionElementPtr_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mCaseItem) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_pic_31__38_CaseExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_pic_31__38_CaseExpressionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_pic_31__38_CaseExpressionList (mObject.mProperty_mCaseItem COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_CaseExpressionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList::GGS_pic_31__38_CaseExpressionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList::GGS_pic_31__38_CaseExpressionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_pic_31__38_CaseExpressionList * p = (CollectionElementPtr_pic_31__38_CaseExpressionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_pic_31__38_CaseExpressionList) ;
    const GGS_pic_31__38_CaseExpressionList_2E_element element (p->mObject.mProperty_mCaseItem) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_pic_31__38_CaseExpressionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_pic_31__38_CaseExpressionList (in_mCaseItem COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_CaseExpressionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_CaseExpressionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::description (String & ioString,
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
      ioString.appendString ("mCaseItem:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseItem.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_CaseExpressionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::plusPlusAssignOperation (const GGS_pic_31__38_CaseExpressionList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::class_func_listWithValue (const GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_CaseExpressionList_2E_element element (inOperand0) ;
  GGS_pic_31__38_CaseExpressionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::addAssignOperation (const GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_CaseExpressionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::setter_append (const GGS_pic_31__38_AbstractCaseItem inOperand0,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_CaseExpressionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::setter_insertAtIndex (const GGS_pic_31__38_AbstractCaseItem inOperand0,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_CaseExpressionList_2E_element newElement (inOperand0) ;
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

void GGS_pic_31__38_CaseExpressionList::setter_removeAtIndex (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mCaseItem ;
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

void GGS_pic_31__38_CaseExpressionList::setter_popFirst (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseItem ;
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

void GGS_pic_31__38_CaseExpressionList::setter_popLast (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseItem ;
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

void GGS_pic_31__38_CaseExpressionList::method_first (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseItem ;
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

void GGS_pic_31__38_CaseExpressionList::method_last (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseItem ;
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

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::add_operation (const GGS_pic_31__38_CaseExpressionList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
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

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
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

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::plusAssignOperation (const GGS_pic_31__38_CaseExpressionList inList,
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

void GGS_pic_31__38_CaseExpressionList::setter_setMCaseItemAtIndex (GGS_pic_31__38_AbstractCaseItem inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseItem = inOperand ;
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
  
GGS_pic_31__38_AbstractCaseItem GGS_pic_31__38_CaseExpressionList::getter_mCaseItemAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_AbstractCaseItem result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseItem ;
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
// Down Enumerator for @pic_31__38_CaseExpressionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_CaseExpressionList::DownEnumerator_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element DownEnumerator_pic_31__38_CaseExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem DownEnumerator_pic_31__38_CaseExpressionList::current_mCaseItem (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseItem ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_CaseExpressionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_CaseExpressionList::UpEnumerator_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element UpEnumerator_pic_31__38_CaseExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem UpEnumerator_pic_31__38_CaseExpressionList::current_mCaseItem (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseItem ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18CaseExpressionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ("pic18CaseExpressionList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_CaseExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_CaseExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_CaseExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_CaseExpressionList result ;
  const GGS_pic_31__38_CaseExpressionList * p = (const GGS_pic_31__38_CaseExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_CaseExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18CaseExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_SwitchInstructionCaseList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_pic_31__38_SwitchInstructionCaseList : public CollectionElementPtr {
  public: GGS_pic_31__38_SwitchInstructionCaseList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_pic_31__38_SwitchInstructionCaseList (const GGS_location & in_mStartOfCase,
                                                                     const GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                     const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_SwitchInstructionCaseList::CollectionElementPtr_pic_31__38_SwitchInstructionCaseList (const GGS_location & in_mStartOfCase,
                                                                                                                      const GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                                                                      const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mStartOfCase, in_mCaseExpressionList, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_SwitchInstructionCaseList::CollectionElementPtr_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mStartOfCase, inElement.mProperty_mCaseExpressionList, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_pic_31__38_SwitchInstructionCaseList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_pic_31__38_SwitchInstructionCaseList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_pic_31__38_SwitchInstructionCaseList (mObject.mProperty_mStartOfCase, mObject.mProperty_mCaseExpressionList, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_SwitchInstructionCaseList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList::GGS_pic_31__38_SwitchInstructionCaseList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList::GGS_pic_31__38_SwitchInstructionCaseList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_pic_31__38_SwitchInstructionCaseList * p = (CollectionElementPtr_pic_31__38_SwitchInstructionCaseList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_pic_31__38_SwitchInstructionCaseList) ;
    const GGS_pic_31__38_SwitchInstructionCaseList_2E_element element (p->mObject.mProperty_mStartOfCase, p->mObject.mProperty_mCaseExpressionList, p->mObject.mProperty_mInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                          const GGS_location & in_mStartOfCase,
                                                                          const GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                          const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_pic_31__38_SwitchInstructionCaseList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_pic_31__38_SwitchInstructionCaseList (in_mStartOfCase, in_mCaseExpressionList, in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_SwitchInstructionCaseList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_SwitchInstructionCaseList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::description (String & ioString,
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
      ioString.appendString ("mStartOfCase:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStartOfCase.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCaseExpressionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseExpressionList.description (ioString, inIndentation + 1) ;
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

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::plusPlusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::class_func_listWithValue (const GGS_location & inOperand0,
                                                                                                             const GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                             const GGS_pic_31__38_InstructionList & inOperand2
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_SwitchInstructionCaseList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::addAssignOperation (const GGS_location & inOperand0,
                                                                   const GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                   const GGS_pic_31__38_InstructionList & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_SwitchInstructionCaseList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::setter_append (const GGS_location inOperand0,
                                                              const GGS_pic_31__38_CaseExpressionList inOperand1,
                                                              const GGS_pic_31__38_InstructionList inOperand2,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_SwitchInstructionCaseList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::setter_insertAtIndex (const GGS_location inOperand0,
                                                                     const GGS_pic_31__38_CaseExpressionList inOperand1,
                                                                     const GGS_pic_31__38_InstructionList inOperand2,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_SwitchInstructionCaseList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_removeAtIndex (GGS_location & outOperand0,
                                                                     GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                                     GGS_pic_31__38_InstructionList & outOperand2,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mStartOfCase ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_popFirst (GGS_location & outOperand0,
                                                                GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                                GGS_pic_31__38_InstructionList & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStartOfCase ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_popLast (GGS_location & outOperand0,
                                                               GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                               GGS_pic_31__38_InstructionList & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStartOfCase ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::method_first (GGS_location & outOperand0,
                                                             GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                             GGS_pic_31__38_InstructionList & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStartOfCase ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::method_last (GGS_location & outOperand0,
                                                            GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                            GGS_pic_31__38_InstructionList & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStartOfCase ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseExpressionList ;
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

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::add_operation (const GGS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
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

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
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

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::plusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList inList,
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_setMStartOfCaseAtIndex (GGS_location inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStartOfCase = inOperand ;
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
  
GGS_location GGS_pic_31__38_SwitchInstructionCaseList::getter_mStartOfCaseAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStartOfCase ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_setMCaseExpressionListAtIndex (GGS_pic_31__38_CaseExpressionList inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseExpressionList = inOperand ;
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
  
GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_SwitchInstructionCaseList::getter_mCaseExpressionListAtIndex (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
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
  
GGS_pic_31__38_InstructionList GGS_pic_31__38_SwitchInstructionCaseList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @pic_31__38_SwitchInstructionCaseList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_SwitchInstructionCaseList::DownEnumerator_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element DownEnumerator_pic_31__38_SwitchInstructionCaseList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_pic_31__38_SwitchInstructionCaseList::current_mStartOfCase (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStartOfCase ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList DownEnumerator_pic_31__38_SwitchInstructionCaseList::current_mCaseExpressionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_SwitchInstructionCaseList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_SwitchInstructionCaseList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_SwitchInstructionCaseList::UpEnumerator_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element UpEnumerator_pic_31__38_SwitchInstructionCaseList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_pic_31__38_SwitchInstructionCaseList::current_mStartOfCase (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStartOfCase ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList UpEnumerator_pic_31__38_SwitchInstructionCaseList::current_mCaseExpressionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_SwitchInstructionCaseList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18SwitchInstructionCaseList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ("pic18SwitchInstructionCaseList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_SwitchInstructionCaseList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_SwitchInstructionCaseList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_SwitchInstructionCaseList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  const GGS_pic_31__38_SwitchInstructionCaseList * p = (const GGS_pic_31__38_SwitchInstructionCaseList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_SwitchInstructionCaseList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SwitchInstructionCaseList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

