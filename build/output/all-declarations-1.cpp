#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@ramDefinitionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ramDefinitionList : public cCollectionElement {
  public: GGS_ramDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ramDefinitionList (const GGS_lstring & in_mBankName,
                                                const GGS_declarationInRamList & in_mDeclaration
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ramDefinitionList (const GGS_ramDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ramDefinitionList::cCollectionElement_ramDefinitionList (const GGS_lstring & in_mBankName,
                                                                            const GGS_declarationInRamList & in_mDeclaration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBankName, in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ramDefinitionList::cCollectionElement_ramDefinitionList (const GGS_ramDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBankName, inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ramDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ramDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ramDefinitionList (mObject.mProperty_mBankName, mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ramDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList::GGS_ramDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList::GGS_ramDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    const GGS_ramDefinitionList_2E_element element (p->mObject.mProperty_mBankName, p->mObject.mProperty_mDeclaration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mBankName,
                                                       const GGS_declarationInRamList & in_mDeclaration
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_ramDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ramDefinitionList (in_mBankName, in_mDeclaration COMMA_THERE)) ;
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

GGS_ramDefinitionList GGS_ramDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_ramDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_configSettingList : public cCollectionElement {
  public: GGS_configSettingList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_configSettingList (const GGS_lstring & in_mSettingName,
                                                const GGS_lstring & in_mSettingValue
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_configSettingList (const GGS_configSettingList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_configSettingList::cCollectionElement_configSettingList (const GGS_lstring & in_mSettingName,
                                                                            const GGS_lstring & in_mSettingValue
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSettingName, in_mSettingValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_configSettingList::cCollectionElement_configSettingList (const GGS_configSettingList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSettingName, inElement.mProperty_mSettingValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_configSettingList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_configSettingList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_configSettingList (mObject.mProperty_mSettingName, mObject.mProperty_mSettingValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @configSettingList
//--------------------------------------------------------------------------------------------------

GGS_configSettingList::GGS_configSettingList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList::GGS_configSettingList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    const GGS_configSettingList_2E_element element (p->mObject.mProperty_mSettingName, p->mObject.mProperty_mSettingValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mSettingName,
                                                       const GGS_lstring & in_mSettingValue
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_configSettingList * p = nullptr ;
  macroMyNew (p, cCollectionElement_configSettingList (in_mSettingName, in_mSettingValue COMMA_THERE)) ;
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

GGS_configSettingList GGS_configSettingList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_configSettingList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_configDefinitionList : public cCollectionElement {
  public: GGS_configDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_configDefinitionList (const GGS_location & in_mDefinitionLocation,
                                                   const GGS_configSettingList & in_mSettingList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_configDefinitionList (const GGS_configDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_configDefinitionList::cCollectionElement_configDefinitionList (const GGS_location & in_mDefinitionLocation,
                                                                                  const GGS_configSettingList & in_mSettingList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDefinitionLocation, in_mSettingList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_configDefinitionList::cCollectionElement_configDefinitionList (const GGS_configDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDefinitionLocation, inElement.mProperty_mSettingList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_configDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_configDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_configDefinitionList (mObject.mProperty_mDefinitionLocation, mObject.mProperty_mSettingList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @configDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList::GGS_configDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList::GGS_configDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    const GGS_configDefinitionList_2E_element element (p->mObject.mProperty_mDefinitionLocation, p->mObject.mProperty_mSettingList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_location & in_mDefinitionLocation,
                                                          const GGS_configSettingList & in_mSettingList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_configDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_configDefinitionList (in_mDefinitionLocation, in_mSettingList COMMA_THERE)) ;
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

GGS_configDefinitionList GGS_configDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_configDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_immediatExpression_2E_weak::GGS_immediatExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak & GGS_immediatExpression_2E_weak::operator = (const GGS_immediatExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

class cCollectionElement_immediatExpressionList : public cCollectionElement {
  public: GGS_immediatExpressionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_immediatExpressionList (const GGS_immediatExpression & in_mExpression,
                                                     const GGS_location & in_mErrorLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_immediatExpressionList (const GGS_immediatExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatExpressionList::cCollectionElement_immediatExpressionList (const GGS_immediatExpression & in_mExpression,
                                                                                      const GGS_location & in_mErrorLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatExpressionList::cCollectionElement_immediatExpressionList (const GGS_immediatExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_immediatExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_immediatExpressionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_immediatExpressionList (mObject.mProperty_mExpression, mObject.mProperty_mErrorLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @immediatExpressionList
//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList::GGS_immediatExpressionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList::GGS_immediatExpressionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    const GGS_immediatExpressionList_2E_element element (p->mObject.mProperty_mExpression, p->mObject.mProperty_mErrorLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_immediatExpression & in_mExpression,
                                                            const GGS_location & in_mErrorLocation
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_immediatExpressionList (in_mExpression, in_mErrorLocation COMMA_THERE)) ;
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

GGS_immediatExpressionList GGS_immediatExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_immediatExpressionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
// @immediatInteger reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatInteger::objectCompare (const GGS_immediatInteger & inOperand) const {
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

GGS_immediatInteger::GGS_immediatInteger (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatInteger GGS_immediatInteger::
init_21_ (const GGS_luint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_immediatInteger * object = nullptr ;
  macroMyNew (object, cPtr_immediatInteger (inCompiler COMMA_THERE)) ;
  object->immediatInteger_init_21_ (in_mValue, inCompiler) ;
  const GGS_immediatInteger result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatInteger::
immediatInteger_init_21_ (const GGS_luint & in_mValue,
                          Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger::GGS_immediatInteger (const cPtr_immediatInteger * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatInteger) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatInteger GGS_immediatInteger::class_func_new (const GGS_luint & in_mValue,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_immediatInteger result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatInteger (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_immediatInteger::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_immediatInteger * p = (cPtr_immediatInteger *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatInteger) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatInteger class
//--------------------------------------------------------------------------------------------------

cPtr_immediatInteger::cPtr_immediatInteger (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatInteger::cPtr_immediatInteger (const GGS_luint & in_mValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatInteger::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

void cPtr_immediatInteger::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatInteger:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatInteger::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatInteger (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatInteger::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatInteger generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatInteger ("immediatInteger",
                                                                    & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatInteger::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatInteger::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatInteger (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger GGS_immediatInteger::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_immediatInteger result ;
  const GGS_immediatInteger * p = (const GGS_immediatInteger *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatInteger *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatInteger", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatInteger_2E_weak::objectCompare (const GGS_immediatInteger_2E_weak & inOperand) const {
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

GGS_immediatInteger_2E_weak::GGS_immediatInteger_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak & GGS_immediatInteger_2E_weak::operator = (const GGS_immediatInteger & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatRegister_2E_weak::GGS_immediatRegister_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak & GGS_immediatRegister_2E_weak::operator = (const GGS_immediatRegister & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatAdd GGS_immediatAdd::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatAdd result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatAdd (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatAdd::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatAdd_2E_weak::GGS_immediatAdd_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak & GGS_immediatAdd_2E_weak::operator = (const GGS_immediatAdd & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatSub GGS_immediatSub::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatSub result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatSub (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatSub::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatSub_2E_weak::GGS_immediatSub_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak & GGS_immediatSub_2E_weak::operator = (const GGS_immediatSub & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatMul GGS_immediatMul::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatMul result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatMul (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatMul::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatMul_2E_weak::GGS_immediatMul_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak & GGS_immediatMul_2E_weak::operator = (const GGS_immediatMul & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatDiv GGS_immediatDiv::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatDiv result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatDiv (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatDiv::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatDiv_2E_weak::GGS_immediatDiv_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak & GGS_immediatDiv_2E_weak::operator = (const GGS_immediatDiv & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatMod GGS_immediatMod::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatMod result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatMod (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatMod::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatMod_2E_weak::GGS_immediatMod_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak & GGS_immediatMod_2E_weak::operator = (const GGS_immediatMod & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatOr GGS_immediatOr::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                               const GGS_immediatExpression & in_mRightExpression,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_immediatOr result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatOr (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatOr::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatOr_2E_weak::GGS_immediatOr_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak & GGS_immediatOr_2E_weak::operator = (const GGS_immediatOr & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatAnd GGS_immediatAnd::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatAnd result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatAnd (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatAnd::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatAnd_2E_weak::GGS_immediatAnd_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak & GGS_immediatAnd_2E_weak::operator = (const GGS_immediatAnd & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatXor GGS_immediatXor::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatXor result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatXor (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatXor::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatXor_2E_weak::GGS_immediatXor_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak & GGS_immediatXor_2E_weak::operator = (const GGS_immediatXor & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatLeftShift GGS_immediatLeftShift::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                             const GGS_immediatExpression & in_mRightExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_immediatLeftShift result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatLeftShift (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatLeftShift::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatLeftShift_2E_weak::GGS_immediatLeftShift_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak & GGS_immediatLeftShift_2E_weak::operator = (const GGS_immediatLeftShift & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatRightShift GGS_immediatRightShift::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                               const GGS_immediatExpression & in_mRightExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_immediatRightShift result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatRightShift (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatRightShift::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatRightShift_2E_weak::GGS_immediatRightShift_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak & GGS_immediatRightShift_2E_weak::operator = (const GGS_immediatRightShift & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatEqualTest GGS_immediatEqualTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                             const GGS_immediatExpression & in_mRightExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_immediatEqualTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatEqualTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatEqualTest_2E_weak::GGS_immediatEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak & GGS_immediatEqualTest_2E_weak::operator = (const GGS_immediatEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatNotEqualTest GGS_immediatNotEqualTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                                   const GGS_immediatExpression & in_mRightExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_immediatNotEqualTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatNotEqualTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatNotEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatNotEqualTest_2E_weak::GGS_immediatNotEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak & GGS_immediatNotEqualTest_2E_weak::operator = (const GGS_immediatNotEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatGreaterTest GGS_immediatGreaterTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                                 const GGS_immediatExpression & in_mRightExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatGreaterTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatGreaterTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatGreaterTest_2E_weak::GGS_immediatGreaterTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak & GGS_immediatGreaterTest_2E_weak::operator = (const GGS_immediatGreaterTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatGreaterOrEqualTest GGS_immediatGreaterOrEqualTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                                               const GGS_immediatExpression & in_mRightExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterOrEqualTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatGreaterOrEqualTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatGreaterOrEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatGreaterOrEqualTest_2E_weak::GGS_immediatGreaterOrEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak & GGS_immediatGreaterOrEqualTest_2E_weak::operator = (const GGS_immediatGreaterOrEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatLowerTest GGS_immediatLowerTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                             const GGS_immediatExpression & in_mRightExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_immediatLowerTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatLowerTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatLowerTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatLowerTest_2E_weak::GGS_immediatLowerTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak & GGS_immediatLowerTest_2E_weak::operator = (const GGS_immediatLowerTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatLowerOrEqualTest GGS_immediatLowerOrEqualTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                                           const GGS_immediatExpression & in_mRightExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_immediatLowerOrEqualTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatLowerOrEqualTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatLowerOrEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatLowerOrEqualTest_2E_weak::GGS_immediatLowerOrEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak & GGS_immediatLowerOrEqualTest_2E_weak::operator = (const GGS_immediatLowerOrEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatNegate GGS_immediatNegate::class_func_new (const GGS_immediatExpression & in_mExpression,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_immediatNegate result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatNegate (in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatNegate::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatNegate_2E_weak::GGS_immediatNegate_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak & GGS_immediatNegate_2E_weak::operator = (const GGS_immediatNegate & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_immediatComplement GGS_immediatComplement::class_func_new (const GGS_immediatExpression & in_mExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_immediatComplement result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatComplement (in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_immediatComplement::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_immediatComplement_2E_weak::GGS_immediatComplement_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak & GGS_immediatComplement_2E_weak::operator = (const GGS_immediatComplement & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

class cCollectionElement_immediatSliceExpressionList : public cCollectionElement {
  public: GGS_immediatSliceExpressionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_immediatSliceExpressionList (const GGS_lstring & in_mSliceName,
                                                          const GGS_immediatExpression & in_mExpression
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_immediatSliceExpressionList (const GGS_immediatSliceExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatSliceExpressionList::cCollectionElement_immediatSliceExpressionList (const GGS_lstring & in_mSliceName,
                                                                                                const GGS_immediatExpression & in_mExpression
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceName, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatSliceExpressionList::cCollectionElement_immediatSliceExpressionList (const GGS_immediatSliceExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSliceName, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_immediatSliceExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_immediatSliceExpressionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_immediatSliceExpressionList (mObject.mProperty_mSliceName, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @immediatSliceExpressionList
//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList::GGS_immediatSliceExpressionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList::GGS_immediatSliceExpressionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    const GGS_immediatSliceExpressionList_2E_element element (p->mObject.mProperty_mSliceName, p->mObject.mProperty_mExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mSliceName,
                                                                 const GGS_immediatExpression & in_mExpression
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatSliceExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_immediatSliceExpressionList (in_mSliceName, in_mExpression COMMA_THERE)) ;
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

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_immediatSlice_2E_weak::GGS_immediatSlice_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak & GGS_immediatSlice_2E_weak::operator = (const GGS_immediatSlice & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

class cCollectionElement_constantDefinitionList : public cCollectionElement {
  public: GGS_constantDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_constantDefinitionList (const GGS_lstring & in_mConstantName,
                                                     const GGS_immediatExpression & in_mExpression
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_constantDefinitionList (const GGS_constantDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_constantDefinitionList::cCollectionElement_constantDefinitionList (const GGS_lstring & in_mConstantName,
                                                                                      const GGS_immediatExpression & in_mExpression
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_constantDefinitionList::cCollectionElement_constantDefinitionList (const GGS_constantDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantName, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_constantDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_constantDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_constantDefinitionList (mObject.mProperty_mConstantName, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @constantDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList::GGS_constantDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList::GGS_constantDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    const GGS_constantDefinitionList_2E_element element (p->mObject.mProperty_mConstantName, p->mObject.mProperty_mExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_lstring & in_mConstantName,
                                                            const GGS_immediatExpression & in_mExpression
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_constantDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_constantDefinitionList (in_mConstantName, in_mExpression COMMA_THERE)) ;
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

GGS_constantDefinitionList GGS_constantDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_constantDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_actualConfigurationMap GGS_actualConfigurationMap::class_func_emptyMap (LOCATION_ARGS) {
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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

ComparisonResult GGS_bitNumberExpression_2E_weak::objectCompare (const GGS_bitNumberExpression_2E_weak & inOperand) const {
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

GGS_bitNumberExpression_2E_weak::GGS_bitNumberExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak & GGS_bitNumberExpression_2E_weak::operator = (const GGS_bitNumberExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_bitNumberLiteralExpression GGS_bitNumberLiteralExpression::class_func_new (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
                                                                               const GGS_location & in_mEndOfExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_bitNumberLiteralExpression (in_mBitNumberLiteralExpression, in_mEndOfExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_bitNumberLiteralExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_bitNumberLiteralExpression_2E_weak::GGS_bitNumberLiteralExpression_2E_weak (void) :
GGS_bitNumberExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak & GGS_bitNumberLiteralExpression_2E_weak::operator = (const GGS_bitNumberLiteralExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @bitNumberLiteralValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLiteralValue::objectCompare (const GGS_bitNumberLiteralValue & inOperand) const {
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

GGS_bitNumberLiteralValue::GGS_bitNumberLiteralValue (void) :
GGS_bitNumberExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitNumberLiteralValue GGS_bitNumberLiteralValue::
init_21_ (const GGS_luint & in_mBitNumberLiteralValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_bitNumberLiteralValue * object = nullptr ;
  macroMyNew (object, cPtr_bitNumberLiteralValue (inCompiler COMMA_THERE)) ;
  object->bitNumberLiteralValue_init_21_ (in_mBitNumberLiteralValue, inCompiler) ;
  const GGS_bitNumberLiteralValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralValue::
bitNumberLiteralValue_init_21_ (const GGS_luint & in_mBitNumberLiteralValue,
                                Compiler * /* inCompiler */) {
  mProperty_mBitNumberLiteralValue = in_mBitNumberLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue::GGS_bitNumberLiteralValue (const cPtr_bitNumberLiteralValue * inSourcePtr) :
GGS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLiteralValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue GGS_bitNumberLiteralValue::class_func_new (const GGS_luint & in_mBitNumberLiteralValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralValue result ;
  macroMyNew (result.mObjectPtr, cPtr_bitNumberLiteralValue (in_mBitNumberLiteralValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_bitNumberLiteralValue::readProperty_mBitNumberLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_bitNumberLiteralValue * p = (cPtr_bitNumberLiteralValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralValue) ;
    return p->mProperty_mBitNumberLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLiteralValue class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralValue::cPtr_bitNumberLiteralValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralValue::cPtr_bitNumberLiteralValue (const GGS_luint & in_mBitNumberLiteralValue,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLiteralValue () {
  mProperty_mBitNumberLiteralValue = in_mBitNumberLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_bitNumberLiteralValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue ;
}

void cPtr_bitNumberLiteralValue::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@bitNumberLiteralValue:") ;
  mProperty_mBitNumberLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitNumberLiteralValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLiteralValue (mProperty_mBitNumberLiteralValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberLiteralValue::printNonNullClassInstanceProperties (void) const {
    cPtr_bitNumberExpression::printNonNullClassInstanceProperties () ;
    mProperty_mBitNumberLiteralValue.printNonNullClassInstanceProperties ("mBitNumberLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bitNumberLiteralValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue ("bitNumberLiteralValue",
                                                                          & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitNumberLiteralValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLiteralValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLiteralValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue GGS_bitNumberLiteralValue::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralValue result ;
  const GGS_bitNumberLiteralValue * p = (const GGS_bitNumberLiteralValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLiteralValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLiteralValue_2E_weak::objectCompare (const GGS_bitNumberLiteralValue_2E_weak & inOperand) const {
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

GGS_bitNumberLiteralValue_2E_weak::GGS_bitNumberLiteralValue_2E_weak (void) :
GGS_bitNumberExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak & GGS_bitNumberLiteralValue_2E_weak::operator = (const GGS_bitNumberLiteralValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_bitNumberLabelValue_2E_weak::GGS_bitNumberLabelValue_2E_weak (void) :
GGS_bitNumberExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak & GGS_bitNumberLabelValue_2E_weak::operator = (const GGS_bitNumberLabelValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_labelMap GGS_labelMap::class_func_emptyMap (LOCATION_ARGS) {
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
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_piccolo_5F_lexique::cTokenFor_piccolo_5F_lexique (void) :
mLexicalAttribute_charValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_piccolo_5F_lexique::Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                                                        const String & inSourceFileName
                                                        COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_piccolo_5F_lexique::Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                                                        const String & inSourceString,
                                                        const String & inStringForError
                                                        COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_piccolo_5F_lexique_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_piccolo_5F_lexique_binNumberTooLarge = "bin number too large" ;

static const char * gLexicalMessage_piccolo_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_piccolo_5F_lexique_hexNumberTooLarge = "hex number too large" ;

static const char * gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_piccolo_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_piccolo_5F_lexique_internalError = "internal error" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 160)) {
    static const char * syntaxErrorMessageArray [160] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a label beginning with '@'",
        "a 32-bit unsigned number",
        "a character constant",
        "a character string constant \"...\"",
        "a comment",
        "a comment",
        "the 'bank' keyword",
        "the 'banksave' keyword",
        "the 'banksel' keyword",
        "the 'baseline' keyword",
        "the 'block' keyword",
        "the 'bootloader' keyword",
        "the 'byte' keyword",
        "the 'case' keyword",
        "the 'checkbank' keyword",
        "the 'checknobank' keyword",
        "the 'checkpic' keyword",
        "the 'computed' keyword",
        "the 'configuration' keyword",
        "the 'const' keyword",
        "the 'contextsave' keyword",
        "the 'data' keyword",
        "the 'data16' keyword",
        "the 'data8' keyword",
        "the 'do' keyword",
        "the 'end' keyword",
        "the 'else' keyword",
        "the 'elsif' keyword",
        "the 'ensures' keyword",
        "the 'fast' keyword",
        "the 'forever' keyword",
        "the 'if' keyword",
        "the 'implements' keyword",
        "the 'include' keyword",
        "the 'inline' keyword",
        "the 'interrupt' keyword",
        "the 'macro' keyword",
        "the 'midrange' keyword",
        "the 'nobank' keyword",
        "the 'noreturn' keyword",
        "the 'page' keyword",
        "the 'pic18' keyword",
        "the 'preserved' keyword",
        "the 'protected' keyword",
        "the 'private' keyword",
        "the 'ram' keyword",
        "the 'requires' keyword",
        "the 'rom' keyword",
        "the 'routine' keyword",
        "the 'switch' keyword",
        "the 'unused' keyword",
        "the 'uses' keyword",
        "the 'w' keyword",
        "the 'while' keyword",
        "the 'addlw' instruction",
        "the 'addwf' instruction",
        "the 'addwfc' instruction",
        "the 'andlw' instruction",
        "the 'andwf' instruction",
        "the 'bc' instruction",
        "the 'bcf' instruction",
        "the 'bn' instruction",
        "the 'bnc' instruction",
        "the 'bnn' instruction",
        "the 'bov' instruction",
        "the 'bnov' instruction",
        "the 'bnz' instruction",
        "the 'bsf' instruction",
        "the 'bra' instruction",
        "the 'btg' instruction",
        "the 'bz' instruction",
        "the 'call' instruction",
        "the 'clrf' instruction",
        "the 'clrw' instruction",
        "the 'clrwdt' instruction",
        "the 'comf' instruction",
        "the 'daw' instruction",
        "the 'decf' instruction",
        "the 'incf' instruction",
        "the 'iorlw' instruction",
        "the 'iorwf' instruction",
        "the 'fnop' instruction",
        "the 'goto' instruction",
        "the 'jsr' instruction",
        "the 'jump' instruction",
        "the 'lfsr' instruction",
        "the 'ldataptr' instruction",
        "the 'ldata8ptr' instruction",
        "the 'ldata16ptr' instruction",
        "the 'ltblptr' instruction",
        "the 'mnop' instruction",
        "the 'movf' instruction",
        "the 'movff' instruction",
        "the 'movlw' instruction",
        "the 'movwf' instruction",
        "the 'mullw' instruction",
        "the 'mulwf' instruction",
        "the 'negf' instruction",
        "the 'nop' instruction",
        "the 'nopbra' instruction",
        "the 'pop' instruction",
        "the 'option' instruction",
        "the 'push' instruction",
        "the 'rcall' instruction",
        "the 'reset' instruction",
        "the 'retlw' instruction",
        "the 'rlcf' instruction",
        "the 'rlf' instruction",
        "the 'rlncf' instruction",
        "the 'rrcf' instruction",
        "the 'rrf' instruction",
        "the 'rrncf' instruction",
        "the 'setf' instruction",
        "the 'sleep' instruction",
        "the 'subfwb' instruction",
        "the 'sublw' instruction",
        "the 'subwf' instruction",
        "the 'subwfb' instruction",
        "the 'swapf' instruction",
        "the 'tblrd' instruction",
        "the 'tblwt' instruction",
        "the 'tris' instruction",
        "the 'xorlw' instruction",
        "the 'xorwf' instruction",
        "the '*' delimitor",
        "the '*+' delimitor",
        "the ',' delimitor",
        "the '!=' delimitor",
        "the '<=' delimitor",
        "the '>=' delimitor",
        "the '*-' delimitor",
        "the '+*' delimitor",
        "the ';' delimitor",
        "the ':' delimitor",
        "the '==' delimitor",
        "the '<' delimitor",
        "the '>' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '.' delimitor",
        "the '!' delimitor",
        "the '&' delimitor",
        "the '|' delimitor",
        "the '=' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '/' delimitor",
        "the '-' delimitor",
        "the '+' delimitor",
        "the '\?' delimitor",
        "the '^' delimitor",
        "the '<<' delimitor",
        "the '>>' delimitor",
        "the '~' delimitor",
        "the '%' delimitor",
        "the '...' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__21_ = {
  utf32 ('!'),
} ;

//--- Unicode string for '$!=$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__21__3D_ = {
  utf32 ('!'),
  utf32 ('='),
} ;

//--- Unicode string for '$%$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__25_ = {
  utf32 ('%'),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__26_ = {
  utf32 ('&'),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2A_ = {
  utf32 ('*'),
} ;

//--- Unicode string for '$*+$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2A__2B_ = {
  utf32 ('*'),
  utf32 ('+'),
} ;

//--- Unicode string for '$*-$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2A__2D_ = {
  utf32 ('*'),
  utf32 ('-'),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2B_ = {
  utf32 ('+'),
} ;

//--- Unicode string for '$+*$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2B__2A_ = {
  utf32 ('+'),
  utf32 ('*'),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2C_ = {
  utf32 (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2D_ = {
  utf32 ('-'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2E_ = {
  utf32 ('.'),
} ;

//--- Unicode string for '$...$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2E__2E__2E_ = {
  utf32 ('.'),
  utf32 ('.'),
  utf32 ('.'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2F_ = {
  utf32 ('/'),
} ;

//--- Unicode string for '$0b$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__30_b = {
  utf32 ('0'),
  utf32 ('b'),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__30_x = {
  utf32 ('0'),
  utf32 ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3C_ = {
  utf32 ('<'),
} ;

//--- Unicode string for '$<<$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3C__3C_ = {
  utf32 ('<'),
  utf32 ('<'),
} ;

//--- Unicode string for '$<=$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3C__3D_ = {
  utf32 ('<'),
  utf32 ('='),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3D_ = {
  utf32 ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3D__3D_ = {
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3E_ = {
  utf32 ('>'),
} ;

//--- Unicode string for '$>=$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3E__3D_ = {
  utf32 ('>'),
  utf32 ('='),
} ;

//--- Unicode string for '$>>$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3E__3E_ = {
  utf32 ('>'),
  utf32 ('>'),
} ;

//--- Unicode string for '$?$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3F_ = {
  utf32 ('\?'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__5B_ = {
  utf32 ('['),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__5D_ = {
  utf32 (']'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__5E_ = {
  utf32 ('^'),
} ;

//--- Unicode string for '$addlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_addlw = {
  utf32 ('a'),
  utf32 ('d'),
  utf32 ('d'),
  utf32 ('l'),
  utf32 ('w'),
} ;

//--- Unicode string for '$addwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_addwf = {
  utf32 ('a'),
  utf32 ('d'),
  utf32 ('d'),
  utf32 ('w'),
  utf32 ('f'),
} ;

//--- Unicode string for '$addwfc$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_addwfc = {
  utf32 ('a'),
  utf32 ('d'),
  utf32 ('d'),
  utf32 ('w'),
  utf32 ('f'),
  utf32 ('c'),
} ;

//--- Unicode string for '$andlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_andlw = {
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('l'),
  utf32 ('w'),
} ;

//--- Unicode string for '$andwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_andwf = {
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('w'),
  utf32 ('f'),
} ;

//--- Unicode string for '$bank$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bank = {
  utf32 ('b'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('k'),
} ;

//--- Unicode string for '$banksave$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_banksave = {
  utf32 ('b'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('a'),
  utf32 ('v'),
  utf32 ('e'),
} ;

//--- Unicode string for '$banksel$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_banksel = {
  utf32 ('b'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
} ;

//--- Unicode string for '$baseline$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_baseline = {
  utf32 ('b'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('e'),
} ;

//--- Unicode string for '$bc$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bc = {
  utf32 ('b'),
  utf32 ('c'),
} ;

//--- Unicode string for '$bcf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bcf = {
  utf32 ('b'),
  utf32 ('c'),
  utf32 ('f'),
} ;

//--- Unicode string for '$block$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_block = {
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
} ;

//--- Unicode string for '$bn$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bn = {
  utf32 ('b'),
  utf32 ('n'),
} ;

//--- Unicode string for '$bnc$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bnc = {
  utf32 ('b'),
  utf32 ('n'),
  utf32 ('c'),
} ;

//--- Unicode string for '$bnn$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bnn = {
  utf32 ('b'),
  utf32 ('n'),
  utf32 ('n'),
} ;

//--- Unicode string for '$bnov$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bnov = {
  utf32 ('b'),
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('v'),
} ;

//--- Unicode string for '$bnz$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bnz = {
  utf32 ('b'),
  utf32 ('n'),
  utf32 ('z'),
} ;

//--- Unicode string for '$bootloader$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bootloader = {
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('t'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('a'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$bov$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bov = {
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('v'),
} ;

//--- Unicode string for '$bra$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bra = {
  utf32 ('b'),
  utf32 ('r'),
  utf32 ('a'),
} ;

//--- Unicode string for '$bsf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bsf = {
  utf32 ('b'),
  utf32 ('s'),
  utf32 ('f'),
} ;

//--- Unicode string for '$btg$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_btg = {
  utf32 ('b'),
  utf32 ('t'),
  utf32 ('g'),
} ;

//--- Unicode string for '$byte$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_byte = {
  utf32 ('b'),
  utf32 ('y'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$bz$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bz = {
  utf32 ('b'),
  utf32 ('z'),
} ;

//--- Unicode string for '$call$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_call = {
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('l'),
} ;

//--- Unicode string for '$case$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_case = {
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$checkbank$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_checkbank = {
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('b'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('k'),
} ;

//--- Unicode string for '$checknobank$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_checknobank = {
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('b'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('k'),
} ;

//--- Unicode string for '$checkpic$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_checkpic = {
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('p'),
  utf32 ('i'),
  utf32 ('c'),
} ;

//--- Unicode string for '$clrf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_clrf = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('r'),
  utf32 ('f'),
} ;

//--- Unicode string for '$clrw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_clrw = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('r'),
  utf32 ('w'),
} ;

//--- Unicode string for '$clrwdt$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_clrwdt = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('r'),
  utf32 ('w'),
  utf32 ('d'),
  utf32 ('t'),
} ;

//--- Unicode string for '$comf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_comf = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('f'),
} ;

//--- Unicode string for '$computed$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_computed = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$configuration$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_configuration = {
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

//--- Unicode string for '$const$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_const = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$contextsave$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_contextsave = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('s'),
  utf32 ('a'),
  utf32 ('v'),
  utf32 ('e'),
} ;

//--- Unicode string for '$data$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_data = {
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('a'),
} ;

//--- Unicode string for '$data16$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_data_31__36_ = {
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('1'),
  utf32 ('6'),
} ;

//--- Unicode string for '$data8$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_data_38_ = {
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('8'),
} ;

//--- Unicode string for '$daw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_daw = {
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('w'),
} ;

//--- Unicode string for '$decf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_decf = {
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('f'),
} ;

//--- Unicode string for '$do$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_do = {
  utf32 ('d'),
  utf32 ('o'),
} ;

//--- Unicode string for '$else$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_else = {
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$elsif$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_elsif = {
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('f'),
} ;

//--- Unicode string for '$end$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_end = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('d'),
} ;

//--- Unicode string for '$ensures$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ensures = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('u'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('s'),
} ;

//--- Unicode string for '$fast$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_fast = {
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$fnop$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_fnop = {
  utf32 ('f'),
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('p'),
} ;

//--- Unicode string for '$forever$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_forever = {
  utf32 ('f'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$goto$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_goto = {
  utf32 ('g'),
  utf32 ('o'),
  utf32 ('t'),
  utf32 ('o'),
} ;

//--- Unicode string for '$if$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_if = {
  utf32 ('i'),
  utf32 ('f'),
} ;

//--- Unicode string for '$implements$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_implements = {
  utf32 ('i'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('s'),
} ;

//--- Unicode string for '$incf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_incf = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('f'),
} ;

//--- Unicode string for '$include$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_include = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('u'),
  utf32 ('d'),
  utf32 ('e'),
} ;

//--- Unicode string for '$inline$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_inline = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('e'),
} ;

//--- Unicode string for '$interrupt$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_interrupt = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('p'),
  utf32 ('t'),
} ;

//--- Unicode string for '$iorlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_iorlw = {
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('l'),
  utf32 ('w'),
} ;

//--- Unicode string for '$iorwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_iorwf = {
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('w'),
  utf32 ('f'),
} ;

//--- Unicode string for '$jsr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_jsr = {
  utf32 ('j'),
  utf32 ('s'),
  utf32 ('r'),
} ;

//--- Unicode string for '$jump$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_jump = {
  utf32 ('j'),
  utf32 ('u'),
  utf32 ('m'),
  utf32 ('p'),
} ;

//--- Unicode string for '$ldata16ptr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ldata_31__36_ptr = {
  utf32 ('l'),
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('1'),
  utf32 ('6'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('r'),
} ;

//--- Unicode string for '$ldata8ptr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ldata_38_ptr = {
  utf32 ('l'),
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('8'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('r'),
} ;

//--- Unicode string for '$ldataptr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ldataptr = {
  utf32 ('l'),
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('r'),
} ;

//--- Unicode string for '$lfsr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_lfsr = {
  utf32 ('l'),
  utf32 ('f'),
  utf32 ('s'),
  utf32 ('r'),
} ;

//--- Unicode string for '$ltblptr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ltblptr = {
  utf32 ('l'),
  utf32 ('t'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('r'),
} ;

//--- Unicode string for '$macro$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_macro = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('r'),
  utf32 ('o'),
} ;

//--- Unicode string for '$midrange$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_midrange = {
  utf32 ('m'),
  utf32 ('i'),
  utf32 ('d'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('g'),
  utf32 ('e'),
} ;

//--- Unicode string for '$mnop$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_mnop = {
  utf32 ('m'),
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('p'),
} ;

//--- Unicode string for '$movf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_movf = {
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('f'),
} ;

//--- Unicode string for '$movff$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_movff = {
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('f'),
  utf32 ('f'),
} ;

//--- Unicode string for '$movlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_movlw = {
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('l'),
  utf32 ('w'),
} ;

//--- Unicode string for '$movwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_movwf = {
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('w'),
  utf32 ('f'),
} ;

//--- Unicode string for '$mullw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_mullw = {
  utf32 ('m'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('w'),
} ;

//--- Unicode string for '$mulwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_mulwf = {
  utf32 ('m'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('w'),
  utf32 ('f'),
} ;

//--- Unicode string for '$negf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_negf = {
  utf32 ('n'),
  utf32 ('e'),
  utf32 ('g'),
  utf32 ('f'),
} ;

//--- Unicode string for '$nobank$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_nobank = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('b'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('k'),
} ;

//--- Unicode string for '$nop$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_nop = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('p'),
} ;

//--- Unicode string for '$nopbra$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_nopbra = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('b'),
  utf32 ('r'),
  utf32 ('a'),
} ;

//--- Unicode string for '$noreturn$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_noreturn = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('u'),
  utf32 ('r'),
  utf32 ('n'),
} ;

//--- Unicode string for '$option$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_option = {
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$page$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_page = {
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('g'),
  utf32 ('e'),
} ;

//--- Unicode string for '$pic18$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_pic_31__38_ = {
  utf32 ('p'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('1'),
  utf32 ('8'),
} ;

//--- Unicode string for '$pop$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_pop = {
  utf32 ('p'),
  utf32 ('o'),
  utf32 ('p'),
} ;

//--- Unicode string for '$preserved$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_preserved = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$private$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_private = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$protected$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_protected = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$push$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_push = {
  utf32 ('p'),
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('h'),
} ;

//--- Unicode string for '$ram$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ram = {
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('m'),
} ;

//--- Unicode string for '$rcall$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rcall = {
  utf32 ('r'),
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('l'),
} ;

//--- Unicode string for '$requires$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_requires = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('i'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('s'),
} ;

//--- Unicode string for '$reset$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_reset = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$retlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_retlw = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('l'),
  utf32 ('w'),
} ;

//--- Unicode string for '$rlcf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rlcf = {
  utf32 ('r'),
  utf32 ('l'),
  utf32 ('c'),
  utf32 ('f'),
} ;

//--- Unicode string for '$rlf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rlf = {
  utf32 ('r'),
  utf32 ('l'),
  utf32 ('f'),
} ;

//--- Unicode string for '$rlncf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rlncf = {
  utf32 ('r'),
  utf32 ('l'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('f'),
} ;

//--- Unicode string for '$rom$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rom = {
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('m'),
} ;

//--- Unicode string for '$routine$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_routine = {
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('e'),
} ;

//--- Unicode string for '$rrcf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rrcf = {
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('c'),
  utf32 ('f'),
} ;

//--- Unicode string for '$rrf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rrf = {
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('f'),
} ;

//--- Unicode string for '$rrncf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rrncf = {
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('f'),
} ;

//--- Unicode string for '$setf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_setf = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('f'),
} ;

//--- Unicode string for '$sleep$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_sleep = {
  utf32 ('s'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('e'),
  utf32 ('p'),
} ;

//--- Unicode string for '$subfwb$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_subfwb = {
  utf32 ('s'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('f'),
  utf32 ('w'),
  utf32 ('b'),
} ;

//--- Unicode string for '$sublw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_sublw = {
  utf32 ('s'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('w'),
} ;

//--- Unicode string for '$subwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_subwf = {
  utf32 ('s'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('w'),
  utf32 ('f'),
} ;

//--- Unicode string for '$subwfb$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_subwfb = {
  utf32 ('s'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('w'),
  utf32 ('f'),
  utf32 ('b'),
} ;

//--- Unicode string for '$swapf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_swapf = {
  utf32 ('s'),
  utf32 ('w'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('f'),
} ;

//--- Unicode string for '$switch$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_switch = {
  utf32 ('s'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('c'),
  utf32 ('h'),
} ;

//--- Unicode string for '$tblrd$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_tblrd = {
  utf32 ('t'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('r'),
  utf32 ('d'),
} ;

//--- Unicode string for '$tblwt$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_tblwt = {
  utf32 ('t'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('w'),
  utf32 ('t'),
} ;

//--- Unicode string for '$tris$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_tris = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('s'),
} ;

//--- Unicode string for '$unused$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_unused = {
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$uses$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_uses = {
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('s'),
} ;

//--- Unicode string for '$w$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_w = {
  utf32 ('w'),
} ;

//--- Unicode string for '$while$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_while = {
  utf32 ('w'),
  utf32 ('h'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$xorlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_xorlw = {
  utf32 ('x'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('l'),
  utf32 ('w'),
} ;

//--- Unicode string for '$xorwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_xorwf = {
  utf32 ('x'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('w'),
  utf32 ('f'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__7C_ = {
  utf32 ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__7D_ = {
  utf32 ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__7E_ = {
  utf32 ('~'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'controlKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccolo_5F_lexique_controlKeyWordList = 48 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_controlKeyWordList [ktable_size_piccolo_5F_lexique_controlKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_w, Lexique_piccolo_5F_lexique::kToken_w),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_do, Lexique_piccolo_5F_lexique::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_if, Lexique_piccolo_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_end, Lexique_piccolo_5F_lexique::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ram, Lexique_piccolo_5F_lexique::kToken_ram),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rom, Lexique_piccolo_5F_lexique::kToken_rom),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bank, Lexique_piccolo_5F_lexique::kToken_bank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_byte, Lexique_piccolo_5F_lexique::kToken_byte),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_case, Lexique_piccolo_5F_lexique::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data, Lexique_piccolo_5F_lexique::kToken_data),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_else, Lexique_piccolo_5F_lexique::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_fast, Lexique_piccolo_5F_lexique::kToken_fast),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_page, Lexique_piccolo_5F_lexique::kToken_page),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_uses, Lexique_piccolo_5F_lexique::kToken_uses),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_block, Lexique_piccolo_5F_lexique::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_const, Lexique_piccolo_5F_lexique::kToken_const),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data_38_, Lexique_piccolo_5F_lexique::kToken_data_38_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_elsif, Lexique_piccolo_5F_lexique::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_macro, Lexique_piccolo_5F_lexique::kToken_macro),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_pic_31__38_, Lexique_piccolo_5F_lexique::kToken_pic_31__38_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_while, Lexique_piccolo_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data_31__36_, Lexique_piccolo_5F_lexique::kToken_data_31__36_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_inline, Lexique_piccolo_5F_lexique::kToken_inline),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nobank, Lexique_piccolo_5F_lexique::kToken_nobank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_switch, Lexique_piccolo_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_unused, Lexique_piccolo_5F_lexique::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_banksel, Lexique_piccolo_5F_lexique::kToken_banksel),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ensures, Lexique_piccolo_5F_lexique::kToken_ensures),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_forever, Lexique_piccolo_5F_lexique::kToken_forever),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_include, Lexique_piccolo_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_private, Lexique_piccolo_5F_lexique::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_routine, Lexique_piccolo_5F_lexique::kToken_routine),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_banksave, Lexique_piccolo_5F_lexique::kToken_banksave),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_baseline, Lexique_piccolo_5F_lexique::kToken_baseline),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checkpic, Lexique_piccolo_5F_lexique::kToken_checkpic),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_computed, Lexique_piccolo_5F_lexique::kToken_computed),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_midrange, Lexique_piccolo_5F_lexique::kToken_midrange),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_noreturn, Lexique_piccolo_5F_lexique::kToken_noreturn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_requires, Lexique_piccolo_5F_lexique::kToken_requires),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checkbank, Lexique_piccolo_5F_lexique::kToken_checkbank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_interrupt, Lexique_piccolo_5F_lexique::kToken_interrupt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_preserved, Lexique_piccolo_5F_lexique::kToken_preserved),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_protected, Lexique_piccolo_5F_lexique::kToken_protected),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bootloader, Lexique_piccolo_5F_lexique::kToken_bootloader),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_implements, Lexique_piccolo_5F_lexique::kToken_implements),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checknobank, Lexique_piccolo_5F_lexique::kToken_checknobank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_contextsave, Lexique_piccolo_5F_lexique::kToken_contextsave),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_configuration, Lexique_piccolo_5F_lexique::kToken_configuration)
} ;

int32_t Lexique_piccolo_5F_lexique::search_into_controlKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_controlKeyWordList, ktable_size_piccolo_5F_lexique_controlKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccolo_5F_lexique_delimitorsList = 34 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_delimitorsList [ktable_size_piccolo_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__21_, Lexique_piccolo_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__25_, Lexique_piccolo_5F_lexique::kToken__25_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__26_, Lexique_piccolo_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__28_, Lexique_piccolo_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__29_, Lexique_piccolo_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A_, Lexique_piccolo_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2B_, Lexique_piccolo_5F_lexique::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2C_, Lexique_piccolo_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2D_, Lexique_piccolo_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2E_, Lexique_piccolo_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2F_, Lexique_piccolo_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3A_, Lexique_piccolo_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3B_, Lexique_piccolo_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C_, Lexique_piccolo_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3D_, Lexique_piccolo_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E_, Lexique_piccolo_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3F_, Lexique_piccolo_5F_lexique::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5B_, Lexique_piccolo_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5D_, Lexique_piccolo_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5E_, Lexique_piccolo_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7B_, Lexique_piccolo_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7C_, Lexique_piccolo_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7D_, Lexique_piccolo_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7E_, Lexique_piccolo_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__21__3D_, Lexique_piccolo_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A__2B_, Lexique_piccolo_5F_lexique::kToken__2A__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A__2D_, Lexique_piccolo_5F_lexique::kToken__2A__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2B__2A_, Lexique_piccolo_5F_lexique::kToken__2B__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C__3C_, Lexique_piccolo_5F_lexique::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C__3D_, Lexique_piccolo_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3D__3D_, Lexique_piccolo_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E__3D_, Lexique_piccolo_5F_lexique::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E__3E_, Lexique_piccolo_5F_lexique::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2E__2E__2E_, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_)
} ;

int32_t Lexique_piccolo_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_delimitorsList, ktable_size_piccolo_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'instructionKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccolo_5F_lexique_instructionKeyWordList = 70 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_instructionKeyWordList [ktable_size_piccolo_5F_lexique_instructionKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bc, Lexique_piccolo_5F_lexique::kToken_bc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bn, Lexique_piccolo_5F_lexique::kToken_bn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bz, Lexique_piccolo_5F_lexique::kToken_bz),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bcf, Lexique_piccolo_5F_lexique::kToken_bcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnc, Lexique_piccolo_5F_lexique::kToken_bnc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnn, Lexique_piccolo_5F_lexique::kToken_bnn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnz, Lexique_piccolo_5F_lexique::kToken_bnz),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bov, Lexique_piccolo_5F_lexique::kToken_bov),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bra, Lexique_piccolo_5F_lexique::kToken_bra),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bsf, Lexique_piccolo_5F_lexique::kToken_bsf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_btg, Lexique_piccolo_5F_lexique::kToken_btg),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_daw, Lexique_piccolo_5F_lexique::kToken_daw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_jsr, Lexique_piccolo_5F_lexique::kToken_jsr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nop, Lexique_piccolo_5F_lexique::kToken_nop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_pop, Lexique_piccolo_5F_lexique::kToken_pop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlf, Lexique_piccolo_5F_lexique::kToken_rlf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrf, Lexique_piccolo_5F_lexique::kToken_rrf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnov, Lexique_piccolo_5F_lexique::kToken_bnov),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_call, Lexique_piccolo_5F_lexique::kToken_call),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrf, Lexique_piccolo_5F_lexique::kToken_clrf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrw, Lexique_piccolo_5F_lexique::kToken_clrw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_comf, Lexique_piccolo_5F_lexique::kToken_comf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_decf, Lexique_piccolo_5F_lexique::kToken_decf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_fnop, Lexique_piccolo_5F_lexique::kToken_fnop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_goto, Lexique_piccolo_5F_lexique::kToken_goto),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_incf, Lexique_piccolo_5F_lexique::kToken_incf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_jump, Lexique_piccolo_5F_lexique::kToken_jump),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_lfsr, Lexique_piccolo_5F_lexique::kToken_lfsr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mnop, Lexique_piccolo_5F_lexique::kToken_mnop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movf, Lexique_piccolo_5F_lexique::kToken_movf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_negf, Lexique_piccolo_5F_lexique::kToken_negf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_push, Lexique_piccolo_5F_lexique::kToken_push),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlcf, Lexique_piccolo_5F_lexique::kToken_rlcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrcf, Lexique_piccolo_5F_lexique::kToken_rrcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_setf, Lexique_piccolo_5F_lexique::kToken_setf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tris, Lexique_piccolo_5F_lexique::kToken_tris),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addlw, Lexique_piccolo_5F_lexique::kToken_addlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addwf, Lexique_piccolo_5F_lexique::kToken_addwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_andlw, Lexique_piccolo_5F_lexique::kToken_andlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_andwf, Lexique_piccolo_5F_lexique::kToken_andwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_iorlw, Lexique_piccolo_5F_lexique::kToken_iorlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_iorwf, Lexique_piccolo_5F_lexique::kToken_iorwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movff, Lexique_piccolo_5F_lexique::kToken_movff),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movlw, Lexique_piccolo_5F_lexique::kToken_movlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movwf, Lexique_piccolo_5F_lexique::kToken_movwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mullw, Lexique_piccolo_5F_lexique::kToken_mullw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mulwf, Lexique_piccolo_5F_lexique::kToken_mulwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rcall, Lexique_piccolo_5F_lexique::kToken_rcall),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_reset, Lexique_piccolo_5F_lexique::kToken_reset),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_retlw, Lexique_piccolo_5F_lexique::kToken_retlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlncf, Lexique_piccolo_5F_lexique::kToken_rlncf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrncf, Lexique_piccolo_5F_lexique::kToken_rrncf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_sleep, Lexique_piccolo_5F_lexique::kToken_sleep),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_sublw, Lexique_piccolo_5F_lexique::kToken_sublw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subwf, Lexique_piccolo_5F_lexique::kToken_subwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_swapf, Lexique_piccolo_5F_lexique::kToken_swapf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tblrd, Lexique_piccolo_5F_lexique::kToken_tblrd),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tblwt, Lexique_piccolo_5F_lexique::kToken_tblwt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_xorlw, Lexique_piccolo_5F_lexique::kToken_xorlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_xorwf, Lexique_piccolo_5F_lexique::kToken_xorwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addwfc, Lexique_piccolo_5F_lexique::kToken_addwfc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrwdt, Lexique_piccolo_5F_lexique::kToken_clrwdt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nopbra, Lexique_piccolo_5F_lexique::kToken_nopbra),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_option, Lexique_piccolo_5F_lexique::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subfwb, Lexique_piccolo_5F_lexique::kToken_subfwb),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subwfb, Lexique_piccolo_5F_lexique::kToken_subwfb),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ltblptr, Lexique_piccolo_5F_lexique::kToken_ltblptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldataptr, Lexique_piccolo_5F_lexique::kToken_ldataptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldata_38_ptr, Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldata_31__36_ptr, Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr)
} ;

int32_t Lexique_piccolo_5F_lexique::search_into_instructionKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_instructionKeyWordList, ktable_size_piccolo_5F_lexique_instructionKeyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_piccolo_5F_lexique * ptr = (const cTokenFor_piccolo_5F_lexique *) inTokenPtr ;
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
    case kToken_label:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("label") ;
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
    case kToken_literal_5F_char:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literal_char") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendChar (ptr->mLexicalAttribute_charValue) ;
      break ;
    case kToken_literal_5F_string:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literal_string") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_commentMark:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("commentMark") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bank:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bank") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_banksave:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("banksave") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_banksel:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("banksel") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_baseline:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("baseline") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_block:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("block") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bootloader:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bootloader") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_byte:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("byte") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_case:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("case") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_checkbank:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("checkbank") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_checknobank:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("checknobank") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_checkpic:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("checkpic") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_computed:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("computed") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_configuration:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("configuration") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_const:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("const") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_contextsave:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("contextsave") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_data:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("data") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_data_31__36_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("data16") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_data_38_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("data8") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_do:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("do") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_end:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("end") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_else:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("else") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_elsif:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("elsif") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ensures:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ensures") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_fast:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("fast") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_forever:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("forever") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_if:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("if") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_implements:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("implements") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_include:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("include") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_inline:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("inline") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_interrupt:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("interrupt") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_macro:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("macro") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_midrange:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("midrange") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_nobank:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("nobank") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_noreturn:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("noreturn") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_page:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("page") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_pic_31__38_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("pic18") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_preserved:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("preserved") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_protected:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("protected") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_private:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("private") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ram:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ram") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_requires:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("requires") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rom:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rom") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_routine:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("routine") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_switch:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("switch") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_unused:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("unused") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_uses:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("uses") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_w:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("w") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_while:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("while") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_addlw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("addlw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_addwf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("addwf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_addwfc:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("addwfc") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_andlw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("andlw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_andwf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("andwf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bc:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bc") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bcf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bcf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bn:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bn") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bnc:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bnc") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bnn:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bnn") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bov:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bov") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bnov:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bnov") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bnz:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bnz") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bsf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bsf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bra:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bra") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_btg:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("btg") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bz:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bz") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_call:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("call") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_clrf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("clrf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_clrw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("clrw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_clrwdt:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("clrwdt") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_comf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_daw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("daw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_decf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("decf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_incf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("incf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_iorlw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("iorlw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_iorwf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("iorwf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_fnop:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("fnop") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_goto:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("goto") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_jsr:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("jsr") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_jump:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("jump") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_lfsr:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("lfsr") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ldataptr:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ldataptr") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ldata_38_ptr:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ldata8ptr") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ldata_31__36_ptr:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ldata16ptr") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ltblptr:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ltblptr") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mnop:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mnop") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_movf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("movf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_movff:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("movff") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_movlw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("movlw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_movwf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("movwf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mullw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mullw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mulwf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mulwf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_negf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("negf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_nop:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("nop") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_nopbra:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("nopbra") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_pop:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("pop") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_option:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("option") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_push:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("push") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rcall:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rcall") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_reset:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("reset") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_retlw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("retlw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rlcf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rlcf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rlf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rlf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rlncf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rlncf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rrcf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rrcf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rrf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rrf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rrncf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rrncf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_setf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("setf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_sleep:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("sleep") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_subfwb:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("subfwb") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_sublw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("sublw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_subwf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("subwf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_subwfb:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("subwfb") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_swapf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("swapf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_tblrd:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("tblrd") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_tblwt:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("tblwt") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_tris:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("tris") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_xorlw:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("xorlw") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_xorwf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("xorwf") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+*") ;
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
    case kToken__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("==") ;
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
    case kToken__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (".") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("=") ;
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
    case kToken__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (")") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">>") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("...") ;
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

void Lexique_piccolo_5F_lexique::internalParseLexicalToken (cTokenFor_piccolo_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_charValue = utf32 (0) ;
  token.mLexicalAttribute_identifierString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForChar_isUnicodeLetter ()) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_instructionKeyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_controlKeyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('@'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_label ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__30_x, true)) {
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('f'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__30_b, true)) {
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('1'))) {
          ::scanner_routine_enterBinDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_binNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\''))) {
      if (testForInputUTF32Char (utf32 ('\\'))) {
        if (testForInputUTF32Char (utf32 ('f'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\f')) ;
        }else if (testForInputUTF32Char (utf32 ('n'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\n')) ;
        }else if (testForInputUTF32Char (utf32 ('r'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\r')) ;
        }else if (testForInputUTF32Char (utf32 ('t'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\t')) ;
        }else if (testForInputUTF32Char (utf32 ('v'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\v')) ;
        }else if (testForInputUTF32Char (utf32 ('\\'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\\')) ;
        }else if (testForInputUTF32Char (utf32 ('0'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\0')) ;
        }else if (testForInputUTF32Char (utf32 ('\''))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\'')) ;
        }else if (testForInputUTF32Char (utf32 ('x')) || testForInputUTF32Char (utf32 ('X'))) {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            do {
              ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_piccolo_5F_lexique_ASCIIcodeTooLargeError, gLexicalMessage_piccolo_5F_lexique_internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
          }else{
            lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else{
          lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (utf32 (' '), utf32 ('~'))) {
        ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
      }else{
        lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (utf32 ('\''))) {
        token.mTokenCode = kToken_literal_5F_char ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2E__2E__2E_, true)) {
      token.mTokenCode = kToken__2E__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3E__3E_, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3C__3D_, true)) {
      token.mTokenCode = kToken__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3C__3C_, true)) {
      token.mTokenCode = kToken__3C__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2B__2A_, true)) {
      token.mTokenCode = kToken__2B__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2A__2D_, true)) {
      token.mTokenCode = kToken__2A__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2A__2B_, true)) {
      token.mTokenCode = kToken__2A__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__21__3D_, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7E_, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3F_, true)) {
      token.mTokenCode = kToken__3F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3C_, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2F_, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__25_, true)) {
      token.mTokenCode = kToken__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__21_, true)) {
      token.mTokenCode = kToken__21_ ;
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
              ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_piccolo_5F_lexique_ASCIIcodeTooLargeError, gLexicalMessage_piccolo_5F_lexique_internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
          }else{
            lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 ('~'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken_literal_5F_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (utf32 ('#'))) {
      if (testForInputUTF32Char (utf32 ('!'))) {
        do {
          if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
      }else{
        do {
          if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }
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

bool Lexique_piccolo_5F_lexique::parseLexicalToken (void) {
  cTokenFor_piccolo_5F_lexique token ;
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

void Lexique_piccolo_5F_lexique::enterToken (cTokenFor_piccolo_5F_lexique & ioToken) {
  cTokenFor_piccolo_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_piccolo_5F_lexique ()) ;
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

utf32 Lexique_piccolo_5F_lexique::attributeValue_charValue (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::attributeValue_identifierString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_piccolo_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lchar Lexique_piccolo_5F_lexique::synthetizedAttribute_charValue (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_char value (ptr->mLexicalAttribute_charValue) ;
  GGS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_piccolo_5F_lexique::synthetizedAttribute_identifierString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_identifierString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_piccolo_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_piccolo_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_piccolo_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("label") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_char") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_string") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("commentMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bank") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("banksave") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("banksel") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("baseline") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("block") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bootloader") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("byte") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("case") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("checkbank") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("checknobank") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("checkpic") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("computed") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("configuration") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("const") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("contextsave") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("data") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("data16") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("data8") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("do") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("end") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("else") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("elsif") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ensures") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fast") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("forever") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("if") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("implements") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("include") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("inline") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("interrupt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("macro") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("midrange") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nobank") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("noreturn") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("page") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("pic18") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("preserved") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("protected") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("private") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ram") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("requires") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rom") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("routine") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("switch") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("unused") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("uses") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("w") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("while") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("addlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("addwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("addwfc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("andlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("andwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bcf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bn") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bnc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bnn") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bov") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bnov") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bnz") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bsf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bra") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("btg") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bz") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("call") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("clrf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("clrw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("clrwdt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("daw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("decf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("incf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("iorlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("iorwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fnop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("goto") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("jsr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("jump") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("lfsr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ldataptr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ldata8ptr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ldata16ptr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ltblptr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mnop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("movf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("movff") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("movlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("movwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mullw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mulwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("negf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nopbra") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("pop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("option") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("push") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rcall") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("reset") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("retlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rlcf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rlf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rlncf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rrcf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rrf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rrncf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("setf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sleep") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("subfwb") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sublw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("subwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("subwfb") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("swapf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tblrd") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tblwt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tris") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("xorlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("xorwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("...") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_piccolo_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("piccolo_lexique:controlKeyWordList") ;
  ioList.appendObject ("piccolo_lexique:delimitorsList") ;
  ioList.appendObject ("piccolo_lexique:instructionKeyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_piccolo_5F_lexique (const String & inIdentifier,
                                                         bool & ioFound,
                                                         GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "piccolo_lexique:controlKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("w") ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("end") ;
    ioList.appendObject ("ram") ;
    ioList.appendObject ("rom") ;
    ioList.appendObject ("bank") ;
    ioList.appendObject ("byte") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("data") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("fast") ;
    ioList.appendObject ("page") ;
    ioList.appendObject ("uses") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("const") ;
    ioList.appendObject ("data8") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("macro") ;
    ioList.appendObject ("pic18") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("data16") ;
    ioList.appendObject ("inline") ;
    ioList.appendObject ("nobank") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("banksel") ;
    ioList.appendObject ("ensures") ;
    ioList.appendObject ("forever") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("private") ;
    ioList.appendObject ("routine") ;
    ioList.appendObject ("banksave") ;
    ioList.appendObject ("baseline") ;
    ioList.appendObject ("checkpic") ;
    ioList.appendObject ("computed") ;
    ioList.appendObject ("midrange") ;
    ioList.appendObject ("noreturn") ;
    ioList.appendObject ("requires") ;
    ioList.appendObject ("checkbank") ;
    ioList.appendObject ("interrupt") ;
    ioList.appendObject ("preserved") ;
    ioList.appendObject ("protected") ;
    ioList.appendObject ("bootloader") ;
    ioList.appendObject ("implements") ;
    ioList.appendObject ("checknobank") ;
    ioList.appendObject ("contextsave") ;
    ioList.appendObject ("configuration") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "piccolo_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("!") ;
    ioList.appendObject ("%") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject (".") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("<") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("\?") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("*+") ;
    ioList.appendObject ("*-") ;
    ioList.appendObject ("+*") ;
    ioList.appendObject ("<<") ;
    ioList.appendObject ("<=") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("...") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "piccolo_lexique:instructionKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("bc") ;
    ioList.appendObject ("bn") ;
    ioList.appendObject ("bz") ;
    ioList.appendObject ("bcf") ;
    ioList.appendObject ("bnc") ;
    ioList.appendObject ("bnn") ;
    ioList.appendObject ("bnz") ;
    ioList.appendObject ("bov") ;
    ioList.appendObject ("bra") ;
    ioList.appendObject ("bsf") ;
    ioList.appendObject ("btg") ;
    ioList.appendObject ("daw") ;
    ioList.appendObject ("jsr") ;
    ioList.appendObject ("nop") ;
    ioList.appendObject ("pop") ;
    ioList.appendObject ("rlf") ;
    ioList.appendObject ("rrf") ;
    ioList.appendObject ("bnov") ;
    ioList.appendObject ("call") ;
    ioList.appendObject ("clrf") ;
    ioList.appendObject ("clrw") ;
    ioList.appendObject ("comf") ;
    ioList.appendObject ("decf") ;
    ioList.appendObject ("fnop") ;
    ioList.appendObject ("goto") ;
    ioList.appendObject ("incf") ;
    ioList.appendObject ("jump") ;
    ioList.appendObject ("lfsr") ;
    ioList.appendObject ("mnop") ;
    ioList.appendObject ("movf") ;
    ioList.appendObject ("negf") ;
    ioList.appendObject ("push") ;
    ioList.appendObject ("rlcf") ;
    ioList.appendObject ("rrcf") ;
    ioList.appendObject ("setf") ;
    ioList.appendObject ("tris") ;
    ioList.appendObject ("addlw") ;
    ioList.appendObject ("addwf") ;
    ioList.appendObject ("andlw") ;
    ioList.appendObject ("andwf") ;
    ioList.appendObject ("iorlw") ;
    ioList.appendObject ("iorwf") ;
    ioList.appendObject ("movff") ;
    ioList.appendObject ("movlw") ;
    ioList.appendObject ("movwf") ;
    ioList.appendObject ("mullw") ;
    ioList.appendObject ("mulwf") ;
    ioList.appendObject ("rcall") ;
    ioList.appendObject ("reset") ;
    ioList.appendObject ("retlw") ;
    ioList.appendObject ("rlncf") ;
    ioList.appendObject ("rrncf") ;
    ioList.appendObject ("sleep") ;
    ioList.appendObject ("sublw") ;
    ioList.appendObject ("subwf") ;
    ioList.appendObject ("swapf") ;
    ioList.appendObject ("tblrd") ;
    ioList.appendObject ("tblwt") ;
    ioList.appendObject ("xorlw") ;
    ioList.appendObject ("xorwf") ;
    ioList.appendObject ("addwfc") ;
    ioList.appendObject ("clrwdt") ;
    ioList.appendObject ("nopbra") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("subfwb") ;
    ioList.appendObject ("subwfb") ;
    ioList.appendObject ("ltblptr") ;
    ioList.appendObject ("ldataptr") ;
    ioList.appendObject ("ldata8ptr") ;
    ioList.appendObject ("ldata16ptr") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_piccolo_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_piccolo_5F_lexique, getKeywordsForIdentifier_piccolo_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_piccolo_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [160] = {0,
    0 /* piccolo_lexique_1_identifier */,
    8 /* piccolo_lexique_1_label */,
    4 /* piccolo_lexique_1_integer */,
    5 /* piccolo_lexique_1_literal_5F_char */,
    6 /* piccolo_lexique_1_literal_5F_string */,
    7 /* piccolo_lexique_1_comment */,
    7 /* piccolo_lexique_1_commentMark */,
    1 /* piccolo_lexique_1_bank */,
    1 /* piccolo_lexique_1_banksave */,
    1 /* piccolo_lexique_1_banksel */,
    1 /* piccolo_lexique_1_baseline */,
    1 /* piccolo_lexique_1_block */,
    1 /* piccolo_lexique_1_bootloader */,
    1 /* piccolo_lexique_1_byte */,
    1 /* piccolo_lexique_1_case */,
    1 /* piccolo_lexique_1_checkbank */,
    1 /* piccolo_lexique_1_checknobank */,
    1 /* piccolo_lexique_1_checkpic */,
    1 /* piccolo_lexique_1_computed */,
    1 /* piccolo_lexique_1_configuration */,
    1 /* piccolo_lexique_1_const */,
    1 /* piccolo_lexique_1_contextsave */,
    1 /* piccolo_lexique_1_data */,
    1 /* piccolo_lexique_1_data_31__36_ */,
    1 /* piccolo_lexique_1_data_38_ */,
    1 /* piccolo_lexique_1_do */,
    1 /* piccolo_lexique_1_end */,
    1 /* piccolo_lexique_1_else */,
    1 /* piccolo_lexique_1_elsif */,
    1 /* piccolo_lexique_1_ensures */,
    1 /* piccolo_lexique_1_fast */,
    1 /* piccolo_lexique_1_forever */,
    1 /* piccolo_lexique_1_if */,
    1 /* piccolo_lexique_1_implements */,
    1 /* piccolo_lexique_1_include */,
    1 /* piccolo_lexique_1_inline */,
    1 /* piccolo_lexique_1_interrupt */,
    1 /* piccolo_lexique_1_macro */,
    1 /* piccolo_lexique_1_midrange */,
    1 /* piccolo_lexique_1_nobank */,
    1 /* piccolo_lexique_1_noreturn */,
    1 /* piccolo_lexique_1_page */,
    1 /* piccolo_lexique_1_pic_31__38_ */,
    1 /* piccolo_lexique_1_preserved */,
    1 /* piccolo_lexique_1_protected */,
    1 /* piccolo_lexique_1_private */,
    1 /* piccolo_lexique_1_ram */,
    1 /* piccolo_lexique_1_requires */,
    1 /* piccolo_lexique_1_rom */,
    1 /* piccolo_lexique_1_routine */,
    1 /* piccolo_lexique_1_switch */,
    1 /* piccolo_lexique_1_unused */,
    1 /* piccolo_lexique_1_uses */,
    1 /* piccolo_lexique_1_w */,
    1 /* piccolo_lexique_1_while */,
    2 /* piccolo_lexique_1_addlw */,
    2 /* piccolo_lexique_1_addwf */,
    2 /* piccolo_lexique_1_addwfc */,
    2 /* piccolo_lexique_1_andlw */,
    2 /* piccolo_lexique_1_andwf */,
    2 /* piccolo_lexique_1_bc */,
    2 /* piccolo_lexique_1_bcf */,
    2 /* piccolo_lexique_1_bn */,
    2 /* piccolo_lexique_1_bnc */,
    2 /* piccolo_lexique_1_bnn */,
    2 /* piccolo_lexique_1_bov */,
    2 /* piccolo_lexique_1_bnov */,
    2 /* piccolo_lexique_1_bnz */,
    2 /* piccolo_lexique_1_bsf */,
    2 /* piccolo_lexique_1_bra */,
    2 /* piccolo_lexique_1_btg */,
    2 /* piccolo_lexique_1_bz */,
    2 /* piccolo_lexique_1_call */,
    2 /* piccolo_lexique_1_clrf */,
    2 /* piccolo_lexique_1_clrw */,
    2 /* piccolo_lexique_1_clrwdt */,
    2 /* piccolo_lexique_1_comf */,
    2 /* piccolo_lexique_1_daw */,
    2 /* piccolo_lexique_1_decf */,
    2 /* piccolo_lexique_1_incf */,
    2 /* piccolo_lexique_1_iorlw */,
    2 /* piccolo_lexique_1_iorwf */,
    2 /* piccolo_lexique_1_fnop */,
    2 /* piccolo_lexique_1_goto */,
    2 /* piccolo_lexique_1_jsr */,
    2 /* piccolo_lexique_1_jump */,
    2 /* piccolo_lexique_1_lfsr */,
    2 /* piccolo_lexique_1_ldataptr */,
    2 /* piccolo_lexique_1_ldata_38_ptr */,
    2 /* piccolo_lexique_1_ldata_31__36_ptr */,
    2 /* piccolo_lexique_1_ltblptr */,
    2 /* piccolo_lexique_1_mnop */,
    2 /* piccolo_lexique_1_movf */,
    2 /* piccolo_lexique_1_movff */,
    2 /* piccolo_lexique_1_movlw */,
    2 /* piccolo_lexique_1_movwf */,
    2 /* piccolo_lexique_1_mullw */,
    2 /* piccolo_lexique_1_mulwf */,
    2 /* piccolo_lexique_1_negf */,
    2 /* piccolo_lexique_1_nop */,
    2 /* piccolo_lexique_1_nopbra */,
    2 /* piccolo_lexique_1_pop */,
    2 /* piccolo_lexique_1_option */,
    2 /* piccolo_lexique_1_push */,
    2 /* piccolo_lexique_1_rcall */,
    2 /* piccolo_lexique_1_reset */,
    2 /* piccolo_lexique_1_retlw */,
    2 /* piccolo_lexique_1_rlcf */,
    2 /* piccolo_lexique_1_rlf */,
    2 /* piccolo_lexique_1_rlncf */,
    2 /* piccolo_lexique_1_rrcf */,
    2 /* piccolo_lexique_1_rrf */,
    2 /* piccolo_lexique_1_rrncf */,
    2 /* piccolo_lexique_1_setf */,
    2 /* piccolo_lexique_1_sleep */,
    2 /* piccolo_lexique_1_subfwb */,
    2 /* piccolo_lexique_1_sublw */,
    2 /* piccolo_lexique_1_subwf */,
    2 /* piccolo_lexique_1_subwfb */,
    2 /* piccolo_lexique_1_swapf */,
    2 /* piccolo_lexique_1_tblrd */,
    2 /* piccolo_lexique_1_tblwt */,
    2 /* piccolo_lexique_1_tris */,
    2 /* piccolo_lexique_1_xorlw */,
    2 /* piccolo_lexique_1_xorwf */,
    3 /* piccolo_lexique_1__2A_ */,
    3 /* piccolo_lexique_1__2A__2B_ */,
    3 /* piccolo_lexique_1__2C_ */,
    3 /* piccolo_lexique_1__21__3D_ */,
    3 /* piccolo_lexique_1__3C__3D_ */,
    3 /* piccolo_lexique_1__3E__3D_ */,
    3 /* piccolo_lexique_1__2A__2D_ */,
    3 /* piccolo_lexique_1__2B__2A_ */,
    3 /* piccolo_lexique_1__3B_ */,
    3 /* piccolo_lexique_1__3A_ */,
    3 /* piccolo_lexique_1__3D__3D_ */,
    3 /* piccolo_lexique_1__3C_ */,
    3 /* piccolo_lexique_1__3E_ */,
    3 /* piccolo_lexique_1__5B_ */,
    3 /* piccolo_lexique_1__5D_ */,
    3 /* piccolo_lexique_1__2E_ */,
    3 /* piccolo_lexique_1__21_ */,
    3 /* piccolo_lexique_1__26_ */,
    3 /* piccolo_lexique_1__7C_ */,
    3 /* piccolo_lexique_1__3D_ */,
    3 /* piccolo_lexique_1__7B_ */,
    3 /* piccolo_lexique_1__7D_ */,
    3 /* piccolo_lexique_1__28_ */,
    3 /* piccolo_lexique_1__29_ */,
    3 /* piccolo_lexique_1__2F_ */,
    3 /* piccolo_lexique_1__2D_ */,
    3 /* piccolo_lexique_1__2B_ */,
    3 /* piccolo_lexique_1__3F_ */,
    3 /* piccolo_lexique_1__5E_ */,
    3 /* piccolo_lexique_1__3C__3C_ */,
    3 /* piccolo_lexique_1__3E__3E_ */,
    3 /* piccolo_lexique_1__7E_ */,
    3 /* piccolo_lexique_1__25_ */,
    3 /* piccolo_lexique_1__2E__2E__2E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 9) {
    static const char * kStyleArray [9] = {
      "",
      "keywordStyle",
      "instructionStyle",
      "delimitersStyle",
      "integerStyle",
      "characterStyle",
      "stringStyle",
      "commentStyle",
      "labelStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument_interruptDefinitionList,
                                                                         GGS_pic_31__38_RoutineDefinitionList & ioArgument_routineDefinitionList,
                                                                         GGS_pic_31__38_MacroDefinitionList & ioArgument_ioMacroDefinitionList,
                                                                         GGS_lstringlist & ioArgument_unusedRoutineList,
                                                                         GGS_lstringlist & ioArgument_inlinedRoutineList,
                                                                         GGS_ramDefinitionList & ioArgument_ramDefinitionList,
                                                                         GGS_lstringlist & ioArgument_unusedRegisterList,
                                                                         GGS_configDefinitionList & ioArgument_configDefinitionList,
                                                                         GGS_constantDefinitionList & ioArgument_constantDefinitionList,
                                                                         GGS_checkpicList & ioArgument_ioCheckpicList,
                                                                         GGS_dataList & ioArgument_dataList,
                                                                         GGS_bool & ioArgument_needsComputedGoto_32_,
                                                                         GGS_bool & ioArgument_needsComputedGoto_34_,
                                                                         Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 45)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_unusedRegister_1261 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        ioArgument_unusedRegisterList.addAssignOperation (var_unusedRegister_1261  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 49)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GGS_lstring var_unusedRoutine_1428 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        ioArgument_unusedRoutineList.addAssignOperation (var_unusedRoutine_1428  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 58)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        GGS_lstring var_inlinedRoutine_1578 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        ioArgument_inlinedRoutineList.addAssignOperation (var_inlinedRoutine_1578  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 66)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas", 91)) ;
      GGS_lstring var_includedFilePath_2223 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
      cGrammar_pic_31__38__5F_include_5F_grammar::_performSourceFileParsing_ (inCompiler, var_includedFilePath_2223, ioArgument_interruptDefinitionList, ioArgument_routineDefinitionList, ioArgument_ioMacroDefinitionList, ioArgument_unusedRoutineList, ioArgument_inlinedRoutineList, ioArgument_ramDefinitionList, ioArgument_unusedRegisterList, ioArgument_configDefinitionList, ioArgument_constantDefinitionList, ioArgument_ioCheckpicList, ioArgument_dataList, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 93)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      GGS_lstring var_macroName_2696 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      GGS_lstringlist var_constantNameList_2735 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        GGS_lstring var_constantName_2793 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        var_constantNameList_2735.addAssignOperation (var_constantName_2793  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 115)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      GGS_labelMap var_labelMap_2908 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
      GGS_pic_31__38_InstructionList var_instructionList_2979 ;
      nt_instruction_5F_list_ (var_instructionList_2979, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_, var_labelMap_2908, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
      ioArgument_ioMacroDefinitionList.addAssignOperation (var_macroName_2696, var_constantNameList_2735, var_instructionList_2979  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 128)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 45)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas", 91)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 45)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 48)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 57)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 65)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 68)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas", 91)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 92)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 109)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 110)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 111)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 114)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 119)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 120)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GGS_checkpicList & ioArgument_ioList,
                                                                                           Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  GGS_location var_loc_3315 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 140)) ;
  GGS_lstringlist var_valueList_3342 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_s_3413 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    var_valueList_3342.addAssignOperation (var_s_3413  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 144)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioList.addAssignOperation (var_loc_3315, var_valueList_3342  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 148)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas", 143)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GGS_dataList & ioArgument_ioDataList,
                                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    appendFixItActions (fixItArray0, EnumFixItKind::fixItReplace, GGS_string ("data16")) ;
    inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 156)), GGS_string ("obsolete keyword"), fixItArray0  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 156)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_dataName_3735 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  GGS_immediatExpressionList var_valueList_3780 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_immediatExpression var_expression_3857 ;
    nt_immediate_5F_expression_ (var_expression_3857, inCompiler) ;
    var_valueList_3780.addAssignOperation (var_expression_3857, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 165))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 165)) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 167)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
  ioArgument_ioDataList.addAssignOperation (var_dataName_3735, var_valueList_3780, GGS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 170)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_parse (inCompiler) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 167)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 167)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GGS_dataList & ioArgument_ioDataList,
                                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  GGS_lstring var_dataName_4131 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  GGS_immediatExpressionList var_valueList_4176 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_immediatExpression var_expression_4253 ;
    nt_immediate_5F_expression_ (var_expression_4253, inCompiler) ;
    var_valueList_4176.addAssignOperation (var_expression_4253, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 182))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 182)) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
  ioArgument_ioDataList.addAssignOperation (var_dataName_4131, var_valueList_4176, GGS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 187)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_parse (inCompiler) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 176)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 177)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 178)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 186)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GGS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                                                                        GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                        GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                        GGS_labelMap & ioArgument_ioLabelMap,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_9 (inCompiler)) {
    case 2: {
      GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_4726 ;
      nt_simple_5F_instruction_ (var_instruction_4726, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4726  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 202)) ;
    } break ;
    case 3: {
      GGS_pic_31__38_PiccoloInstruction var_instruction_4825 ;
      nt_structured_5F_instruction_ (var_instruction_4825, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4825  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 209)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_parse (Lexique_piccolo_5F_lexique * inCompiler) {
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

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_instruction_5F_list_i4_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
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

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                                                            GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                            GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                            Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  GGS_lstring var_interruptName_5214 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 221)) ;
  GGS_bool var_isFast_5240 ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
    var_isFast_5240 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 226)) ;
    var_isFast_5240 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  GGS_labelMap var_labelMap_5337 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_InstructionList var_instructionList_5382 ;
  nt_instruction_5F_list_ (var_instructionList_5382, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5337, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
  ioArgument_ioInterruptDefinitionList.addAssignOperation (var_interruptName_5214, var_isFast_5240, var_instructionList_5382, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 237))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 237)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 221)) ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 226)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 220)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 221)) ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas", 226)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 229)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 236)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  GGS_bool var_noreturn_5778 ;
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
    var_noreturn_5778 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 250)) ;
    var_noreturn_5778 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  GGS_lstring var_routineName_5904 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 254)) ;
  GGS_luint var_requiredBank_5956 ;
  GGS_luint var_returnedBank_5982 ;
  GGS_bool var_preservesBank_6007 ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
    var_requiredBank_5956 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 259)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 259)), inCompiler COMMA_HERE) ;
    var_returnedBank_5982 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 260)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 260)), inCompiler COMMA_HERE) ;
    var_preservesBank_6007 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 266)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_noreturn_5778.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 268)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 268)) ;
        }
      }
      var_preservesBank_6007 = GGS_bool (true) ;
      var_requiredBank_5956 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 271)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 271)), inCompiler COMMA_HERE) ;
      var_returnedBank_5982 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 272)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 272)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      var_requiredBank_5956 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 275)) ;
      var_preservesBank_6007 = GGS_bool (false) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
        var_returnedBank_5982 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 278)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 278)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        var_returnedBank_5982 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 281)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_noreturn_5778.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 283)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 283)) ;
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      var_returnedBank_5982 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 288)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_noreturn_5778.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 290)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 290)) ;
        }
      }
      var_preservesBank_6007 = GGS_bool (false) ;
      var_requiredBank_5956 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas", 293)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 293)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  GGS_labelMap var_labelMap_7163 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_InstructionList var_instructionList_7230 ;
  nt_instruction_5F_list_ (var_instructionList_7230, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7163, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_5904, var_requiredBank_5956, var_returnedBank_5982, var_preservesBank_6007, var_noreturn_5778, var_instructionList_7230, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 304))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 304)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 250)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 254)) ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 266)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 275)) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 281)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 288)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 250)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas", 253)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 254)) ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 263)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas", 266)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas", 274)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 275)) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 280)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 281)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas", 287)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 288)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 296)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 303)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 311)) ;
  GGS_pic_31__38_ConditionExpression var_condition_7608 ;
  nt_condition_5F_factor_ (var_condition_7608, inCompiler) ;
  outArgument_outCondition = GGS_pic_31__38_NegateCondition::init_21_ (var_condition_7608, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 311)) ;
  nt_condition_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 311)) ;
  nt_condition_5F_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    GGS_bool var_isIncrement_7988 ;
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 330)) ;
      var_isIncrement_7988 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 332)) ;
      var_isIncrement_7988 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_8123 ;
    nt_register_5F_parsing_ (var_registerExpression_8123, inCompiler) ;
    GGS_bool var_W_5F_isDestination_8156 ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_8156 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      var_W_5F_isDestination_8156 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_8300 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
    GGS_string var_condition_8332 = var_conditionString_8300.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 342)) ;
    GGS_bool var_branchIfZero_8399 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_condition_8332.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_branchIfZero_8399 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_condition_8332.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_branchIfZero_8399 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_8300.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_8300.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 349)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 349)), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 349)) ;
        var_branchIfZero_8399.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_pic_31__38_IncDecRegisterInCondition::init_21__21__21__21_ (var_registerExpression_8123, var_isIncrement_7988, var_W_5F_isDestination_8156, var_branchIfZero_8399, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_registerExpression var_registerExpression_8851 ;
    nt_register_5F_parsing_ (var_registerExpression_8851, inCompiler) ;
    GGS_pic_31__38_RegisterComparison var_comparison_8903 ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_notEqual (SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_equal (SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_lowerOrEqual (SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_greaterOrEqual (SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_lower (SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      var_comparison_8903 = GGS_pic_31__38_RegisterComparison::class_func_greater (SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outCondition = GGS_pic_31__38_RegisterComparisonCondition::init_21__21_ (var_registerExpression_8851, var_comparison_8903, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_registerExpression var_registerExpression_9504 ;
    nt_register_5F_parsing_ (var_registerExpression_9504, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 379)) ;
    GGS_bitNumberExpression var_bitNumberExpression_9561 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_9561, inCompiler) ;
    outArgument_outCondition = GGS_pic_31__38_BitTestInStructuredCondition::init_21__21_ (var_registerExpression_9504, var_bitNumberExpression_9561, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_registerExpression var_registerName_9729 ;
    nt_register_5F_parsing_ (var_registerName_9729, inCompiler) ;
    GGS_lstring var_conditionString_9773 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
    GGS_string var_condition_9805 = var_conditionString_9773.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 388)) ;
    GGS_bool var_branchIfZero_9872 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_condition_9805.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_branchIfZero_9872 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_condition_9805.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          var_branchIfZero_9872 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_conditionString_9773.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_9773.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 395)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 395)), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 395)) ;
        var_branchIfZero_9872.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_pic_31__38_RegisterTestCondition::init_21__21_ (var_registerName_9729, var_branchIfZero_9872, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_conditional_5F_branch var_conditional_5F_branch_10260 ;
    GGS_lstring var_conditionString_10310 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
    GGS_string var_condition_10342 = var_conditionString_10310.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 403)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas", 405)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas", 407)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("NN"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas", 409)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("N"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas", 411)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("C"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas", 413)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("NC"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas", 415)) ;
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("OV"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas", 417)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  GalgasBool test_13 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_13) {
                    test_13 = GGS_bool (ComparisonKind::equal, var_condition_10342.objectCompare (GGS_string ("NOV"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_13) {
                      var_conditional_5F_branch_10260 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas", 419)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_13) {
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (var_conditionString_10310.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_10310.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 421)).add_operation (GGS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 421)), fixItArray14  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 421)) ;
                    var_conditional_5F_branch_10260.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    outArgument_outCondition = GGS_pic_31__38_BccInStructuredCondition::init_21__21_ (var_conditionString_10310.readProperty_location (), var_conditional_5F_branch_10260, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 330)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 332)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 379)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 330)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 332)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 339)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 341)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 372)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 379)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 387)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 402)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 433)) ;
  nt_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 437)) ;
      GGS_pic_31__38_ConditionExpression var_c_11585 ;
      nt_condition_5F_term_ (var_c_11585, inCompiler) ;
      GGS_pic_31__38_ConditionExpression var_rc_11621 = GGS_pic_31__38_NegateCondition::init_21_ (var_c_11585, inCompiler COMMA_HERE) ;
      GGS_pic_31__38_ConditionExpression var_lc_11688 = GGS_pic_31__38_NegateCondition::init_21_ (outArgument_outCondition, inCompiler COMMA_HERE) ;
      outArgument_outCondition = GGS_pic_31__38_NegateCondition::init_21_ (GGS_pic_31__38_AndCondition::init_21__21_ (var_lc_11688, var_rc_11621, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 443)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 433)) ;
  nt_condition_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 437)) ;
      nt_condition_5F_term_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 443)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 433)) ;
  nt_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 437)) ;
      nt_condition_5F_term_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 443)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 453)) ;
      GGS_pic_31__38_ConditionExpression var_c_12059 ;
      nt_condition_5F_factor_ (var_c_12059, inCompiler) ;
      outArgument_outCondition = GGS_pic_31__38_AndCondition::init_21__21_ (outArgument_outCondition, var_c_12059, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 453)) ;
      nt_condition_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 453)) ;
      nt_condition_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
  outArgument_outBlockTermination = GGS_exitBlockTerminationForBlockInstruction::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 464)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 463)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GGS_lstring var_nextBlockName_12552 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
  outArgument_outBlockTermination = GGS_gotoTerminationForBlockInstruction::init_21_ (var_nextBlockName_12552, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 471)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GGS_location var_location_12814 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 479)) ;
  GGS_pic_31__38_ConditionExpression var_condition_12897 ;
  nt_condition_5F_expression_ (var_condition_12897, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 481)) ;
  GGS_abstractBlockTerminationForBlockInstruction var_terminationIfTrue_12987 ;
  nt_block_5F_termination_ (var_terminationIfTrue_12987, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 483)) ;
  GGS_abstractBlockTerminationForBlockInstruction var_terminationIfFalse_13085 ;
  nt_block_5F_termination_ (var_terminationIfFalse_13085, inCompiler) ;
  outArgument_outBlockTermination = GGS_testTerminationForBlockInstruction::init_21__21__21__21_ (var_condition_12897, var_terminationIfTrue_12987, var_terminationIfFalse_13085, var_location_12814, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 481)) ;
  nt_block_5F_termination_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 483)) ;
  nt_block_5F_termination_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 481)) ;
  nt_block_5F_termination_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 483)) ;
  nt_block_5F_termination_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_ (GGS_pic_31__38_PiccoloInstruction & outArgument_outInstruction,
                                                                                               GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                               GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                               GGS_labelMap & ioArgument_ioLabelMap,
                                                                                               Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 497)) ;
    GGS_lstring var_switchLabel_13488 ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
      var_switchLabel_13488 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 500)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_switchLabel_13488 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_switchLabel_13488, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 503)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_13639 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 505)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    GGS_pic_31__38_SwitchInstructionCaseList var_caseList_13724 = GGS_pic_31__38_SwitchInstructionCaseList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 509)) ;
      GGS_lstring var_caseLabel_13782 ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
        var_caseLabel_13782 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 512)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_caseLabel_13782 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 514)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (var_caseLabel_13782.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string temp_2 ;
          const GalgasBool test_3 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = var_switchLabel_13488.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_caseLabel_13782.readProperty_location (), GGS_string ("'case' label does not match 'switch' label, it should be ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 517)), fixItArray4  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 517)) ;
        }
      }
      GGS_location var_caseLocation_14139 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 520)) ;
      GGS_pic_31__38_CaseExpressionList var_caseExpressionList_14179 = GGS_pic_31__38_CaseExpressionList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_pic_31__38__5F_syntax_26 (inCompiler)) {
        case 1: {
          GGS_immediatExpression var_caseExpression_14313 ;
          nt_immediate_5F_expression_ (var_caseExpression_14313, inCompiler) ;
          var_caseExpressionList_14179.addAssignOperation (GGS_pic_31__38_SimpleConstantCaseItem::init_21__21_ (var_caseExpression_14313, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 525)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 525)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 527)) ;
          GGS_immediatExpression var_minExpression_14508 ;
          nt_immediate_5F_expression_ (var_minExpression_14508, inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 529)) ;
          GGS_immediatExpression var_maxExpression_14594 ;
          nt_immediate_5F_expression_ (var_maxExpression_14594, inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
          var_caseExpressionList_14179.addAssignOperation (GGS_pic_31__38_IntervalCaseItem::init_21__21__21_ (var_minExpression_14508, var_maxExpression_14594, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 532)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 532)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 535)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 537)) ;
      GGS_pic_31__38_InstructionList var_instructionList_14843 ;
      nt_instruction_5F_list_ (var_instructionList_14843, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_caseList_13724.addAssignOperation (var_caseLocation_14139, var_caseExpressionList_14179, var_instructionList_14843  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 543)) ;
      if (select_pic_31__38__5F_syntax_23 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    GGS_pic_31__38_InstructionList var_elseInstructionList_15059 ;
    GGS_location var_elseLocation_15097 ;
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLocation_15097 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 549)) ;
      var_elseInstructionList_15059 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 552)) ;
      GGS_lstring var_elseLabel_15249 ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
        var_elseLabel_15249 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 555)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_elseLabel_15249 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 557)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (var_elseLabel_15249.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = var_switchLabel_13488.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_elseLabel_15249.readProperty_location (), GGS_string ("'else' label does not match 'switch' label, it should be ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 560)), fixItArray9  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 560)) ;
        }
      }
      var_elseLocation_15097 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 563)) ;
      nt_instruction_5F_list_ (var_elseInstructionList_15059, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_switch::init_21__21__21__21_ (var_instructionLocation_13639, var_caseList_13724, var_elseLocation_15097, var_elseInstructionList_15059, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 575)) ;
    GGS_lstring var_endSwitchLabel_15933 ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
      var_endSwitchLabel_15933 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 578)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endSwitchLabel_15933 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 580)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (var_endSwitchLabel_15933.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string temp_11 ;
        const GalgasBool test_12 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13488.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          temp_11 = var_switchLabel_13488.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_12) {
          temp_11 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_switchLabel_13488.readProperty_location (), GGS_string ("'end' label does not match 'switch' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 583)), fixItArray13  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 583)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    GGS_location var_instructionLocation_16308 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 588)) ;
    GGS_lstring var_startBlockName_16376 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    GGS_pic_31__38_BlockInstructionBlockList var_blockList_16407 = GGS_pic_31__38_BlockInstructionBlockList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      GGS_lstring var_blockName_16497 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 594)) ;
      GGS_pic_31__38_InstructionList var_instructionList_16577 ;
      nt_instruction_5F_list_ (var_instructionList_16577, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      GGS_location var_endOfBlock_16706 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 601)) ;
      GGS_abstractBlockTerminationForBlockInstruction var_blockTermination_16810 ;
      nt_block_5F_termination_ (var_blockTermination_16810, inCompiler) ;
      var_blockList_16407.addAssignOperation (var_blockName_16497, var_instructionList_16577, var_blockTermination_16810, var_endOfBlock_16706  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 603)) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_block::init_21__21__21__21_ (var_instructionLocation_16308, var_startBlockName_16376, var_blockList_16407, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 610)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 613)) ;
    GGS_lstring var_doLabel_17103 ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
      var_doLabel_17103 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 616)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_17103 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_17103, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 619)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_17238 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 621)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    GGS_lstring var_constantName_17305 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 624)) ;
    GGS_immediatExpression var_lowBoundExpression_17378 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_17378, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 626)) ;
    GGS_immediatExpression var_highBoundExpression_17459 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_17459, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 628)) ;
    GGS_pic_31__38_InstructionList var_instructionList_17543 ;
    nt_instruction_5F_list_ (var_instructionList_17543, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_repetitionStatique::init_21__21__21__21__21__21_ (var_instructionLocation_17238, var_constantName_17305, var_lowBoundExpression_17378, var_highBoundExpression_17459, var_instructionList_17543, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 640)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 642)) ;
    GGS_lstring var_endDoLabel_17874 ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
      var_endDoLabel_17874 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 645)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_17874 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 647)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::notEqual, var_doLabel_17103.readProperty_string ().objectCompare (var_endDoLabel_17874.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_string temp_16 ;
        const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, var_doLabel_17103.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          temp_16 = var_doLabel_17103.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_17) {
          temp_16 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (var_endDoLabel_17874.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 650)), fixItArray18  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 650)) ;
      }
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    GGS_luint var_bankIndex_18228 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_checkbank::init_21__21_ (var_bankIndex_18228.readProperty_location (), var_bankIndex_18228.readProperty_uint (), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_checknobank::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 659)), inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
      GenericArray <FixItDescription> fixItArray19 ;
      appendFixItActions (fixItArray19, EnumFixItKind::fixItReplace, GGS_string ("ldata16ptr")) ;
      inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 663)), GGS_string ("obsolete keyword"), fixItArray19  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 663)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 665)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_18576 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 667)) ;
    GGS_lstring var_dataName_18635 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    GGS_luint var_dataIndex_18678 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::init_21__21__21_ (var_instructionLocation_18576, var_dataName_18635, var_dataIndex_18678, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    GGS_location var_instructionLocation_18830 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 675)) ;
    GGS_lstring var_dataName_18889 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    GGS_luint var_dataIndex_18932 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::init_21__21__21_ (var_instructionLocation_18830, var_dataName_18889, var_dataIndex_18932, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    GGS_location var_instructionLocation_19081 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 683)) ;
    GGS_immediatExpression var_expression_19170 ;
    nt_immediate_5F_expression_ (var_expression_19170, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LTBLPTR::init_21__21_ (var_instructionLocation_19081, var_expression_19170, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    GGS_location var_instructionLocation_19301 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 688)) ;
    GGS_luint var_bank_19364 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 689)) ;
    GGS_bool var_warningOnUselessBanksel_19383 ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19383 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 695)) ;
      var_warningOnUselessBanksel_19383 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_banksel::init_21__21__21_ (var_instructionLocation_19301, var_bank_19364, var_warningOnUselessBanksel_19383, inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    GGS_location var_instructionLocation_19668 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 701)) ;
    GGS_registerExpression var_register_19753 ;
    nt_register_5F_parsing_ (var_register_19753, inCompiler) ;
    GGS_bool var_warningOnUselessBanksel_19776 ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19776 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 708)) ;
      var_warningOnUselessBanksel_19776 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_banksel_5F_register::init_21__21__21_ (var_instructionLocation_19668, var_register_19753, var_warningOnUselessBanksel_19776, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_nobanksel::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 714)), inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    GGS_location var_instructionLocation_20160 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 717)) ;
    GGS_registerExpression var_register_20245 ;
    nt_register_5F_parsing_ (var_register_20245, inCompiler) ;
    GGS_pic_31__38_InstructionList var_instructionList_20310 ;
    nt_instruction_5F_list_ (var_instructionList_20310, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_savebank::init_21__21__21__21_ (var_instructionLocation_20160, var_register_20245, var_instructionList_20310, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 729)), inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    GGS_location var_instructionLocation_20595 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 733)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 734)) ;
    GGS_immediatExpression var_sizeExpression_20672 ;
    nt_immediate_5F_expression_ (var_sizeExpression_20672, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      GGS_immediatExpressionList var_argumentList_20730 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        GGS_immediatExpression var_expression_20820 ;
        nt_immediate_5F_expression_ (var_expression_20820, inCompiler) ;
        var_argumentList_20730.addAssignOperation (var_expression_20820, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 742))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 742)) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 744)) ;
        }else{
          repeatFlag_20 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_retlw::init_21__21__21__21_ (var_instructionLocation_20595, var_sizeExpression_20672, var_argumentList_20730, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_32_ = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      GGS_lstringlist var_argumentList_21128 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_21 = true ;
      while (repeatFlag_21) {
        GGS_lstring var_targetRoutine_21206 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        var_argumentList_21128.addAssignOperation (var_targetRoutine_21206  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 757)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 759)) ;
        }else{
          repeatFlag_21 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_bra::init_21__21__21__21_ (var_instructionLocation_20595, var_sizeExpression_20672, var_argumentList_21128, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_32_ = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      GGS_lstringlist var_argumentList_21525 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_22 = true ;
      while (repeatFlag_22) {
        GGS_lstring var_targetRoutine_21603 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        var_argumentList_21525.addAssignOperation (var_targetRoutine_21603  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 772)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 774)) ;
        }else{
          repeatFlag_22 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_goto::init_21__21__21__21_ (var_instructionLocation_20595, var_sizeExpression_20672, var_argumentList_21525, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_34_ = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      GGS_lstringlist var_argumentList_21924 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_23 = true ;
      while (repeatFlag_23) {
        GGS_lstring var_targetRoutine_22002 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        var_argumentList_21924.addAssignOperation (var_targetRoutine_22002  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 787)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 789)) ;
        }else{
          repeatFlag_23 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_rcall::init_21__21__21__21_ (var_instructionLocation_20595, var_sizeExpression_20672, var_argumentList_21924, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_34_ = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 799)) ;
    GGS_lstring var_foreverLabel_22337 ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
      var_foreverLabel_22337 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 802)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_foreverLabel_22337 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_22337, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 805)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_22492 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 807)) ;
    GGS_pic_31__38_InstructionList var_instructionList_22563 ;
    nt_instruction_5F_list_ (var_instructionList_22563, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 813)) ;
    GGS_lstring var_endForeverLabel_22683 ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
      var_endForeverLabel_22683 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 816)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endForeverLabel_22683 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 818)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      test_24 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_22337.readProperty_string ().objectCompare (var_endForeverLabel_22683.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        GGS_string temp_25 ;
        const GalgasBool test_26 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_22337.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          temp_25 = var_foreverLabel_22337.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_26) {
          temp_25 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (var_endForeverLabel_22683.readProperty_location (), GGS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_25, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 821)), fixItArray27  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 821)) ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FOREVER::init_21__21__21_ (var_instructionLocation_22492, var_instructionList_22563, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 827)), inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    GGS_location var_instructionLocation_23194 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 831)) ;
    GGS_registerExpression var_registerName_23259 ;
    nt_register_5F_parsing_ (var_registerName_23259, inCompiler) ;
    GGS_if_5F_semi_5F_colon_5F_op var_opCode_23298 ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSEQ (SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSGT (SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSLT (SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
    } break ;
    case 4: {
      GGS_lstring var_conditionString_23532 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
      GGS_string var_condition_23566 = var_conditionString_23532.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 842)) ;
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::notEqual, var_condition_23566.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GenericArray <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (var_conditionString_23532.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_23566, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 844)).add_operation (GGS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 844)), fixItArray29  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 844)) ;
        }
      }
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_TSTFSZ (SOURCE_FILE ("pic18_syntax.galgas", 846)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 848)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_23868 ;
    nt_simple_5F_instruction_ (var_instruction_23868, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::init_21__21__21__21_ (var_instructionLocation_23194, var_instruction_23868, var_opCode_23298, var_registerName_23259, inCompiler COMMA_HERE) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    GGS_location var_instructionLocation_24051 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 857)) ;
    GGS_registerExpression var_registerName_24116 ;
    GGS_bitNumberExpression var_bitNumber_24158 ;
    GGS_bool var_skipIfSet_24182 ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 862)) ;
      nt_register_5F_parsing_ (var_registerName_24116, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 864)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24158, inCompiler) ;
      var_skipIfSet_24182 = GGS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerName_24116, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 869)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24158, inCompiler) ;
      var_skipIfSet_24182 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 873)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_24518 ;
    nt_simple_5F_instruction_ (var_instruction_24518, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::init_21__21__21__21__21_ (var_instructionLocation_24051, var_instruction_24518, var_skipIfSet_24182, var_registerName_24116, var_bitNumber_24158, inCompiler COMMA_HERE) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    GGS_location var_instructionLocation_24720 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 884)) ;
    GGS_bool var_increment_24771 ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 887)) ;
      var_increment_24771 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 889)) ;
      var_increment_24771 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerName_24900 ;
    nt_register_5F_parsing_ (var_registerName_24900, inCompiler) ;
    GGS_bool var_w_5F_isTarget_24927 ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_24927 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      var_w_5F_isTarget_24927 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_bool var_skipIfZero_25039 ;
    GGS_lstring var_conditionString_25081 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    GGS_string var_condition_25113 = var_conditionString_25081.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 900)) ;
    GalgasBool test_30 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_30) {
      test_30 = GGS_bool (ComparisonKind::equal, var_condition_25113.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_30) {
        var_skipIfZero_25039 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_30) {
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = GGS_bool (ComparisonKind::equal, var_condition_25113.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          var_skipIfZero_25039 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_31) {
        GenericArray <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (var_conditionString_25081.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_25113, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 906)).add_operation (GGS_string ("' condition; it should be 'z' or 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 906)), fixItArray32  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 906)) ;
        var_skipIfZero_25039.drop () ; // Release error dropped variable
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 908)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_25470 ;
    nt_simple_5F_instruction_ (var_instruction_25470, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::init_21__21__21__21__21__21_ (var_instructionLocation_24720, var_instruction_25470, var_increment_24771, var_skipIfZero_25039, var_registerName_24900, var_w_5F_isTarget_24927, inCompiler COMMA_HERE) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 918)) ;
    GGS_lstring var_ifLabel_25684 ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
      var_ifLabel_25684 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 921)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_ifLabel_25684 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_25684, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 924)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_ (var_ifLabel_25684, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 932)) ;
    GGS_lstring var_endIfLabel_25984 ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
      var_endIfLabel_25984 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 935)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endIfLabel_25984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 937)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      test_33 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_25684.readProperty_string ().objectCompare (var_endIfLabel_25984.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        GGS_string temp_34 ;
        const GalgasBool test_35 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_25684.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          temp_34 = var_ifLabel_25684.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_35) {
          temp_34 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (var_endIfLabel_25984.readProperty_location (), GGS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_34, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 940)), fixItArray36  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 940)) ;
      }
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 944)) ;
    GGS_lstring var_doLabel_26322 ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
      var_doLabel_26322 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 947)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_26322 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_26322, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 950)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_26467 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 952)) ;
    GGS_pic_31__38_InstructionList var_repeatedInstructionList_26538 ;
    nt_instruction_5F_list_ (var_repeatedInstructionList_26538, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GGS_location var_endOfRepeatedInstructionList_26647 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 958)) ;
    GGS_pic_31__38_DoWhilePartList var_whilePartList_26701 = GGS_pic_31__38_DoWhilePartList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_37 = true ;
    while (repeatFlag_37) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 961)) ;
      GGS_lstring var_whileLabel_26785 ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
        var_whileLabel_26785 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 964)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_whileLabel_26785 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 966)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_38 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_38) {
        test_38 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26322.readProperty_string ().objectCompare (var_whileLabel_26785.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_38) {
          GGS_string temp_39 ;
          const GalgasBool test_40 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26322.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_40) {
            temp_39 = var_doLabel_26322.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_40) {
            temp_39 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (var_whileLabel_26785.readProperty_location (), GGS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_39, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 969)), fixItArray41  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 969)) ;
        }
      }
      GGS_pic_31__38_ConditionExpression var_whileCondition_27146 ;
      nt_condition_5F_expression_ (var_whileCondition_27146, inCompiler) ;
      GGS_pic_31__38_InstructionList var_instructionList_27199 ;
      nt_instruction_5F_list_ (var_instructionList_27199, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_26701.addAssignOperation (var_whileCondition_27146, var_instructionList_27199, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 978))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 978)) ;
      if (select_pic_31__38__5F_syntax_50 (inCompiler) == 2) {
      }else{
        repeatFlag_37 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 981)) ;
    GGS_lstring var_endDoLabel_27415 ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
      var_endDoLabel_27415 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 984)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_27415 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 986)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_42 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_42) {
      test_42 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26322.readProperty_string ().objectCompare (var_endDoLabel_27415.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_42) {
        GGS_string temp_43 ;
        const GalgasBool test_44 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26322.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_44) {
          temp_43 = var_doLabel_26322.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_44) {
          temp_43 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray45 ;
        inCompiler->emitSemanticError (var_endDoLabel_27415.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_43, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 989)), fixItArray45  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 989)) ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_do_5F_while::init_21__21__21__21_ (var_instructionLocation_26467, var_repeatedInstructionList_26538, var_endOfRepeatedInstructionList_26647, var_whilePartList_26701, inCompiler COMMA_HERE) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    GGS_location var_instructionLocation_27927 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1000)) ;
    GGS_luint var_occurrenceFactor_27990 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_MNOP::init_21__21_ (var_instructionLocation_27927, var_occurrenceFactor_27990, inCompiler COMMA_HERE) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    GGS_location var_instructionLocation_28119 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1005)) ;
    GGS_luint var_occurrenceFactor_28182 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_NOPBRA::init_21__21_ (var_instructionLocation_28119, var_occurrenceFactor_28182, inCompiler COMMA_HERE) ;
  } break ;
  case 22: {
    GGS_conditional_5F_branch var_condition_28319 ;
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
      var_condition_28319 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_28819 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1027)) ;
    GGS_lstring var_targetLabelName_28887 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMPCC::init_21__21__21__21_ (var_instructionLocation_28819, var_targetLabelName_28887, var_condition_28319, GGS_bool (true), inCompiler COMMA_HERE) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    GGS_location var_instructionLocation_29086 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1036)) ;
    GGS_conditional_5F_branch var_conditional_5F_branch_29151 ;
    GGS_lstring var_conditionString_29201 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    GGS_string var_condition_29233 = var_conditionString_29201.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("pic18_syntax.galgas", 1039)) ;
    GalgasBool test_46 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_46) {
      test_46 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_46) {
        var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas", 1041)) ;
      }
    }
    if (GalgasBool::boolFalse == test_46) {
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        test_47 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas", 1043)) ;
        }
      }
      if (GalgasBool::boolFalse == test_47) {
        GalgasBool test_48 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_48) {
          test_48 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("NN"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_48) {
            var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas", 1045)) ;
          }
        }
        if (GalgasBool::boolFalse == test_48) {
          GalgasBool test_49 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_49) {
            test_49 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("N"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_49) {
              var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas", 1047)) ;
            }
          }
          if (GalgasBool::boolFalse == test_49) {
            GalgasBool test_50 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_50) {
              test_50 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("C"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_50) {
                var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas", 1049)) ;
              }
            }
            if (GalgasBool::boolFalse == test_50) {
              GalgasBool test_51 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_51) {
                test_51 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("NC"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_51) {
                  var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas", 1051)) ;
                }
              }
              if (GalgasBool::boolFalse == test_51) {
                GalgasBool test_52 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_52) {
                  test_52 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("OV"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_52) {
                    var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas", 1053)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_52) {
                  GalgasBool test_53 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_53) {
                    test_53 = GGS_bool (ComparisonKind::equal, var_condition_29233.objectCompare (GGS_string ("NOV"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_53) {
                      var_conditional_5F_branch_29151 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas", 1055)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_53) {
                    GenericArray <FixItDescription> fixItArray54 ;
                    inCompiler->emitSemanticError (var_conditionString_29201.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_29201.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1057)).add_operation (GGS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1057)), fixItArray54  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1057)) ;
                    var_conditional_5F_branch_29151.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    GGS_lstring var_targetLabelName_30180 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMPCC::init_21__21__21__21_ (var_instructionLocation_29086, var_targetLabelName_30180, var_conditional_5F_branch_29151, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    GGS_location var_instructionLocation_30389 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1069)) ;
    GGS_lstring var_targetLabelName_30457 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30389, var_targetLabelName_30457, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas", 1074)), inCompiler COMMA_HERE) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    GGS_location var_instructionLocation_30667 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1077)) ;
    GGS_lstring var_targetLabelName_30735 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30667, var_targetLabelName_30735, GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("pic18_syntax.galgas", 1082)), inCompiler COMMA_HERE) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    GGS_location var_instructionLocation_30930 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1085)) ;
    GGS_lstring var_targetLabelName_30998 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30930, var_targetLabelName_30998, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("pic18_syntax.galgas", 1090)), inCompiler COMMA_HERE) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    GGS_lstring var_macroName_31213 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    GGS_immediatExpressionList var_immediatExpressionList_31263 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_55 = true ;
    while (repeatFlag_55) {
      GGS_immediatExpression var_constantExpression_31357 ;
      nt_immediate_5F_expression_ (var_constantExpression_31357, inCompiler) ;
      var_immediatExpressionList_31263.addAssignOperation (var_constantExpression_31357, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1099))  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1099)) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1101)) ;
      }else{
        repeatFlag_55 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_macro::init_21__21__21_ (var_macroName_31213.readProperty_location (), var_macroName_31213, var_immediatExpressionList_31263, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 497)) ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 509)) ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 514)) ;
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
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 527)) ;
          nt_immediate_5F_expression_parse (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 529)) ;
          nt_immediate_5F_expression_parse (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 535)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 537)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 552)) ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 557)) ;
      } break ;
      default:
        break ;
      }
      nt_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 575)) ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 580)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 594)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      nt_block_5F_termination_parse (inCompiler) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 613)) ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 624)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 626)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 628)) ;
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 642)) ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 647)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 665)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 689)) ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 695)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 708)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 734)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_immediate_5F_expression_parse (inCompiler) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 744)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 759)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 774)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 789)) ;
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
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 799)) ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 813)) ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 818)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 848)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 862)) ;
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 864)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 869)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 873)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 887)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 889)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 908)) ;
    nt_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 918)) ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 932)) ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 937)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 944)) ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_parse (inCompiler) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 961)) ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 966)) ;
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
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 981)) ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 986)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
  } break ;
  case 22: {
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    bool repeatFlag_8 = true ;
    while (repeatFlag_8) {
      nt_immediate_5F_expression_parse (inCompiler) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1101)) ;
      }else{
        repeatFlag_8 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas", 497)) ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 502)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 506)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas", 509)) ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 514)) ;
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
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 527)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 529)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 531)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 535)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 537)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 552)) ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 557)) ;
      } break ;
      default:
        break ;
      }
      nt_instruction_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 575)) ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 580)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas", 587)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 589)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 590)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 593)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 594)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 600)) ;
      nt_block_5F_termination_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 613)) ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 618)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 622)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 623)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 624)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 626)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 628)) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 642)) ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 647)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 654)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 655)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 658)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 665)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 668)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 669)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 670)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 671)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 674)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 676)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 677)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 678)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 679)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 682)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 687)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 689)) ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 694)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 695)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas", 700)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 707)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 708)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas", 713)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas", 716)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 724)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas", 732)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 734)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 738)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_immediate_5F_expression_indexing (inCompiler) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 744)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 753)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 756)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 759)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 768)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 771)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 774)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 783)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 786)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 789)) ;
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
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas", 799)) ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 804)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 813)) ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 818)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 830)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 839)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 841)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 848)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 856)) ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 862)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 864)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 869)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 873)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 883)) ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 887)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 889)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas", 896)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 899)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 908)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas", 918)) ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 923)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 932)) ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 937)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas", 944)) ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 949)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas", 961)) ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 966)) ;
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
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas", 981)) ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 986)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 999)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1001)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1004)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1006)) ;
  } break ;
  case 22: {
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1025)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1028)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1035)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1038)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1061)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1068)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1070)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1076)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1078)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1084)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1086)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1093)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1094)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1095)) ;
    bool repeatFlag_8 = true ;
    while (repeatFlag_8) {
      nt_immediate_5F_expression_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1101)) ;
      }else{
        repeatFlag_8 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1103)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_ (const GGS_lstring constinArgument_ifLabel,
                                                                                                     GGS_pic_31__38_PiccoloInstruction & outArgument_outInstruction,
                                                                                                     GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                     GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                     GGS_labelMap & ioArgument_ioLabelMap,
                                                                                                     Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_31867 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1121)) ;
  GGS_pic_31__38_ConditionExpression var_structured_5F_if_5F_condition_31934 ;
  nt_condition_5F_expression_ (var_structured_5F_if_5F_condition_31934, inCompiler) ;
  GGS_pic_31__38_InstructionList var_thenInstructionList_31988 ;
  nt_instruction_5F_list_ (var_thenInstructionList_31988, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GGS_pic_31__38_InstructionList var_elseInstructionList_32107 ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
    var_elseInstructionList_32107 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1132)) ;
    GGS_lstring var_elsifIfLabel_32221 ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_32221 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1135)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifIfLabel_32221 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1137)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_32221.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_32221.readProperty_location (), GGS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1140)), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1140)) ;
      }
    }
    GGS_pic_31__38_PiccoloInstruction var_elsifPartInstruction_32598 ;
    nt_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_32598, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_32107 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
    var_elseInstructionList_32107.addAssignOperation (var_elsifPartInstruction_32598  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1150)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1152)) ;
    GGS_lstring var_elsifLabel_32829 ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
      var_elsifLabel_32829 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1155)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifLabel_32829 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1157)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifLabel_32829.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elsifLabel_32829.readProperty_location (), GGS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1160)), fixItArray7  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1160)) ;
      }
    }
    nt_instruction_5F_list_ (var_elseInstructionList_32107, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElsePartLocation_33286 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1169)) ;
  outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_structured_5F_if::init_21__21__21__21__21_ (var_instructionLocation_31867, var_structured_5F_if_5F_condition_31934, var_thenInstructionList_31988, var_elseInstructionList_32107, var_endOfElsePartLocation_33286, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_parse (inCompiler) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1132)) ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1137)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1152)) ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1157)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1132)) ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1137)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1152)) ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1157)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument_outInstruction,
                                                                                           Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST var_baseCode_33697 ;
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("pic18_syntax.galgas", 1185)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("pic18_syntax.galgas", 1188)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ANDWF (SOURCE_FILE ("pic18_syntax.galgas", 1191)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_COMF (SOURCE_FILE ("pic18_syntax.galgas", 1194)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_DECF (SOURCE_FILE ("pic18_syntax.galgas", 1197)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_INCF (SOURCE_FILE ("pic18_syntax.galgas", 1200)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_IORWF (SOURCE_FILE ("pic18_syntax.galgas", 1203)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1206)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLCF (SOURCE_FILE ("pic18_syntax.galgas", 1209)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLNCF (SOURCE_FILE ("pic18_syntax.galgas", 1212)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRCF (SOURCE_FILE ("pic18_syntax.galgas", 1215)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRNCF (SOURCE_FILE ("pic18_syntax.galgas", 1218)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBFWB (SOURCE_FILE ("pic18_syntax.galgas", 1221)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWF (SOURCE_FILE ("pic18_syntax.galgas", 1224)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWFB (SOURCE_FILE ("pic18_syntax.galgas", 1227)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SWAPF (SOURCE_FILE ("pic18_syntax.galgas", 1230)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_XORWF (SOURCE_FILE ("pic18_syntax.galgas", 1233)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_34495 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1235)) ;
    GGS_registerExpression var_registerName_34551 ;
    nt_register_5F_parsing_ (var_registerName_34551, inCompiler) ;
    GGS_bool var_W_5F_isDestination_34594 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_34594, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FDA::init_21__21__21__21_ (var_instructionLocation_34495, var_baseCode_33697, var_registerName_34551, var_W_5F_isDestination_34594, inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_baseCode_33697.objectCompare (GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1245)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_34594.operator_not (SOURCE_FILE ("pic18_syntax.galgas", 1245)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_34495, GGS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1246)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    GGS_location var_instructionLocation_35089 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1251)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1253)) ;
    GGS_registerExpression var_registerName_35161 ;
    nt_register_5F_parsing_ (var_registerName_35161, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FDA::init_21__21__21__21_ (var_instructionLocation_35089, GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas", 1257)), var_registerName_35161, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_FA_5F_instruction_5F_base_5F_code var_FAinstruction_35360 ;
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("pic18_syntax.galgas", 1265)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("pic18_syntax.galgas", 1268)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_MULWF (SOURCE_FILE ("pic18_syntax.galgas", 1271)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_NEGF (SOURCE_FILE ("pic18_syntax.galgas", 1274)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
      var_FAinstruction_35360 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("pic18_syntax.galgas", 1277)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_35778 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1279)) ;
    GGS_registerExpression var_registerName_35843 ;
    nt_register_5F_parsing_ (var_registerName_35843, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FA::init_21__21__21_ (var_instructionLocation_35778, var_FAinstruction_35360, var_registerName_35843, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    GGS_location var_instructionLocation_36004 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1287)) ;
    GGS_registerExpression var_sourceRegisterName_36069 ;
    nt_register_5F_parsing_ (var_sourceRegisterName_36069, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1289)) ;
    GGS_registerExpression var_destinationRegisterName_36124 ;
    nt_register_5F_parsing_ (var_destinationRegisterName_36124, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_MOVFF::init_21__21__21_ (var_instructionLocation_36004, var_sourceRegisterName_36069, var_destinationRegisterName_36124, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_bit_5F_oriented_5F_op var_bitOrientedOp_36310 ;
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
      var_bitOrientedOp_36310 = GGS_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
      var_bitOrientedOp_36310 = GGS_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
      var_bitOrientedOp_36310 = GGS_bit_5F_oriented_5F_op::class_func_BTG (SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_36531 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1304)) ;
    GGS_registerExpression var_registerName_36616 ;
    nt_register_5F_parsing_ (var_registerName_36616, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1306)) ;
    GGS_bitNumberExpression var_bitNumber_36688 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumber_36688, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FBA::init_21__21__21__21_ (var_instructionLocation_36531, var_bitOrientedOp_36310, var_registerName_36616, var_bitNumber_36688, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    GGS_location var_instructionLocation_36867 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1316)) ;
    GGS_lstring var_targetLabelName_36935 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_36867, var_targetLabelName_36935, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas", 1321)), inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    GGS_location var_instructionLocation_37144 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1324)) ;
    GGS_lstring var_targetLabelName_37212 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_37144, var_targetLabelName_37212, GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("pic18_syntax.galgas", 1329)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    GGS_location var_instructionLocation_37418 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1332)) ;
    GGS_lstring var_targetLabelName_37486 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_37418, var_targetLabelName_37486, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("pic18_syntax.galgas", 1337)), inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1340)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_CLRWDT (SOURCE_FILE ("pic18_syntax.galgas", 1340)), inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1343)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_DAW (SOURCE_FILE ("pic18_syntax.galgas", 1343)), inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1346)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (SOURCE_FILE ("pic18_syntax.galgas", 1346)), inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1349)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_POP (SOURCE_FILE ("pic18_syntax.galgas", 1349)), inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1352)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_PUSH (SOURCE_FILE ("pic18_syntax.galgas", 1352)), inCompiler COMMA_HERE) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1355)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_RESET (SOURCE_FILE ("pic18_syntax.galgas", 1355)), inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1358)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_SLEEP (SOURCE_FILE ("pic18_syntax.galgas", 1358)), inCompiler COMMA_HERE) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    GGS_location var_instructionLocation_38603 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1361)) ;
    GGS_immediatExpression var_expression_38692 ;
    nt_immediate_5F_expression_ (var_expression_38692, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_fnop::init_21__21_ (var_instructionLocation_38603, var_expression_38692, inCompiler COMMA_HERE) ;
  } break ;
  case 17: {
    GGS_literal_5F_instruction_5F_opcode var_literalInstruction_38836 ;
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_ANDLW (SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_IORLW (SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_MULLW (SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_SUBLW (SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
      var_literalInstruction_38836 = GGS_literal_5F_instruction_5F_opcode::class_func_XORLW (SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_39438 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1383)) ;
    GGS_immediatExpression var_expression_39527 ;
    nt_immediate_5F_expression_ (var_expression_39527, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_literalOperation::init_21__21__21_ (var_instructionLocation_39438, var_literalInstruction_38836, var_expression_39527, inCompiler COMMA_HERE) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    GGS_location var_instructionLocation_39702 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1391)) ;
    GGS_luint var_FSRindex_39765 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1393)) ;
    GGS_immediatExpression var_expression_39814 ;
    nt_immediate_5F_expression_ (var_expression_39814, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LFSR::init_21__21__21_ (var_instructionLocation_39702, var_FSRindex_39765, var_expression_39814, inCompiler COMMA_HERE) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    GGS_location var_instructionLocation_39950 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1398)) ;
    GGS_tableAccessOption var_accessOption_40014 ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
      var_accessOption_40014 = GGS_tableAccessOption::class_func_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas", 1402)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
      var_accessOption_40014 = GGS_tableAccessOption::class_func_postIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1405)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
      var_accessOption_40014 = GGS_tableAccessOption::class_func_postDecrement (SOURCE_FILE ("pic18_syntax.galgas", 1408)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
      var_accessOption_40014 = GGS_tableAccessOption::class_func_preIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1411)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_TBLRD::init_21__21_ (var_instructionLocation_39950, var_accessOption_40014, inCompiler COMMA_HERE) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    GGS_location var_instructionLocation_40446 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1416)) ;
    GGS_tableAccessOption var_accessOption_40510 ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
      var_accessOption_40510 = GGS_tableAccessOption::class_func_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas", 1420)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
      var_accessOption_40510 = GGS_tableAccessOption::class_func_postIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1423)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
      var_accessOption_40510 = GGS_tableAccessOption::class_func_postDecrement (SOURCE_FILE ("pic18_syntax.galgas", 1426)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
      var_accessOption_40510 = GGS_tableAccessOption::class_func_preIncrement (SOURCE_FILE ("pic18_syntax.galgas", 1429)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_TBLWT::init_21__21_ (var_instructionLocation_40446, var_accessOption_40510, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1253)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 3: {
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1289)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 5: {
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1306)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 17: {
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1393)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1184)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1187)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1190)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1193)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1196)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1199)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1202)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1205)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1208)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1211)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1214)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1217)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1220)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1223)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1226)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1229)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1232)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1250)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1252)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1253)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1264)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1267)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1270)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1273)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1276)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1286)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1289)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1302)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1306)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1315)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1317)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1323)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1325)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1331)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1333)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1339)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1342)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1345)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1348)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1351)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1354)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1357)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1360)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 17: {
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1381)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1390)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1392)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1393)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1397)) ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1401)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1404)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1407)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1410)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1415)) ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1419)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1422)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1425)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas", 1428)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

